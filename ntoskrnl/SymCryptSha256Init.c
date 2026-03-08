/*
 * XREFs of SymCryptSha256Init @ 0x1403EF360
 * Callers:
 *     SymCryptSha256 @ 0x1403ED8FC (SymCryptSha256.c)
 *     SymCryptParallelSha256Init @ 0x1403EFFB4 (SymCryptParallelSha256Init.c)
 *     SymCryptParallelSha256ResultDone @ 0x1403F0260 (SymCryptParallelSha256ResultDone.c)
 *     HashpInitHash @ 0x140A749CC (HashpInitHash.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_140013D98;
  *(_OWORD *)(a1 + 112) = xmmword_140013DA8;
}
