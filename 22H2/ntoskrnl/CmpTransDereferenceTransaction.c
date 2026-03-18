/*
 * XREFs of CmpTransDereferenceTransaction @ 0x140768F38
 * Callers:
 *     NtCreateKeyTransacted @ 0x140692240 (NtCreateKeyTransacted.c)
 *     CmpCleanupRollbackPacket @ 0x140693528 (CmpCleanupRollbackPacket.c)
 *     CmpCleanupTransactionState @ 0x14069831C (CmpCleanupTransactionState.c)
 *     CmpTransInitializeTransaction @ 0x14069846C (CmpTransInitializeTransaction.c)
 *     CmpAbortRollbackPacket @ 0x140699F88 (CmpAbortRollbackPacket.c)
 *     CmpTransSearchAddTrans @ 0x140768A4C (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x140768DAC (CmpTransSearchAddLightWeightTrans.c)
 *     CmpCleanupLightWeightTransaction @ 0x1407D0F34 (CmpCleanupLightWeightTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x1407D3A80 (NtOpenKeyTransactedEx.c)
 *     CmRmFinalizeRecovery @ 0x1407E8CA8 (CmRmFinalizeRecovery.c)
 *     CmpRollbackTransactionArray @ 0x140A1E7B0 (CmpRollbackTransactionArray.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
