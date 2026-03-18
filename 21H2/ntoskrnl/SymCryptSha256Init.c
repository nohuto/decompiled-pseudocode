/*
 * XREFs of SymCryptSha256Init @ 0x1403FCBE0
 * Callers:
 *     SymCryptSha256 @ 0x1403FB308 (SymCryptSha256.c)
 *     SymCryptParallelSha256Init @ 0x1403FD7F4 (SymCryptParallelSha256Init.c)
 *     SymCryptParallelSha256ResultDone @ 0x1403FDAA0 (SymCryptParallelSha256ResultDone.c)
 *     HashpInitHash @ 0x140A3792C (HashpInitHash.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_140013F98;
  *(_OWORD *)(a1 + 112) = xmmword_140013FA8;
}
