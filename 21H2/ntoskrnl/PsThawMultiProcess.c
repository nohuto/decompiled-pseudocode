/*
 * XREFs of PsThawMultiProcess @ 0x140257280
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140687754 (PspChangeProcessExecutionState.c)
 *     DbgkpSendApiMessage @ 0x14092A070 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x14092A168 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x14092A29C (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x14092AAA4 (DbgkpResumeProcess.c)
 *     NtChangeProcessState @ 0x1409AEC10 (NtChangeProcessState.c)
 *     PspDeleteProcessStateChange @ 0x1409AF690 (PspDeleteProcessStateChange.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     KeThawMultiProcess @ 0x14025753C (KeThawMultiProcess.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PspWow64GetSharedInformation @ 0x140672A64 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x140672A7C (PsWow64GetProcessNtdllType.c)
 *     PsInvokeWin32Callout @ 0x1406F83A0 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x14071147C (PsSetProcessTelemetryAppState.c)
 *     VslUpdateFreezeTimeBias @ 0x140933110 (VslUpdateFreezeTimeBias.c)
 *     EtwTraceFreezeThawProcess @ 0x1409E2110 (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E6524 (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsThawMultiProcess(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v5; // r12
  volatile signed __int64 *v6; // r14
  __int64 v7; // rcx
  struct _KTHREAD *v8; // r15
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rdx
  char *p_Process; // rbx
  int v13; // edx
  unsigned int ProcessNtdllType; // eax
  __int64 SharedInformation; // rax
  __int64 result; // rax
  int v17; // ebx
  char v18; // [rsp+88h] [rbp+10h]
  int SessionId; // [rsp+98h] [rbp+20h] BYREF

  v18 = a2;
  CurrentThread = KeGetCurrentThread();
  if ( (_BYTE)a2 )
  {
    if ( *(_QWORD *)(a1 + 1288) && (*(_DWORD *)(a1 + 1124) & 8) == 0 )
    {
      SessionId = MmGetSessionIdEx(a1);
      PsInvokeWin32Callout(23LL, a1, 1LL, &SessionId);
    }
    v5 = 0LL;
    --CurrentThread->KernelApcDisable;
    v6 = (volatile signed __int64 *)(a1 + 1080);
    ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
    if ( *(_QWORD *)(a1 + 2224) )
    {
      LOBYTE(v7) = 1;
      v5 = KiQueryUnbiasedInterruptTime(v7) - *(_QWORD *)(a1 + 2224);
      *(_QWORD *)(a1 + 2224) = 0LL;
      *(_QWORD *)(a1 + 2320) += v5;
    }
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1080);
    v8 = KeGetCurrentThread();
    if ( (unsigned __int64)v6 - qword_140C50630 < 0x8000000000LL )
      v9 = MmGetSessionIdEx(v8->ApcState.Process);
    else
      v9 = -1;
    _disable();
    v10 = (unsigned __int64)v6 & 0x7FFFFFFFFFFFFFFCLL;
    v11 = 0LL;
    p_Process = (char *)&v8[1].Process;
    do
    {
      if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == v10
        && p_Process[18]
        && (*(_DWORD *)p_Process & 1) == 0
        && *((_DWORD *)p_Process + 2) == v9 )
      {
        p_Process[18] = 0;
        goto LABEL_15;
      }
      v11 = (unsigned int)(v11 + 1);
      p_Process += 96;
    }
    while ( (unsigned int)v11 < 6 );
    p_Process = 0LL;
LABEL_15:
    if ( p_Process )
    {
      if ( *(__int64 *)p_Process < 0 )
      {
        *p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process, v11, v10);
        _disable();
      }
      v13 = *((_DWORD *)p_Process + 22);
      *((_DWORD *)p_Process + 22) = 0;
      p_Process[17] = 0;
      *(_QWORD *)p_Process = 0LL;
      v8->AbEntrySummary |= 1 << p_Process[16];
      _enable();
      if ( v13 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v8, a1 + 1080, v13);
    }
    else
    {
      if ( (*((_DWORD *)&v8->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v8, a1 + 1080, v9, 0LL);
      _enable();
    }
    KeLeaveCriticalRegionThread(CurrentThread);
    if ( (*(_BYTE *)(a1 + 992) & 1) != 0 )
    {
      VslUpdateFreezeTimeBias(a1, v5);
    }
    else
    {
      *(_QWORD *)qword_140D071C0 += v5;
      ProcessNtdllType = PsWow64GetProcessNtdllType(a1);
      if ( ProcessNtdllType )
      {
        SharedInformation = PspWow64GetSharedInformation(ProcessNtdllType);
        **(_QWORD **)(SharedInformation + 64) += v5;
      }
    }
  }
  LOBYTE(a2) = v18;
  result = KeThawMultiProcess(a1, a2, a3);
  v17 = result;
  if ( (_DWORD)result == a3 && (*(_DWORD *)(a1 + 2172) & 0x80000) != 0 )
    result = EtwTiLogSuspendResumeProcess(0LL, CurrentThread, a1, 3LL);
  if ( v18 )
  {
    PsSetProcessTelemetryAppState(a1);
    result = *((_QWORD *)&PerfGlobalGroupMask + 1);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v17 )
        return EtwTraceFreezeThawProcess(a1, 0LL);
    }
  }
  return result;
}
