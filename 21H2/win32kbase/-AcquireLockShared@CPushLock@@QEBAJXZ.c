/*
 * XREFs of ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0096270
 * Callers:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C00021F0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C0095B9C (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C0096200 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 *     ?BringISMUptodate@CActivationObjectManager@@QEBAXXZ @ 0x1C00C4AF4 (-BringISMUptodate@CActivationObjectManager@@QEBAXXZ.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C00CFEF0 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00DA978 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?CheckProcessForeground@ForegroundManagement@@YA_NK@Z @ 0x1C0142740 (-CheckProcessForeground@ForegroundManagement@@YA_NK@Z.c)
 *     ?ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1C014297C (-ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z.c)
 *     ?GetForegroundWindow@ForegroundManagement@@YAPEAUHWND__@@XZ @ 0x1C0142A70 (-GetForegroundWindow@ForegroundManagement@@YAPEAUHWND__@@XZ.c)
 *     ?QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectData@@@Z @ 0x1C0142ABC (-QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectDat.c)
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1C0144660 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ?GetCount@CContentRects@@SAIXZ @ 0x1C0144720 (-GetCount@CContentRects@@SAIXZ.c)
 *     ?GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01E46A0 (-GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z @ 0x1C01E4934 (-IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z.c)
 *     ?ivPreReceiveCallback@CBaseInput@@KAPEAXPEBX@Z @ 0x1C01EFE60 (-ivPreReceiveCallback@CBaseInput@@KAPEAXPEBX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPushLock::AcquireLockShared(CPushLock *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  return 0LL;
}
