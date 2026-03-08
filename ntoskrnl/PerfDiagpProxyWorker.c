/*
 * XREFs of PerfDiagpProxyWorker @ 0x14083C130
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x14083C01C (PerfDiagpStartPerfDiagLogger.c)
 *     PerfDiagpIsTracingAllowed @ 0x14083C260 (PerfDiagpIsTracingAllowed.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14083C378 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x14083C48C (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1409DABC0 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PerfDiagpProxyWorker(_DWORD *a1)
{
  int v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  const wchar_t *v4; // rdx
  int updated; // eax
  char v6; // di
  const wchar_t *v7; // rcx
  SIZE_T Length; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  LODWORD(v9) = 0;
  v1 = a1[8];
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C32320, 0LL);
  if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
    goto LABEL_31;
  if ( dword_140C32328 != v1 - 1 )
  {
    switch ( v1 )
    {
      case 3:
        if ( dword_140C32328 == 1 )
          goto LABEL_11;
        break;
      case 5:
        goto LABEL_30;
      case 7:
LABEL_29:
        PerfDiagpSaveActiveDCLLogFileName();
        v7 = L"Diagnostics\\Performance\\ShutdownCKCLSettings";
        goto LABEL_18;
    }
    if ( v1 < dword_140C32328 )
    {
      v1 = dword_140C32328;
      goto LABEL_11;
    }
LABEL_31:
    dword_140C32328 = 8;
    goto LABEL_12;
  }
  if ( v1 != 1 )
  {
    v3 = (unsigned int)(v1 - 2);
    if ( v1 == 2 )
    {
      v4 = L"WaitingForLogonEnableKernelFlags";
      goto LABEL_9;
    }
    v3 = (unsigned int)(v1 - 3);
    if ( v1 == 3 )
    {
      v4 = L"EnableKernelFlags";
LABEL_9:
      updated = PerfDiagpUpdatePerfDiagLoggerEnableFlags(v3, v4);
      goto LABEL_10;
    }
    if ( v1 == 4 )
    {
LABEL_16:
      PerfDiagpInitializeLoggerInfo(0LL, 0LL);
      LODWORD(Length) = dword_140C32350[0];
      NtTraceControl(
        2u,
        (unsigned int *)dword_140C32350,
        dword_140C32350[0],
        (volatile signed __int64 *)dword_140C32350,
        Length,
        (unsigned __int64)&v9);
      goto LABEL_11;
    }
    if ( v1 != 5 )
    {
      if ( v1 == 6 )
        goto LABEL_16;
      if ( v1 != 7 )
        goto LABEL_11;
      goto LABEL_29;
    }
LABEL_30:
    v7 = L"Diagnostics\\Performance\\SecondaryLogonCKCLSettings";
    goto LABEL_18;
  }
  v7 = L"Diagnostics\\Performance\\BootCKCLSettings";
LABEL_18:
  updated = PerfDiagpStartPerfDiagLogger(v7);
LABEL_10:
  if ( updated < 0 )
    goto LABEL_31;
LABEL_11:
  dword_140C32328 = v1;
LABEL_12:
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C32320, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C32320);
  KeAbPostRelease((ULONG_PTR)&qword_140C32320);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
