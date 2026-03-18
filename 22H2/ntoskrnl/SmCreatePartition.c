/*
 * XREFs of SmCreatePartition @ 0x1407064D8
 * Callers:
 *     MiMakePartitionActive @ 0x1402924E0 (MiMakePartitionActive.c)
 *     SmProcessConfigRequest @ 0x14085C000 (SmProcessConfigRequest.c)
 *     PspSetJobMemoryPartition @ 0x1409B2CD4 (PspSetJobMemoryPartition.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     SSHSupportAllocateNonPaged @ 0x14032D1C0 (SSHSupportAllocateNonPaged.c)
 *     SmPartitionInitialize @ 0x14085015C (SmPartitionInitialize.c)
 *     SmPartitionCleanup @ 0x1409D6C68 (SmPartitionCleanup.c)
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
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C6B3D8, 0LL);
      if ( !*(_QWORD *)(a1 + 24) )
      {
        if ( dword_140C6B400 )
        {
          v7 = (_QWORD *)qword_140C6B3D0;
          v8 = (_QWORD *)(v5 + 1960);
          if ( *(__int64 **)qword_140C6B3D0 != &qword_140C6B3C8 )
            __fastfail(3u);
          *v8 = &qword_140C6B3C8;
          *(_QWORD *)(v5 + 1968) = v7;
          *v7 = v8;
          qword_140C6B3D0 = v5 + 1960;
        }
        *(_QWORD *)(a1 + 24) = v5;
        v5 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C6B3D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C6B3D8);
      KeAbPostRelease((ULONG_PTR)&qword_140C6B3D8);
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
