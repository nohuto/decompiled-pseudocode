/*
 * XREFs of MiInitializeSessionGlobals @ 0x14075793C
 * Callers:
 *     MiSessionCreate @ 0x140756EC8 (MiSessionCreate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MmIsSessionLeaderProcess @ 0x140757A50 (MmIsSessionLeaderProcess.c)
 */

__int64 MiInitializeSessionGlobals()
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _LIST_ENTRY *Process; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rbp
  char v8; // al
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rbp

  CurrentThread = KeGetCurrentThread();
  Process = (struct _LIST_ENTRY *)CurrentThread->Process;
  if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return 3221225505LL;
  if ( (unsigned int)MmIsSessionLeaderProcess(CurrentThread->Process) )
    return 0LL;
  if ( qword_140C65658 )
  {
    if ( PsIsCurrentThreadInServerSilo(v3, v2) )
    {
      --CurrentThread->SpecialApcDisable;
      v10 = KeAbPreAcquire((__int64)&qword_140C65660, 0LL);
      v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C65660, 0LL);
      v11 = v10;
      if ( v6 )
        ExfAcquirePushLockExclusiveEx(&qword_140C65660, v10, (__int64)&qword_140C65660);
      if ( v11 )
        *(_BYTE *)(v11 + 18) = 1;
      if ( !PsGetCurrentServerSiloGlobals()[54].Blink )
      {
        PsGetCurrentServerSiloGlobals()[54].Blink = Process;
        ObfReferenceObject(Process);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65660, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65660);
      KeAbPostRelease((ULONG_PTR)&qword_140C65660);
      v9 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v9
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( (unsigned int)MmIsSessionLeaderProcess(Process) )
      return 0LL;
    return 3221225500LL;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    v5 = KeAbPreAcquire((__int64)&qword_140C65660, 0LL);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C65660, 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&qword_140C65660, v5, (__int64)&qword_140C65660);
    if ( v7 )
      *(_BYTE *)(v7 + 18) = 1;
    if ( !qword_140C65658 )
    {
      qword_140C65658 = (__int64)Process;
      *((_QWORD *)PsGetServerSiloGlobals(0LL) + 109) = Process;
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65660, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65660);
      KeAbPostRelease((ULONG_PTR)&qword_140C65660);
      v9 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v9
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      ObfReferenceObject(Process);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65660, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65660);
    KeAbPostRelease((ULONG_PTR)&qword_140C65660);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return Process != (struct _LIST_ENTRY *)qword_140C65658 ? 0xC000001C : 0;
  }
}
