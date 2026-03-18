/*
 * XREFs of SymCryptEckeyCreate @ 0x14040015C
 * Callers:
 *     SymCryptEckeyAllocate @ 0x140400108 (SymCryptEckeyAllocate.c)
 * Callees:
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x1404000A8 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptIntCreate @ 0x140400BBC (SymCryptIntCreate.c)
 *     SymCryptSizeofIntFromDigits @ 0x140401350 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptEcpointCreate @ 0x1404068E0 (SymCryptEcpointCreate.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x140407254 (SymCryptSizeofEcpointFromCurve.c)
 */

__int64 __fastcall SymCryptEckeyCreate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  unsigned int v10; // eax

  v5 = SymCryptEcurveDigitsofScalarMultiplier(a3);
  *(_BYTE *)a1 = 0;
  v6 = v5;
  *(_QWORD *)(a1 + 8) = a3;
  v7 = SymCryptSizeofEcpointFromCurve(a3);
  *(_QWORD *)(a1 + 16) = SymCryptEcpointCreate(a1 + 64, v7, a3);
  v9 = SymCryptSizeofIntFromDigits(v6, v8);
  v10 = SymCryptSizeofEcpointFromCurve(a3);
  *(_QWORD *)(a1 + 24) = SymCryptIntCreate(v10 + a1 + 64, v9, v6);
  return a1;
}
