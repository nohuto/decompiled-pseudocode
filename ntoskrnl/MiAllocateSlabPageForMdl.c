/*
 * XREFs of MiAllocateSlabPageForMdl @ 0x140620D1C
 * Callers:
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x1403A796C (MiAllocateMostlyContiguousPagesForMdl.c)
 * Callees:
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 *     MiAsyncSlabReplenish @ 0x1402DF31C (MiAsyncSlabReplenish.c)
 *     MiReplenishSlabAllocator @ 0x1403496D8 (MiReplenishSlabAllocator.c)
 */

__int64 __fastcall MiAllocateSlabPageForMdl(__int64 a1, unsigned int a2, char a3, _DWORD *a4)
{
  unsigned int v5; // r8d
  __int64 i; // r14
  char v9; // r8
  int v10; // eax
  __int64 SlabPage; // rdi
  __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v13[0] = 0LL;
  v5 = a2;
  for ( i = a1; ; a1 = i )
  {
    SlabPage = MiGetSlabPage(a1, 6u, v5, 5LL, v13);
    if ( SlabPage != -1 || !v13[0] || *a4 )
      break;
    if ( !(unsigned int)MiReplenishSlabAllocator((_QWORD *)v13[0], 1uLL) )
    {
      v9 = 0;
      if ( (a3 & 8) != 0 || KeGetCurrentIrql() >= 2u )
        v9 = 1;
      v10 = MiAsyncSlabReplenish(v13[0], (LARGE_INTEGER *)&MiShortTime, v9);
      *a4 = v10;
      if ( v10 )
        break;
    }
    v5 = a2;
  }
  return SlabPage;
}
