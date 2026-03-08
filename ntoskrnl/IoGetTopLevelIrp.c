/*
 * XREFs of IoGetTopLevelIrp @ 0x140343AD0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1407D12B0 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyWrite @ 0x14084D5B0 (FsRtlCopyWrite.c)
 *     FsRtlCopyRead @ 0x140939DF0 (FsRtlCopyRead.c)
 *     FsRtlMdlReadDev @ 0x14093A3E0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093A640 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
