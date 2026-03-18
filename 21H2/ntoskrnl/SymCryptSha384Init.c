/*
 * XREFs of SymCryptSha384Init @ 0x140401DF0
 * Callers:
 *     SymCryptSha384Result @ 0x140401E3C (SymCryptSha384Result.c)
 *     HashpInitHash @ 0x140A3792C (HashpInitHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSha384Init(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 160) = SymCryptSha384InitialState;
  *(_OWORD *)(a1 + 176) = xmmword_1400147E0;
  *(_OWORD *)(a1 + 192) = xmmword_1400147F0;
  *(_OWORD *)(a1 + 208) = xmmword_140014800;
  return result;
}
