/*
 * XREFs of SymCryptSha256Init @ 0x1403EDB60
 * Callers:
 *     SymCryptSha256 @ 0x1403EC2C8 (SymCryptSha256.c)
 *     SymCryptParallelSha256Init @ 0x1403EF208 (SymCryptParallelSha256Init.c)
 *     SymCryptParallelSha256ResultDone @ 0x1403EF4B0 (SymCryptParallelSha256ResultDone.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_14000F598;
  *(_OWORD *)(a1 + 112) = xmmword_14000F5A8;
}
