/*
 * XREFs of FsRtlpRequestExclusiveOplock @ 0x1403752B0
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1405EA170 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     FsRtlpComputeShareableOplockState @ 0x140206110 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402067A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140206930 (ExReleaseFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x140242E00 (IofCompleteRequest.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     KeReleaseQueuedSpinLock @ 0x140291250 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402912F0 (KeAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpOplockKeysEqual @ 0x1402D6290 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockDequeueRH @ 0x1402D7250 (FsRtlpOplockDequeueRH.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1402F7C00 (MmDoesFileHaveUserWritableReferences.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140311600 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036C590 (FsRtlpCancelExclusiveIrp.c)
 *     _tlgWriteAgg @ 0x14036D53C (_tlgWriteAgg.c)
 *     FsRtlpClearOwner @ 0x140375A58 (FsRtlpClearOwner.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F0208 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404F07CC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404F08CC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1405EA118 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x140688F58 (FsRtlpAllocateOplock.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlpRequestExclusiveOplock(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // r15d
  unsigned int v11; // ebx
  __int64 Oplock; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r11d
  _QWORD *v16; // r14
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *i; // r14
  void *v20; // rcx
  _QWORD *v21; // r14
  __int64 v22; // rcx
  _QWORD *v23; // rax
  SECTION_OBJECT_POINTERS *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ecx
  int v29; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v31; // ecx
  __int64 v32; // r15
  __int64 v33; // r8
  _QWORD *v34; // r12
  _QWORD *m; // r15
  _QWORD *n; // rax
  PVOID *v37; // r15
  _QWORD *v38; // r12
  _QWORD *j; // r15
  _QWORD *k; // rax
  _QWORD *v41; // r15
  unsigned int v43; // [rsp+44h] [rbp-104h] BYREF
  PVOID P; // [rsp+48h] [rbp-100h] BYREF
  int v45; // [rsp+50h] [rbp-F8h] BYREF
  int v46; // [rsp+54h] [rbp-F4h]
  _QWORD *v47; // [rsp+58h] [rbp-F0h]
  __int64 v48; // [rsp+60h] [rbp-E8h]
  int v49; // [rsp+68h] [rbp-E0h]
  __int64 v50; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+80h] [rbp-C8h]
  __int64 v53; // [rsp+88h] [rbp-C0h]
  __int64 v54; // [rsp+90h] [rbp-B8h]
  __int64 v55; // [rsp+98h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 *v57; // [rsp+C0h] [rbp-88h]
  __int64 v58; // [rsp+C8h] [rbp-80h]
  unsigned int *v59; // [rsp+D0h] [rbp-78h]
  __int64 v60; // [rsp+D8h] [rbp-70h]
  int *v61; // [rsp+E0h] [rbp-68h]
  __int64 v62; // [rsp+E8h] [rbp-60h]
  __int64 *v63; // [rsp+F0h] [rbp-58h]
  __int64 v64; // [rsp+F8h] [rbp-50h]

  v7 = a4;
  v43 = a4;
  v11 = 0;
  v49 = 0;
  P = 0LL;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  v48 = Oplock;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)a2 == 13
    && FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(a2 + 48), &P) )
  {
    if ( (v15 & 0x20000) != 0 )
    {
      v16 = P;
      FsRtlpOplockDequeueRH((__int64)P, v13, v14);
      v17 = v16[7];
      v18 = (_QWORD *)v16[8];
      if ( *(_QWORD **)(v17 + 8) != v16 + 7 || (_QWORD *)*v18 != v16 + 7 )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v16[5] )
        FsRtlpClearOwner(Oplock, v16);
      ExFreePoolWithTag(v16, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      goto LABEL_14;
    }
    for ( i = *(_QWORD **)(Oplock + 88); i != (_QWORD *)(Oplock + 88); i = (_QWORD *)*i )
    {
      v20 = i;
      if ( !*((_BYTE *)i + 53) )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v20);
      }
    }
    v21 = P;
    FsRtlpOplockDequeueRH((__int64)P, v13, v14);
    v22 = v21[7];
    v23 = (_QWORD *)v21[8];
    if ( *(_QWORD **)(v22 + 8) != v21 + 7 || (_QWORD *)*v23 != v21 + 7 )
      __fastfail(3u);
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v21[5] )
      FsRtlpClearOwner(Oplock, v21);
    ExFreePoolWithTag(v21, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    v7 = v43;
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a6, a7) )
    goto LABEL_14;
  v46 = a6 & 0x1000;
  if ( (a6 & 0x1000) != 0 )
  {
    v24 = *(SECTION_OBJECT_POINTERS **)(*(_QWORD *)(a2 + 48) + 40LL);
    if ( v24 )
    {
      if ( MmDoesFileHaveUserWritableReferences(v24) )
      {
        v25 = *(_QWORD *)(a3 + 24);
        *(_DWORD *)(v25 + 8) = 0;
        *(_DWORD *)(v25 + 12) |= 4u;
        if ( (unsigned int)dword_140C021A0 > 5 && tlgKeywordOn((__int64)&dword_140C021A0, 0x400000000000LL) )
        {
          v50 = 1LL;
          v57 = &v50;
          v58 = 8LL;
          v43 = a6;
          v59 = &v43;
          v60 = v27;
          v45 = *(_DWORD *)(Oplock + 144);
          v61 = &v45;
          v62 = v27;
          v51 = 0x1000000LL;
          v63 = &v51;
          v64 = 8LL;
          tlgWriteAgg((__int64)&dword_140C021A0, (unsigned __int8 *)&byte_1400244B5, v26, 6u, &v56);
        }
        goto LABEL_14;
      }
    }
  }
  if ( a6 == 200 )
  {
    *(_QWORD *)Oplock = a3;
    *(_QWORD *)(Oplock + 8) = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(Oplock + 144) = *(_DWORD *)(Oplock + 144) & 0x20 | 0xC8;
    goto LABEL_103;
  }
  v28 = *(_DWORD *)(Oplock + 144);
  if ( (v28 & 0x91) == 0 )
  {
    if ( (v28 & 0x7000) == 0 || (v28 & 0x1F00F00) != 0 || *(_QWORD *)(Oplock + 72) != Oplock + 72 )
    {
      if ( (a6 & 0x10000) != 0 )
        goto LABEL_42;
      goto LABEL_101;
    }
    if ( (a6 & 0x10000) != 0 )
      goto LABEL_42;
    if ( (a6 & 0x7000) == 0 || *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) && (a6 & 0x2000) != 0 )
    {
LABEL_14:
      v11 = -1073741598;
LABEL_102:
      *(_DWORD *)(a3 + 48) = v11;
      IofCompleteRequest((PIRP)a3, 1);
      goto LABEL_103;
    }
    v31 = v28 & 0x1F0FFDF;
    if ( v31 == 4096 )
    {
      if ( ((a6 - 20544) & 0xFFFFDFFF) != 0 )
        goto LABEL_14;
      v38 = (_QWORD *)(Oplock + 40);
      for ( j = *(_QWORD **)(Oplock + 40); j != v38; j = (_QWORD *)*j )
      {
        v54 = j[2];
        if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v54 + 48), 0) )
        {
LABEL_90:
          v11 = -1073741598;
          goto LABEL_102;
        }
      }
      if ( v43 <= 1 || (a5 & 1) != 0 )
      {
        for ( k = (_QWORD *)*v38; ; k = (_QWORD *)*v41 )
        {
          v47 = k;
          if ( k == v38 )
            break;
          v41 = (_QWORD *)k[1];
          FsRtlpRemoveAndCompleteReadOnlyIrp(*v41, 533LL, a6 & 0x7000);
        }
LABEL_54:
        *(_QWORD *)Oplock = a3;
        *(_QWORD *)(Oplock + 8) = *(_QWORD *)(a2 + 48);
        FsRtlpClearOwner(Oplock, 0LL);
        *(_QWORD *)(Oplock + 16) = KeGetCurrentThread()->ApcState.Process;
        CurrentThread = KeGetCurrentThread();
        *(_QWORD *)(Oplock + 24) = CurrentThread;
        ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
        *(_BYTE *)(Oplock + 32) = 0;
        *(_DWORD *)(Oplock + 144) = a6 | *(_DWORD *)(Oplock + 144) & 0x20;
        ObfReferenceObjectWithTag(*(PVOID *)(a2 + 48), 0x746C6644u);
        v55 = *(_QWORD *)(a3 + 184);
        *(_BYTE *)(v55 + 3) |= 1u;
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
        v11 = 259;
        goto LABEL_103;
      }
    }
    else
    {
      if ( v31 != 12288 )
      {
        if ( (v31 == 20544 || v31 == 28736 && a6 == 28736)
          && ((a6 - 20544) & 0xFFFFDFFF) == 0
          && FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(Oplock + 8), 0) )
        {
          v52 = *(_QWORD *)Oplock;
          v32 = v52;
          *(_BYTE *)(v32 + 69) = KeAcquireQueuedSpinLock(7uLL);
          _InterlockedExchange64((volatile __int64 *)(v32 + 104), 0LL);
          KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v32 + 69));
          if ( *(_BYTE *)(v52 + 68) )
          {
            *(_QWORD *)(v32 + 56) = 0LL;
            *(_DWORD *)(v32 + 48) = -1073741536;
          }
          else
          {
            v33 = *(_QWORD *)(v52 + 24);
            v53 = v33;
            *(_OWORD *)v33 = 0LL;
            *(_QWORD *)(v33 + 16) = 0LL;
            *(_DWORD *)v33 = 1572865;
            *(_DWORD *)(v33 + 4) = (*(_DWORD *)(Oplock + 144) >> 12) & 7;
            *(_DWORD *)(v33 + 8) = (v46 != 0) | (a6 >> 12) & 6;
            *(_QWORD *)(v32 + 56) = 24LL;
            *(_DWORD *)(v32 + 48) = 533;
          }
          IofCompleteRequest((PIRP)v32, 1);
          *(_QWORD *)Oplock = 0LL;
          ObfDereferenceObjectWithTag(*(PVOID *)(Oplock + 8), 0x746C6644u);
          *(_QWORD *)(Oplock + 8) = 0LL;
          goto LABEL_54;
        }
        goto LABEL_14;
      }
      if ( a6 != 28736 )
        goto LABEL_14;
      v34 = (_QWORD *)(Oplock + 56);
      for ( m = *(_QWORD **)(Oplock + 56); m != v34; m = (_QWORD *)*m )
      {
        if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), m[3], 0) )
          goto LABEL_90;
        if ( m[7] )
        {
          v11 = -1073741597;
          goto LABEL_102;
        }
      }
      if ( v43 <= 1 || (a5 & 1) != 0 )
      {
        for ( n = (_QWORD *)*v34; ; n = *v37 )
        {
          v47 = n;
          if ( n == v34 )
            break;
          v37 = (PVOID *)n[1];
          FsRtlpRemoveAndCompleteRHIrp(*v37, 0, 0, 0);
        }
        goto LABEL_54;
      }
    }
    v11 = -1073741598;
    goto LABEL_102;
  }
  if ( (v28 & 0x10) != 0 && (a6 & 0x7000) != 0
    || (v28 & 0x80u) != 0 && !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(Oplock + 8), 0) )
  {
    goto LABEL_41;
  }
  v29 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
  if ( v29 == 16 || v29 == 4096 || v29 == 4112 )
    FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)(Oplock + 40), 0LL, 0LL);
  if ( v7 <= 1 || (*(_DWORD *)(Oplock + 144) & 1) == 0 || (a5 & 1) != 0 )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) || (a6 & 0x2000) == 0 )
      goto LABEL_54;
LABEL_41:
    if ( (a6 & 0x10000) != 0 )
    {
LABEL_42:
      v11 = -1073739511;
      goto LABEL_103;
    }
    goto LABEL_14;
  }
LABEL_101:
  v11 = -1073741598;
  if ( a3 )
    goto LABEL_102;
LABEL_103:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  return v11;
}
