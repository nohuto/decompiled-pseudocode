/*
 * XREFs of PopAcquireAdaptiveLock @ 0x14073CCB4
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
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x14067F698 (PoBlockConsoleSwitch.c)
 */

struct _KTHREAD *__fastcall PopAcquireAdaptiveLock(char a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax
  int v5; // edi
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]

  v8 = 0LL;
  v7 = 0LL;
  if ( !a1 )
  {
    v5 = PoBlockConsoleSwitch((__int64)&v7, a2);
    Interval.QuadPart = -100000LL;
    while ( v5 != dword_140C398D8 )
      KeDelayExecutionThread(0, 0, &Interval);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  result = KeGetCurrentThread();
  PopAdpmLockThread = (__int64)result;
  PopAdaptiveContext = a1 == 0;
  return result;
}
