/*
 * XREFs of MmFreeSystemCacheReserveView @ 0x1408C8470
 * Callers:
 *     CcUninitializePartitionVacbs @ 0x1404EC364 (CcUninitializePartitionVacbs.c)
 * Callees:
 *     MiReleaseSystemCacheView @ 0x14029037C (MiReleaseSystemCacheView.c)
 *     MiGetSystemCacheReverseMap @ 0x140292630 (MiGetSystemCacheReverseMap.c)
 *     MiGetPteAddress @ 0x140298780 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __fastcall MmFreeSystemCacheReserveView(ULONG_PTR BugCheckParameter3)
{
  unsigned __int64 PteAddress; // rbx
  unsigned __int64 v3; // rbp
  ULONG_PTR SystemCacheReverseMap; // rax
  ULONG_PTR v5; // rsi
  __int16 v6; // ax

  PteAddress = MiGetPteAddress(BugCheckParameter3);
  v3 = PteAddress + 512;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(BugCheckParameter3);
  v5 = SystemCacheReverseMap;
  if ( *(_QWORD *)(SystemCacheReverseMap + 16) )
    KeBugCheckEx(0x1Au, 0x784uLL, SystemCacheReverseMap, BugCheckParameter3, 0LL);
  do
  {
    v6 = MI_READ_PTE_LOCK_FREE(PteAddress);
    if ( (v6 & 1) != 0 || (v6 & 0x400) != 0 )
      KeBugCheckEx(0x1Au, 0x785uLL, v5, BugCheckParameter3, 0LL);
    PteAddress += 8LL;
  }
  while ( PteAddress < v3 );
  MiReleaseSystemCacheView(PteAddress - 512);
}
