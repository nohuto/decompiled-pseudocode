/*
 * XREFs of PsEnumProcesses @ 0x1407809CC
 * Callers:
 *     EtwpDisableTraceProviders @ 0x140693E28 (EtwpDisableTraceProviders.c)
 *     PopEtEnergyTrackerQuery @ 0x140767578 (PopEtEnergyTrackerQuery.c)
 *     EtwpProcessThreadImageRundown @ 0x14080DC50 (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x140826970 (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x140844B00 (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x14084F34C (PopEtEnergyTrackerCreate.c)
 *     PsShutdownSystem @ 0x1409B05A4 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x1409ECBF4 (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x1409F05F8 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PsGetNextProcess @ 0x1406AA530 (PsGetNextProcess.c)
 */

__int64 __fastcall PsEnumProcesses(__int64 (__fastcall *a1)(__int64 *, __int64), __int64 a2)
{
  __int64 *v4; // rcx
  __int64 *NextProcess; // rax
  __int64 *v6; // rbx
  int v7; // edi

  v4 = 0LL;
  while ( 1 )
  {
    NextProcess = PsGetNextProcess(v4);
    v6 = NextProcess;
    if ( !NextProcess )
      break;
    v7 = a1(NextProcess, a2);
    v4 = v6;
    if ( v7 < 0 )
    {
      ObfDereferenceObjectWithTag(v6, 0x6E457350u);
      return (unsigned int)v7;
    }
  }
  return 0LL;
}
