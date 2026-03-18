/*
 * XREFs of IoGetTopLevelIrp @ 0x1402A1CF0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1407233C0 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyWrite @ 0x1408509C0 (FsRtlCopyWrite.c)
 *     FsRtlCopyRead @ 0x14093CE10 (FsRtlCopyRead.c)
 *     FsRtlMdlReadDev @ 0x14093D400 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093D660 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
