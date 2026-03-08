/*
 * XREFs of ExGetHandlePointer @ 0x1403120A0
 * Callers:
 *     NtWriteFile @ 0x1406B3A60 (NtWriteFile.c)
 *     PspReferenceCidTableEntry @ 0x1406DC0A0 (PspReferenceCidTableEntry.c)
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 *     ObInheritObjectHandle @ 0x140706174 (ObInheritObjectHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407118C4 (ObpReferenceProcessObjectByHandle.c)
 *     ObpEnumFindHandleProcedure @ 0x14075FAD0 (ObpEnumFindHandleProcedure.c)
 *     ObpCloseHandle @ 0x1407C2500 (ObpCloseHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     AlpcpLookupMessage @ 0x1407CA7C0 (AlpcpLookupMessage.c)
 *     ObWaitForMultipleObjects @ 0x1407D79B0 (ObWaitForMultipleObjects.c)
 *     ObCloseHandleTableEntry @ 0x1407D8274 (ObCloseHandleTableEntry.c)
 *     ObSetHandleAttributes @ 0x1407D8910 (ObSetHandleAttributes.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1407D8D38 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObpReferenceObjectByHandle @ 0x1407DF424 (ObpReferenceObjectByHandle.c)
 *     IopIsFileOpenOrSection @ 0x1408A0330 (IopIsFileOpenOrSection.c)
 *     ObpCaptureHandleInformation @ 0x1408A0A50 (ObpCaptureHandleInformation.c)
 *     ObpCaptureHandleInformationEx @ 0x1408A0B60 (ObpCaptureHandleInformationEx.c)
 *     PnpHandleProcessWalkWorker @ 0x1409551D0 (PnpHandleProcessWalkWorker.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140978240 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x140979114 (ObpAuditObjectAccess.c)
 *     EtwpObjectHandleEnumCallback @ 0x1409EC330 (EtwpObjectHandleEnumCallback.c)
 *     ExQueryProcessHandleInformation @ 0x1409F60F4 (ExQueryProcessHandleInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExGetHandlePointer(__int64 *a1)
{
  return (*a1 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
}
