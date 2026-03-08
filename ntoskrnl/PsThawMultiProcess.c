/*
 * XREFs of PsThawMultiProcess @ 0x1402FFE80
 * Callers:
 *     DbgkpResumeProcess @ 0x140936438 (DbgkpResumeProcess.c)
 *     DbgkpSendApiMessage @ 0x1409370E0 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x1409371D8 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x14093730C (DbgkpSendErrorMessage.c)
 *     NtChangeProcessState @ 0x1409ACD20 (NtChangeProcessState.c)
 *     PspDeleteProcessStateChange @ 0x1409AE120 (PspDeleteProcessStateChange.c)
 *     PsThawProcess @ 0x1409B31CC (PsThawProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     KeThawMultiProcess @ 0x140356058 (KeThawMultiProcess.c)
 *     PsWow64GetProcessNtdllType @ 0x140707820 (PsWow64GetProcessNtdllType.c)
 *     PsInvokeWin32Callout @ 0x1407D2D10 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x1407E7C28 (PsSetProcessTelemetryAppState.c)
 *     PspWow64GetSharedInformation @ 0x14084AC08 (PspWow64GetSharedInformation.c)
 *     VslUpdateFreezeTimeBias @ 0x14094055C (VslUpdateFreezeTimeBias.c)
 *     EtwTraceFreezeThawProcess @ 0x1409E243C (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E5EB4 (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsThawMultiProcess(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // si
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // r14
  __int64 v8; // rcx
  unsigned int ProcessNtdllType; // eax
  __int64 SharedInformation; // rax
  __int64 result; // rax
  int v12; // ebx
  int SessionId; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  CurrentThread = KeGetCurrentThread();
  if ( (_BYTE)a2 )
  {
    if ( *(_QWORD *)(a1 + 1288) && (*(_DWORD *)(a1 + 1124) & 8) == 0 )
    {
      SessionId = MmGetSessionIdEx(a1);
      PsInvokeWin32Callout(23LL, a1, 1LL, &SessionId);
    }
    v7 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
    if ( *(_QWORD *)(a1 + 2224) )
    {
      LOBYTE(v8) = 1;
      v7 = KiQueryUnbiasedInterruptTime(v8) - *(_QWORD *)(a1 + 2224);
      *(_QWORD *)(a1 + 2224) = 0LL;
      *(_QWORD *)(a1 + 2320) += v7;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1080));
    KeAbPostRelease(a1 + 1080);
    KeLeaveCriticalRegionThread(CurrentThread);
    if ( (*(_BYTE *)(a1 + 992) & 1) != 0 )
    {
      VslUpdateFreezeTimeBias(a1, v7);
    }
    else
    {
      *(_QWORD *)qword_140D1F380 += v7;
      ProcessNtdllType = PsWow64GetProcessNtdllType(a1);
      if ( ProcessNtdllType )
      {
        SharedInformation = PspWow64GetSharedInformation(ProcessNtdllType);
        **(_QWORD **)(SharedInformation + 64) += v7;
      }
    }
  }
  LOBYTE(a2) = v4;
  result = KeThawMultiProcess(a1, a2, a3);
  v12 = result;
  if ( (_DWORD)result == a3 && (*(_DWORD *)(a1 + 2172) & 0x80000) != 0 )
    result = EtwTiLogSuspendResumeProcess(0LL, CurrentThread, a1, 3LL);
  if ( v4 )
  {
    PsSetProcessTelemetryAppState((PRKPROCESS)a1);
    result = *((_QWORD *)&PerfGlobalGroupMask + 1);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v12 )
        return EtwTraceFreezeThawProcess(a1, 0LL);
    }
  }
  return result;
}
