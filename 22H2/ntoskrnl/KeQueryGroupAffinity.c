/*
 * XREFs of KeQueryGroupAffinity @ 0x140322B10
 * Callers:
 *     MmCreatePeb @ 0x1406121F8 (MmCreatePeb.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     PopProcessorInformation @ 0x140780D7C (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x1407C75CC (PpmEnableWmiInterface.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x1408F3BB8 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     EtwpProcessorRundown @ 0x14093E8DC (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x14095AC60 (NtCreateProfile.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= (unsigned int)KeActiveProcessors[0] )
    return 0LL;
  else
    return qword_140CFC848[GroupNumber];
}
