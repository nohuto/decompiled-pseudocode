/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1C0021FF0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptor @ 0x1C002C968 (HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptor.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedConfigDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptor(*(_QWORD *)(a1 + 960));
}
