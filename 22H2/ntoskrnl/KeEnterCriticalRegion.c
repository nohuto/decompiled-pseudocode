/*
 * XREFs of KeEnterCriticalRegion @ 0x1402D19A0
 * Callers:
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     NtQueryInformationToken @ 0x1406D0BB0 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x1406ED790 (NtSetInformationToken.c)
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 *     EtwpNotifyGuid @ 0x1407150A4 (EtwpNotifyGuid.c)
 *     EtwpAddGuidEntry @ 0x140717450 (EtwpAddGuidEntry.c)
 *     CmpCompleteUnloadKey @ 0x14071BF04 (CmpCompleteUnloadKey.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087DD54 (CmFcManagerUpdateFeatureConfigurations.c)
 *     EtwpCoverageSamplerStart @ 0x1409471DC (EtwpCoverageSamplerStart.c)
 * Callees:
 *     <none>
 */

void KeEnterCriticalRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
}
