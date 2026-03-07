__int64 __fastcall FsRtlpAcknowledgeOplockBreakByCacheFlags(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int a6)
{
  __int64 *v8; // r9
  int v9; // eax
  unsigned int v10; // esi
  __int64 *Pool2; // r15
  int v13; // ecx
  int v14; // r13d
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rcx
  __int64 i; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // esi
  __int64 v26; // rcx
  char v27; // di
  __int64 v28; // rcx
  __int64 *v29; // r11
  __int64 **v30; // rax
  __int64 v31; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v33; // rdi
  __int64 v34; // rcx
  int v35; // eax
  char v36; // cl
  __int64 v37; // r8
  __int64 *v38; // rcx
  int v39; // [rsp+60h] [rbp-250h]
  __int64 *v40; // [rsp+88h] [rbp-228h] BYREF
  char v41; // [rsp+90h] [rbp-220h]
  char v42; // [rsp+91h] [rbp-21Fh]
  int v43; // [rsp+94h] [rbp-21Ch]
  char v44; // [rsp+98h] [rbp-218h]
  char v45; // [rsp+99h] [rbp-217h]
  char v46; // [rsp+9Ah] [rbp-216h] BYREF
  char v47; // [rsp+9Bh] [rbp-215h] BYREF
  char v48; // [rsp+9Ch] [rbp-214h]
  int v49; // [rsp+A0h] [rbp-210h] BYREF
  __int64 *v50; // [rsp+A8h] [rbp-208h] BYREF
  char v51; // [rsp+B0h] [rbp-200h]
  char v52; // [rsp+B1h] [rbp-1FFh]
  unsigned int v53; // [rsp+B4h] [rbp-1FCh] BYREF
  int v54; // [rsp+B8h] [rbp-1F8h] BYREF
  int v55; // [rsp+BCh] [rbp-1F4h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-1F0h]
  __int64 *v57; // [rsp+C8h] [rbp-1E8h] BYREF
  unsigned int v58; // [rsp+D0h] [rbp-1E0h] BYREF
  __int64 v59; // [rsp+D8h] [rbp-1D8h]
  __int64 *v60; // [rsp+E0h] [rbp-1D0h] BYREF
  unsigned int v61; // [rsp+E8h] [rbp-1C8h] BYREF
  __int64 *v62; // [rsp+F0h] [rbp-1C0h] BYREF
  __int64 v63; // [rsp+F8h] [rbp-1B8h] BYREF
  __int64 *v64; // [rsp+100h] [rbp-1B0h] BYREF
  __int64 v65; // [rsp+110h] [rbp-1A0h]
  struct _KTHREAD *v66; // [rsp+118h] [rbp-198h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+128h] [rbp-188h] BYREF
  unsigned int *v68; // [rsp+148h] [rbp-168h]
  __int64 v69; // [rsp+150h] [rbp-160h]
  __int64 **v70; // [rsp+158h] [rbp-158h]
  __int64 v71; // [rsp+160h] [rbp-150h]
  int *v72; // [rsp+168h] [rbp-148h]
  __int64 v73; // [rsp+170h] [rbp-140h]
  struct _EVENT_DATA_DESCRIPTOR v74[2]; // [rsp+178h] [rbp-138h] BYREF
  unsigned int *v75; // [rsp+198h] [rbp-118h]
  __int64 v76; // [rsp+1A0h] [rbp-110h]
  unsigned int *v77; // [rsp+1A8h] [rbp-108h]
  __int64 v78; // [rsp+1B0h] [rbp-100h]
  __int64 **v79; // [rsp+1B8h] [rbp-F8h]
  __int64 v80; // [rsp+1C0h] [rbp-F0h]
  int *v81; // [rsp+1C8h] [rbp-E8h]
  __int64 v82; // [rsp+1D0h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+1D8h] [rbp-D8h] BYREF
  __int64 *v84; // [rsp+1F8h] [rbp-B8h]
  __int64 v85; // [rsp+200h] [rbp-B0h]
  __int64 **v86; // [rsp+208h] [rbp-A8h]
  __int64 v87; // [rsp+210h] [rbp-A0h]
  int *v88; // [rsp+218h] [rbp-98h]
  __int64 v89; // [rsp+220h] [rbp-90h]

  v56 = a2;
  v8 = a1;
  v40 = a1;
  v9 = (int)a5;
  v57 = a5;
  v10 = 0;
  v43 = 0;
  Pool2 = 0LL;
  v50 = 0LL;
  v41 = 0;
  LOBYTE(v9) = 0;
  v48 = 0;
  v51 = 0;
  v45 = 0;
  v49 = v9;
  v52 = 0;
  v47 = 0;
  v46 = 0;
  if ( (unsigned int)dword_140C03770 > 5 && tlgKeywordOn((__int64)&dword_140C03770, 0LL) )
  {
    v61 = a4;
    v75 = &v61;
    v76 = 4LL;
    v58 = a6;
    v77 = &v58;
    v78 = 4LL;
    v62 = v8;
    v79 = &v62;
    v80 = 8LL;
    v55 = *((_DWORD *)v8 + 36);
    v81 = &v55;
    v82 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03770, (unsigned __int8 *)&dword_14002ACCC, 0LL, 0LL, 6u, v74);
    v8 = v40;
  }
  if ( !v8 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    return 3221225699LL;
  }
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)v8[19]);
  v13 = *((_DWORD *)v40 + 36);
  if ( (v13 & 0xF00000) == 0 && (((v13 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) != 0
    || (((v13 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 && (__int64 *)v40[9] == v40 + 9 )
  {
LABEL_10:
    v10 = -1073741597;
    v43 = -1073741597;
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_108;
  }
  v65 = *(_QWORD *)(a3 + 24);
  v14 = *(_DWORD *)(v65 + 8) & 4;
  v42 = v14 != 0;
  if ( v14 )
  {
    Pool2 = (__int64 *)ExAllocatePool2(288LL, 24LL, 1869763398LL);
    v50 = Pool2;
  }
  v15 = v40[18] & 0x1F0FFDF;
  if ( v15 > 0x307040 )
  {
    if ( v15 == 5271616 )
      goto LABEL_19;
    if ( v15 != 8400896 )
    {
      v16 = v15 - 8409152;
LABEL_18:
      if ( (v16 & 0xFFFFDFFF) != 0 )
        goto LABEL_10;
LABEL_19:
      if ( v14 )
      {
        v17 = v40[1];
        v18 = *(_QWORD *)(v56 + 48);
        if ( v17 == v18 || !FsRtlpOplockKeysEqual(v18, v17, 0) )
          goto LABEL_10;
        if ( !a4 )
        {
          FsRtlpModifyThreadPriorities((__int64)v40, 0LL, 0);
          FsRtlpClearOwner((__int64)v40, 0LL);
          *((_BYTE *)v40 + 32) = 0;
          *((_DWORD *)v40 + 36) = v40[18] & 0x20 | 1;
          Pool2[2] = v40[1];
          v19 = (__int64 **)(v40 + 13);
          v20 = v40[13];
          if ( *(__int64 **)(v20 + 8) != v40 + 13 )
            __fastfail(3u);
          *Pool2 = v20;
          Pool2[1] = (__int64)v19;
          *(_QWORD *)(v20 + 8) = Pool2;
          *v19 = Pool2;
          if ( (unsigned int)dword_140C03770 > 5 && tlgKeywordOn((__int64)&dword_140C03770, 0LL) )
          {
            v62 = (__int64 *)Pool2[2];
            v75 = (unsigned int *)&v62;
            v76 = 8LL;
            v57 = v40;
            v77 = (unsigned int *)&v57;
            v78 = 8LL;
            v55 = *((_DWORD *)v40 + 36);
            v79 = (__int64 **)&v55;
            v80 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C03770,
              (unsigned __int8 *)byte_14002ADA8,
              0LL,
              0LL,
              5u,
              v74);
          }
          Pool2 = 0LL;
          v50 = 0LL;
          v40[1] = 0LL;
          *((_DWORD *)v40 + 36) |= 0x1000000u;
          *(_DWORD *)(a3 + 48) = 0;
          IofCompleteRequest((PIRP)a3, 1);
          goto LABEL_103;
        }
      }
      else if ( v40[1] != *(_QWORD *)(v56 + 48) )
      {
        goto LABEL_10;
      }
      v35 = v40[18] & 0x1F0FFDF;
      if ( (v35 == 1069120 || v35 == 1077312 || v35 == 3174464 || v35 == 5271616 || v35 == 8409152 || v35 == 8417344)
        && (a4 & 0x7000) > (v40[18] & 0x200000 | ((unsigned __int64)(v40[18] & 0x100000 | (*((_DWORD *)v40 + 36) >> 1) & 0x200000) >> 1)) >> 7 )
      {
        v36 = v49;
        if ( (__int64 *)v40[11] != v40 + 11 )
          v36 = 1;
      }
      else
      {
        v36 = v49;
      }
      if ( !v36 )
      {
        FsRtlpModifyThreadPriorities((__int64)v40, 0LL, 0);
        FsRtlpClearOwner((__int64)v40, 0LL);
        *((_BYTE *)v40 + 32) = 0;
        LOBYTE(v39) = v42;
        v10 = FsRtlpGrantAnyOplockFromExclusive(v40, a3, v56, a4, v57, v39, &v50, &v46, &v47, a6);
        v43 = v10;
        Pool2 = v50;
        goto LABEL_103;
      }
      v37 = *(_QWORD *)(a3 + 24);
      *(_OWORD *)v37 = 0LL;
      *(_QWORD *)(v37 + 16) = 0LL;
      *(_DWORD *)(v37 + 4) = (*((_DWORD *)v40 + 36) >> 12) & 7;
      *(_DWORD *)(v37 + 8) = (v40[18] & 0x200000 | ((unsigned __int64)(v40[18] & 0x100000 | (*((_DWORD *)v40 + 36) >> 1) & 0x200000) >> 1)) >> 19;
      *(_DWORD *)(v37 + 12) |= 1u;
      *(_QWORD *)(a3 + 56) = 24LL;
      v10 = -2147483602;
      *(_DWORD *)(a3 + 48) = -2147483602;
      IofCompleteRequest((PIRP)a3, 1);
      v43 = -2147483602;
      goto LABEL_108;
    }
  }
  else
  {
    if ( v15 == 3174464 )
      goto LABEL_19;
    if ( ((v15 - 12288) & 0xFFEF7FFF) != 0 || v15 == 1093632 )
    {
      v16 = v15 - 1069120;
      goto LABEL_18;
    }
  }
  for ( i = v40[9]; ; i = *(_QWORD *)i )
  {
    v59 = i;
    if ( (__int64 *)i == v40 + 9 )
    {
      v27 = v48;
      goto LABEL_80;
    }
    if ( v14 )
      break;
    if ( *(_QWORD *)(i + 24) == *(_QWORD *)(v56 + 48) )
      goto LABEL_38;
LABEL_78:
    ;
  }
  v22 = *(_QWORD *)(i + 24);
  v23 = *(_QWORD *)(v56 + 48);
  if ( v22 == v23 || !FsRtlpOplockKeysEqual(v23, v22, 0) )
    goto LABEL_78;
LABEL_38:
  v41 = 1;
  v44 = 1;
  v24 = *(_DWORD *)(i + 48) & 0xF00000;
  v25 = a6;
  if ( v24 != 0x800000 )
  {
    if ( v24 == 0x100000
      && (a4 & 0x7000) > 0x3000
      && ((__int64 *)v40[11] != v40 + 11 || !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a6)) )
    {
      v28 = *(_QWORD *)(a3 + 24);
      *(_OWORD *)v28 = 0LL;
      *(_QWORD *)(v28 + 16) = 0LL;
      *(_DWORD *)(v28 + 4) = 3;
      if ( (__int64 *)v40[11] != v40 + 11 )
        v25 = 1;
      *(_DWORD *)(v28 + 8) = v25;
      *(_DWORD *)(v28 + 12) |= 1u;
      *(_QWORD *)(a3 + 56) = 24LL;
      v10 = -2147483602;
      *(_DWORD *)(a3 + 48) = -2147483602;
      IofCompleteRequest((PIRP)a3, 1);
      v43 = -2147483602;
      goto LABEL_52;
    }
LABEL_53:
    FsRtlpOplockDequeueRH(i);
    if ( v14 )
    {
      Pool2[2] = *(_QWORD *)(i + 24);
      v30 = (__int64 **)(v40 + 13);
      v31 = v40[13];
      if ( *(__int64 **)(v31 + 8) != v40 + 13 )
        __fastfail(3u);
      *Pool2 = v31;
      Pool2[1] = (__int64)v30;
      *(_QWORD *)(v31 + 8) = Pool2;
      *v30 = Pool2;
      if ( (unsigned int)dword_140C03770 > 5 && tlgKeywordOn((__int64)&dword_140C03770, 0LL) )
      {
        v63 = Pool2[2];
        v84 = &v63;
        v85 = 8LL;
        v64 = v40;
        v86 = &v64;
        v87 = 8LL;
        v49 = *((_DWORD *)v40 + 36);
        v88 = &v49;
        v89 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C03770,
          (unsigned __int8 *)byte_14002AC4D,
          0LL,
          0LL,
          5u,
          &v83);
        v29 = 0LL;
      }
      Pool2 = v29;
      v50 = v29;
    }
    else
    {
      v45 = 1;
      if ( a4 )
        goto LABEL_64;
      ObfDereferenceObjectWithTag(*(PVOID *)(i + 24), 0x746C6644u);
    }
    if ( !a4 )
    {
      FsRtlpComputeShareableOplockState(v40);
      v10 = 0;
      v43 = 0;
      *(_DWORD *)(a3 + 48) = 0;
      IofCompleteRequest((PIRP)a3, 1);
LABEL_74:
      FsRtlpModifyThreadPriorities((__int64)v40, i, 0);
      FsRtlpClearOwner((__int64)v40, i);
      if ( (__int64 *)v40[9] == v40 + 9 )
        *((_BYTE *)v40 + 32) = 0;
      ExFreePoolWithTag((PVOID)i, 0);
      if ( v14 )
        *((_DWORD *)v40 + 36) |= 0x1000000u;
LABEL_52:
      v27 = 1;
      goto LABEL_80;
    }
LABEL_64:
    if ( (a4 & 0x3010) == 0 || (a4 & 0x4040) != 0 )
    {
      *v40 = a3;
      *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
      v43 = 259;
      *(_QWORD *)(a3 + 56) = v40;
      v40[2] = (__int64)KeGetCurrentThread()->ApcState.Process;
      CurrentThread = KeGetCurrentThread();
      v66 = CurrentThread;
      v40[3] = (__int64)CurrentThread;
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *((_BYTE *)v40 + 32) = 0;
      if ( v14 )
      {
        v33 = v56;
        ObfReferenceObjectWithTag(*(PVOID *)(v56 + 48), 0x746C6644u);
        v34 = *(_QWORD *)(v33 + 48);
      }
      else
      {
        v34 = *(_QWORD *)(i + 24);
      }
      v40[1] = v34;
      *((_DWORD *)v40 + 36) = v40[18] & 0x20 | a4 | 0x40;
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        FsRtlpCancelExclusiveIrp(a3, 1, v42 ^ 1);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
      }
      v41 = v44;
      i = v59;
      Pool2 = v50;
      v10 = v43;
    }
    else
    {
      v10 = FsRtlpRequestShareableOplock((__int64 *)&v40, v56, a3, a4, (__int64)v57, v42, 1, a6);
      v43 = v10;
    }
    goto LABEL_74;
  }
  if ( !a4 || (__int64 *)v40[11] == v40 + 11 && (unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a6) )
    goto LABEL_53;
  v26 = *(_QWORD *)(a3 + 24);
  *(_OWORD *)v26 = 0LL;
  *(_QWORD *)(v26 + 16) = 0LL;
  *(_DWORD *)(v26 + 4) = 3;
  if ( (__int64 *)v40[11] != v40 + 11 )
    v25 = 0;
  *(_DWORD *)(v26 + 8) = v25;
  *(_DWORD *)(v26 + 12) |= 1u;
  *(_QWORD *)(a3 + 56) = 24LL;
  v10 = -2147483602;
  *(_DWORD *)(a3 + 48) = -2147483602;
  IofCompleteRequest((PIRP)a3, 1);
  v43 = -2147483602;
  v27 = 1;
LABEL_80:
  if ( !v41 )
    goto LABEL_10;
  if ( v45 )
    FsRtlpReleaseIrpsWaitingForRH((__int64)v40);
  if ( !v27 )
  {
LABEL_103:
    if ( v46 )
    {
      while ( 1 )
      {
        v38 = (__int64 *)v40[11];
        if ( v38 == v40 + 11 )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v38);
      }
    }
    if ( v47 )
    {
      ObfDereferenceObjectWithTag((PVOID)v40[1], 0x746C6644u);
      v40[1] = 0LL;
    }
  }
LABEL_108:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( (unsigned int)dword_140C03770 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03770, 0LL) )
    {
      v53 = v10;
      v68 = &v53;
      v69 = 4LL;
      v60 = v40;
      v70 = &v60;
      v71 = 8LL;
      v54 = *((_DWORD *)v40 + 36);
      v72 = &v54;
      v73 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03770,
        (unsigned __int8 *)&word_14002AD46,
        0LL,
        0LL,
        5u,
        &v67);
    }
  }
  ExReleaseFastMutexUnsafe((PFAST_MUTEX)v40[19]);
  return v10;
}
