/*
 * XREFs of PsEnumProcesses @ 0x1407CFA2C
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1406BF048 (EtwpDisableTraceProviders.c)
 *     PopEtEnergyTrackerQuery @ 0x1407B897C (PopEtEnergyTrackerQuery.c)
 *     EtwpProcessThreadImageRundown @ 0x140827860 (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x14082E9E0 (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x140847C60 (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x14085278C (PopEtEnergyTrackerCreate.c)
 *     PsShutdownSystem @ 0x1409B35F4 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x1409EFA84 (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x1409F3488 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     PsGetNextProcess @ 0x1407446C0 (PsGetNextProcess.c)
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
