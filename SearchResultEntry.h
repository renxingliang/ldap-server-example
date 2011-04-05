/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "Lightweight-Directory-Access-Protocol-V3"
 * 	found in "Lightweight-Directory-Access-Protocol-V3.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SearchResultEntry_H_
#define	_SearchResultEntry_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LDAPDN.h"
#include "PartialAttributeList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SearchResultEntry */
typedef struct SearchResultEntry {
	LDAPDN_t	 objectName;
	PartialAttributeList_t	 attributes;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SearchResultEntry_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SearchResultEntry;

#ifdef __cplusplus
}
#endif

#endif	/* _SearchResultEntry_H_ */
#include <asn_internal.h>
