/*
 * XREFs of PsEnumProcesses @ 0x1406A5350
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1406B8208 (EtwpDisableTraceProviders.c)
 *     EtwpProcessThreadImageRundown @ 0x140797828 (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x1407BB39C (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x1407BFF5C (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x1407CBBB8 (PopEtEnergyTrackerCreate.c)
 *     PopEtEnergyTrackerSnapshotProcesses @ 0x1408F2CF8 (PopEtEnergyTrackerSnapshotProcesses.c)
 *     PsShutdownSystem @ 0x14090AB54 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x14093ECA8 (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x14094735C (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PsGetNextProcess @ 0x1406A5A80 (PsGetNextProcess.c)
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
