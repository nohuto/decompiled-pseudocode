/*
 * XREFs of IoSetTopLevelIrp @ 0x140343AF0
 * Callers:
 *     MiCreateNewSection @ 0x1406A6414 (MiCreateNewSection.c)
 *     MiCreateImageOrDataSection @ 0x1407D12B0 (MiCreateImageOrDataSection.c)
 *     MiShareExistingControlArea @ 0x1407D1CAC (MiShareExistingControlArea.c)
 *     FsRtlCopyWrite @ 0x14084D5B0 (FsRtlCopyWrite.c)
 *     FsRtlCopyRead @ 0x140939DF0 (FsRtlCopyRead.c)
 *     FsRtlMdlReadDev @ 0x14093A3E0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093A640 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
