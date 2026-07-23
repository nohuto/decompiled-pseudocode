/*
 * XREFs of PopSessionWinlogonNotification @ 0x1405D8DC4
 * Callers:
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x140364318 (PopPrintEx.c)
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1405D8EC8 (PopGetLockConsoleTimeoutUnsafe.c)
 *     PopSetPowerSettingValueAcDc @ 0x1406F2C58 (PopSetPowerSettingValueAcDc.c)
 *     PopReleaseAdaptiveLock @ 0x1407251C4 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x1407252B4 (PopAcquireAdaptiveLock.c)
 *     PopDiagTraceSessionStates @ 0x140725380 (PopDiagTraceSessionStates.c)
 *     PopUpdateTimeouts @ 0x140725430 (PopUpdateTimeouts.c)
 *     PopLazySensorActiveInput @ 0x1408F5204 (PopLazySensorActiveInput.c)
 */

__int64 __fastcall PopSessionWinlogonNotification(unsigned int a1, __int64 a2)
{
  char v2; // si
  char v4; // bl
  const EVENT_DESCRIPTOR *v5; // rcx
  int v6; // edi
  const char *v7; // rax
  const char *v8; // r8
  __int64 result; // rax
  int LockConsoleTimeoutUnsafe; // eax
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a2 + 5);
  v4 = *(_BYTE *)(a2 + 4);
  v5 = (const EVENT_DESCRIPTOR *)POP_ETW_ADPM_SESSION_LOCKED;
  v6 = 0;
  v11 = 0LL;
  if ( !v2 )
    v5 = &POP_ETW_ADPM_SESSION_UNLOCKED;
  PopDiagTraceSessionStates(v5);
  v7 = "Locked";
  if ( !v2 )
    v7 = "Unlocked";
  v8 = "Console";
  if ( !v4 )
    v8 = "Remote";
  result = PopPrintEx(3u, (__int64)"PopAdaptive:>>>>> %s session %u is %s\n", v8, a1, v7);
  if ( v4 )
  {
    PopAcquireAdaptiveLock(0LL);
    if ( v2 )
    {
      BYTE4(xmmword_140C20570) = 1;
      LockConsoleTimeoutUnsafe = PopGetLockConsoleTimeoutUnsafe();
      LODWORD(v11) = LockConsoleTimeoutUnsafe;
      if ( LockConsoleTimeoutUnsafe && !BYTE5(xmmword_140C20570) )
      {
        *(_WORD *)((char *)&xmmword_140C20570 + 5) = 256;
        HIDWORD(PopLazyContext) = LockConsoleTimeoutUnsafe;
        BYTE1(qword_140C205D0) = 1;
        PopUpdateTimeouts(a1, &v11, 0LL);
      }
    }
    else
    {
      BYTE4(xmmword_140C20570) = 0;
      if ( BYTE6(xmmword_140C20570) )
      {
        BYTE6(xmmword_140C20570) = 0;
        PopLazySensorActiveInput(a1);
      }
    }
    PopReleaseAdaptiveLock();
    LOBYTE(v6) = v2 != 0;
    LODWORD(v11) = v6;
    return PopSetPowerSettingValueAcDc(&GUID_CONSOLE_LOCKED);
  }
  return result;
}
