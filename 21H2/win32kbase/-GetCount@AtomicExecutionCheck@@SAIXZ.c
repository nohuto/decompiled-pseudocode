/*
 * XREFs of ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0029C98
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0003160 (NtUserInjectKeyboardInput.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00070A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     NtUserReleaseDC @ 0x1C0029480 (NtUserReleaseDC.c)
 *     NtUserGetDC @ 0x1C00295D0 (NtUserGetDC.c)
 *     LeaveCrit @ 0x1C0029B70 (LeaveCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00305C8 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0059C80 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ChangeAcquireResourceType @ 0x1C00B4B70 (ChangeAcquireResourceType.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00B8A10 (UserSessionSwitchEnterCrit.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00D3340 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C015322C (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C015B1B0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C015BD40 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C015C5F0 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C015C9F0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C015D580 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C015DD80 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C015E990 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0160100 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0161000 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 AtomicExecutionCheck::GetCount(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int *v4; // rax
  unsigned int *v6; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
  v6 = 0LL;
  if ( (int)PsTlsGetValue(*((unsigned int *)gpxsGlobals + 12), &v6) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
LABEL_7:
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2CuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 44LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
LABEL_10:
    v4 = v6;
    if ( !v6 )
      return v0;
    return *v4;
  }
  v4 = v6;
  if ( !v6 )
  {
    if ( !PsGetCurrentThreadWin32Thread() )
      goto LABEL_10;
    goto LABEL_7;
  }
  return *v4;
}
