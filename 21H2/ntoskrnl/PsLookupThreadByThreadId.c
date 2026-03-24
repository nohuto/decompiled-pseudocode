/*
 * XREFs of PsLookupThreadByThreadId @ 0x140625630
 * Callers:
 *     NtAlertThreadByThreadId @ 0x140625C60 (NtAlertThreadByThreadId.c)
 *     PsOpenThread @ 0x140625D00 (PsOpenThread.c)
 *     PsLookupProcessThreadByCid @ 0x14069F110 (PsLookupProcessThreadByCid.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140779EF8 (PfpServiceMainThreadBoostPrep.c)
 *     PspFindThreadForTeb @ 0x14090A100 (PspFindThreadForTeb.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090EBCC (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14025C9C0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14025CA38 (PsIsProcessInSilo.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1402C3044 (ExfAcquireReleasePushLockExclusive.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     PspReferenceCidTableEntry @ 0x140625A50 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  struct _KTHREAD *CurrentThread; // rsi
  PETHREAD *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 CurrentServerSilo; // rdi
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = Thread;
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Thread) = 6;
  v6 = PspReferenceCidTableEntry(ThreadId, Thread);
  if ( v6 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo(v5, v4);
    if ( (*(_DWORD *)(v6 + 1296) & 2) == 0 )
    {
      _InterlockedOr(v9, 0);
      if ( (*(_QWORD *)(v6 + 1280) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive(v6 + 1280);
      if ( (*(_DWORD *)(v6 + 1296) & 2) == 0 )
        goto LABEL_7;
    }
    if ( !PsIsProcessInSilo(*(struct _KPROCESS **)(v6 + 544), CurrentServerSilo) )
    {
LABEL_7:
      HalPutDmaAdapter((PADAPTER_OBJECT)v6);
      v6 = 0LL;
    }
  }
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( !v6 )
    return -1073741813;
  *v3 = (PETHREAD)v6;
  return 0;
}
