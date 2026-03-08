/*
 * XREFs of PopSessionWinlogonNotification @ 0x14067F97C
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     PopPrintEx @ 0x1402BDCD4 (PopPrintEx.c)
 *     PopNotifyConsoleUserPresent @ 0x14073A3BC (PopNotifyConsoleUserPresent.c)
 *     PopSetPowerSettingValueAcDc @ 0x14073BE70 (PopSetPowerSettingValueAcDc.c)
 *     PopAcquireAdaptiveLock @ 0x14073CCB4 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x14073CD60 (PopReleaseAdaptiveLock.c)
 *     PopDiagTraceSessionStates @ 0x14079A284 (PopDiagTraceSessionStates.c)
 */

__int64 __fastcall PopSessionWinlogonNotification(unsigned int a1, __int64 a2)
{
  char v2; // si
  char v3; // di
  const EVENT_DESCRIPTOR *v5; // rcx
  const char *v6; // rax
  const char *v7; // r8
  __int64 result; // rax
  bool v9; // bl
  BOOL v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a2 + 5);
  v3 = *(_BYTE *)(a2 + 4);
  v5 = (const EVENT_DESCRIPTOR *)POP_ETW_ADPM_SESSION_LOCKED;
  if ( !v2 )
    v5 = &POP_ETW_ADPM_SESSION_UNLOCKED;
  PopDiagTraceSessionStates(v5);
  v6 = "Locked";
  if ( !v2 )
    v6 = "Unlocked";
  v7 = "Console";
  if ( !v3 )
    v7 = "Remote";
  result = PopPrintEx(3LL, (__int64)"PopAdaptive:>>>>> %s session %u is %s\n", v7, a1, v6);
  v9 = 0;
  if ( v3 )
  {
    PopAcquireAdaptiveLock(0LL);
    if ( v2 )
    {
      byte_140C398C1 = 1;
    }
    else
    {
      byte_140C398C1 = 0;
      v9 = byte_140C398C2 == 0;
    }
    PopReleaseAdaptiveLock();
    v10 = v2 != 0;
    result = PopSetPowerSettingValueAcDc(&GUID_CONSOLE_LOCKED, 4LL, &v10);
    if ( v9 )
      return PopNotifyConsoleUserPresent(0LL, 10LL);
  }
  return result;
}
