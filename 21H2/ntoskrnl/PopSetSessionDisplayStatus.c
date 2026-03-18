/*
 * XREFs of PopSetSessionDisplayStatus @ 0x1407EDCAC
 * Callers:
 *     PopSessionDisconnected @ 0x1407EC2C8 (PopSessionDisconnected.c)
 *     PopSessionConnected @ 0x1407ED644 (PopSessionConnected.c)
 *     PopSetDisplayStatus @ 0x140809408 (PopSetDisplayStatus.c)
 * Callees:
 *     PopPrintEx @ 0x140369B48 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x14075140C (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionState @ 0x1407EF650 (PopDiagTraceSessionState.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  __int64 *v6; // r8
  int Src; // [rsp+48h] [rbp+10h] BYREF

  Src = a2;
  PopDiagTraceSessionState(&POP_ETW_ADPM_SESSION_DISPLAY_STATE);
  v6 = (__int64 *)">>>>>";
  if ( !a3 )
    v6 = qword_14086DEB0;
  PopPrintEx(3LL, (__int64)"PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0, 4u, &Src);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1, 4u, &Src);
}
