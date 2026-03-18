/*
 * XREFs of CmListGetNextElement @ 0x140AF66A8
 * Callers:
 *     CmpIsCmRm @ 0x1406981A8 (CmpIsCmRm.c)
 *     CmpLogCheckpoint @ 0x1406989A4 (CmpLogCheckpoint.c)
 *     CmSnapshotRMTxArray @ 0x140699FE8 (CmSnapshotRMTxArray.c)
 *     CmpIsKeyStackDeleted @ 0x1406D3F5C (CmpIsKeyStackDeleted.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406D5368 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406DB080 (CmpFindSubKeyByNumberEx.c)
 *     CmpWalkOneLevel @ 0x1406DD8D0 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmGetVisibleSubkeyCount @ 0x140710798 (CmGetVisibleSubkeyCount.c)
 *     CmpSearchForTrans @ 0x140768C44 (CmpSearchForTrans.c)
 *     CmpTransMgrPrepare @ 0x140768FAC (CmpTransMgrPrepare.c)
 *     CmpTransMgrRollback @ 0x1407D0EB8 (CmpTransMgrRollback.c)
 *     CmUnRegisterCallback @ 0x140A0F270 (CmUnRegisterCallback.c)
 *     CmpCleanupLightWeightPrepare @ 0x140A1C3A4 (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140A1C694 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140A1C804 (CmpPrepareLightWeightTransaction.c)
 *     CmpRmAnalysisPhase @ 0x140A1ED04 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x140A1F108 (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x140A2A04C (CmpLightWeightUpdateModificationActions.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140A2A0A8 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF6160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF62F0 (CmpIsKeyDeletedForKeyBody.c)
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
