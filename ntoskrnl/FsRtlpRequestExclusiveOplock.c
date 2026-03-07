__int64 __fastcall FsRtlpRequestExclusiveOplock(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v10; // ebx
  char v11; // r13
  __int64 Oplock; // rsi
  int v13; // r11d
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  CCHAR v17; // dl
  __int64 *i; // r14
  __int64 *v19; // rcx
  _QWORD *v20; // r14
  __int64 v21; // rcx
  _QWORD *v22; // rax
  SECTION_OBJECT_POINTERS *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r11d
  char v28; // r13
  __int64 *v29; // r15
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  __int64 v33; // rbx
  __int64 v34; // r8
  __int64 *v35; // r12
  __int64 *m; // rbx
  __int64 n; // rax
  __int64 *v38; // rbx
  _QWORD *v39; // r13
  _QWORD *j; // r12
  _QWORD *k; // rax
  _QWORD *v42; // r12
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v45; // [rsp+48h] [rbp-F0h] BYREF
  unsigned int v46; // [rsp+50h] [rbp-E8h] BYREF
  PVOID P; // [rsp+58h] [rbp-E0h] BYREF
  _QWORD v48[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v49; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+78h] [rbp-C0h]
  __int64 v51; // [rsp+80h] [rbp-B8h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+90h] [rbp-A8h] BYREF
  _QWORD *v53; // [rsp+B0h] [rbp-88h]
  __int64 v54; // [rsp+B8h] [rbp-80h]
  unsigned int *v55; // [rsp+C0h] [rbp-78h]
  __int64 v56; // [rsp+C8h] [rbp-70h]
  __int64 *v57; // [rsp+D0h] [rbp-68h]
  __int64 v58; // [rsp+D8h] [rbp-60h]
  __int64 *v59; // [rsp+E0h] [rbp-58h]
  __int64 v60; // [rsp+E8h] [rbp-50h]

  LODWORD(v45) = a4;
  v10 = 0;
  LODWORD(v48[0]) = 0;
  v11 = 0;
  P = 0LL;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  v48[1] = Oplock;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)a2 == 13
    && FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(a2 + 48), &P) )
  {
    if ( (v13 & 0x20000) != 0 )
    {
      v14 = P;
      FsRtlpOplockDequeueRH((__int64)P);
      v15 = v14[7];
      v16 = (_QWORD *)v14[8];
      if ( *(_QWORD **)(v15 + 8) != v14 + 7 || (_QWORD *)*v16 != v14 + 7 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v14[5] )
        FsRtlpClearOwner(Oplock, (__int64)v14);
      ExFreePoolWithTag(v14, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState((_QWORD *)Oplock);
      goto LABEL_14;
    }
    for ( i = *(__int64 **)(Oplock + 88); i != (__int64 *)(Oplock + 88); i = (__int64 *)*i )
    {
      v19 = i;
      if ( !*((_BYTE *)i + 53) )
      {
        i = (__int64 *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v19);
      }
    }
    v20 = P;
    FsRtlpOplockDequeueRH((__int64)P);
    v21 = v20[7];
    v22 = (_QWORD *)v20[8];
    if ( *(_QWORD **)(v21 + 8) != v20 + 7 || (_QWORD *)*v22 != v20 + 7 )
      __fastfail(3u);
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v20[5] )
      FsRtlpClearOwner(Oplock, (__int64)v20);
    ExFreePoolWithTag(v20, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState((_QWORD *)Oplock);
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a6, a7) )
    goto LABEL_14;
  if ( (a6 & 0x1000) != 0 )
  {
    v23 = *(SECTION_OBJECT_POINTERS **)(*(_QWORD *)(a2 + 48) + 40LL);
    if ( v23 )
    {
      if ( MmDoesFileHaveUserWritableReferences(v23) )
      {
        v24 = *(_QWORD *)(a3 + 24);
        *(_DWORD *)(v24 + 8) = 0;
        *(_DWORD *)(v24 + 12) |= 4u;
        if ( (unsigned int)dword_140C03770 > 5 && tlgKeywordOn((__int64)&dword_140C03770, 0x400000000000LL) )
        {
          v28 = v27 + 1;
          v48[0] = (unsigned int)(v27 + 1);
          v53 = v48;
          v54 = 8LL;
          v46 = a6;
          v55 = &v46;
          v56 = v26;
          LODWORD(v45) = *(_DWORD *)(Oplock + 144);
          v57 = &v45;
          v58 = v26;
          v49 = 0x1000000LL;
          v59 = &v49;
          v60 = 8LL;
          tlgWriteAgg((__int64)&dword_140C03770, (unsigned __int8 *)&byte_14002AFE8, v25, v27 + 6, &v52);
        }
        else
        {
          v28 = 1;
        }
LABEL_39:
        v10 = -1073741598;
        v17 = v28;
        goto LABEL_16;
      }
    }
  }
  if ( a6 == 200 )
  {
    *(_QWORD *)Oplock = a3;
    v29 = (__int64 *)(a2 + 48);
    *(_QWORD *)(Oplock + 8) = *v29;
    *(_DWORD *)(Oplock + 144) = *(_DWORD *)(Oplock + 144) & 0x20 | 0xC8;
    goto LABEL_110;
  }
  v30 = *(_DWORD *)(Oplock + 144);
  if ( (v30 & 0x91) == 0 )
  {
    if ( (v30 & 0x7000) == 0 || (v30 & 0x1F00F00) != 0 || *(_QWORD *)(Oplock + 72) != Oplock + 72 )
    {
      if ( (a6 & 0x10000) == 0 )
      {
        v10 = -1073741598;
        if ( a3 )
        {
          *(_DWORD *)(a3 + 48) = -1073741598;
          IofCompleteRequest((PIRP)a3, 1);
        }
        LODWORD(v48[0]) = -1073741598;
        v29 = (__int64 *)(a2 + 48);
LABEL_110:
        if ( !v11 )
          goto LABEL_115;
        goto LABEL_111;
      }
LABEL_46:
      v10 = -1073739511;
      goto LABEL_115;
    }
    if ( (a6 & 0x10000) != 0 )
      goto LABEL_46;
    v46 = a6 & 0x7000;
    if ( (a6 & 0x7000) != 0 )
    {
      v29 = (__int64 *)(a2 + 48);
      if ( !*(_BYTE *)(*v29 + 73) || (a6 & 0x2000) == 0 )
      {
        v32 = v30 & 0x1F0FFDF;
        if ( v32 == 4096 )
        {
          if ( ((a6 - 20544) & 0xFFFFDFFF) == 0 )
          {
            v39 = (_QWORD *)(Oplock + 40);
            for ( j = *(_QWORD **)(Oplock + 40); j != v39; j = (_QWORD *)*j )
            {
              v49 = j[2];
              if ( !FsRtlpOplockKeysEqual(*v29, *(_QWORD *)(v49 + 48), 0) )
                goto LABEL_47;
            }
            if ( (unsigned int)v45 > 1 && (a5 & 1) == 0 )
              goto LABEL_14;
            for ( k = (_QWORD *)*v39; ; k = (_QWORD *)*v42 )
            {
              v45 = (__int64)k;
              if ( k == v39 )
                break;
              v42 = (_QWORD *)k[1];
              FsRtlpRemoveAndCompleteReadOnlyIrp(*v42, 533LL, v46, Oplock);
            }
            v11 = 1;
            goto LABEL_110;
          }
        }
        else if ( v32 == 12288 )
        {
          if ( a6 == 28736 )
          {
            v35 = (__int64 *)(Oplock + 56);
            for ( m = *(__int64 **)(Oplock + 56); m != v35; m = (__int64 *)*m )
            {
              if ( !FsRtlpOplockKeysEqual(*v29, m[3], 0) )
                goto LABEL_47;
              if ( m[7] )
              {
                v10 = -1073741597;
                goto LABEL_48;
              }
            }
            v28 = 1;
            if ( (unsigned int)v45 > 1 && (a5 & 1) == 0 )
              goto LABEL_39;
            for ( n = *v35; ; n = *v38 )
            {
              v45 = n;
              if ( (__int64 *)n == v35 )
                break;
              v38 = *(__int64 **)(n + 8);
              FsRtlpRemoveAndCompleteRHIrp(*v38, Oplock, 533, v46, 0, 0, 0);
            }
            goto LABEL_111;
          }
        }
        else if ( (v32 == 20544 || v32 == 28736 && a6 == 28736)
               && ((a6 - 20544) & 0xFFFFDFFF) == 0
               && FsRtlpOplockKeysEqual(*v29, *(_QWORD *)(Oplock + 8), 0) )
        {
          v50 = *(_QWORD *)Oplock;
          v33 = v50;
          *(_BYTE *)(v33 + 69) = KeAcquireQueuedSpinLock(7uLL);
          _InterlockedExchange64((volatile __int64 *)(v33 + 104), 0LL);
          KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v33 + 69));
          if ( *(_BYTE *)(v50 + 68) )
          {
            *(_QWORD *)(v33 + 56) = 0LL;
            *(_DWORD *)(v33 + 48) = -1073741536;
          }
          else
          {
            v34 = *(_QWORD *)(v50 + 24);
            v51 = v34;
            *(_OWORD *)v34 = 0LL;
            *(_QWORD *)(v34 + 16) = 0LL;
            *(_DWORD *)v34 = 1572865;
            *(_DWORD *)(v34 + 4) = (*(_DWORD *)(Oplock + 144) >> 12) & 7;
            *(_DWORD *)(v34 + 8) = ((a6 & 0x1000) != 0) | (a6 >> 12) & 6;
            *(_QWORD *)(v33 + 56) = 24LL;
            *(_DWORD *)(v33 + 48) = 533;
          }
          IofCompleteRequest((PIRP)v33, 1);
          *(_QWORD *)Oplock = 0LL;
          ObfDereferenceObjectWithTag(*(PVOID *)(Oplock + 8), 0x746C6644u);
          *(_QWORD *)(Oplock + 8) = 0LL;
          goto LABEL_111;
        }
      }
    }
