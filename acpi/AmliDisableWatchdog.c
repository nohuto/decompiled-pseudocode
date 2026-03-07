void __fastcall AmliDisableWatchdog(__int64 *a1)
{
  KIRQL v2; // si
  __int64 v3; // rdi

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiWatchdogLock);
  v3 = *a1;
  if ( *((_BYTE *)a1 + 88) || *(_BYTE *)(v3 + 472) )
  {
    *((_BYTE *)a1 + 88) = 0;
    if ( !KeCancelTimer((PKTIMER)(a1 + 13)) )
    {
      if ( *(_BYTE *)(v3 + 472) )
        AcpiQueueRecordBlackboxInformation();
      else
        AmliWatchdogTimeoutAction(a1);
    }
  }
  KeReleaseSpinLock(&AcpiWatchdogLock, v2);
}
