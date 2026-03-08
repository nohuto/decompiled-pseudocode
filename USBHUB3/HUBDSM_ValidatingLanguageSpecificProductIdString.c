/*
 * XREFs of HUBDSM_ValidatingLanguageSpecificProductIdString @ 0x1C0020830
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x1C002CB14 (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 */

__int64 __fastcall HUBDSM_ValidatingLanguageSpecificProductIdString(__int64 a1)
{
  return HUBDTX_ValidateAndCacheProductIdStringDescriptor(*(_QWORD *)(a1 + 960));
}
