/*
 * XREFs of W32GetThreadWin32Thread @ 0x1C004E3B0
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00031D0 (NtUserInjectKeyboardInput.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00097A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     ?vSetIncludeSprites@SURFACE@@SAXXZ @ 0x1C000DD90 (-vSetIncludeSprites@SURFACE@@SAXXZ.c)
 *     ?vClearIncludeSprites@SURFACE@@SAXXZ @ 0x1C000DDC0 (-vClearIncludeSprites@SURFACE@@SAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001BA1C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     HmgAllocateObjectAttr @ 0x1C001CC34 (HmgAllocateObjectAttr.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C00214A0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 *     GreCreateSemaphoreInternal @ 0x1C002B04C (GreCreateSemaphoreInternal.c)
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C002F3AC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C002F5A4 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0032000 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 *     GdiThreadCallout @ 0x1C00420F0 (GdiThreadCallout.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     W32GetCurrentThread @ 0x1C004DBF0 (W32GetCurrentThread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     NtUserGetHDevName @ 0x1C004F5B0 (NtUserGetHDevName.c)
 *     LeaveCrit @ 0x1C004F860 (LeaveCrit.c)
 *     HmgAllocateDcAttr @ 0x1C00500EC (HmgAllocateDcAttr.c)
 *     HmgAlloc @ 0x1C0052E60 (HmgAlloc.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0055BB0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0057B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     UserGlobalAtomTableCallout @ 0x1C0072268 (UserGlobalAtomTableCallout.c)
 *     UserThreadCallout @ 0x1C0074BD0 (UserThreadCallout.c)
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     EtwTraceQueueMessage @ 0x1C00A3AD0 (EtwTraceQueueMessage.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00C3DD0 (UserSessionSwitchEnterCrit.c)
 *     ChangeAcquireResourceType @ 0x1C00C4300 (ChangeAcquireResourceType.c)
 *     LeaveRenderBlock @ 0x1C00D33D0 (LeaveRenderBlock.c)
 *     EnterRenderBlock @ 0x1C00D3400 (EnterRenderBlock.c)
 *     ?bIncludeSprites@SURFACE@@SAHXZ @ 0x1C00D3C20 (-bIncludeSprites@SURFACE@@SAHXZ.c)
 *     HmgFreeObjectAttr @ 0x1C00D43C0 (HmgFreeObjectAttr.c)
 *     UserIsCurrentThreadGdiScaled @ 0x1C00D83A0 (UserIsCurrentThreadGdiScaled.c)
 *     ?GetCallbackCount@@YACXZ @ 0x1C00EDBA8 (-GetCallbackCount@@YACXZ.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1C01539B8 (LockIntoSharedUserCritDeferredUnlockList.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0153CA0 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0153D04 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1C0155E9C (-ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z.c)
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1C0156108 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1C015646C (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
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
 *     ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1C017BB80 (-LkdForAtomAdditionFailure@@YAXPEAXJ@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C0185010 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     GdiThreadCalloutCleanup @ 0x1C01990E0 (GdiThreadCalloutCleanup.c)
 *     ?WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C020C230 (-WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     HMValidateCatHandleNoRip @ 0x1C0246EEC (HMValidateCatHandleNoRip.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall W32GetThreadWin32Thread(__int64 a1)
{
  __int64 result; // rax

  result = PsGetThreadWin32Thread(a1);
  if ( result )
    return *(_QWORD *)result;
  return result;
}
