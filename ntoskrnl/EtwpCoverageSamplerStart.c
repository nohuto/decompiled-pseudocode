/*
 * XREFs of EtwpCoverageSamplerStart @ 0x1409F05F8
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x1409F0DFC (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KeStartProfile @ 0x140571A6C (KeStartProfile.c)
 *     PsEnumProcesses @ 0x1407809CC (PsEnumProcesses.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140785F3C (EtwpUpdateGlobalGroupMasks.c)
 *     MmEnumerateSystemImages @ 0x14080E4B0 (MmEnumerateSystemImages.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140819370 (PsSetLoadImageNotifyRoutineEx.c)
 *     KeInitializeProfileCallback @ 0x140971F68 (KeInitializeProfileCallback.c)
 *     KeSetIntervalProfile @ 0x140972128 (KeSetIntervalProfile.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409EDC1C (EtwpCovSampCaptureContextStart.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x1409F00DC (EtwpCoverageSamplerAllocateTable.c)
 */

__int64 __fastcall EtwpCoverageSamplerStart(_DWORD *Object)
{
  int v2; // ecx
  unsigned __int64 v3; // r14
  unsigned __int16 v4; // r12
  _QWORD *Table; // rax
  int ImageNotifyRoutine; // edi
  PVOID *v7; // rdx
  unsigned int v8; // ecx
  unsigned int v9; // edi
  int v10; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r15
  __int64 v13; // rcx
  int v14; // edx
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]
  int v18; // [rsp+80h] [rbp+8h] BYREF

  v18 = 0;
  v2 = Object[9];
  LODWORD(v3) = 0;
  v16 = 0LL;
  v17 = 0LL;
  v4 = 0;
  Table = EtwpCoverageSamplerAllocateTable(v2);
  *((_QWORD *)Object + 208) = Table;
  if ( !Table )
  {
    ImageNotifyRoutine = -1073741670;
    goto LABEL_30;
  }
  ++Object[424];
  v7 = (PVOID *)*((_QWORD *)Object + 211);
  if ( *v7 != Object + 420 )
    __fastfail(3u);
  *Table = Object + 420;
  Table[1] = v7;
  *v7 = Table;
  *((_QWORD *)Object + 211) = Table;
  v8 = Object[17];
  v9 = Object[16];
  if ( v8 )
    v9 /= v8;
  v10 = Object[6];
  if ( (v10 & 4) == 0 )
  {
    if ( (v10 & 2) == 0 )
    {
      LODWORD(v16) = 2;
      if ( ((int (__fastcall *)(__int64, __int64, __int128 *, int *))off_140C020E8[0])(1LL, 24LL, &v16, &v18) >= 0
        && BYTE4(v16) )
      {
        v4 = 2;
        v3 = v9 * (unsigned __int64)(unsigned int)EtwCPUSpeedInMHz / 5;
        goto LABEL_16;
      }
      if ( (Object[6] & 1) != 0 )
      {
        ImageNotifyRoutine = -1073741637;
        goto LABEL_30;
      }
    }
    LODWORD(v3) = 10 * v9;
    if ( (BYTE4(PerfGlobalGroupMask[0]) & 2) != 0 )
      LODWORD(v3) = EtwpProfileInterval;
  }
LABEL_16:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
  qword_140C31868 = (__int64)KeGetCurrentThread();
  if ( qword_140C31878 )
  {
    ImageNotifyRoutine = -1073740008;
    goto LABEL_30;
  }
  ImageNotifyRoutine = EtwpCovSampCaptureContextStart(Object + 6);
  if ( ImageNotifyRoutine >= 0 )
  {
    v12 = qword_140C31888;
    ObfReferenceObject(Object);
    qword_140C31878 = (__int64)Object;
    _InterlockedExchange64((volatile __int64 *)&stru_140C31880, 0LL);
    Object[415] |= 1u;
    ImageNotifyRoutine = PsSetLoadImageNotifyRoutineEx((__int64)EtwpCovSampImageNotify, 0LL);
    if ( ImageNotifyRoutine >= 0 )
    {
      Object[415] |= 2u;
      PsEnumProcesses((__int64 (__fastcall *)(__int64 *, __int64))EtwpCovSampEnumerateProcess, (__int64)(Object + 4));
      MmEnumerateSystemImages(
        (__int64 (__fastcall *)(PVOID *, __int64))EtwpCovSampEnumerateDriver,
        (__int64)(Object + 4));
      v13 = EtwpHostSiloState;
      v14 = *(_DWORD *)(EtwpHostSiloState + 4572) | 4;
      *(_DWORD *)(EtwpHostSiloState + 4572) = v14;
      if ( (Object[6] & 8) == 0 )
        *(_DWORD *)(v13 + 4576) |= 4u;
      if ( (Object[6] & 0x10) == 0 )
        *(_DWORD *)(v13 + 4576) |= 0x200u;
      if ( (Object[6] & 0x20) == 0 )
        *(_DWORD *)(v13 + 4572) = v14 | 0x1000;
      EtwpUpdateGlobalGroupMasks(v13, 0, 9u);
      Object[415] |= 4u;
      if ( (Object[6] & 4) == 0 )
      {
        KeInitializeProfileCallback((unsigned __int16 *)(v12 + 16), (__int64)EtwpCovSampProfileInterrupt, v12, v4);
        KeSetIntervalProfile(v3, *(__int16 *)(v12 + 624));
        ImageNotifyRoutine = KeStartProfile(v12 + 16);
        if ( ImageNotifyRoutine < 0 )
          goto LABEL_30;
        Object[415] |= 8u;
      }
      ImageNotifyRoutine = 0;
    }
  }
LABEL_30:
  if ( (struct _KTHREAD *)qword_140C31868 == KeGetCurrentThread() )
  {
    qword_140C31868 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)ImageNotifyRoutine;
}
