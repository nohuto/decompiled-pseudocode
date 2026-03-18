/*
 * XREFs of HMAllocObject @ 0x1C0012A00
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00673D0 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     HMAllocObjectEx @ 0x1C0012A1C (HMAllocObjectEx.c)
 */

__int64 __fastcall HMAllocObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return HMAllocObjectEx(a1, a2, a3, a4, 0);
}
