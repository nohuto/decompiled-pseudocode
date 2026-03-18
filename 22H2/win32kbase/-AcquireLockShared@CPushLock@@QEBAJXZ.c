/*
 * XREFs of ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00A73C0
 * Callers:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C000B570 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C00A7360 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?BringISMUptodate@CActivationObjectManager@@QEBAXXZ @ 0x1C00C2C38 (-BringISMUptodate@CActivationObjectManager@@QEBAXXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00D28F8 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?CheckProcessForeground@ForegroundManagement@@YA_NK@Z @ 0x1C012E850 (-CheckProcessForeground@ForegroundManagement@@YA_NK@Z.c)
 *     ?ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1C012E8BC (-ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z.c)
 *     ?GetForegroundWindow@ForegroundManagement@@YAPEAUHWND__@@XZ @ 0x1C012E9B0 (-GetForegroundWindow@ForegroundManagement@@YAPEAUHWND__@@XZ.c)
 *     ?QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectData@@@Z @ 0x1C012EA24 (-QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectDat.c)
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1C0130110 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ?GetCount@CContentRects@@SAIXZ @ 0x1C01301D0 (-GetCount@CContentRects@@SAIXZ.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C01DC070 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     ?GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01E4CB0 (-GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z @ 0x1C01E4F14 (-IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z.c)
 *     ?ivPreReceiveCallback@CBaseInput@@KAPEAXPEBX@Z @ 0x1C01EE720 (-ivPreReceiveCallback@CBaseInput@@KAPEAXPEBX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPushLock::AcquireLockShared(CPushLock *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  return 0LL;
}
