/*
 * XREFs of PopSetSessionDisplayStatus @ 0x14079A2F0
 * Callers:
 *     PopSessionDisconnected @ 0x14067FF58 (PopSessionDisconnected.c)
 *     PopSessionConnected @ 0x14079A204 (PopSessionConnected.c)
 *     PopSetDisplayStatus @ 0x140880858 (PopSetDisplayStatus.c)
 * Callees:
 *     PopPrintEx @ 0x1402BDCD4 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x14068CFA0 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionState @ 0x14073CA10 (PopDiagTraceSessionState.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  const char *v6; // r8
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  PopDiagTraceSessionState(&POP_ETW_ADPM_SESSION_DISPLAY_STATE, a1, a2);
  v6 = ">>>>>";
  if ( !a3 )
    v6 = &byte_140887FD0;
  PopPrintEx(3LL, (__int64)"PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0, 4u, &v8);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1, 4u, &v8);
}
