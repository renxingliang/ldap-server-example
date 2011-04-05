/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "Lightweight-Directory-Access-Protocol-V3"
 * 	found in "Lightweight-Directory-Access-Protocol-V3.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_URI_H_
#define	_URI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LDAPString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* URI */
typedef LDAPString_t	 URI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_URI;
asn_struct_free_f URI_free;
asn_struct_print_f URI_print;
asn_constr_check_f URI_constraint;
ber_type_decoder_f URI_decode_ber;
der_type_encoder_f URI_encode_der;
xer_type_decoder_f URI_decode_xer;
xer_type_encoder_f URI_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _URI_H_ */
#include <asn_internal.h>
