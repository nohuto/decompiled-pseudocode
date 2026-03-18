/*
 * XREFs of PsLookupProcessByProcessId @ 0x1407A8720
 * Callers:
 *     PspOneDirectionSecurityDomainCombine @ 0x14066CC94 (PspOneDirectionSecurityDomainCombine.c)
 *     PfpRpControlRequestUpdate @ 0x1406ADBC8 (PfpRpControlRequestUpdate.c)
 *     EtwpPsProvTraceProcess @ 0x14070AFEC (EtwpPsProvTraceProcess.c)
 *     PsOpenProcess @ 0x1407292A0 (PsOpenProcess.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     PfpCopyEvent @ 0x1407D9CC0 (PfpCopyEvent.c)
 *     PiUEventHandleVetoEvent @ 0x1407FBA68 (PiUEventHandleVetoEvent.c)
 *     PopDiagTraceAppPowerMessage @ 0x140806904 (PopDiagTraceAppPowerMessage.c)
 *     EtwpProcessThreadImageRundown @ 0x14081454C (EtwpProcessThreadImageRundown.c)
 *     SeAuditProcessCreation @ 0x140847BB4 (SeAuditProcessCreation.c)
 *     CmpDumpOneKeyBody @ 0x140914F9C (CmpDumpOneKeyBody.c)
 *     PnpLogVetoInformation @ 0x140950744 (PnpLogVetoInformation.c)
 *     EtwpEnableDisableUMGL @ 0x1409E4318 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409E491C (EtwpUpdatePerProcessTracing.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409EBB58 (EtwpGetPrivateSessionTraceHandle.c)
 *     ViCreateProcessCallbackInternal @ 0x140A96D84 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x14024BA7C (ExfAcquireReleasePushLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x140300B74 (PsIsProcessInSilo.c)
 *     PspReferenceCidTableEntry @ 0x1407A8900 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS *Process)
{
  PEPROCESS *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbx
  __int64 CurrentServerSilo; // rax
  __int64 v6; // rbp
  bool v7; // zf
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = Process;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Process) = 3;
  v4 = PspReferenceCidTableEntry(ProcessId, Process);
  if ( v4 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    v6 = CurrentServerSilo;
    if ( (*(_DWORD *)(v4 + 1124) & 0x4000000) != 0 )
    {
      if ( PsIsProcessInSilo((struct _KPROCESS *)v4, CurrentServerSilo) )
        goto LABEL_4;
LABEL_14:
      ObfDereferenceObjectWithTag((PVOID)v4, 0x746C6644u);
      v4 = 0LL;
      goto LABEL_4;
    }
    _InterlockedOr(v9, 0);
    if ( (*(_QWORD *)(v4 + 1080) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive(v4 + 1080);
    if ( (*(_DWORD *)(v4 + 1124) & 0x4000000) == 0 || !PsIsProcessInSilo((struct _KPROCESS *)v4, v6) )
      goto LABEL_14;
  }
LABEL_4:
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !v4 )
    return -1073741813;
  *v2 = (PEPROCESS)v4;
  return 0;
}
