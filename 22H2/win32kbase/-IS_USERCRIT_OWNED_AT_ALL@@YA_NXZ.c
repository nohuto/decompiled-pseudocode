/*
 * XREFs of ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001C28 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     GreGetDCPoint @ 0x1C003B970 (GreGetDCPoint.c)
 *     ThreadLock @ 0x1C0045D00 (ThreadLock.c)
 *     RealGetProp @ 0x1C0045D80 (RealGetProp.c)
 *     ThreadUnlock1 @ 0x1C0045EE0 (ThreadUnlock1.c)
 *     ValidateHwndEx @ 0x1C0045FD0 (ValidateHwndEx.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ReferenceDwmApiPort @ 0x1C0047A70 (ReferenceDwmApiPort.c)
 *     ThreadLockAlways @ 0x1C0047B20 (ThreadLockAlways.c)
 *     _HMPheFromObject @ 0x1C00481A0 (_HMPheFromObject.c)
 *     ThreadUnlockWorker1 @ 0x1C0049E10 (ThreadUnlockWorker1.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C004A030 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     NtUserGetKeyState @ 0x1C004E960 (NtUserGetKeyState.c)
 *     _GetKeyState @ 0x1C004EAB0 (_GetKeyState.c)
 *     ValidateHandleSecure @ 0x1C004F140 (ValidateHandleSecure.c)
 *     HMFreeObject @ 0x1C004F310 (HMFreeObject.c)
 *     HandleInputDestDestruction @ 0x1C0052E4C (HandleInputDestDestruction.c)
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1C0055268 (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C0056F4C (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0056F9C (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     xxxEnumDisplayMonitors @ 0x1C00595A0 (xxxEnumDisplayMonitors.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C0064D44 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     xxxInternalToUnicode @ 0x1C006BCF0 (xxxInternalToUnicode.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00752D4 (rimHandleAnyPnpRemovePendingDevices.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0086ED4 (CheckOrAcquireDwmStateLock.c)
 *     RealInternalSetProp @ 0x1C0090860 (RealInternalSetProp.c)
 *     CreateProp @ 0x1C00909F8 (CreateProp.c)
 *     RealInternalRemoveProp @ 0x1C0090B90 (RealInternalRemoveProp.c)
 *     EtwTraceQueueMessage @ 0x1C0094D70 (EtwTraceQueueMessage.c)
 *     HMMarkObjectDestroy @ 0x1C0096FE0 (HMMarkObjectDestroy.c)
 *     CleanupInputDelegation @ 0x1C009AF40 (CleanupInputDelegation.c)
 *     UserIsWindowGdiScaled @ 0x1C009B0E0 (UserIsWindowGdiScaled.c)
 *     HMChangeOwnerThreadWorker @ 0x1C00A1CD8 (HMChangeOwnerThreadWorker.c)
 *     DrvNotifySessionStateChange @ 0x1C00A92D0 (DrvNotifySessionStateChange.c)
 *     UserIsUserCritSecIn @ 0x1C00A9350 (UserIsUserCritSecIn.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B2974 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     HMRemoveHandleForObject @ 0x1C00B3CF0 (HMRemoveHandleForObject.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x1C00C2820 (DrvIsNotUsingGraphicsDevice.c)
 *     RIMFreeSpecificDev @ 0x1C00C8F08 (RIMFreeSpecificDev.c)
 *     DrvSessionHasAnyGraphicsDevice @ 0x1C00CC3F0 (DrvSessionHasAnyGraphicsDevice.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0130400 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C0165ED4 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C01680F0 (DrvUpdateRemoteGraphicsDeviceList.c)
 *     RIMAddToActiveDevices @ 0x1C01863D8 (RIMAddToActiveDevices.c)
 *     RIMRemoveFromActiveDevices @ 0x1C018B4C4 (RIMRemoveFromActiveDevices.c)
 *     rimProcessHidInput @ 0x1C01A4D04 (rimProcessHidInput.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C01B5A44 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall IS_USERCRIT_OWNED_AT_ALL(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  return ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 8)) != 0;
}
