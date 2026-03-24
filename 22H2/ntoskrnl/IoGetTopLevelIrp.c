/*
 * XREFs of IoGetTopLevelIrp @ 0x1402D73F0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1406545A0 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x14088A660 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14088A8E0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14088B0A0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088B300 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
