void __fastcall EtwpCoverageRecord(int **a1, __int64 a2)
{
  int v4; // r15d
  int v5; // r14d
  unsigned __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // r12d
  unsigned int v9; // ecx
  int v10; // edx
  unsigned int *v11; // r14
  unsigned int *Internal; // r13
  int v13; // r11d
  char v14; // di
  __int64 v15; // rdx
  __int64 v16; // rcx
  int *v17; // rcx
  const CHAR *v18; // rdx
  int *v19; // rcx
  const CHAR *v20; // rdx
  int v21; // r12d
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-C8h]
  int v24; // [rsp+40h] [rbp-C0h]
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  int v26; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+4Ch] [rbp-B4h] BYREF
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+54h] [rbp-ACh] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+5Ch] [rbp-A4h] BYREF
  int v32; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+64h] [rbp-9Ch] BYREF
  int v34; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v35[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+80h] [rbp-80h] BYREF
  int *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  int *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  int *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  int *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  int *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  int *v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  char v49[16]; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+110h] [rbp+10h] BYREF
  int *v51; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h]
  int *v53; // [rsp+140h] [rbp+40h]
  __int64 v54; // [rsp+148h] [rbp+48h]
  int *v55; // [rsp+150h] [rbp+50h]
  __int64 v56; // [rsp+158h] [rbp+58h]
  int *v57; // [rsp+160h] [rbp+60h]
  __int64 v58; // [rsp+168h] [rbp+68h]
  char v59[16]; // [rsp+170h] [rbp+70h] BYREF

  v24 = 0;
  v4 = 0;
  v5 = 0;
  v22 = 0;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v23 = v6;
  if ( (unsigned int)EtwpCoverageValidateCP((__int64 *)a2, &v22) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    v8 = *(_DWORD *)(a2 + 12);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    v9 = a1[2][6];
    if ( v8 >= v9 )
    {
      v4 = 1;
    }
    else
    {
      v10 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 12) = v9;
      v11 = (unsigned int *)a1[2];
      Internal = TelemetryCoverageTableLocateInternal(v11, v10);
      if ( *Internal == v13 )
      {
        v5 = v24;
        v4 = 1;
      }
      else if ( v11[8] >= *((_DWORD *)a1 + 8) )
      {
        _InterlockedIncrement(*a1 + 1);
        v5 = 0;
      }
      else
      {
        v5 = EtwpCoverageAddToStringBuffer((__int64)a1[5], *(const char **)a2, v22);
        if ( v5 )
          goto LABEL_6;
        EtwpCoverageFlushPending(a1);
        if ( (int)EtwpCoverageEnsureStringBuffer(a1) >= 0 )
        {
          v5 = EtwpCoverageAddToStringBuffer((__int64)a1[5], *(const char **)a2, v22);
LABEL_6:
          *Internal = *(_DWORD *)(a2 + 8);
          ++*((_DWORD *)a1 + 16);
          ++a1[2][8];
          if ( *((_DWORD *)a1 + 16) == 1 )
          {
            v15 = -10000LL * *((unsigned int *)a1 + 7);
            v16 = (__int64)(*a1 + 60);
            v35[0] = 0LL;
            v35[1] = -1LL;
            KeSetTimer2(v16, v15, 0LL, (__int64)v35);
          }
          goto LABEL_8;
        }
        *(_DWORD *)(a2 + 12) = v8;
        _InterlockedIncrement(*a1 + 1);
      }
    }
LABEL_8:
    LODWORD(v6) = v23;
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegion();
  }
  if ( !v4 && v5 && (unsigned int)dword_140C042F0 > 5 && tlgKeywordOn((__int64)&dword_140C042F0, 2LL) )
  {
    v17 = *a1;
    v18 = *(const CHAR **)a2;
    v25 = **a1;
    v51 = &v25;
    v52 = 4LL;
    v26 = v17[1];
    v53 = &v26;
    v54 = 4LL;
    v27 = v6 - v17[4];
    v55 = &v27;
    v56 = 4LL;
    v28 = v6 - v17[5];
    v57 = &v28;
    v58 = 4LL;
    tlgCreate1Sz_char((__int64)v59, v18);
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C042F0, (unsigned __int8 *)byte_140035255, 0LL, 0LL, 7u, &v50);
  }
  if ( EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140C042F0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C042F0, 1LL) )
    {
      v19 = *a1;
      v20 = *(const CHAR **)a2;
      v29 = **a1;
      v37 = &v29;
      v38 = 4LL;
      v30 = v19[1];
      v39 = &v30;
      v40 = 4LL;
      v31 = v6 - v19[4];
      v41 = &v31;
      v42 = 4LL;
      v21 = v6 - v19[5];
      v43 = &v32;
      v45 = &v33;
      v47 = &v34;
      v32 = v21;
      v44 = 4LL;
      v33 = v5;
      v46 = 4LL;
      v34 = v4;
      v48 = 4LL;
      tlgCreate1Sz_char((__int64)v49, v20);
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C042F0,
        (unsigned __int8 *)byte_1400351E1,
        0LL,
        0LL,
        9u,
        &v36);
    }
  }
}
