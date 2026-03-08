/*
 * XREFs of GetObjectPath @ 0x1C004BB70
 * Callers:
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0047D64 (AMLIEvalPackageElement.c)
 *     AMLIFindNameSpaceObject @ 0x1C0048110 (AMLIFindNameSpaceObject.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C00485CC (AMLIGetNameSpaceObjectPath.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C00493A0 (Simulator_NotifyNamespaceCollision.c)
 *     CreateNativeNameSpaceObject @ 0x1C0049D38 (CreateNativeNameSpaceObject.c)
 *     GetFieldUnitRegionObj @ 0x1C004B944 (GetFieldUnitRegionObj.c)
 *     DebugNotify @ 0x1C004DB10 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C004DE10 (DebugRunMethod.c)
 *     RunMethodCallBack @ 0x1C004E5F0 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C0051E98 (DumpObject.c)
 *     AsyncEvalObject @ 0x1C00544D0 (AsyncEvalObject.c)
 *     NestAsyncEvalObject @ 0x1C005496C (NestAsyncEvalObject.c)
 *     ProcessEvalObj @ 0x1C0054C60 (ProcessEvalObj.c)
 *     SyncEvalObject @ 0x1C0054E8C (SyncEvalObject.c)
 *     Release @ 0x1C0055850 (Release.c)
 *     ResetSignal @ 0x1C00559C0 (ResetSignal.c)
 *     Acquire @ 0x1C0055C90 (Acquire.c)
 *     Wait @ 0x1C0059630 (Wait.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C004BBC8 (GetObjectPathNoLock.c)
 */

__int64 __fastcall GetObjectPath(__int64 a1)
{
  KIRQL v2; // bl
  __int64 ObjectPathNoLock; // rdi

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  ObjectPathNoLock = GetObjectPathNoLock(a1);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return ObjectPathNoLock;
}
