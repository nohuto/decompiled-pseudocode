/*
 * XREFs of IS_USERCRIT_OWNED_SHARED @ 0x1C00541E4
 * Callers:
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C004DBCC (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0053590 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxHkCallHook @ 0x1C0053C4C (xxxHkCallHook.c)
 *     xxxLoadHmodIndex @ 0x1C0054214 (xxxLoadHmodIndex.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C00783CC (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C007944C (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     UserResetPointer @ 0x1C011F200 (UserResetPointer.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C025798C (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 IS_USERCRIT_OWNED_SHARED()
{
  return ExIsResourceAcquiredSharedLite(gpresUser) != 0;
}
