/*
 * XREFs of PnpCallDriverEntry @ 0x14072A87C
 * Callers:
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PnpWatchdogEtwWrite @ 0x14055E670 (PnpWatchdogEtwWrite.c)
 *     PnpEnableWatchdog @ 0x14068A5EC (PnpEnableWatchdog.c)
 *     PnpRecordBlackbox @ 0x14068A980 (PnpRecordBlackbox.c)
 *     PnpWatchdogTimerPause @ 0x14068A9F4 (PnpWatchdogTimerPause.c)
 *     WdtpCancelTimer @ 0x14068AA80 (WdtpCancelTimer.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCallDriverEntry(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rsi
  unsigned int v6; // edi
  void *v7; // rbx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v9[0] = 0LL;
  v9[1] = a1;
  v4 = *(_QWORD *)(a1 + 48);
  v9[2] = KeGetCurrentThread();
  v5 = PnpEnableWatchdog(5, (__int64)v9, (const UNICODE_STRING *)(v4 + 24));
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 88))(a1, a2);
  if ( v5 )
  {
    PnpWatchdogTimerPause(*(_QWORD *)(v5 + 8));
    PnpRecordBlackbox(0LL, *(_DWORD *)(v5 + 16));
    if ( *(_BYTE *)(v5 + 32) )
    {
      PnpWatchdogEtwWrite(v5, 1);
      if ( !*(_BYTE *)(v5 + 33) )
        PnpWatchdogEtwWrite(v5, 3);
    }
    v7 = *(void **)(v5 + 8);
    WdtpCancelTimer((__int64)v7, 1);
    ExFreePoolWithTag(v7, 0x54645750u);
  }
  return v6;
}
