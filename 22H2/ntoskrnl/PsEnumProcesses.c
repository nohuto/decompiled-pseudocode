/*
 * XREFs of PsEnumProcesses @ 0x14062B870
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1407147C8 (EtwpDisableTraceProviders.c)
 *     EtwpProcessThreadImageRundown @ 0x1407924B8 (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x1407BB3CC (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x1407C0200 (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x1407CB968 (PopEtEnergyTrackerCreate.c)
 *     PopEtEnergyTrackerSnapshotProcesses @ 0x1408F2BE8 (PopEtEnergyTrackerSnapshotProcesses.c)
 *     PsShutdownSystem @ 0x14090AA44 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x14093EB28 (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x1409471DC (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PsGetNextProcess @ 0x14062BFA0 (PsGetNextProcess.c)
 */

__int64 __fastcall PsEnumProcesses(__int64 (__fastcall *a1)(__int64, __int64), __int64 a2)
{
  void *v4; // rcx
  __int64 NextProcess; // rax
  void *v6; // rbx
  int v7; // edi

  v4 = 0LL;
  while ( 1 )
  {
    NextProcess = PsGetNextProcess(v4);
    v6 = (void *)NextProcess;
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
