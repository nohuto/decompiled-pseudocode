void __fastcall AmliWatchdogTimeoutAction(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // ecx

  AcpiDiagTraceAmliWatchdogTimeout((_QWORD *)a1, a2);
  v3 = *(_DWORD *)(a1 + 16);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        AmliWatchdogInitiateBugcheck((ULONG_PTR *)a1);
      return;
    }
    AmliWatchdogInitiateLiveDump((_QWORD *)a1);
  }
  AcpiQueueRecordBlackboxInformation();
  if ( *(_BYTE *)(a1 + 88) )
  {
    *(_BYTE *)(a1 + 88) = 0;
    KeCancelTimer((PKTIMER)(a1 + 104));
  }
}
