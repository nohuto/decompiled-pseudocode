__int64 __fastcall PspSetJobIoRateControl(volatile signed __int64 *Object, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int64 *v3; // r13
  int v4; // edi
  __int64 v7; // r12
  int v8; // r14d
  char v9; // al
  int v10; // eax
  const EVENT_DESCRIPTOR *v11; // rbx
  bool v12; // zf
  __int64 v14; // rax
  const WCHAR *v15; // r8
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  __int64 v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  __int64 v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  __int64 v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  __int64 v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  __int64 v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  __int64 v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  __int64 v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  __int64 v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  __int64 v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  __int64 v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  __int64 v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  const WCHAR *v52; // [rsp+150h] [rbp+50h]
  int v53; // [rsp+158h] [rbp+58h]
  int v54; // [rsp+15Ch] [rbp+5Ch]
  int *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]

  CurrentThread = KeGetCurrentThread();
  v3 = Object + 216;
  v4 = 0;
  v18 = 0LL;
  v7 = -1LL;
  v19 = 0LL;
  --CurrentThread->KernelApcDisable;
  v16 = 0;
  v17 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object + 216), 0LL);
  v8 = 1;
  if ( (*(_DWORD *)(a2 + 36) & 1) != 0 )
  {
    PspLockRootJobExclusive((__int64)Object, (__int64)CurrentThread, &v18);
    PspLockJobConditionally((__int64)Object, &v18);
    v4 = PspSetJobIoAttribution((PVOID)Object);
    if ( v4 < 0 )
    {
LABEL_12:
      PspUnlockJobConditionally((__int64)Object, &v18);
      PspUnlockJob(v18, (__int64)CurrentThread);
      goto LABEL_13;
    }
    PspUnlockJobConditionally((__int64)Object, &v18);
    PspUnlockJob(v18, (__int64)CurrentThread);
    v4 = 0;
    if ( *(_QWORD *)(a2 + 24) )
    {
      v4 = PspSetJobIoRateControlForVolume((_DWORD)Object, a2, (unsigned int)&v16, (unsigned int)&v17, (__int64)&v19);
      if ( v4 < 0 )
        goto LABEL_11;
    }
    else
    {
      if ( !PspIoRateControlInfoIsAnySet((_QWORD *)a2) )
      {
        if ( !*((_QWORD *)Object + 207) )
          goto LABEL_10;
        v19 = *((_QWORD *)Object + 207);
        PspIoRateEntryDeactivate(Object + 202);
LABEL_20:
        v8 = 2;
LABEL_8:
        if ( v17 )
          --v8;
        goto LABEL_10;
      }
      v4 = PspIoRateEntryActivate(Object + 202, Object, a2, &v16);
      if ( v4 < 0 )
      {
LABEL_11:
        PspLockRootJobExclusive((__int64)Object, (__int64)CurrentThread, &v18);
        PspLockJobConditionally((__int64)Object, &v18);
        PspSetJobIoAttribution((PVOID)Object);
        goto LABEL_12;
      }
      v19 = *((_QWORD *)Object + 207);
      v17 = 1;
    }
    v4 = 0;
    if ( !v16 )
      goto LABEL_8;
    goto LABEL_20;
  }
  v14 = v19;
  if ( *((_QWORD *)Object + 207) )
    v14 = *((_QWORD *)Object + 207);
  v19 = v14;
  v8 = PspJobIoRateControlDisable((__int64)Object);
LABEL_10:
  if ( v8 )
    goto LABEL_11;
LABEL_13:
  v9 = _InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v22 = v19;
  v10 = *((_DWORD *)Object + 363);
  v11 = (const EVENT_DESCRIPTOR *)PsIoRateControlStart;
  v20 = v10;
  v12 = (*(_DWORD *)(a2 + 36) & 1) == 0;
  v21 = v4;
  if ( v12 )
    v11 = &PsIoRateControlStop;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, v11) )
  {
    v15 = L"Global";
    if ( *(_QWORD *)(a2 + 24) )
      v15 = *(const WCHAR **)(a2 + 24);
    do
      ++v7;
    while ( v15[v7] );
    v52 = v15;
    UserData.Ptr = (ULONGLONG)&v20;
    v53 = 2 * v7 + 2;
    v24 = &v22;
    v54 = 0;
    v28 = a2 + 8;
    *(_QWORD *)&UserData.Size = 4LL;
    v30 = a2 + 72;
    v32 = a2 + 16;
    v34 = a2 + 56;
    v36 = a2 + 80;
    v38 = a2 + 48;
    v40 = a2 + 64;
    v42 = a2 + 88;
    v44 = a2 + 96;
    v46 = a2 + 104;
    v48 = a2 + 112;
    v55 = &v21;
    v25 = 8LL;
    v26 = a2;
    v27 = 8LL;
    v29 = 8LL;
    v31 = 8LL;
    v33 = 8LL;
    v35 = 8LL;
    v37 = 8LL;
    v39 = 8LL;
    v41 = 8LL;
    v43 = 8LL;
    v45 = 8LL;
    v47 = 8LL;
    v49 = 8LL;
    v50 = a2 + 36;
    v51 = 4LL;
    v56 = 4LL;
    EtwWrite(EtwpPsProvRegHandle, v11, 0LL, 0x11u, &UserData);
  }
  return (unsigned int)v4;
}
