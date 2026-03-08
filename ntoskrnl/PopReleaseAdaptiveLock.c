/*
 * XREFs of PopReleaseAdaptiveLock @ 0x14073CD60
 * Callers:
 *     PopSessionWinlogonNotification @ 0x14067F97C (PopSessionWinlogonNotification.c)
 *     NtSetThreadExecutionState @ 0x14073A9D0 (NtSetThreadExecutionState.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PopSessionConnectionChange @ 0x14079A150 (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x140829230 (PopAdaptivePowerSettingCallback.c)
 *     PopUpdateSystemIdleContext @ 0x14082A808 (PopUpdateSystemIdleContext.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140879B20 (PopIsLockConsoleTimeoutActive.c)
 *     PopSetDisplayStatus @ 0x140880858 (PopSetDisplayStatus.c)
 *     PopSystemIdleEventHandler @ 0x140880C00 (PopSystemIdleEventHandler.c)
 *     PopActiveLockScreenPowerRequest @ 0x1409986F0 (PopActiveLockScreenPowerRequest.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x1409988C4 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x140998998 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopAdaptiveWnfCallback @ 0x140998A20 (PopAdaptiveWnfCallback.c)
 *     PopUserPresentOverride @ 0x140998B50 (PopUserPresentOverride.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x14067F6E8 (PopDispatchStateCallout.c)
 *     PopSendSessionInfo @ 0x14067FE1C (PopSendSessionInfo.c)
 */

void PopReleaseAdaptiveLock()
{
  char v0; // bl
  int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // [rsp+20h] [rbp-48h] BYREF
  __int128 v5; // [rsp+28h] [rbp-40h] BYREF
  __int64 v6; // [rsp+38h] [rbp-30h]
  GUID v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+50h] [rbp-18h]

  v0 = PopAdaptiveContext;
  v1 = dword_140C398D8;
  PopAdpmLockThread = 0LL;
  *(_WORD *)((char *)&v5 + 1) = 0;
  BYTE3(v5) = 0;
  ExReleaseResourceLite(&PopAdpmLock);
  KeLeaveCriticalRegion();
  if ( v0 )
  {
    v8 = 0;
    v7 = GUID_ADAPTIVE_SESSION_STATE_CHANGED;
    PopSendSessionInfo(v1, v2, v3, (__int64)&v7);
    v4 = v1;
    v6 = 7LL;
    v5 = 0LL;
    PopDispatchStateCallout(&v5, (__int64)&v4);
  }
}
