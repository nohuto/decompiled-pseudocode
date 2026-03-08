/*
 * XREFs of KeQueryGroupAffinity @ 0x140296080
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     MmCreatePeb @ 0x140706A60 (MmCreatePeb.c)
 *     PopProcessorInformation @ 0x14078A138 (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x14084E6B0 (PpmEnableWmiInterface.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140996930 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     EtwpProcessorRundown @ 0x1409EC980 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x140A01750 (NtCreateProfile.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= (unsigned __int16)KeActiveProcessors )
    return 0LL;
  else
    return qword_140D1EFE8[GroupNumber];
}
