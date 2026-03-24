/*
 * XREFs of CmListGetNextElement @ 0x14066EA14
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405F35A0 (CmpFindSubKeyByNumberEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1405F7700 (CmQueryValueKey.c)
 *     CmpIsKeyStackDeleted @ 0x140648C60 (CmpIsKeyStackDeleted.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140649D20 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x14066E164 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14066E294 (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x14066E370 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x14066E3C0 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmSnapshotRMTxArray @ 0x14066E8B8 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x14066E974 (CmpIsCmRm.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406E385C (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmGetVisibleSubkeyCount @ 0x1406E3FDC (CmGetVisibleSubkeyCount.c)
 *     CmpSearchForTrans @ 0x14076666C (CmpSearchForTrans.c)
 *     CmpTransMgrPrepare @ 0x140768324 (CmpTransMgrPrepare.c)
 *     CmpLogCheckpoint @ 0x1407702A4 (CmpLogCheckpoint.c)
 *     CmpTransMgrRollback @ 0x140770D50 (CmpTransMgrRollback.c)
 *     CmUnRegisterCallback @ 0x140869C60 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x140875630 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x140875A44 (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x14087FDE8 (CmpLightWeightUpdateModificationActions.c)
 * Callees:
 *     <none>
 */

char *__fastcall CmListGetNextElement(_QWORD **a1, _QWORD **a2, int a3)
{
  _QWORD *v3; // rax

  v3 = *a2;
  if ( !*a2 )
  {
    v3 = *a1;
    *a2 = *a1;
  }
  if ( a1 == v3 )
    return 0LL;
  *a2 = (_QWORD *)*v3;
  return (char *)v3 - a3;
}
