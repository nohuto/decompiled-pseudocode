/*
 * XREFs of CmpTransDereferenceTransaction @ 0x1406B5C90
 * Callers:
 *     CmpTransSearchAddTrans @ 0x1406B570C (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406B5B04 (CmpTransSearchAddLightWeightTrans.c)
 *     NtCreateKeyTransacted @ 0x1406BB890 (NtCreateKeyTransacted.c)
 *     CmRmFinalizeRecovery @ 0x140733440 (CmRmFinalizeRecovery.c)
 *     CmpCleanupTransactionState @ 0x14073526C (CmpCleanupTransactionState.c)
 *     CmpTransInitializeTransaction @ 0x1407353BC (CmpTransInitializeTransaction.c)
 *     CmpCleanupRollbackPacket @ 0x14074A888 (CmpCleanupRollbackPacket.c)
 *     CmpAbortRollbackPacket @ 0x14074C8DC (CmpAbortRollbackPacket.c)
 *     CmpCleanupLightWeightTransaction @ 0x140782064 (CmpCleanupLightWeightTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x140784470 (NtOpenKeyTransactedEx.c)
 *     CmpRollbackTransactionArray @ 0x140A1BA5C (CmpRollbackTransactionArray.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
