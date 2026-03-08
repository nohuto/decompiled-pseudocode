/*
 * XREFs of CmListGetNextElement @ 0x140AF2008
 * Callers:
 *     CmpSearchForTrans @ 0x1406B5904 (CmpSearchForTrans.c)
 *     CmpIsKeyStackDeleted @ 0x1406B5978 (CmpIsKeyStackDeleted.c)
 *     CmpTransMgrPrepare @ 0x1406B5D04 (CmpTransMgrPrepare.c)
 *     CmGetVisibleSubkeyCount @ 0x1406B7D28 (CmGetVisibleSubkeyCount.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpIsCmRm @ 0x1407346E8 (CmpIsCmRm.c)
 *     CmpLogCheckpoint @ 0x140735720 (CmpLogCheckpoint.c)
 *     CmSnapshotRMTxArray @ 0x14074C2A8 (CmSnapshotRMTxArray.c)
 *     CmpTransMgrRollback @ 0x140781FE8 (CmpTransMgrRollback.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1407ABF48 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpFindSubKeyByNumberEx @ 0x1407ACFB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 *     CmUnRegisterCallback @ 0x140A0C560 (CmUnRegisterCallback.c)
 *     CmpCleanupLightWeightPrepare @ 0x140A19654 (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140A19944 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140A19AB4 (CmpPrepareLightWeightTransaction.c)
 *     CmpRmAnalysisPhase @ 0x140A1BFB0 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x140A1C3B4 (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x140A272EC (CmpLightWeightUpdateModificationActions.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140A27348 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF21E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
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
