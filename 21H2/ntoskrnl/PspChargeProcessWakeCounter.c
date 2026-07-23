/*
 * XREFs of PspChargeProcessWakeCounter @ 0x1406D6270
 * Callers:
 *     PsChargeProcessWakeCounter @ 0x1406BCA00 (PsChargeProcessWakeCounter.c)
 *     PsReleaseProcessWakeCounter @ 0x1406CE130 (PsReleaseProcessWakeCounter.c)
 *     AlpcpSendMessage @ 0x1406D3F60 (AlpcpSendMessage.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140907D30 (PspAdjustKeepAliveCountProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14034D0C0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 *     PspCheckConditionalWakeCharge @ 0x1405FD214 (PspCheckConditionalWakeCharge.c)
 *     PspChargeJobWakeCounter @ 0x140681A78 (PspChargeJobWakeCounter.c)
 *     EtwTraceWakeCounter @ 0x140936A78 (EtwTraceWakeCounter.c)
 *     EtwTraceWakeEvent @ 0x140936B34 (EtwTraceWakeEvent.c)
 */

__int64 __fastcall PspChargeProcessWakeCounter(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        int *a7)
{
  int v8; // r12d
  char v9; // r14
  int v10; // edi
  __int64 v11; // r9
  bool v12; // si
  char v13; // dl
  int v14; // ecx
  struct _KTHREAD *v15; // rax
  _KPROCESS *Process; // r15
  int v17; // ecx
  char v18; // al
  volatile signed __int32 *v19; // rcx
  int v20; // ecx
  char v21; // r12
  int v22; // edx
  bool v23; // bp
  int v24; // r15d
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // r14d
  __int64 v29; // rbp
  int v30; // edi
  unsigned int v32; // [rsp+40h] [rbp-68h]
  int v33; // [rsp+44h] [rbp-64h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-60h]
  char *Object; // [rsp+50h] [rbp-58h]
  char v36; // [rsp+B0h] [rbp+8h]

  v36 = 0;
  v8 = a2 & 2;
  v32 = a3;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v33) = 1;
  v9 = 0;
  v10 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  v11 = *(_QWORD *)(a1 + 1296);
  v12 = v8 != 0;
  v13 = a6;
  Object = (char *)v11;
  if ( !v11 || (v14 = *(_DWORD *)(v11 + 1320), (v14 & 0x1000) == 0) )
  {
    v18 = 0;
    goto LABEL_16;
  }
  v15 = KeGetCurrentThread();
  Process = v15->ApcState.Process;
  if ( a6 )
  {
    if ( v8 && (v14 & 0x800000) != 0 && a5 > 0 )
      goto LABEL_33;
    v17 = a2;
    if ( (a2 & 1) == 0 )
      goto LABEL_11;
    v12 = v8 != 0;
    if ( !PspCheckConditionalWakeCharge((__int64)v15->ApcState.Process, v11, a3) )
    {
LABEL_33:
      v23 = 0;
      v21 = 0;
      goto LABEL_34;
    }
    v13 = a6;
  }
  v17 = a2;
LABEL_11:
  if ( (Process[1].DirectoryTableBase & 0x40) != 0 || !v8 )
  {
    v18 = 1;
    v12 = 0;
    v36 = 1;
  }
  else
  {
    v32 = 7;
    v12 = v8 != 0;
    v33 = ((v17 >> 31) & 2) + 5;
    v18 = 1;
    v36 = 1;
  }
LABEL_16:
  if ( v13 && !v18 && !*(_QWORD *)(a1 + 2464) )
    goto LABEL_33;
  if ( v12 )
  {
    v19 = (volatile signed __int32 *)(a1 + 2508);
    v32 = 7;
  }
  else
  {
    v19 = (volatile signed __int32 *)(a1 + 4 * ((int)a3 + 618LL));
  }
  v20 = _InterlockedExchangeAdd(v19, a5) + a5;
  v21 = 1;
  v22 = v20 & 0x7FFFFFFF;
  v23 = v20 < 0;
  if ( v20 >= 0 )
    v22 = v20;
  v10 = v22;
  if ( !v12 && *(_QWORD *)(a1 + 2464) )
  {
    v24 = 1 << a3;
    if ( a5 <= 0 )
    {
      if ( (v24 & *(_DWORD *)(a1 + 2504)) != 0 && !v22 )
        v9 = 1;
    }
    else if ( (v24 & *(_DWORD *)(a1 + 2500)) != 0 && v22 == 1 )
    {
      v9 = 1;
    }
  }
LABEL_34:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1080), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1080));
  KeAbPostRelease(a1 + 1080);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v25, v26, v27);
  if ( v9 )
  {
    ZwUpdateWnfStateData((PCWNF_STATE_NAME)(a1 + 2464), 0LL, 0, 0LL, 0LL, 0, 0);
    v28 = a3;
    if ( (xmmword_140CFC490 & 0x400) != 0 && v10 == 1 )
      EtwTraceWakeEvent(a1, a3);
  }
  else
  {
    v28 = a3;
  }
  if ( a7 )
    *a7 = v10;
  if ( v23 || v36 )
  {
    v29 = a4;
    v30 = a5;
    PspChargeJobWakeCounter(Object, 0LL, v28, a5, v33, a1, a4);
  }
  else
  {
    v29 = a4;
    v30 = a5;
  }
  if ( v21 )
  {
    if ( (xmmword_140CFC490 & 0x2000) != 0 && !v12 )
      EtwTraceWakeCounter(a1, v28, v30, a1, v29);
    if ( a6 )
    {
      if ( a5 > 0 )
      {
        ObfReferenceObjectWithTag((PVOID)a1, 0x6B577350u);
        return a1 | v32;
      }
      ObDereferenceObjectDeferDeleteWithTag((PVOID)a1, 0x6B577350u);
    }
  }
  return 0LL;
}
