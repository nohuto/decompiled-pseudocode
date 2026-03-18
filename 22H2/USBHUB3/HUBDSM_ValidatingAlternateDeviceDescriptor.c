/*
 * XREFs of HUBDSM_ValidatingAlternateDeviceDescriptor @ 0x1C00213B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C002BE34 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 */

__int64 __fastcall HUBDSM_ValidatingAlternateDeviceDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheDeviceDescriptor(*(_QWORD *)(a1 + 960));
}
