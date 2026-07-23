/*
 * XREFs of PspSetJobIoRateControl @ 0x1405D7F68
 * Callers:
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 * Callees:
 *     PspIoRateControlInfoIsAnySet @ 0x140200668 (PspIoRateControlInfoIsAnySet.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PspIoRateEntryActivate @ 0x1405D81B0 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1405D82B8 (PspIoRateEntryDeactivate.c)
 *     PspJobIoRateControlDisable @ 0x1405D9EA0 (PspJobIoRateControlDisable.c)
 *     PspLockRootJobExclusive @ 0x1405DA420 (PspLockRootJobExclusive.c)
 *     PspSetJobIoAttribution @ 0x1405DAC90 (PspSetJobIoAttribution.c)
 *     PspLockJobConditionally @ 0x14067FFC8 (PspLockJobConditionally.c)
 *     PspUnlockJob @ 0x140682390 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x140682BEC (PspUnlockJobConditionally.c)
 *     PspSetJobIoRateControlForVolume @ 0x140909584 (PspSetJobIoRateControlForVolume.c)
 */

__int64 __fastcall PspSetJobIoRateControl(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r15
  int v3; // edi
  __int64 v4; // r12
  volatile signed __int64 *v7; // r13
  int v8; // r14d
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  const EVENT_DESCRIPTOR *v14; // rbx
  bool v15; // zf
  __int64 v17; // rax
  const WCHAR *v18; // r8
  char v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v27; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  __int64 v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  __int64 v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  __int64 v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  __int64 v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  __int64 v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  __int64 v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  __int64 v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  __int64 v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  __int64 v51; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h]
  __int64 v53; // [rsp+140h] [rbp+40h]
  __int64 v54; // [rsp+148h] [rbp+48h]
  const WCHAR *v55; // [rsp+150h] [rbp+50h]
  int v56; // [rsp+158h] [rbp+58h]
  int v57; // [rsp+15Ch] [rbp+5Ch]
  int *v58; // [rsp+160h] [rbp+60h]
  __int64 v59; // [rsp+168h] [rbp+68h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = -1LL;
  v21 = 0LL;
  v22 = 0LL;
  v19 = 0;
  --CurrentThread->KernelApcDisable;
  v20 = 0;
  v7 = (volatile signed __int64 *)(a1 + 1512);
  ExAcquirePushLockExclusiveEx(a1 + 1512, 0LL);
  v8 = 1;
  if ( (*(_DWORD *)(a2 + 36) & 1) != 0 )
  {
    PspLockRootJobExclusive(a1, CurrentThread, &v21);
    PspLockJobConditionally(a1, &v21);
    v3 = PspSetJobIoAttribution((PVOID)a1);
    if ( v3 < 0 )
    {
LABEL_12:
      PspUnlockJobConditionally(a1, &v21);
      PspUnlockJob(v21, CurrentThread);
      goto LABEL_13;
    }
    PspUnlockJobConditionally(a1, &v21);
    PspUnlockJob(v21, CurrentThread);
    v3 = 0;
    if ( *(_QWORD *)(a2 + 24) )
    {
      v3 = PspSetJobIoRateControlForVolume(a1, a2, (unsigned int)&v19, (unsigned int)&v20, (__int64)&v22);
      if ( v3 < 0 )
        goto LABEL_11;
    }
    else
    {
      if ( !PspIoRateControlInfoIsAnySet((_QWORD *)a2) )
      {
        if ( !*(_QWORD *)(a1 + 1440) )
          goto LABEL_10;
        v22 = *(_QWORD *)(a1 + 1440);
        PspIoRateEntryDeactivate(a1 + 1400);
LABEL_20:
        v8 = 2;
LABEL_8:
        if ( v20 )
          --v8;
        goto LABEL_10;
      }
      v3 = PspIoRateEntryActivate(a1 + 1400, a1, a2, &v19);
      if ( v3 < 0 )
      {
LABEL_11:
        PspLockRootJobExclusive(a1, CurrentThread, &v21);
        PspLockJobConditionally(a1, &v21);
        PspSetJobIoAttribution((PVOID)a1);
        goto LABEL_12;
      }
      v22 = *(_QWORD *)(a1 + 1440);
      v20 = 1;
    }
    v3 = 0;
    if ( !v19 )
      goto LABEL_8;
    goto LABEL_20;
  }
  v17 = v22;
  if ( *(_QWORD *)(a1 + 1440) )
    v17 = *(_QWORD *)(a1 + 1440);
  v22 = v17;
  v8 = PspJobIoRateControlDisable(a1);
LABEL_10:
  if ( v8 )
    goto LABEL_11;
LABEL_13:
  v9 = _InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v11, v12);
  v25 = v22;
  v13 = *(_DWORD *)(a1 + 1236);
  v14 = (const EVENT_DESCRIPTOR *)PsIoRateControlStart;
  v23 = v13;
  v15 = (*(_DWORD *)(a2 + 36) & 1) == 0;
  v24 = v3;
  if ( v15 )
    v14 = &PsIoRateControlStop;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, v14) )
  {
    v18 = L"Global";
    if ( *(_QWORD *)(a2 + 24) )
      v18 = *(const WCHAR **)(a2 + 24);
    do
      ++v4;
    while ( v18[v4] );
    v55 = v18;
    UserData.Ptr = (ULONGLONG)&v23;
    v56 = 2 * v4 + 2;
    v27 = &v25;
    v57 = 0;
    v31 = a2 + 8;
    *(_QWORD *)&UserData.Size = 4LL;
    v33 = a2 + 72;
    v35 = a2 + 16;
    v37 = a2 + 56;
    v39 = a2 + 80;
    v41 = a2 + 48;
    v43 = a2 + 64;
    v45 = a2 + 88;
    v47 = a2 + 96;
    v49 = a2 + 104;
    v51 = a2 + 112;
    v58 = &v24;
    v28 = 8LL;
    v29 = a2;
    v30 = 8LL;
    v32 = 8LL;
    v34 = 8LL;
    v36 = 8LL;
    v38 = 8LL;
    v40 = 8LL;
    v42 = 8LL;
    v44 = 8LL;
    v46 = 8LL;
    v48 = 8LL;
    v50 = 8LL;
    v52 = 8LL;
    v53 = a2 + 36;
    v54 = 4LL;
    v59 = 4LL;
    EtwWrite(EtwpPsProvRegHandle, v14, 0LL, 0x11u, &UserData);
  }
  return (unsigned int)v3;
}
