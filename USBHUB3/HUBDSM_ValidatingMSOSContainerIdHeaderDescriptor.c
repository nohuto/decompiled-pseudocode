/*
 * XREFs of HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor @ 0x1C0021ED0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader @ 0x1C002C5F0 (HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader(*(_QWORD *)(a1 + 960));
}
