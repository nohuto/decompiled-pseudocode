/*
 * XREFs of RIMCmActiveContactsBegin @ 0x1C017FB48
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0159C24 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMEndAllActiveContacts @ 0x1C015D000 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C015FB2C (RIMSuppressAllActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C017889C (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0179B00 (rimEndPointerDeviceStaleContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C017FBB8 (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ListTableBegin @ 0x1C01826B8 (ListTableBegin.c)
 */

__int64 __fastcall RIMCmActiveContactsBegin(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int64 v6; // xmm1_8
  __int64 result; // rax
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_DWORD *)(a2 + 944) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 433);
  v4 = ListTableBegin(v8, a2 + 936);
  v5 = *(_OWORD *)v4;
  v6 = *(_QWORD *)(v4 + 16);
  result = a1;
  *(_OWORD *)a1 = v5;
  *(_QWORD *)(a1 + 16) = v6;
  return result;
}
