/*
 * XREFs of IoSetTopLevelIrp @ 0x1402D73D0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1406545A0 (MiCreateImageOrDataSection.c)
 *     MiShareExistingControlArea @ 0x14065547C (MiShareExistingControlArea.c)
 *     MiCreateNewSection @ 0x140700490 (MiCreateNewSection.c)
 *     FsRtlCopyRead @ 0x14088A660 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14088A8E0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14088B0A0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088B300 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
