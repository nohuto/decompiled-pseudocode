/*
 * XREFs of ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C000E224 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C003A13C (rimHandleAnyPnpRemovePendingDevices.c)
 *     xxxEnumDisplayMonitors @ 0x1C003AE40 (xxxEnumDisplayMonitors.c)
 *     UserIsWindowGdiScaled @ 0x1C003E220 (UserIsWindowGdiScaled.c)
 *     NtUserGetDC @ 0x1C003EFA0 (NtUserGetDC.c)
 *     GreGetDCPoint @ 0x1C0053880 (GreGetDCPoint.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C00724BC (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C0072B5C (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     xxxCreateThreadInfo @ 0x1C0076490 (xxxCreateThreadInfo.c)
 *     HMFreeObject @ 0x1C0077F50 (HMFreeObject.c)
 *     NtUserGetKeyState @ 0x1C0078A00 (NtUserGetKeyState.c)
 *     _GetKeyState @ 0x1C0078B50 (_GetKeyState.c)
 *     RealInternalSetProp @ 0x1C00798E0 (RealInternalSetProp.c)
 *     CreateProp @ 0x1C0079AA8 (CreateProp.c)
 *     HandleInputDestDestruction @ 0x1C0079C40 (HandleInputDestDestruction.c)
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1C007A39C (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     xxxInternalToUnicode @ 0x1C0081AB0 (xxxInternalToUnicode.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0085310 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C0086944 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     HMRemoveHandleForObject @ 0x1C00896E0 (HMRemoveHandleForObject.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C008E99C (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0091914 (CheckOrAcquireDwmStateLock.c)
 *     DrvNotifySessionStateChange @ 0x1C009F810 (DrvNotifySessionStateChange.c)
 *     EtwTraceQueueMessage @ 0x1C00A3AD0 (EtwTraceQueueMessage.c)
 *     HMMarkObjectDestroy @ 0x1C00A5550 (HMMarkObjectDestroy.c)
 *     CleanupInputDelegation @ 0x1C00A91F0 (CleanupInputDelegation.c)
 *     HMChangeOwnerThreadWorker @ 0x1C00AEC48 (HMChangeOwnerThreadWorker.c)
 *     RIMFreeSpecificDev @ 0x1C00BBF88 (RIMFreeSpecificDev.c)
 *     UserIsUserCritSecIn @ 0x1C00BCA90 (UserIsUserCritSecIn.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x1C00D20D0 (DrvIsNotUsingGraphicsDevice.c)
 *     DrvSessionHasAnyGraphicsDevice @ 0x1C00D87D0 (DrvSessionHasAnyGraphicsDevice.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0157D00 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1C017C760 (UserDeleteBaseWindowHandle.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C0192C64 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C0194E80 (DrvUpdateRemoteGraphicsDeviceList.c)
 *     RIMAddToActiveDevices @ 0x1C01B31F4 (RIMAddToActiveDevices.c)
 *     RIMRemoveFromActiveDevices @ 0x1C01B9190 (RIMRemoveFromActiveDevices.c)
 *     rimProcessHidInput @ 0x1C01D2DF8 (rimProcessHidInput.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C01E3C64 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall IS_USERCRIT_OWNED_AT_ALL(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  return ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 8)) != 0;
}
