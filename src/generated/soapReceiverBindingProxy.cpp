/* soapReceiverBindingProxy.cpp
   Generated by gSOAP 2.8.88 for generated.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapReceiverBindingProxy.h"

ReceiverBindingProxy::ReceiverBindingProxy()
{	this->soap = soap_new();
	this->soap_own = true;
	ReceiverBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

ReceiverBindingProxy::ReceiverBindingProxy(const ReceiverBindingProxy& rhs)
{	this->soap = rhs.soap;
	this->soap_own = false;
	this->soap_endpoint = rhs.soap_endpoint;
}

ReceiverBindingProxy::ReceiverBindingProxy(struct soap *_soap)
{	this->soap = _soap;
	this->soap_own = false;
	ReceiverBindingProxy_init(_soap->imode, _soap->omode);
}

ReceiverBindingProxy::ReceiverBindingProxy(struct soap *_soap, const char *soap_endpoint_url)
{	this->soap = _soap;
	this->soap_own = false;
	ReceiverBindingProxy_init(_soap->imode, _soap->omode);
	soap_endpoint = soap_endpoint_url;
}

ReceiverBindingProxy::ReceiverBindingProxy(const char *soap_endpoint_url)
{	this->soap = soap_new();
	this->soap_own = true;
	ReceiverBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = soap_endpoint_url;
}

ReceiverBindingProxy::ReceiverBindingProxy(soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	ReceiverBindingProxy_init(iomode, iomode);
}

ReceiverBindingProxy::ReceiverBindingProxy(const char *soap_endpoint_url, soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	ReceiverBindingProxy_init(iomode, iomode);
	soap_endpoint = soap_endpoint_url;
}

ReceiverBindingProxy::ReceiverBindingProxy(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->soap_own = true;
	ReceiverBindingProxy_init(imode, omode);
}

ReceiverBindingProxy::~ReceiverBindingProxy()
{	if (this->soap_own)
	{	this->destroy();
		soap_free(this->soap);
	}
}

void ReceiverBindingProxy::ReceiverBindingProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] = {
        { "SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL },
        { "SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL },
        { "xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL },
        { "xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL },
        { "c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL },
        { "ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL },
        { "saml1", "urn:oasis:names:tc:SAML:1.0:assertion", NULL, NULL },
        { "saml2", "urn:oasis:names:tc:SAML:2.0:assertion", NULL, NULL },
        { "wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL },
        { "xenc", "http://www.w3.org/2001/04/xmlenc#", NULL, NULL },
        { "wsc", "http://docs.oasis-open.org/ws-sx/ws-secureconversation/200512", "http://schemas.xmlsoap.org/ws/2005/02/sc", NULL },
        { "wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL },
        { "chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL },
        { "wsdd", "http://schemas.xmlsoap.org/ws/2005/04/discovery", NULL, NULL },
        { "wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL },
        { "wsrfr", "http://docs.oasis-open.org/wsrf/r-2", NULL, NULL },
        { "ns1", "http://www.onvif.org/ver20/analytics/humanface", NULL, NULL },
        { "ns2", "http://www.onvif.org/ver20/analytics/humanbody", NULL, NULL },
        { "xmime", "http://tempuri.org/xmime.xsd", NULL, NULL },
        { "xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL },
        { "tt", "http://www.onvif.org/ver10/schema", NULL, NULL },
        { "wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL },
        { "wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL },
        { "tad", "http://www.onvif.org/ver10/analyticsdevice/wsdl", NULL, NULL },
        { "tan", "http://www.onvif.org/ver20/analytics/wsdl", NULL, NULL },
        { "tds", "http://www.onvif.org/ver10/device/wsdl", NULL, NULL },
        { "tev", "http://www.onvif.org/ver10/events/wsdl", NULL, NULL },
        { "wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL },
        { "timg", "http://www.onvif.org/ver20/imaging/wsdl", NULL, NULL },
        { "tls", "http://www.onvif.org/ver10/display/wsdl", NULL, NULL },
        { "tptz", "http://www.onvif.org/ver20/ptz/wsdl", NULL, NULL },
        { "trc", "http://www.onvif.org/ver10/recording/wsdl", NULL, NULL },
        { "trp", "http://www.onvif.org/ver10/replay/wsdl", NULL, NULL },
        { "trt", "http://www.onvif.org/ver10/media/wsdl", NULL, NULL },
        { "trv", "http://www.onvif.org/ver10/receiver/wsdl", NULL, NULL },
        { "tse", "http://www.onvif.org/ver10/search/wsdl", NULL, NULL },
        { NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this->soap, namespaces);
}

ReceiverBindingProxy *ReceiverBindingProxy::copy()
{	ReceiverBindingProxy *dup = SOAP_NEW_UNMANAGED(ReceiverBindingProxy);
	if (dup)
	{	soap_done(dup->soap);
		soap_copy_context(dup->soap, this->soap);
	}
	return dup;
}

ReceiverBindingProxy& ReceiverBindingProxy::operator=(const ReceiverBindingProxy& rhs)
{	if (this->soap != rhs.soap)
	{	if (this->soap_own)
			soap_free(this->soap);
		this->soap = rhs.soap;
		this->soap_own = false;
		this->soap_endpoint = rhs.soap_endpoint;
	}
	return *this;
}

void ReceiverBindingProxy::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void ReceiverBindingProxy::reset()
{	this->destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	ReceiverBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void ReceiverBindingProxy::soap_noheader()
{	this->soap->header = NULL;
}

void ReceiverBindingProxy::soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsdd__AppSequenceType *wsdd__AppSequence)
{
	::soap_header(this->soap);
	this->soap->header->wsse__Security = wsse__Security;
	this->soap->header->wsa5__MessageID = wsa5__MessageID;
	this->soap->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->soap->header->wsa5__From = wsa5__From;
	this->soap->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->soap->header->wsa5__FaultTo = wsa5__FaultTo;
	this->soap->header->wsa5__To = wsa5__To;
	this->soap->header->wsa5__Action = wsa5__Action;
	this->soap->header->chan__ChannelInstance = chan__ChannelInstance;
	this->soap->header->wsdd__AppSequence = wsdd__AppSequence;
}

::SOAP_ENV__Header *ReceiverBindingProxy::soap_header()
{	return this->soap->header;
}

::SOAP_ENV__Fault *ReceiverBindingProxy::soap_fault()
{	return this->soap->fault;
}

const char *ReceiverBindingProxy::soap_fault_subcode()
{	return ::soap_fault_subcode(this->soap);
}

const char *ReceiverBindingProxy::soap_fault_string()
{	return ::soap_fault_string(this->soap);
}

const char *ReceiverBindingProxy::soap_fault_detail()
{	return ::soap_fault_detail(this->soap);
}

int ReceiverBindingProxy::soap_close_socket()
{	return ::soap_closesock(this->soap);
}

int ReceiverBindingProxy::soap_force_close_socket()
{	return ::soap_force_closesock(this->soap);
}

void ReceiverBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void ReceiverBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *ReceiverBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

int ReceiverBindingProxy::send_GetServiceCapabilities(const char *soap_endpoint_url, const char *soap_action, _trv__GetServiceCapabilities *trv__GetServiceCapabilities)
{
	struct __trv__GetServiceCapabilities soap_tmp___trv__GetServiceCapabilities;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/receiver/wsdl/GetServiceCapabilities";
	soap_tmp___trv__GetServiceCapabilities.trv__GetServiceCapabilities = trv__GetServiceCapabilities;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___trv__GetServiceCapabilities(soap, &soap_tmp___trv__GetServiceCapabilities);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___trv__GetServiceCapabilities(soap, &soap_tmp___trv__GetServiceCapabilities, "-trv:GetServiceCapabilities", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___trv__GetServiceCapabilities(soap, &soap_tmp___trv__GetServiceCapabilities, "-trv:GetServiceCapabilities", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int ReceiverBindingProxy::recv_GetServiceCapabilities(_trv__GetServiceCapabilitiesResponse &trv__GetServiceCapabilitiesResponse)
{
	trv__GetServiceCapabilitiesResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	trv__GetServiceCapabilitiesResponse.soap_get(soap, "trv:GetServiceCapabilitiesResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ReceiverBindingProxy::send_GetReceivers(const char *soap_endpoint_url, const char *soap_action, _trv__GetReceivers *trv__GetReceivers)
{
	struct __trv__GetReceivers soap_tmp___trv__GetReceivers;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/receiver/wsdl/GetReceivers";
	soap_tmp___trv__GetReceivers.trv__GetReceivers = trv__GetReceivers;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___trv__GetReceivers(soap, &soap_tmp___trv__GetReceivers);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___trv__GetReceivers(soap, &soap_tmp___trv__GetReceivers, "-trv:GetReceivers", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___trv__GetReceivers(soap, &soap_tmp___trv__GetReceivers, "-trv:GetReceivers", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int ReceiverBindingProxy::recv_GetReceivers(_trv__GetReceiversResponse &trv__GetReceiversResponse)
{
	trv__GetReceiversResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	trv__GetReceiversResponse.soap_get(soap, "trv:GetReceiversResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ReceiverBindingProxy::send_GetReceiver(const char *soap_endpoint_url, const char *soap_action, _trv__GetReceiver *trv__GetReceiver)
{
	struct __trv__GetReceiver soap_tmp___trv__GetReceiver;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/receiver/wsdl/GetReceiver";
	soap_tmp___trv__GetReceiver.trv__GetReceiver = trv__GetReceiver;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___trv__GetReceiver(soap, &soap_tmp___trv__GetReceiver);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___trv__GetReceiver(soap, &soap_tmp___trv__GetReceiver, "-trv:GetReceiver", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___trv__GetReceiver(soap, &soap_tmp___trv__GetReceiver, "-trv:GetReceiver", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int ReceiverBindingProxy::recv_GetReceiver(_trv__GetReceiverResponse &trv__GetReceiverResponse)
{
	trv__GetReceiverResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	trv__GetReceiverResponse.soap_get(soap, "trv:GetReceiverResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ReceiverBindingProxy::send_CreateReceiver(const char *soap_endpoint_url, const char *soap_action, _trv__CreateReceiver *trv__CreateReceiver)
{
	struct __trv__CreateReceiver soap_tmp___trv__CreateReceiver;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/receiver/wsdl/CreateReceiver";
	soap_tmp___trv__CreateReceiver.trv__CreateReceiver = trv__CreateReceiver;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___trv__CreateReceiver(soap, &soap_tmp___trv__CreateReceiver);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___trv__CreateReceiver(soap, &soap_tmp___trv__CreateReceiver, "-trv:CreateReceiver", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___trv__CreateReceiver(soap, &soap_tmp___trv__CreateReceiver, "-trv:CreateReceiver", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int ReceiverBindingProxy::recv_CreateReceiver(_trv__CreateReceiverResponse &trv__CreateReceiverResponse)
{
	trv__CreateReceiverResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	trv__CreateReceiverResponse.soap_get(soap, "trv:CreateReceiverResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ReceiverBindingProxy::send_DeleteReceiver(const char *soap_endpoint_url, const char *soap_action, _trv__DeleteReceiver *trv__DeleteReceiver)
{
	struct __trv__DeleteReceiver soap_tmp___trv__DeleteReceiver;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/receiver/wsdl/DeleteReceiver";
	soap_tmp___trv__DeleteReceiver.trv__DeleteReceiver = trv__DeleteReceiver;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___trv__DeleteReceiver(soap, &soap_tmp___trv__DeleteReceiver);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___trv__DeleteReceiver(soap, &soap_tmp___trv__DeleteReceiver, "-trv:DeleteReceiver", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___trv__DeleteReceiver(soap, &soap_tmp___trv__DeleteReceiver, "-trv:DeleteReceiver", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int ReceiverBindingProxy::recv_DeleteReceiver(_trv__DeleteReceiverResponse &trv__DeleteReceiverResponse)
{
	trv__DeleteReceiverResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	trv__DeleteReceiverResponse.soap_get(soap, "trv:DeleteReceiverResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ReceiverBindingProxy::send_ConfigureReceiver(const char *soap_endpoint_url, const char *soap_action, _trv__ConfigureReceiver *trv__ConfigureReceiver)
{
	struct __trv__ConfigureReceiver soap_tmp___trv__ConfigureReceiver;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/receiver/wsdl/ConfigureReceiver";
	soap_tmp___trv__ConfigureReceiver.trv__ConfigureReceiver = trv__ConfigureReceiver;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___trv__ConfigureReceiver(soap, &soap_tmp___trv__ConfigureReceiver);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___trv__ConfigureReceiver(soap, &soap_tmp___trv__ConfigureReceiver, "-trv:ConfigureReceiver", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___trv__ConfigureReceiver(soap, &soap_tmp___trv__ConfigureReceiver, "-trv:ConfigureReceiver", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int ReceiverBindingProxy::recv_ConfigureReceiver(_trv__ConfigureReceiverResponse &trv__ConfigureReceiverResponse)
{
	trv__ConfigureReceiverResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	trv__ConfigureReceiverResponse.soap_get(soap, "trv:ConfigureReceiverResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ReceiverBindingProxy::send_SetReceiverMode(const char *soap_endpoint_url, const char *soap_action, _trv__SetReceiverMode *trv__SetReceiverMode)
{
	struct __trv__SetReceiverMode soap_tmp___trv__SetReceiverMode;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/receiver/wsdl/SetReceiverMode";
	soap_tmp___trv__SetReceiverMode.trv__SetReceiverMode = trv__SetReceiverMode;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___trv__SetReceiverMode(soap, &soap_tmp___trv__SetReceiverMode);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___trv__SetReceiverMode(soap, &soap_tmp___trv__SetReceiverMode, "-trv:SetReceiverMode", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___trv__SetReceiverMode(soap, &soap_tmp___trv__SetReceiverMode, "-trv:SetReceiverMode", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int ReceiverBindingProxy::recv_SetReceiverMode(_trv__SetReceiverModeResponse &trv__SetReceiverModeResponse)
{
	trv__SetReceiverModeResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	trv__SetReceiverModeResponse.soap_get(soap, "trv:SetReceiverModeResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ReceiverBindingProxy::send_GetReceiverState(const char *soap_endpoint_url, const char *soap_action, _trv__GetReceiverState *trv__GetReceiverState)
{
	struct __trv__GetReceiverState soap_tmp___trv__GetReceiverState;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/receiver/wsdl/GetReceiverState";
	soap_tmp___trv__GetReceiverState.trv__GetReceiverState = trv__GetReceiverState;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___trv__GetReceiverState(soap, &soap_tmp___trv__GetReceiverState);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___trv__GetReceiverState(soap, &soap_tmp___trv__GetReceiverState, "-trv:GetReceiverState", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___trv__GetReceiverState(soap, &soap_tmp___trv__GetReceiverState, "-trv:GetReceiverState", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int ReceiverBindingProxy::recv_GetReceiverState(_trv__GetReceiverStateResponse &trv__GetReceiverStateResponse)
{
	trv__GetReceiverStateResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	trv__GetReceiverStateResponse.soap_get(soap, "trv:GetReceiverStateResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
