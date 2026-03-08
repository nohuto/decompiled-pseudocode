/*
 * XREFs of SmDeletePartition @ 0x1409D3CF8
 * Callers:
 *     MiDeletePartitionResources @ 0x140656EBC (MiDeletePartitionResources.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     SmPartitionCleanup @ 0x1409D3DC8 (SmPartitionCleanup.c)
 */

void __fastcall SmDeletePartition(__int64 a1)
{
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v1 + 1952));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C6AF98, 0LL);
    v4 = *(_QWORD *)(v1 + 1960);
    if ( *(_QWORD *)(v4 + 8) != v1 + 1960 || (v5 = *(_QWORD **)(v1 + 1968), *v5 != v1 + 1960) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C6AF98, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C6AF98);
    KeAbPostRelease((ULONG_PTR)&qword_140C6AF98);
    KeLeaveCriticalRegion();
    SmPartitionCleanup(v1);
    CmSiFreeMemory((PPRIVILEGE_SET)v1);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
