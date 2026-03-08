/*
 * XREFs of DestroyExclusiveUserCritDeferredUnlockList @ 0x1C004E2E0
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00031D0 (NtUserInjectKeyboardInput.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00097A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     NtUserGetHDevName @ 0x1C004F5B0 (NtUserGetHDevName.c)
 *     LeaveCrit @ 0x1C004F860 (LeaveCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00C3DD0 (UserSessionSwitchEnterCrit.c)
 *     ChangeAcquireResourceType @ 0x1C00C4300 (ChangeAcquireResourceType.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C0169140 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C01718B0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0172020 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0172660 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C0172A60 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0173440 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C0173C50 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C01746E0 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0175990 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0176950 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 DestroyExclusiveUserCritDeferredUnlockList()
{
  unsigned int v0; // ebx
  struct tagKERNELHANDLETABLEENTRY *v1; // rdi
  __int64 v2; // rax
  __int64 result; // rax

  v0 = 0;
  if ( gbInDestroyExclusiveUserCritDeferredUnlockList )
    result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4262LL);
  gbInDestroyExclusiveUserCritDeferredUnlockList = 1;
  if ( gphePrimaryDestroyTarget )
    result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4265LL);
  v1 = gpExclusiveUserCritDeferredUnlockListHead;
  if ( gpExclusiveUserCritDeferredUnlockListHead )
  {
    do
    {
      gpExclusiveUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v1 + 2);
      v2 = *(_QWORD *)v1;
      *((_QWORD *)v1 + 2) = 0LL;
      if ( !*(_DWORD *)(v2 + 8) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4278LL);
      if ( *(_DWORD *)(*(_QWORD *)v1 + 8LL) > 1u )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4289LL);
      result = HMUnlockObject(*(_QWORD *)v1);
      v1 = gpExclusiveUserCritDeferredUnlockListHead;
      ++v0;
    }
    while ( gpExclusiveUserCritDeferredUnlockListHead );
    if ( v0 > gcSecondaryDestroyTargets )
      result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4305LL);
  }
  if ( v0 != gcDeferredDestroyTargets )
    result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4306LL);
  gcSecondaryDestroyTargets = 0;
  gcDeferredDestroyTargets = 0;
  gbInDestroyExclusiveUserCritDeferredUnlockList = 0;
  return result;
}
