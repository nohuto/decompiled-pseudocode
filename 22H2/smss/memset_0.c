/*
 * XREFs of memset_0 @ 0x140011B7F
 * Callers:
 *     SmpStartCsr @ 0x140002100 (SmpStartCsr.c)
 *     SmpInitializeControlBlock @ 0x1400037C0 (SmpInitializeControlBlock.c)
 *     SmscpExecuteInitialCommand @ 0x1400042A0 (SmscpExecuteInitialCommand.c)
 *     SmExecPgmEx @ 0x140004348 (SmExecPgmEx.c)
 *     SmscpLoadSubSystem @ 0x14000440C (SmscpLoadSubSystem.c)
 *     SmpInit @ 0x140006E54 (SmpInit.c)
 *     SmpPagefileInitialize @ 0x140008088 (SmpPagefileInitialize.c)
 *     SmpSaveOldPageFiles @ 0x14000A388 (SmpSaveOldPageFiles.c)
 *     BaseFindFirstDevice @ 0x1400111F8 (BaseFindFirstDevice.c)
 *     RtlStringCbPrintfExW @ 0x140016690 (RtlStringCbPrintfExW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x140016854 (RtlStringExHandleOtherFlagsW.c)
 *     SmpLoadSubSystem @ 0x1400172BC (SmpLoadSubSystem.c)
 *     SmpRenameTargetFile @ 0x140017798 (SmpRenameTargetFile.c)
 *     SmscpNotifySmOfFailure @ 0x140018808 (SmscpNotifySmOfFailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
