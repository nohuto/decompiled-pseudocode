/*
 * XREFs of HUBDSM_ValidatingAlternateConfigurationDescriptor @ 0x1C00214A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C002B98C (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 */

__int64 __fastcall HUBDSM_ValidatingAlternateConfigurationDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheConfigDescriptor(*(_QWORD *)(a1 + 960));
}
