/*
 * XREFs of W32GetThreadWin32Thread @ 0x1C0046340
 * Callers:
 *     ?vSetIncludeSprites@SURFACE@@SAXXZ @ 0x1C000F680 (-vSetIncludeSprites@SURFACE@@SAXXZ.c)
 *     ?vClearIncludeSprites@SURFACE@@SAXXZ @ 0x1C000F6B0 (-vClearIncludeSprites@SURFACE@@SAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003881C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     HmgAlloc @ 0x1C003DD30 (HmgAlloc.c)
 *     W32GetCurrentThread @ 0x1C0046320 (W32GetCurrentThread.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0046370 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     UserThreadCallout @ 0x1C0050B50 (UserThreadCallout.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 *     UserGlobalAtomTableCallout @ 0x1C0059240 (UserGlobalAtomTableCallout.c)
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0075FAC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C00761A4 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0077C00 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 *     GreCreateSemaphoreInternal @ 0x1C0077FFC (GreCreateSemaphoreInternal.c)
 *     HmgAllocateObjectAttr @ 0x1C008A91C (HmgAllocateObjectAttr.c)
 *     GdiThreadCallout @ 0x1C008AB80 (GdiThreadCallout.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C008F8D0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 *     EtwTraceQueueMessage @ 0x1C0094D70 (EtwTraceQueueMessage.c)
 *     LeaveRenderBlock @ 0x1C00C3E40 (LeaveRenderBlock.c)
 *     EnterRenderBlock @ 0x1C00C3E70 (EnterRenderBlock.c)
 *     ?bIncludeSprites@SURFACE@@SAHXZ @ 0x1C00C47E0 (-bIncludeSprites@SURFACE@@SAHXZ.c)
 *     HmgFreeObjectAttr @ 0x1C00C4E90 (HmgFreeObjectAttr.c)
 *     UserIsCurrentThreadGdiScaled @ 0x1C00CBFC0 (UserIsCurrentThreadGdiScaled.c)
 *     ?GetCallbackCount@@YACXZ @ 0x1C00DEF46 (-GetCallbackCount@@YACXZ.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1C012CAC8 (LockIntoSharedUserCritDeferredUnlockList.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C012CCB8 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C012CD1C (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1C012E8BC (-ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z.c)
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1C012EB28 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1C012EE8C (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 *     ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1C014EE00 (-LkdForAtomAdditionFailure@@YAXPEAXJ@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C0158350 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     GdiThreadCalloutCleanup @ 0x1C016C290 (GdiThreadCalloutCleanup.c)
 *     ?WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C01DD720 (-WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     HMValidateCatHandleNoRip @ 0x1C02083B4 (HMValidateCatHandleNoRip.c)
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
