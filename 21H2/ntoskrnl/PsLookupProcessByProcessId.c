/*
 * XREFs of PsLookupProcessByProcessId @ 0x140625880
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x140602CDC (EtwpPsProvTraceProcess.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x140607210 (PspOneDirectionSecurityDomainCombine.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 *     PsOpenProcess @ 0x14065A730 (PsOpenProcess.c)
 *     PfpCopyEvent @ 0x1406CA480 (PfpCopyEvent.c)
 *     PfpRpControlRequestUpdate @ 0x1406DCD5C (PfpRpControlRequestUpdate.c)
 *     PnpLogVetoInformation @ 0x140732794 (PnpLogVetoInformation.c)
 *     PiUEventHandleVetoEvent @ 0x14076E718 (PiUEventHandleVetoEvent.c)
 *     PopDiagTraceAppPowerMessage @ 0x140778974 (PopDiagTraceAppPowerMessage.c)
 *     EtwpProcessThreadImageRundown @ 0x140797628 (EtwpProcessThreadImageRundown.c)
 *     SeAuditProcessCreation @ 0x1407BC598 (SeAuditProcessCreation.c)
 *     CmpDumpOneKeyBody @ 0x14086ED80 (CmpDumpOneKeyBody.c)
 *     EtwpUpdatePerProcessTracing @ 0x140934444 (EtwpUpdatePerProcessTracing.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093F1B0 (EtwpGetPrivateSessionTraceHandle.c)
 *     ViCreateProcessCallbackInternal @ 0x1409DCAA4 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSilo @ 0x14025C9C0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14025CA38 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1402C3044 (ExfAcquireReleasePushLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     PspReferenceCidTableEntry @ 0x140625A50 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS *Process)
{
  PEPROCESS *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 CurrentServerSilo; // rax
  __int64 v8; // rbp
  bool v9; // zf
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = Process;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Process) = 3;
  v6 = PspReferenceCidTableEntry(ProcessId, Process);
  if ( v6 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo(v5, v4);
    v8 = CurrentServerSilo;
    if ( (*(_DWORD *)(v6 + 1124) & 0x4000000) != 0 )
    {
      if ( PsIsProcessInSilo((struct _KPROCESS *)v6, CurrentServerSilo) )
        goto LABEL_4;
LABEL_14:
      ObfDereferenceObjectWithTag((PVOID)v6, 0x746C6644u);
      v6 = 0LL;
      goto LABEL_4;
    }
    _InterlockedOr(v11, 0);
    if ( (*(_QWORD *)(v6 + 1080) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive(v6 + 1080);
    if ( (*(_DWORD *)(v6 + 1124) & 0x4000000) == 0 || !PsIsProcessInSilo((struct _KPROCESS *)v6, v8) )
      goto LABEL_14;
  }
LABEL_4:
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v5);
  if ( !v6 )
    return -1073741813;
  *v2 = (PEPROCESS)v6;
  return 0;
}
