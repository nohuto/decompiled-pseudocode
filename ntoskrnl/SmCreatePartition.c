/*
 * XREFs of SmCreatePartition @ 0x140728884
 * Callers:
 *     MiMakePartitionActive @ 0x1402A6140 (MiMakePartitionActive.c)
 *     SmProcessConfigRequest @ 0x1408582AC (SmProcessConfigRequest.c)
 *     PspSetJobMemoryPartition @ 0x1409AFC84 (PspSetJobMemoryPartition.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     SSHSupportAllocateNonPaged @ 0x1402A4AEC (SSHSupportAllocateNonPaged.c)
 *     SmPartitionInitialize @ 0x14084CDAC (SmPartitionInitialize.c)
 *     SmPartitionCleanup @ 0x1409D3DC8 (SmPartitionCleanup.c)
 */

__int64 __fastcall SmCreatePartition(__int64 a1)
{
  unsigned int v1; // edi
  __int64 NonPaged; // rax
  __int64 v5; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    NonPaged = SSHSupportAllocateNonPaged(3008LL, 0x61506D53u);
    v5 = NonPaged;
    if ( NonPaged )
    {
      SmPartitionInitialize(NonPaged);
      *(_QWORD *)(v5 + 1936) = a1;
      *(_DWORD *)(v5 + 2064) = SmGlobals;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C6AF98, 0LL);
      if ( !*(_QWORD *)(a1 + 24) )
      {
        if ( dword_140C6AFC0 )
        {
          v7 = (_QWORD *)qword_140C6AF90;
          v8 = (_QWORD *)(v5 + 1960);
          if ( *(__int64 **)qword_140C6AF90 != &qword_140C6AF88 )
            __fastfail(3u);
          *v8 = &qword_140C6AF88;
          *(_QWORD *)(v5 + 1968) = v7;
          *v7 = v8;
          qword_140C6AF90 = v5 + 1960;
        }
        *(_QWORD *)(a1 + 24) = v5;
        v5 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C6AF98, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C6AF98);
      KeAbPostRelease((ULONG_PTR)&qword_140C6AF98);
      KeLeaveCriticalRegion();
      if ( v5 )
      {
        SmPartitionCleanup(v5);
        CmSiFreeMemory((PPRIVILEGE_SET)v5);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
