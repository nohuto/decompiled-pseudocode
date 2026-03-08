/*
 * XREFs of PspChargeProcessWakeCounter @ 0x1407CA2E0
 * Callers:
 *     PsReleaseProcessWakeCounter @ 0x140711BD0 (PsReleaseProcessWakeCounter.c)
 *     PsChargeProcessWakeCounter @ 0x140793DC0 (PsChargeProcessWakeCounter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x1409AB928 (PspAdjustKeepAliveCountProcess.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     PspChargeJobWakeCounter @ 0x1406FBDC4 (PspChargeJobWakeCounter.c)
 *     PspIsProcessInJob @ 0x140788EDC (PspIsProcessInJob.c)
 *     EtwTraceWakeCounter @ 0x1409E306C (EtwTraceWakeCounter.c)
 *     EtwTraceWakeEvent @ 0x1409E3128 (EtwTraceWakeEvent.c)
 */

unsigned __int64 __fastcall PspChargeProcessWakeCounter(
        __int64 Object,
        int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        int *a7)
{
  int v7; // edi
  char v9; // r12
  bool v10; // r14
  __int64 v11; // rdx
  bool v12; // si
  char v13; // r8
  int v14; // ecx
  int v15; // r11d
  _KPROCESS *Process; // r10
  int v17; // ecx
  __int64 v18; // rsi
  __int64 v19; // rdx
  int v20; // r9d
  char v21; // al
  volatile signed __int32 *v22; // rcx
  int v23; // ecx
  int v24; // edx
  int v25; // r15d
  bool v26; // zf
  int v27; // ebp
  __int64 v28; // r14
  int v29; // edi
  char v31; // [rsp+40h] [rbp-78h]
  unsigned int v32; // [rsp+44h] [rbp-74h]
  int v33; // [rsp+48h] [rbp-70h]
  int v34; // [rsp+50h] [rbp-68h]
  char *v35; // [rsp+58h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-58h]
  char v37; // [rsp+C0h] [rbp+8h]

  v7 = 0;
  v37 = 0;
  v31 = 0;
  v33 = a2 & 2;
  v32 = a3;
  LOBYTE(v34) = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = 0;
  v10 = 0;
  ExAcquirePushLockSharedEx(Object + 1080, 0LL);
  v11 = *(_QWORD *)(Object + 1296);
  v12 = v33 != 0;
  v13 = a6;
  v35 = (char *)v11;
  if ( v11 )
  {
    v14 = *(_DWORD *)(v11 + 1536);
    if ( (v14 & 0x1000) != 0 )
    {
      v15 = v33;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( a6 )
      {
        if ( v33 && (v14 & 0x800000) != 0 && a5 > 0 )
          goto LABEL_40;
        v17 = a2;
        if ( (a2 & 1) == 0 || !Process[1].Affinity.StaticBitmap[16] )
          goto LABEL_18;
        if ( *(_QWORD *)(Process[1].Affinity.StaticBitmap[16] + 1296) == *(_QWORD *)(v11 + 1296) )
        {
          v18 = *(_QWORD *)(Object + 1296);
          while ( 1 )
          {
            if ( (unsigned int)PspIsProcessInJob((__int64)Process, v11) == 292 && (v20 & *(_DWORD *)(v19 + 1168)) != 0 )
            {
              v12 = v33 != 0;
              goto LABEL_40;
            }
            if ( v19 == *(_QWORD *)(v18 + 1296) )
              break;
            v11 = *(_QWORD *)(v19 + 1288);
          }
          v13 = a6;
        }
      }
      v17 = a2;
LABEL_18:
      if ( (Process[1].DirectoryTableBase & 0x40) != 0 || !v15 )
      {
        v21 = 1;
        v12 = 0;
        v37 = 1;
      }
      else
      {
        v32 = 7;
        v12 = v33 != 0;
        v34 = ((v17 >> 31) & 2) + 5;
        v21 = 1;
        v37 = 1;
      }
      goto LABEL_23;
    }
  }
  v21 = 0;
LABEL_23:
  if ( !v13 || v21 || *(_QWORD *)(Object + 2464) )
  {
    if ( v12 )
    {
      v22 = (volatile signed __int32 *)(Object + 2508);
      v32 = 7;
    }
    else
    {
      v22 = (volatile signed __int32 *)(Object + 4 * ((int)a3 + 618LL));
    }
    v23 = _InterlockedExchangeAdd(v22, a5) + a5;
    v31 = 1;
    v24 = v23 & 0x7FFFFFFF;
    v10 = v23 < 0;
    if ( v23 >= 0 )
      v24 = v23;
    v7 = v24;
    if ( !v12 )
    {
      if ( *(_QWORD *)(Object + 2464) )
      {
        v25 = 1 << a3;
        if ( a5 <= 0 )
        {
          if ( (v25 & *(_DWORD *)(Object + 2504)) == 0 )
            goto LABEL_40;
          v26 = v24 == 0;
        }
        else
        {
          if ( (v25 & *(_DWORD *)(Object + 2500)) == 0 )
            goto LABEL_40;
          v26 = v24 == 1;
        }
        if ( v26 )
          v9 = 1;
      }
    }
  }
LABEL_40:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(Object + 1080), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(Object + 1080));
  KeAbPostRelease(Object + 1080);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v9 )
  {
    ZwUpdateWnfStateData(Object + 2464, 0LL);
    v27 = a3;
    if ( (xmmword_140D1EAD0 & 0x400) != 0 && v7 == 1 )
      EtwTraceWakeEvent(Object, a3);
  }
  else
  {
    v27 = a3;
  }
  if ( a7 )
    *a7 = v7;
  if ( v10 || v37 )
  {
    v28 = a4;
    v29 = a5;
    PspChargeJobWakeCounter(v35, 0LL, v27, a5, v34, Object, a4);
  }
  else
  {
    v28 = a4;
    v29 = a5;
  }
  if ( v31 )
  {
    if ( (xmmword_140D1EAD0 & 0x2000) != 0 && !v12 )
      EtwTraceWakeCounter(Object, v27, v29, Object, v28);
    if ( a6 )
    {
      if ( a5 > 0 )
      {
        ObfReferenceObjectWithTag((PVOID)Object, 0x6B577350u);
        return Object | v32;
      }
      ObDereferenceObjectDeferDeleteWithTag((PVOID)Object, 0x6B577350u);
    }
  }
  return 0LL;
}
