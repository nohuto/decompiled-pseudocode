__int64 __fastcall FsRtlpRequestShareableOplock(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        char a7,
        unsigned int a8)
{
  __int64 v10; // r12
  unsigned int v12; // ebx
  char v13; // r13
  __int64 Oplock; // r14
  char v15; // si
  int v16; // r11d
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 *n; // rsi
  __int64 *v21; // rcx
  _QWORD *v22; // rsi
  __int64 v23; // rcx
  _QWORD *v24; // rax
  SECTION_OBJECT_POINTERS *v25; // rcx
  __int64 v26; // rcx
  int v27; // r8d
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  __int64 *i; // rbx
  __int64 *j; // rbx
  _QWORD *v33; // rbx
  _QWORD *v34; // r13
  int v35; // eax
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  char v40; // si
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  _QWORD *v45; // rbx
  _QWORD *k; // rbx
  int v47; // eax
  __int64 *m; // rbx
  __int64 v49; // rax
  __int64 *v50; // rdx
  _QWORD *v51; // rax
  _QWORD *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rdx
  char v56; // [rsp+44h] [rbp-164h]
  char v57; // [rsp+45h] [rbp-163h] BYREF
  PVOID P; // [rsp+48h] [rbp-160h] BYREF
  unsigned int v59; // [rsp+50h] [rbp-158h] BYREF
  int v60; // [rsp+54h] [rbp-154h] BYREF
  unsigned int v61; // [rsp+58h] [rbp-150h] BYREF
  __int64 v62; // [rsp+60h] [rbp-148h] BYREF
  unsigned int v63; // [rsp+68h] [rbp-140h]
  PFAST_MUTEX FastMutex; // [rsp+70h] [rbp-138h]
  __int64 v65; // [rsp+78h] [rbp-130h] BYREF
  __int64 v66; // [rsp+80h] [rbp-128h] BYREF
  __int64 v67; // [rsp+88h] [rbp-120h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-118h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+A0h] [rbp-108h] BYREF
  __int64 *v70; // [rsp+C0h] [rbp-E8h]
  __int64 v71; // [rsp+C8h] [rbp-E0h]
  int *v72; // [rsp+D0h] [rbp-D8h]
  __int64 v73; // [rsp+D8h] [rbp-D0h]
  int *v74; // [rsp+E0h] [rbp-C8h]
  __int64 v75; // [rsp+E8h] [rbp-C0h]
  __int64 *v76; // [rsp+F0h] [rbp-B8h]
  __int64 v77; // [rsp+F8h] [rbp-B0h]
  char v78[32]; // [rsp+100h] [rbp-A8h] BYREF
  int *v79; // [rsp+120h] [rbp-88h]
  __int64 v80; // [rsp+128h] [rbp-80h]
  char *v81; // [rsp+130h] [rbp-78h]
  __int64 v82; // [rsp+138h] [rbp-70h]
  __int64 *v83; // [rsp+140h] [rbp-68h]
  __int64 v84; // [rsp+148h] [rbp-60h]
  __int64 *v85; // [rsp+150h] [rbp-58h]
  __int64 v86; // [rsp+158h] [rbp-50h]

  v10 = a2;
  v62 = a2;
  v63 = a4;
  v65 = a5;
  v12 = 0;
  P = 0LL;
  FastMutex = 0LL;
  v56 = 0;
  v13 = 0;
  v57 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  v15 = a7;
  if ( !a7 && a4 != 0x10000 )
  {
    FastMutex = *(PFAST_MUTEX *)(Oplock + 152);
    ExAcquireFastMutexUnsafe(FastMutex);
    v56 = 1;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) == 0
    || *(_BYTE *)v10 != 13
    || !(unsigned __int8)FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(v10 + 48), &P) )
  {
LABEL_31:
    if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a8) )
      goto LABEL_148;
    if ( (a4 & 0x1000) != 0 || a4 == 0x10000 )
    {
      v25 = *(SECTION_OBJECT_POINTERS **)(*(_QWORD *)(v10 + 48) + 40LL);
      if ( v25 )
      {
        if ( MmDoesFileHaveUserWritableReferences(v25) )
        {
          if ( a4 == 0x10000 )
          {
            v12 = -1073741598;
            goto LABEL_150;
          }
          v26 = *(_QWORD *)(a3 + 24);
          *(_DWORD *)(v26 + 8) = 0;
          *(_DWORD *)(v26 + 12) |= 4u;
          if ( (unsigned int)dword_140C03770 > 5 && (unsigned __int8)tlgKeywordOn(&dword_140C03770, 0x400000000000LL) )
          {
            v66 = 1LL;
            v70 = &v66;
            v71 = 8LL;
            v59 = a4;
            v72 = (int *)&v59;
            v73 = 4LL;
            v60 = *(_DWORD *)(Oplock + 144);
            v74 = &v60;
            v75 = 4LL;
            v65 = 0x1000000LL;
            v76 = &v65;
            v77 = 8LL;
            tlgWriteAgg((int)&dword_140C03770, (int)&word_14002AE2E, v27, 6, &v69);
          }
          goto LABEL_148;
        }
      }
    }
    if ( !v15 && (*(_DWORD *)(Oplock + 144) & 0x40) != 0 )
    {
LABEL_44:
      if ( a4 == 0x10000 )
      {
        v12 = -1073739511;
        goto LABEL_150;
      }
      goto LABEL_148;
    }
    switch ( a4 )
    {
      case 0x10u:
        v41 = *(_DWORD *)(Oplock + 144);
        if ( (v41 & 1) == 0 )
        {
          v42 = v41 & 0x1F0FFDF;
          if ( v42 != 16 && v42 != 4096 && v42 != 4112 )
            goto LABEL_148;
        }
        break;
      case 0x1000u:
        break;
      case 0x3000u:
      case 0x10000u:
        if ( !v15 )
        {
          v28 = *(_DWORD *)(Oplock + 144);
          if ( (v28 & 1) == 0 )
          {
            v29 = v28 & 0x1F0FFDF;
            if ( (v28 & 0x1F0FFDF) != 0x1000
              && v29 != 12288
              && v29 != 45056
              && v29 != 1060864
              && v29 != 8400896
              && (v28 & 0x10000) == 0 )
            {
              goto LABEL_44;
            }
          }
        }
        if ( *(_BYTE *)(*(_QWORD *)(v10 + 48) + 73LL) )
          goto LABEL_44;
        if ( !v15 )
        {
          v30 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
          if ( v30 == 4096 || v30 == 45056 )
          {
            for ( i = *(__int64 **)(Oplock + 40); i != (__int64 *)(Oplock + 40); i = (__int64 *)*i )
            {
              if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v10 + 48), *(_QWORD *)(i[2] + 48), 0) )
              {
                if ( a4 == 0x10000 )
                {
                  v12 = -1073741597;
                  goto LABEL_150;
                }
                FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)i[1], 533LL, 12288LL, Oplock);
                break;
              }
            }
          }
          if ( (((*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 )
          {
            for ( j = *(__int64 **)(Oplock + 56); j != (__int64 *)(Oplock + 56); j = (__int64 *)*j )
            {
              if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v10 + 48), j[3], 0) && !j[7] )
              {
                if ( a4 == 0x10000 )
                {
                  v12 = -1073741597;
                  goto LABEL_150;
                }
                FsRtlpRemoveAndCompleteRHIrp(*(_QWORD *)j[1], Oplock, 533, 0x3000u, 0, 0, 0);
                break;
              }
            }
          }
          v33 = *(_QWORD **)(Oplock + 72);
          if ( v33 != (_QWORD *)(Oplock + 72) )
          {
            while ( v33 != (_QWORD *)(Oplock + 72) )
            {
              if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v10 + 48), v33[3], 0) )
              {
                v12 = -1073741598;
                if ( a4 == 0x10000 )
                  goto LABEL_150;
                goto LABEL_149;
              }
              v33 = (_QWORD *)*v33;
            }
          }
        }
        v34 = (_QWORD *)v65;
        *(_QWORD *)(*(_QWORD *)v65 + 32LL) = KeGetCurrentThread()->ApcState.Process;
        *(_QWORD *)(*v34 + 24LL) = *(_QWORD *)(v10 + 48);
        v35 = FsRtlpOplockEnqueueRH(Oplock + 56, *v34);
        v12 = v35;
        if ( v35 < 0 )
        {
          if ( a4 != 0x10000 )
          {
            *(_DWORD *)(a3 + 48) = v35;
            IofCompleteRequest((PIRP)a3, 1);
          }
          goto LABEL_150;
        }
        if ( a4 == 0x10000 )
        {
          v36 = (_QWORD *)(*v34 + 56LL);
          v37 = (_QWORD *)(Oplock + 120);
          v38 = *(_QWORD *)(Oplock + 120);
          if ( *(_QWORD *)(v38 + 8) != Oplock + 120 )
            __fastfail(3u);
          *v36 = v38;
          v36[1] = v37;
          *(_QWORD *)(v38 + 8) = v36;
          *v37 = v36;
          v12 = 0;
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          *(_QWORD *)(*v34 + 40LL) = CurrentThread;
          ObfReferenceObjectWithTag(*(PVOID *)(*v34 + 40LL), 0x746C6644u);
          *(_QWORD *)(*v34 + 16LL) = a3;
          *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
          v12 = 259;
          *(_DWORD *)(a3 + 48) = 0;
          *(_QWORD *)(a3 + 56) = Oplock;
          if ( a6 )
            ObfReferenceObjectWithTag(*(PVOID *)(*v34 + 24LL), 0x746C6644u);
          *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
          if ( *(_BYTE *)(a3 + 68) )
          {
            v40 = a7;
            if ( a6 && a7 )
            {
              LOBYTE(v39) = 1;
              FsRtlpCancelOplockRHIrp(a3, v39);
            }
            else
            {
              FsRtlpCancelOplockRHIrp(a3, 1LL);
            }
            goto LABEL_100;
          }
          _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpOplockRHIrpCancelRoutine);
          KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
          v12 = 259;
        }
        v40 = a7;
