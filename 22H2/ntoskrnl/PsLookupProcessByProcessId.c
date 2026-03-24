/*
 * XREFs of PsLookupProcessByProcessId @ 0x140625CA0
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x140602CDC (EtwpPsProvTraceProcess.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x140607670 (PspOneDirectionSecurityDomainCombine.c)
 *     PfpCopyEvent @ 0x140631370 (PfpCopyEvent.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     PsOpenProcess @ 0x1406D34F0 (PsOpenProcess.c)
 *     PfpRpControlRequestUpdate @ 0x14070A62C (PfpRpControlRequestUpdate.c)
 *     PnpLogVetoInformation @ 0x140732AE4 (PnpLogVetoInformation.c)
 *     PiUEventHandleVetoEvent @ 0x14076DDE8 (PiUEventHandleVetoEvent.c)
 *     PopDiagTraceAppPowerMessage @ 0x140778874 (PopDiagTraceAppPowerMessage.c)
 *     EtwpProcessThreadImageRundown @ 0x1407924B8 (EtwpProcessThreadImageRundown.c)
 *     SeAuditProcessCreation @ 0x1407BCD58 (SeAuditProcessCreation.c)
 *     CmpDumpOneKeyBody @ 0x14086EDD0 (CmpDumpOneKeyBody.c)
 *     EtwpUpdatePerProcessTracing @ 0x140934494 (EtwpUpdatePerProcessTracing.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093F200 (EtwpGetPrivateSessionTraceHandle.c)
 *     ViCreateProcessCallbackInternal @ 0x1409DCAB4 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSilo @ 0x14025C220 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14025C298 (PsIsProcessInSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14031C3B4 (ExfAcquireReleasePushLockExclusive.c)
 *     PspReferenceCidTableEntry @ 0x140625E70 (PspReferenceCidTableEntry.c)
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
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v6 + 1080));
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
