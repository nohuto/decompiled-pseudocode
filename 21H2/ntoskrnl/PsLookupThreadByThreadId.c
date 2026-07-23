/*
 * XREFs of PsLookupThreadByThreadId @ 0x14068F2A0
 * Callers:
 *     NtAlertThreadByThreadId @ 0x14068F8D0 (NtAlertThreadByThreadId.c)
 *     PsLookupProcessThreadByCid @ 0x14068F940 (PsLookupProcessThreadByCid.c)
 *     PsOpenThread @ 0x140691E18 (PsOpenThread.c)
 *     PfpServiceMainThreadBoostPrep @ 0x14077A0B8 (PfpServiceMainThreadBoostPrep.c)
 *     PspFindThreadForTeb @ 0x14090A260 (PspFindThreadForTeb.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090ED2C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140241564 (ExfAcquireReleasePushLockExclusive.c)
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14027DFA8 (PsIsProcessInSilo.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     PspReferenceCidTableEntry @ 0x14068F6C0 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  struct _KTHREAD *CurrentThread; // rsi
  PETHREAD *v3; // r14
  __int64 v4; // rbx
  __int64 CurrentServerSilo; // rdi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = Thread;
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Thread) = 6;
  v4 = PspReferenceCidTableEntry(ThreadId, Thread);
  if ( v4 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( (*(_DWORD *)(v4 + 1296) & 2) == 0 )
    {
      _InterlockedOr(v7, 0);
      if ( (*(_QWORD *)(v4 + 1280) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive(v4 + 1280);
      if ( (*(_DWORD *)(v4 + 1296) & 2) == 0 )
        goto LABEL_7;
    }
    if ( !PsIsProcessInSilo(*(struct _KPROCESS **)(v4 + 544), CurrentServerSilo) )
    {
LABEL_7:
      HalPutDmaAdapter((PADAPTER_OBJECT)v4);
      v4 = 0LL;
    }
  }
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( !v4 )
    return -1073741813;
  *v3 = (PETHREAD)v4;
  return 0;
}