LABEL_100:
        *v34 = 0LL;
        if ( (unsigned int)dword_140C03770 > 5 && (unsigned __int8)tlgKeywordOn(&dword_140C03770, 0LL) )
        {
          v61 = a4;
          v79 = (int *)&v61;
          v80 = 4LL;
          v57 = v40;
          v81 = &v57;
          v82 = 1LL;
          v67 = Oplock;
          v83 = &v67;
          v84 = 8LL;
          LODWORD(v62) = *(_DWORD *)(Oplock + 144);
          v85 = &v62;
          v86 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, &word_14002AF16, 0LL, 0LL, 6, v78);
        }
        FsRtlpComputeShareableOplockState(Oplock);
        if ( a4 == 0x10000 )
          *(_DWORD *)(Oplock + 144) |= 0x10000u;
        goto LABEL_150;
      default:
LABEL_147:
        if ( v13 )
          goto LABEL_150;
        goto LABEL_148;
    }
    if ( !v15 )
    {
      v43 = *(_DWORD *)(Oplock + 144);
      if ( (v43 & 1) == 0 )
      {
        v44 = v43 & 0x1F0FFDF;
        if ( (v43 & 0x1F0FFDF) != 0x10
          && v44 != 4096
          && v44 != 4112
          && v44 != 12288
          && v44 != 45056
          && v44 != 1060864
          && v44 != 8400896
          && (v43 & 0x10000) == 0 )
        {
          goto LABEL_148;
        }
      }
      v45 = *(_QWORD **)(Oplock + 56);
      if ( v45 != (_QWORD *)(Oplock + 56) )
        goto LABEL_122;
      if ( *(_QWORD *)(Oplock + 72) != Oplock + 72 )
      {
        while ( v45 != (_QWORD *)(Oplock + 56) )
        {
LABEL_122:
          if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v10 + 48), v45[3], 0) )
            goto LABEL_148;
          v45 = (_QWORD *)*v45;
        }
        for ( k = *(_QWORD **)(Oplock + 72); k != (_QWORD *)(Oplock + 72); k = (_QWORD *)*k )
        {
          if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v10 + 48), k[3], 0) )
            goto LABEL_148;
        }
      }
      v47 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
      if ( v47 == 16 || v47 == 4096 || v47 == 4112 || v47 == 45056 )
      {
        for ( m = *(__int64 **)(Oplock + 40); m != (__int64 *)(Oplock + 40); m = (__int64 *)*m )
        {
          v49 = m[2];
          v50 = (__int64 *)(v49 + 48);
          if ( (*(_DWORD *)(v49 + 24) == 590400 || *v50 != *(_QWORD *)(v10 + 48))
            && FsRtlpOplockKeysEqual(*(_QWORD *)(v10 + 48), *v50, 0) )
          {
            FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)m[1], 533LL, a4 & 0x7000, Oplock);
            break;
          }
        }
      }
    }
    *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
    *(_DWORD *)(a3 + 48) = 0;
    v51 = (_QWORD *)(a3 + 168);
    v52 = (_QWORD *)(Oplock + 40);
    v53 = *(_QWORD *)(Oplock + 40);
    if ( *(_QWORD *)(v53 + 8) != Oplock + 40 )
      __fastfail(3u);
    *v51 = v53;
    *(_QWORD *)(a3 + 176) = v52;
    *(_QWORD *)(v53 + 8) = v51;
    *v52 = v51;
    *(_QWORD *)(a3 + 56) = Oplock;
    FsRtlpComputeShareableOplockState(Oplock);
    if ( a6 )
      ObfReferenceObjectWithTag(*(PVOID *)(v10 + 48), 0x746C6644u);
    *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
    if ( *(_BYTE *)(a3 + 68) )
    {
      LOBYTE(v54) = 1;
      FsRtlpCancelReadOnlyOplockIrp(a3, v54);
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
    }
    v13 = 1;
    v12 = 259;
    goto LABEL_147;
  }
  if ( (v16 & 0x20000) == 0 )
  {
    for ( n = *(__int64 **)(Oplock + 88); n != (__int64 *)(Oplock + 88); n = (__int64 *)*n )
    {
      v21 = n;
      if ( !*((_BYTE *)n + 53) || a4 != 12288 )
      {
        n = (__int64 *)n[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v21);
      }
    }
    v22 = P;
    FsRtlpOplockDequeueRH((__int64)P);
    v23 = v22[7];
    v24 = (_QWORD *)v22[8];
    if ( *(_QWORD **)(v23 + 8) != v22 + 7 || (_QWORD *)*v24 != v22 + 7 )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v22[5] )
      FsRtlpClearOwner(Oplock, (__int64)v22);
    ExFreePoolWithTag(v22, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    v10 = v62;
    v15 = a7;
    goto LABEL_31;
  }
  v17 = P;
  FsRtlpOplockDequeueRH((__int64)P);
  v18 = v17[7];
  v19 = (_QWORD *)v17[8];
  if ( *(_QWORD **)(v18 + 8) != v17 + 7 || (_QWORD *)*v19 != v17 + 7 )
    __fastfail(3u);
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
    *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
  if ( v17[5] )
    FsRtlpClearOwner(Oplock, (__int64)v17);
  ExFreePoolWithTag(v17, 0);
  P = 0LL;
  FsRtlpComputeShareableOplockState(Oplock);
LABEL_148:
  v12 = -1073741598;
LABEL_149:
  *(_DWORD *)(a3 + 48) = -1073741598;
  IofCompleteRequest((PIRP)a3, 1);
LABEL_150:
  if ( v56 && a4 != 0x10000 )
    ExReleaseFastMutexUnsafe(FastMutex);
  return v12;
}
