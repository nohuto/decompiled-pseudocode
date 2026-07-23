/*
 * XREFs of PspChargeProcessWakeCounter @ 0x1405E6B10
 * Callers:
 *     PsReleaseProcessWakeCounter @ 0x1405DE9D0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpSendMessage @ 0x1405E4800 (AlpcpSendMessage.c)
 *     PsChargeProcessWakeCounter @ 0x1406A1C90 (PsChargeProcessWakeCounter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140907C20 (PspAdjustKeepAliveCountProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402C2A00 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     PspChargeJobWakeCounter @ 0x140618278 (PspChargeJobWakeCounter.c)
 *     PspCheckConditionalWakeCharge @ 0x140685744 (PspCheckConditionalWakeCharge.c)
 *     EtwTraceWakeCounter @ 0x1409368F8 (EtwTraceWakeCounter.c)
 *     EtwTraceWakeEvent @ 0x1409369B4 (EtwTraceWakeEvent.c)
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
  int v8; // r12d
  char v9; // r14
  int v10; // edi
  _DWORD *v11; // r9
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
  unsigned int v25; // r14d
  __int64 v26; // rbp
  int v27; // edi
  unsigned int v29; // [rsp+40h] [rbp-68h]
  int v30; // [rsp+44h] [rbp-64h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-60h]
  PVOID Objecta; // [rsp+50h] [rbp-58h]
  char v33; // [rsp+B0h] [rbp+8h]

  v33 = 0;
  v8 = a2 & 2;
  v29 = a3;
  CurrentThread = KeGetCurrentThread();
  v30 = 1;
  v9 = 0;
  v10 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(Object + 1080, 0LL);
  v11 = *(_DWORD **)(Object + 1296);
  v12 = v8 != 0;
  v13 = a6;
  Objecta = v11;
  if ( !v11 || (v14 = v11[330], (v14 & 0x1000) == 0) )
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
    if ( !(unsigned __int8)PspCheckConditionalWakeCharge(v15->ApcState.Process, v11, a3) )
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
    v33 = 1;
  }
  else
  {
    v29 = 7;
    v12 = v8 != 0;
    v30 = ((v17 >> 31) & 2) + 5;
    v18 = 1;
    v33 = 1;
  }
LABEL_16:
  if ( v13 && !v18 && !*(_QWORD *)(Object + 2464) )
    goto LABEL_33;
  if ( v12 )
  {
    v19 = (volatile signed __int32 *)(Object + 2508);
    v29 = 7;
  }
  else
  {
    v19 = (volatile signed __int32 *)(Object + 4 * ((int)a3 + 618LL));
  }
  v20 = _InterlockedExchangeAdd(v19, a5) + a5;
  v21 = 1;
  v22 = v20 & 0x7FFFFFFF;
  v23 = v20 < 0;
  if ( v20 >= 0 )
    v22 = v20;
  v10 = v22;
  if ( !v12 && *(_QWORD *)(Object + 2464) )
  {
    v24 = 1 << a3;
    if ( a5 <= 0 )
    {
      if ( (v24 & *(_DWORD *)(Object + 2504)) != 0 && !v22 )
        v9 = 1;
    }
    else if ( (v24 & *(_DWORD *)(Object + 2500)) != 0 && v22 == 1 )
    {
      v9 = 1;
    }
  }
LABEL_34:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(Object + 1080), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(Object + 1080));
  KeAbPostRelease(Object + 1080);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v9 )
  {
    ZwUpdateWnfStateData((PCWNF_STATE_NAME)(Object + 2464), 0LL, 0, 0LL, 0LL, 0, 0);
    v25 = a3;
    if ( (xmmword_140CFC490 & 0x400) != 0 && v10 == 1 )
      EtwTraceWakeEvent(Object, a3);
  }
  else
  {
    v25 = a3;
  }
  if ( a7 )
    *a7 = v10;
  if ( v23 || v33 )
  {
    v26 = a4;
    v27 = a5;
    PspChargeJobWakeCounter(Objecta, v30, Object, a4);
  }
  else
  {
    v26 = a4;
    v27 = a5;
  }
  if ( v21 )
  {
    if ( (xmmword_140CFC490 & 0x2000) != 0 && !v12 )
      EtwTraceWakeCounter(Object, v25, v27, Object, v26);
    if ( a6 )
    {
      if ( a5 > 0 )
      {
        ObfReferenceObjectWithTag((PVOID)Object, 0x6B577350u);
        return Object | v29;
      }
      ObDereferenceObjectDeferDeleteWithTag((PVOID)Object, 0x6B577350u);
    }
  }
  return 0LL;
}