LABEL_47:
    v10 = -1073741598;
LABEL_48:
    v17 = 1;
    goto LABEL_16;
  }
  if ( (v30 & 0x10) != 0 && (a6 & 0x7000) != 0
    || (v30 & 0x80u) != 0 && !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(Oplock + 8), 0) )
  {
    if ( (a6 & 0x10000) != 0 )
      goto LABEL_46;
    goto LABEL_47;
  }
  v31 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
  if ( v31 == 16 || v31 == 4096 || v31 == 4112 )
    FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)(Oplock + 40), 0LL, 0LL, Oplock);
  if ( (unsigned int)v45 > 1 && (*(_DWORD *)(Oplock + 144) & 1) != 0 && (a5 & 1) == 0 )
  {
    v10 = -1073741598;
    if ( !a3 )
      goto LABEL_115;
    goto LABEL_15;
  }
  v29 = (__int64 *)(a2 + 48);
  if ( *(_BYTE *)(*v29 + 73) && (a6 & 0x2000) != 0 )
  {
    if ( (a6 & 0x10000) != 0 )
      goto LABEL_46;
LABEL_14:
    v10 = -1073741598;
LABEL_15:
    v17 = 1;
LABEL_16:
    *(_DWORD *)(a3 + 48) = v10;
    IofCompleteRequest((PIRP)a3, v17);
    goto LABEL_115;
  }
LABEL_111:
  *(_QWORD *)Oplock = a3;
  *(_QWORD *)(Oplock + 8) = *v29;
  FsRtlpClearOwner(Oplock, 0LL);
  *(_QWORD *)(Oplock + 16) = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(Oplock + 24) = CurrentThread;
  ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
  *(_BYTE *)(Oplock + 32) = 0;
  *(_DWORD *)(Oplock + 144) = a6 | *(_DWORD *)(Oplock + 144) & 0x20;
  ObfReferenceObjectWithTag((PVOID)*v29, 0x746C6644u);
  *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
  *(_QWORD *)(a3 + 56) = Oplock;
  *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
  if ( *(_BYTE *)(a3 + 68) )
  {
    FsRtlpCancelExclusiveIrp(a3, 1, 1);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
  }
  v10 = 259;
LABEL_115:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  return v10;
}
