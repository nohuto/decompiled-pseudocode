/*
 * XREFs of PsLookupProcessByProcessId @ 0x14068F4F0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     PsOpenProcess @ 0x14064F550 (PsOpenProcess.c)
 *     PfpCopyEvent @ 0x140678D70 (PfpCopyEvent.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x140696CA0 (PspOneDirectionSecurityDomainCombine.c)
 *     PfpRpControlRequestUpdate @ 0x1406B403C (PfpRpControlRequestUpdate.c)
 *     EtwpPsProvTraceProcess @ 0x1406F2410 (EtwpPsProvTraceProcess.c)
 *     PnpLogVetoInformation @ 0x140732954 (PnpLogVetoInformation.c)
 *     PiUEventHandleVetoEvent @ 0x14076E8D8 (PiUEventHandleVetoEvent.c)
 *     PopDiagTraceAppPowerMessage @ 0x140778B34 (PopDiagTraceAppPowerMessage.c)
 *     EtwpProcessThreadImageRundown @ 0x140797828 (EtwpProcessThreadImageRundown.c)
 *     SeAuditProcessCreation @ 0x1407BCD28 (SeAuditProcessCreation.c)
 *     CmpDumpOneKeyBody @ 0x14086EEE0 (CmpDumpOneKeyBody.c)
 *     EtwpUpdatePerProcessTracing @ 0x140934614 (EtwpUpdatePerProcessTracing.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093F380 (EtwpGetPrivateSessionTraceHandle.c)
 *     ViCreateProcessCallbackInternal @ 0x1409DDAA4 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140241564 (ExfAcquireReleasePushLockExclusive.c)
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14027DFA8 (PsIsProcessInSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PspReferenceCidTableEntry @ 0x14068F6C0 (PspReferenceCidTableEntry.c)
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
  if ( v7 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !v4 )
    return -1073741813;
  *v2 = (PEPROCESS)v4;
  return 0;
}
