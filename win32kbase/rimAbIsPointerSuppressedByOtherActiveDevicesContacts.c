/*
 * XREFs of rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C01A8AF4
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C01A98C0 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C01A9D04 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C01A8B98 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByOtherActiveDevicesContacts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD **v5; // rsi
  unsigned int v7; // edi
  _QWORD *i; // rbx
  __int64 v9; // r8

  v5 = (_QWORD **)(a1 + 448);
  v7 = 0;
  if ( !*(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 436) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 423);
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v9 = *(i - 1);
    if ( v9 != a2 && (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts(a3, a2, v9, 1LL) )
      return 1;
  }
  return v7;
}
