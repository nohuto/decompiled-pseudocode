/*
 * XREFs of CmpTransDereferenceTransaction @ 0x14066E000
 * Callers:
 *     CmpCreateKeyBody @ 0x140649DB0 (CmpCreateKeyBody.c)
 *     CmpCleanupLightWeightTransaction @ 0x14066DB30 (CmpCleanupLightWeightTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x14066DC10 (NtOpenKeyTransactedEx.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x14066DE54 (CmpTransSearchAddLightWeightTrans.c)
 *     CmRmFinalizeRecovery @ 0x1406A24AC (CmRmFinalizeRecovery.c)
 *     CmpDeleteKeyObject @ 0x1406E03B0 (CmpDeleteKeyObject.c)
 *     CmpCleanupRollbackPacket @ 0x14071B8E8 (CmpCleanupRollbackPacket.c)
 *     CmpTransSearchAddTrans @ 0x14076644C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1407666DC (CmpTransInitializeTransaction.c)
 *     NtCreateKeyTransacted @ 0x140769120 (NtCreateKeyTransacted.c)
 *     CmpCleanupTransactionState @ 0x140770144 (CmpCleanupTransactionState.c)
 *     CmpAbortRollbackPacket @ 0x14077A7CC (CmpAbortRollbackPacket.c)
 *     CmpRollbackTransactionArray @ 0x1408750C8 (CmpRollbackTransactionArray.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 */

void __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  HalPutDmaAdapter((PADAPTER_OBJECT)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
