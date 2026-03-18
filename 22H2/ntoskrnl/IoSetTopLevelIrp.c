/*
 * XREFs of IoSetTopLevelIrp @ 0x1402A1D10
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1407233C0 (MiCreateImageOrDataSection.c)
 *     MiShareExistingControlArea @ 0x140723D4C (MiShareExistingControlArea.c)
 *     MiCreateNewSection @ 0x140746A00 (MiCreateNewSection.c)
 *     FsRtlCopyWrite @ 0x1408509C0 (FsRtlCopyWrite.c)
 *     FsRtlCopyRead @ 0x14093CE10 (FsRtlCopyRead.c)
 *     FsRtlMdlReadDev @ 0x14093D400 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093D660 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
