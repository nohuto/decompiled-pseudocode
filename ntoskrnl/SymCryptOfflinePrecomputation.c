/*
 * XREFs of SymCryptOfflinePrecomputation @ 0x1403F9350
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptPrecomputation @ 0x1403F93C0 (SymCryptPrecomputation.c)
 *     SymCryptEcpointCreate @ 0x1403F94A0 (SymCryptEcpointCreate.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x1403F9E14 (SymCryptSizeofEcpointFromCurve.c)
 */

__int64 __fastcall SymCryptOfflinePrecomputation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // eax

  v6 = (unsigned int)SymCryptSizeofEcpointFromCurve(a1);
  v7 = SymCryptEcpointCreate(a2, v6, a1);
  return SymCryptPrecomputation(a1, *(_DWORD *)(a1 + 92), (int)a1 + 104, v7, v6 + a2, a3 - v6);
}
