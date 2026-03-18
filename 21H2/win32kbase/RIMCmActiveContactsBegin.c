/*
 * XREFs of RIMCmActiveContactsBegin @ 0x1C00E74FA
 * Callers:
 *     rimIsWakeablePointerFrame @ 0x1C00DC55C (rimIsWakeablePointerFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0187FE0 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMEndAllActiveContacts @ 0x1C0191610 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01958A0 (RIMSuppressAllActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01ADFB4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01AF120 (rimEndPointerDeviceStaleContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01B609C (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     ListTableIteratorNext @ 0x1C00E7A48 (ListTableIteratorNext.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmActiveContactsBegin(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_DWORD *)(a2 + 1000) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = a2 + 992;
  if ( !*(_QWORD *)v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*(_DWORD *)(v5 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v7[0] = v5;
  v7[1] = 0LL;
  v7[2] = *(_QWORD *)v5;
  ListTableIteratorNext(a1, v7);
  return a1;
}
