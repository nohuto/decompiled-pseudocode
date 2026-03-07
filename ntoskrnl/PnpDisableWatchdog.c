void __fastcall PnpDisableWatchdog(__int64 a1)
{
  __int64 v2; // rdx
  void *v3; // rbx

  PnpWatchdogTimerPause(*(_QWORD *)(a1 + 8));
  PnpRecordBlackbox(0LL, *(unsigned int *)(a1 + 16));
  if ( *(_BYTE *)(a1 + 32) )
  {
    PnpWatchdogEtwWrite(a1, 1);
    if ( !*(_BYTE *)(a1 + 33) )
      PnpWatchdogEtwWrite(a1, 3);
  }
  v3 = *(void **)(a1 + 8);
  LOBYTE(v2) = 1;
  WdtpCancelTimer(v3, v2);
  ExFreePoolWithTag(v3, 0x54645750u);
}
