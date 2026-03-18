/*
 * XREFs of SymCryptOfflinePrecomputation @ 0x140406784
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403FF93C (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptPrecomputation @ 0x140406800 (SymCryptPrecomputation.c)
 *     SymCryptEcpointCreate @ 0x1404068E0 (SymCryptEcpointCreate.c)
 *     SymCryptSizeofEcpointEx @ 0x14040721C (SymCryptSizeofEcpointEx.c)
 */

__int64 __fastcall SymCryptOfflinePrecomputation(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // eax

  v6 = (unsigned int)SymCryptSizeofEcpointEx((unsigned int)a1[9], a1[2] & 0xF);
  v7 = SymCryptEcpointCreate(a2, v6, a1);
  return SymCryptPrecomputation((_DWORD)a1, a1[23], (int)a1 + 104, v7, v6 + a2, a3 - v6);
}
