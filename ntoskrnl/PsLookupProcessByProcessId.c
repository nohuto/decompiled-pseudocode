/*
 * XREFs of PsLookupProcessByProcessId @ 0x1406AC100
 * Callers:
 *     PsOpenProcess @ 0x1406ABCC0 (PsOpenProcess.c)
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14070C414 (PspOneDirectionSecurityDomainCombine.c)
 *     PfpRpControlRequestUpdate @ 0x1407DF508 (PfpRpControlRequestUpdate.c)
 *     PfpCopyEvent @ 0x1407E5C10 (PfpCopyEvent.c)
 *     EtwpPsProvTraceProcess @ 0x1407E8D90 (EtwpPsProvTraceProcess.c)
 *     EtwpProcessThreadImageRundown @ 0x14080DC50 (EtwpProcessThreadImageRundown.c)
 *     SeAuditProcessCreation @ 0x140840400 (SeAuditProcessCreation.c)
 *     PiUEventHandleVetoEvent @ 0x14087E074 (PiUEventHandleVetoEvent.c)
 *     IopLiveDumpAddProcessFilter @ 0x1409494EC (IopLiveDumpAddProcessFilter.c)
 *     PnpLogVetoInformation @ 0x140961470 (PnpLogVetoInformation.c)
 *     PopInitSystemSleeperThread @ 0x1409887A0 (PopInitSystemSleeperThread.c)
 *     PopDiagTraceAppPowerMessage @ 0x1409897B4 (PopDiagTraceAppPowerMessage.c)
 *     EtwpEnableDisableUMGL @ 0x1409E4568 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409E4B6C (EtwpUpdatePerProcessTracing.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409E97F4 (EtwpGetPrivateSessionTraceHandle.c)
 *     CmpDumpOneKeyBody @ 0x140A14530 (CmpDumpOneKeyBody.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 *     ViCreateProcessCallbackInternal @ 0x140AD3224 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201D54 (ExfAcquireReleasePushLockExclusive.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x1402484DC (PsIsProcessInSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PspReferenceCidTableEntry @ 0x1406DC0A0 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS *Process)
{
  struct _KTHREAD *CurrentThread; // rdi
  PEPROCESS *v3; // r14
  __int64 v4; // rbx
  __int64 CurrentServerSilo; // rsi
  bool v6; // zf
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = Process;
  LOBYTE(Process) = 3;
  --CurrentThread->SpecialApcDisable;
  v4 = PspReferenceCidTableEntry(ProcessId, Process);
  if ( v4 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( (*(_DWORD *)(v4 + 1124) & 0x4000000) == 0 )
    {
      _InterlockedOr(v8, 0);
      if ( (*(_QWORD *)(v4 + 1080) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive(v4 + 1080);
      if ( (*(_DWORD *)(v4 + 1124) & 0x4000000) == 0 )
        goto LABEL_13;
    }
    if ( !PsIsProcessInSilo((struct _KPROCESS *)v4, CurrentServerSilo) )
    {
LABEL_13:
      ObfDereferenceObjectWithTag((PVOID)v4, 0x746C6644u);
      v4 = 0LL;
    }
  }
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !v4 )
    return -1073741813;
  *v3 = (PEPROCESS)v4;
  return 0;
}
