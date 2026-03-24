/*
 * XREFs of MiLockPageAtDpc @ 0x14054F85C
 * Callers:
 *     MiInsertLargePageChain @ 0x14027EE04 (MiInsertLargePageChain.c)
 *     MiDeleteClusterPage @ 0x1402ABEC0 (MiDeleteClusterPage.c)
 *     NtLockVirtualMemory @ 0x140339070 (NtLockVirtualMemory.c)
 *     MiInitializeMdlBatchPages @ 0x140354E44 (MiInitializeMdlBatchPages.c)
 *     MiMakeLargePageTable @ 0x14053D954 (MiMakeLargePageTable.c)
 *     MiRebuildLargePage @ 0x140552618 (MiRebuildLargePage.c)
 *     MiDemotePfnListChain @ 0x14055E158 (MiDemotePfnListChain.c)
 *     MiCreateKernelHalSlabRange @ 0x140A4F6A0 (MiCreateKernelHalSlabRange.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockPageAtDpc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      KeYieldProcessorEx(&v6, a2, a3, a4);
      result = *(_QWORD *)(a1 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
