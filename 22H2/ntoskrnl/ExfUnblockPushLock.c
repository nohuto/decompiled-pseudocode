/*
 * XREFs of ExfUnblockPushLock @ 0x1403F8BE0
 * Callers:
 *     CmpFreeCallbackObjectContexts @ 0x1405D6B4C (CmpFreeCallbackObjectContexts.c)
 *     ExUnlockHandleTableEntry @ 0x1405D6CB0 (ExUnlockHandleTableEntry.c)
 *     AlpcpLookupMessage @ 0x1405E6870 (AlpcpLookupMessage.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     ExpDuplicateSingleHandle @ 0x1406069E0 (ExpDuplicateSingleHandle.c)
 *     ObInheritObjectHandle @ 0x140606A84 (ObInheritObjectHandle.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x14061BE80 (RtlpAtomMapAtomToHandleEntry.c)
 *     PspReferenceCidTableEntry @ 0x140625E70 (PspReferenceCidTableEntry.c)
 *     MiLockImageSection @ 0x14063C7FC (MiLockImageSection.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14063E320 (ObpReferenceObjectByHandleWithTag.c)
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 *     ObCloseHandleTableEntry @ 0x140642D80 (ObCloseHandleTableEntry.c)
 *     ObpProcessRemoveObjectQueue @ 0x140663DF0 (ObpProcessRemoveObjectQueue.c)
 *     ObpEnumFindHandleProcedure @ 0x140664BC0 (ObpEnumFindHandleProcedure.c)
 *     ObQueryObjectAuditingByHandle @ 0x140664CA0 (ObQueryObjectAuditingByHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140665280 (ObpReferenceProcessObjectByHandle.c)
 *     CmpWorkerEngineWorker @ 0x140665480 (CmpWorkerEngineWorker.c)
 *     CmpPerformUnloadKey @ 0x14066CBFC (CmpPerformUnloadKey.c)
 *     CmpCommitLightWeightTransaction @ 0x14066D9B8 (CmpCommitLightWeightTransaction.c)
 *     PspClearProcessThreadCidRefs @ 0x1406C5940 (PspClearProcessThreadCidRefs.c)
 *     ObReferenceFileObjectForWrite @ 0x1406C92D0 (ObReferenceFileObjectForWrite.c)
 *     ObSetHandleAttributes @ 0x1406F9440 (ObSetHandleAttributes.c)
 *     CmpCompleteUnloadKey @ 0x14071BF04 (CmpCompleteUnloadKey.c)
 *     CmpTransSearchAddTrans @ 0x14076644C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1407666DC (CmpTransInitializeTransaction.c)
 *     CmpEnumerateCallback @ 0x14077CCB0 (CmpEnumerateCallback.c)
 *     PopBatteryWorker @ 0x14077F710 (PopBatteryWorker.c)
 *     IopIsFileOpenOrSection @ 0x140895970 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x1408A1460 (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x1408DC450 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1408DC900 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x1408DCB14 (ObpAuditObjectAccess.c)
 *     PsSetVmProcessorHostProcess @ 0x140909DF8 (PsSetVmProcessorHostProcess.c)
 *     ExQueryProcessHandleInformation @ 0x14094C8F4 (ExQueryProcessHandleInformation.c)
 *     ExpSnapShotHandleTables @ 0x14094CC80 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1402F4D68 (ExpUnblockPushLock.c)
 */

int __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  return ExpUnblockPushLock(a1, a2, 0);
}
