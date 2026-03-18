/*
 * XREFs of PsLookupProcessByProcessId @ 0x1406FA420
 * Callers:
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B7EA8 (PspOneDirectionSecurityDomainCombine.c)
 *     PsOpenProcess @ 0x1406F3DB0 (PsOpenProcess.c)
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 *     PfpCopyEvent @ 0x14074B2E0 (PfpCopyEvent.c)
 *     EtwpPsProvTraceProcess @ 0x1407528E0 (EtwpPsProvTraceProcess.c)
 *     PfpRpControlRequestUpdate @ 0x1407B5888 (PfpRpControlRequestUpdate.c)
 *     EtwpProcessThreadImageRundown @ 0x140827860 (EtwpProcessThreadImageRundown.c)
 *     SeAuditProcessCreation @ 0x140842A54 (SeAuditProcessCreation.c)
 *     PiUEventHandleVetoEvent @ 0x140882E18 (PiUEventHandleVetoEvent.c)
 *     IopLiveDumpAddProcessFilter @ 0x14094C50C (IopLiveDumpAddProcessFilter.c)
 *     PnpLogVetoInformation @ 0x140964490 (PnpLogVetoInformation.c)
 *     PopInitSystemSleeperThread @ 0x14098B850 (PopInitSystemSleeperThread.c)
 *     PopDiagTraceAppPowerMessage @ 0x14098C864 (PopDiagTraceAppPowerMessage.c)
 *     EtwpEnableDisableUMGL @ 0x1409E7408 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409E7A0C (EtwpUpdatePerProcessTracing.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409EC694 (EtwpGetPrivateSessionTraceHandle.c)
 *     CmpDumpOneKeyBody @ 0x140A17280 (CmpDumpOneKeyBody.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 *     ViCreateProcessCallbackInternal @ 0x140AD7224 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201DF4 (ExfAcquireReleasePushLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x140289E70 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x140289ECC (PsIsProcessInSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     PspReferenceCidTableEntry @ 0x1406FB260 (PspReferenceCidTableEntry.c)
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
