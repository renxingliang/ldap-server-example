/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "Lightweight-Directory-Access-Protocol-V3"
 * 	found in "Lightweight-Directory-Access-Protocol-V3.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "AbandonRequest.h"

int
AbandonRequest_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2147483647)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using MessageID,
 * so here we adjust the DEF accordingly.
 */
static void
AbandonRequest_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_MessageID.free_struct;
	td->print_struct   = asn_DEF_MessageID.print_struct;
	td->ber_decoder    = asn_DEF_MessageID.ber_decoder;
	td->der_encoder    = asn_DEF_MessageID.der_encoder;
	td->xer_decoder    = asn_DEF_MessageID.xer_decoder;
	td->xer_encoder    = asn_DEF_MessageID.xer_encoder;
	td->uper_decoder   = asn_DEF_MessageID.uper_decoder;
	td->uper_encoder   = asn_DEF_MessageID.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_MessageID.per_constraints;
	td->elements       = asn_DEF_MessageID.elements;
	td->elements_count = asn_DEF_MessageID.elements_count;
	td->specifics      = asn_DEF_MessageID.specifics;
}

void
AbandonRequest_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	AbandonRequest_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
AbandonRequest_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	AbandonRequest_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
AbandonRequest_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	AbandonRequest_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
AbandonRequest_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	AbandonRequest_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
AbandonRequest_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	AbandonRequest_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
AbandonRequest_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	AbandonRequest_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static ber_tlv_tag_t asn_DEF_AbandonRequest_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (16 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_AbandonRequest = {
	"AbandonRequest",
	"AbandonRequest",
	AbandonRequest_free,
	AbandonRequest_print,
	AbandonRequest_constraint,
	AbandonRequest_decode_ber,
	AbandonRequest_encode_der,
	AbandonRequest_decode_xer,
	AbandonRequest_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_AbandonRequest_tags_1,
	sizeof(asn_DEF_AbandonRequest_tags_1)
		/sizeof(asn_DEF_AbandonRequest_tags_1[0]) - 1, /* 1 */
	asn_DEF_AbandonRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_AbandonRequest_tags_1)
		/sizeof(asn_DEF_AbandonRequest_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	0	/* No specifics */
};

