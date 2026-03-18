/*
 * XREFs of GetObjectPath @ 0x1C004BB90
 * Callers:
 *     AMLIAsyncEvalObject @ 0x1C0047908 (AMLIAsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047BBC (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0047D84 (AMLIEvalPackageElement.c)
 *     AMLIFindNameSpaceObject @ 0x1C0048130 (AMLIFindNameSpaceObject.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C00485EC (AMLIGetNameSpaceObjectPath.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C00493C0 (Simulator_NotifyNamespaceCollision.c)
 *     CreateNativeNameSpaceObject @ 0x1C0049D58 (CreateNativeNameSpaceObject.c)
 *     GetFieldUnitRegionObj @ 0x1C004B964 (GetFieldUnitRegionObj.c)
 *     DebugNotify @ 0x1C004DB30 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C004DE30 (DebugRunMethod.c)
 *     RunMethodCallBack @ 0x1C004E610 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C0051EB8 (DumpObject.c)
 *     AsyncEvalObject @ 0x1C00544F0 (AsyncEvalObject.c)
 *     NestAsyncEvalObject @ 0x1C005498C (NestAsyncEvalObject.c)
 *     ProcessEvalObj @ 0x1C0054C80 (ProcessEvalObj.c)
 *     SyncEvalObject @ 0x1C0054EAC (SyncEvalObject.c)
 *     Release @ 0x1C0055870 (Release.c)
 *     ResetSignal @ 0x1C00559E0 (ResetSignal.c)
 *     Acquire @ 0x1C0055CB0 (Acquire.c)
 *     Wait @ 0x1C0059650 (Wait.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C004BBE8 (GetObjectPathNoLock.c)
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
