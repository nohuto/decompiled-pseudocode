/*
 * XREFs of CcAcquireByteRangeForWrite @ 0x14021A220
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x140215670 (CcNotifyOfMappedWrite.c)
 *     CcFlushCacheAcquireRange @ 0x14021A0CC (CcFlushCacheAcquireRange.c)
 * Callees:
 *     CcFindBcb @ 0x14021B6B0 (CcFindBcb.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14025B1B0 (ExpAcquireResourceExclusiveLite.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     PsBoostThreadIoEx @ 0x1402634D0 (PsBoostThreadIoEx.c)
 *     CcDeductDirtyPages @ 0x14029CD20 (CcDeductDirtyPages.c)
 *     CcFindBitmapRangeToClean @ 0x1402A34FC (CcFindBitmapRangeToClean.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1402DC58C (CcInsertIntoCleanSharedCacheMapList.c)
 *     FsRtlIsNtstatusExpected @ 0x1402ECFB0 (FsRtlIsNtstatusExpected.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x1403C4310 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall CcAcquireByteRangeForWrite(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned int *a6,
        _QWORD *a7,
        char a8,
        __int64 *a9)
{
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // r9
  __int64 BitmapRangeToClean; // rax
  __int64 v17; // r10
  int v18; // r11d
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  _DWORD *v28; // rbx
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // edi
  __int64 *v35; // rcx
  __int64 v36; // rbx
  _WORD *v37; // rdi
  __int64 *v38; // rdx
  char Bcb; // al
  __int64 v40; // rdi
  struct _FAST_MUTEX *v41; // rdi
  _QWORD *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  struct _KTHREAD *v46; // r8
  __int64 v47; // r9
  ULONG_PTR v48; // r10
  __int16 v49; // dx
  __int16 v50; // ax
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 v53; // cl
  char v54; // al
  __int64 v55; // rsi
  unsigned int v56; // ecx
  unsigned int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r9
  unsigned __int64 v61; // r9
  __int64 v62; // rdx
  unsigned int *v63; // rbx
  unsigned int v64; // eax
  unsigned int v65; // eax
  unsigned int v66; // eax
  __int64 v67; // rdi
  unsigned int v68; // eax
  unsigned int v69; // eax
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v71; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v74; // eax
  bool v75; // zf
  __int64 v76; // rax
  int v78; // [rsp+50h] [rbp-118h]
  int v79; // [rsp+54h] [rbp-114h]
  PVOID P; // [rsp+58h] [rbp-110h] BYREF
  __int64 v81; // [rsp+60h] [rbp-108h]
  unsigned __int64 v82; // [rsp+68h] [rbp-100h]
  __int64 *v83; // [rsp+70h] [rbp-F8h]
  _DWORD *v84; // [rsp+78h] [rbp-F0h]
  __int64 v85; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v86; // [rsp+88h] [rbp-E0h]
  int v87; // [rsp+9Ch] [rbp-CCh]
  __int64 v88; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v89; // [rsp+C0h] [rbp-A8h]
  __int64 v90; // [rsp+C8h] [rbp-A0h]
  __int64 v91; // [rsp+F0h] [rbp-78h]
  __int64 v92; // [rsp+F8h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+100h] [rbp-68h] BYREF
  _QWORD *v95; // [rsp+188h] [rbp+20h]

  v95 = a4;
  LODWORD(v81) = a3;
  v85 = a1;
  P = 0LL;
  v89 = 0LL;
  v79 = 0;
  v87 = 0;
  v12 = 0LL;
  v82 = 0LL;
  v84 = 0LL;
  v78 = 0;
  v13 = 0LL;
  v91 = 0LL;
  v86 = 0LL;
  v14 = 0x7FFFFFFFFFFFFFFFLL;
  v88 = 0x7FFFFFFFFFFFFFFFLL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a8 )
  {
    PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
    a4 = v95;
  }
  v90 = *(_QWORD *)(a1 + 536);
  v92 = v90;
  *a5 = 0LL;
  *a6 = 0;
  if ( a4 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 248) + 8LL))(**(_QWORD **)(a1 + 248), *a4);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 288));
  v15 = *(_QWORD *)(a1 + 168);
  v81 = v15;
  if ( v15 && *(_DWORD *)(v15 + 8) && (*(_DWORD *)(v15 + 4) || a3) )
  {
    if ( a2 )
    {
      v13 = *a2 >> 12;
      v14 = (a3 + *a2 - 1) >> 12;
      BitmapRangeToClean = CcFindBitmapRangeToClean(v15, v13);
      v12 = BitmapRangeToClean;
      v19 = *(_QWORD *)(BitmapRangeToClean + 16);
      if ( v14 < v19 + *(unsigned int *)(BitmapRangeToClean + 24) )
        goto LABEL_46;
      v20 = *(unsigned int *)(BitmapRangeToClean + 28);
      if ( v13 > (__int64)(v19 + v20) )
        goto LABEL_46;
      v21 = *(_QWORD *)(BitmapRangeToClean + 40);
      if ( v14 >= (__int64)(v19 + v20) )
        v22 = v21 + 4 * (v20 >> 5);
      else
        v22 = v21 + 4 * (((unsigned __int64)(v14 - v19) >> 5) & 0x7FFFFFF);
      v23 = v81;
    }
    else
    {
      v13 = 0LL;
      if ( !a3 )
        v13 = *(_QWORD *)(v15 + 32);
      if ( a9 )
        v13 = *a9 >> 12;
      v12 = CcFindBitmapRangeToClean(v15, v13);
      v24 = *(unsigned int *)(v12 + 28);
      v25 = *(_QWORD *)(v12 + 16);
      if ( v13 > (__int64)(v24 + v25) )
        v13 = v25 + *(unsigned int *)(v12 + 24);
      v22 = *(_QWORD *)(v12 + 40) + 4 * (v24 >> 5);
      v17 = a3;
    }
    v82 = v22;
    v26 = v13;
    v27 = *(_QWORD *)(v12 + 16);
    v13 = v27 + *(unsigned int *)(v12 + 24);
    if ( v26 >= v13 )
      v13 = v26;
    v86 = (unsigned int)(v13 - v27);
    v28 = (_DWORD *)(*(_QWORD *)(v12 + 40) + 4 * (v86 >> 5));
    v84 = v28;
    v78 = -1 << (v13 % 32);
    v29 = *v28;
    if ( (*v28 & v78) == 0 )
    {
      v78 = -1;
      v13 &= 0xFFFFFFFFFFFFFFE0uLL;
      while ( 1 )
      {
        v84 = ++v28;
        v13 += 32LL;
        if ( (unsigned __int64)v28 > v22 )
        {
          if ( !v18 )
            *(_DWORD *)(v12 + 28) = v86 - 1;
          do
          {
            v12 = *(_QWORD *)v12;
            if ( v12 == v23 + 16 )
            {
              if ( v18 )
                goto LABEL_46;
              v12 = *(_QWORD *)v12;
            }
          }
          while ( !*(_DWORD *)(v12 + 32) );
          v30 = *(unsigned int *)(v12 + 24);
          v31 = *(_QWORD *)(v12 + 16);
          if ( v14 < v31 + v30 )
            goto LABEL_46;
          v32 = *(unsigned int *)(v12 + 28);
          if ( v13 > (__int64)(v32 + v31) )
            goto LABEL_46;
          v33 = *(_QWORD *)(v12 + 40);
          v28 = (_DWORD *)(v33 + 4 * ((unsigned __int64)(unsigned int)v30 >> 5));
          v84 = v28;
          v82 = v33 + 4 * (v32 >> 5);
          v13 = v31 + ((unsigned int)v30 & 0xFFFFFFE0);
          LODWORD(v86) = v30;
          v22 = v82;
        }
        v29 = *v28;
        if ( *v28 )
          break;
        v23 = v81;
      }
    }
    v34 = -v78;
    v78 = v34;
    if ( (v29 & v34) == 0 )
    {
      do
      {
        v34 *= 2;
        ++v13;
      }
      while ( (v29 & v34) == 0 );
      v78 = v34;
    }
    if ( !a2 )
      goto LABEL_137;
    if ( v13 < (v17 + *a2 + 4095) >> 12 )
    {
      if ( *(_QWORD *)(a1 + 16) == a1 + 16 )
        goto LABEL_137;
      v79 = 1;
    }
  }
LABEL_46:
  v35 = (__int64 *)(v85 + 208);
  v83 = (__int64 *)(v85 + 208);
  v36 = v89;
  while ( 1 )
  {
    v37 = (_WORD *)(*(_QWORD *)(a1 + 24) - 16LL);
    P = v37;
    if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    {
      v38 = v35;
      if ( a2 )
        v38 = a2;
      if ( *v38 )
      {
        v88 = *v38 + 4096;
        Bcb = CcFindBcb(a1, v38, &v88, &P);
        v35 = v83;
        if ( Bcb )
        {
          v37 = P;
        }
        else
        {
          v37 = (_WORD *)(*((_QWORD *)P + 3) - 16LL);
          P = v37;
        }
      }
    }
    if ( v37 + 8 != (_WORD *)(a1 + 16) )
    {
      while ( 1 )
      {
        if ( *v37 != 765 )
          goto LABEL_121;
        if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 && v95 && *((_QWORD *)v37 + 6) > *v95 )
        {
          v40 = *((_QWORD *)v37 + 3);
          ++CcDbgLsnLargerThanHint;
          goto LABEL_122;
        }
        if ( a2 )
        {
          v18 = a3;
          if ( *a2 + a3 <= *((_QWORD *)v37 + 1) )
            break;
        }
        else
        {
          v18 = a3;
        }
        v44 = *a6;
        if ( (_DWORD)v44 )
        {
          v42 = a5;
          if ( !*((_BYTE *)v37 + 2)
            || (v45 = *((_QWORD *)v37 + 1), v45 != *a5 + v44)
            || *((_DWORD *)v37 + 16)
            || (v45 & 0x1FFFFFF) == 0 )
          {
            v41 = (struct _FAST_MUTEX *)(a1 + 288);
            goto LABEL_64;
          }
        }
        else
        {
          if ( !*((_BYTE *)v37 + 2) )
            goto LABEL_121;
          if ( a2 )
          {
            if ( *a2 >= *((_QWORD *)v37 + 4) )
              goto LABEL_121;
          }
          else if ( *((_QWORD *)v37 + 1) < *v35 )
          {
            goto LABEL_121;
          }
          if ( v79 && v13 <= (unsigned int)(*((__int64 *)v37 + 1) >> 12) )
            goto LABEL_136;
        }
        ++*((_DWORD *)v37 + 16);
        ExReleaseFastMutex((PFAST_MUTEX)(a1 + 288));
        if ( (*(_DWORD *)(a1 + 152) & 0x202) != 0x200 )
        {
          CcUnpinFileDataEx(v37);
          ExAcquireFastMutex((PFAST_MUTEX)(a1 + 288));
LABEL_116:
          v79 = 0;
          if ( !*a6 )
            *a5 = *((_QWORD *)v37 + 1);
          *a7 = v37;
          *a6 += *((_DWORD *)v37 + 1);
          if ( (*(_DWORD *)(a1 + 152) & 0x3000000) != 0 && *((_QWORD *)v37 + 6) > v36 )
            v36 = *((_QWORD *)v37 + 6);
LABEL_121:
          v40 = *((_QWORD *)v37 + 3);
          goto LABEL_122;
        }
        v48 = (ULONG_PTR)(v37 + 36);
        LOBYTE(v47) = (*a6 != 0) + 1;
        v49 = v37[49];
        v50 = v49 & 0x41;
        if ( FeatureFastResource2 )
        {
          if ( v50 == 1 )
            goto LABEL_187;
          if ( (v49 & 1) == 0 )
            goto LABEL_106;
          CurrentIrql = KeGetCurrentIrql();
          CurrentThread = KeGetCurrentThread();
          if ( CurrentIrql > (unsigned __int8)v47 )
            KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, (unsigned __int8)v47, 0LL);
          if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
            goto LABEL_183;
          if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
            goto LABEL_185;
          if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
            goto LABEL_184;
          v49 = v37[49];
        }
        else
        {
          if ( v50 == 1 )
LABEL_187:
            KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)(v37 + 36), 0LL, 0LL);
          if ( (v49 & 1) == 0 )
            goto LABEL_106;
          v53 = KeGetCurrentIrql();
          v46 = KeGetCurrentThread();
          if ( v53 > (unsigned __int8)v47 )
            KeBugCheckEx(0x1C6u, 0LL, v53, (unsigned __int8)v47, 0LL);
          if ( v53 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
LABEL_183:
            KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
          if ( (v46->ApcState.InProgressFlags & 2) != 0 )
LABEL_185:
            KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
          if ( !v53 && (v46->MiscFlags & 0x400) == 0 && !v46->WaitBlock[3].SpareLong )
LABEL_184:
            KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
        }
        v37 = P;
        if ( (v49 & 1) != 0 )
        {
          v54 = ExpFastResourceLegacyAcquireExclusive(v48);
          goto LABEL_107;
        }
LABEL_106:
        v54 = ExpAcquireResourceExclusiveLite(v48, *a6 == 0, v46, v47);
LABEL_107:
        if ( !v54 )
        {
          CcUnpinFileDataEx(v37);
          v41 = (struct _FAST_MUTEX *)(a1 + 288);
          ExAcquireFastMutex((PFAST_MUTEX)(a1 + 288));
          goto LABEL_63;
        }
        ExAcquireFastMutex((PFAST_MUTEX)(a1 + 288));
        if ( *((_BYTE *)v37 + 2) )
        {
          if ( (*(_DWORD *)(a1 + 152) & 0x1000000) == 0 || !v95 || *((_QWORD *)v37 + 6) <= *v95 )
            goto LABEL_116;
          ++CcDbgLsnLargerThanHint;
        }
        ExReleaseFastMutex((PFAST_MUTEX)(a1 + 288));
        CcUnpinFileDataEx(v37);
        v41 = (struct _FAST_MUTEX *)(a1 + 288);
        ExAcquireFastMutex((PFAST_MUTEX)(a1 + 288));
        if ( *a6 )
          goto LABEL_63;
        v40 = *(_QWORD *)(a1 + 24);
LABEL_122:
        v37 = (_WORD *)(v40 - 16);
        P = v37;
        if ( v37 + 8 == (_WORD *)(a1 + 16) )
          break;
        v35 = v83;
      }
    }
    v41 = (struct _FAST_MUTEX *)(a1 + 288);
LABEL_63:
    v42 = a5;
LABEL_64:
    if ( v79 )
      break;
    v43 = *a6;
    if ( (_DWORD)v43 )
    {
      v55 = v85;
      if ( !a2 )
      {
        *(_QWORD *)(v85 + 208) = *v42 + v43;
        v56 = *a6 >> 12;
        v57 = *(_DWORD *)(a1 + 200);
        if ( v57 <= v56 )
          *(_DWORD *)(a1 + 200) = 0;
        else
          *(_DWORD *)(a1 + 200) = v57 - v56;
      }
      goto LABEL_131;
    }
    v35 = v83;
    if ( !*v83 || a2 )
    {
      v55 = v85;
LABEL_131:
      ExReleaseFastMutex(v41);
      if ( v36 )
      {
        v59 = *(_QWORD *)(v55 + 248);
        if ( (*(_DWORD *)(a1 + 152) & 0x2000000) != 0 )
          (*(void (__fastcall **)(__int64, __int64))(a1 + 256))(v59, v36);
        else
          (*(void (__fastcall **)(_QWORD, __int64))(v59 + 8))(*(_QWORD *)v59, v36);
      }
      goto LABEL_178;
    }
    *v83 = 0LL;
  }
  v18 = a3;
LABEL_136:
  v34 = v78;
  v28 = v84;
LABEL_137:
  if ( (gCcTrace & 1) != 0 )
  {
    if ( a2 )
      v60 = *a2;
    else
      v60 = 0LL;
    DbgPrintEx(
      0x7Fu,
      0,
      "CcAcquireByteRange (AcceptPage) [0x%I64x, 0x%x]: %p (0x%I64x) BM:%p Dirty: 0x%x\n",
      v60,
      v18,
      (const void *)a1,
      v13,
      (const void *)v12,
      *(_DWORD *)(v12 + 32));
  }
  if ( (v34 & *v28) != 0 )
  {
    v61 = v82;
    do
    {
      if ( a2 && v13 + *a6 >= (unsigned int)((*a2 + a3 + 4095LL) >> 12) )
        break;
      if ( (unsigned __int64)v28 > *(_QWORD *)(v12 + 40) + 4 * ((unsigned __int64)*(unsigned int *)(v12 + 28) >> 5) )
        KeBugCheckEx(0x34u, 0x128EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( !a2 && *a6 >= CcMaxLazyWritePages )
        break;
      *v28 -= v34;
      ++*a6;
      v34 *= 2;
      if ( !v34 )
      {
        ++v28;
        v34 = 1;
        if ( (unsigned __int64)v28 > v61 )
          break;
      }
    }
    while ( (v34 & *v28) != 0 );
  }
  v62 = v81;
  v63 = (unsigned int *)(v81 + 4);
  v64 = *(_DWORD *)(v81 + 4);
  if ( *a6 >= v64 )
    v65 = 0;
  else
    v65 = v64 - *a6;
  *v63 = v65;
  v66 = *(_DWORD *)(v62 + 8);
  if ( v66 < *a6 )
    KeBugCheckEx(0x34u, 0x12BDuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *(_DWORD *)(v62 + 8) = v66 - *a6;
  *(_DWORD *)(v12 + 32) -= *a6;
  v67 = v90;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v90 + 768), &LockHandle);
  CcDeductDirtyPages(a1, *a6);
  v68 = *(_DWORD *)(v67 + 976);
  if ( v68 <= *a6 )
    v69 = 0;
  else
    v69 = v68 - *a6;
  *(_DWORD *)(v67 + 976) = v69;
  if ( !*(_DWORD *)(a1 + 112) )
    CcInsertIntoCleanSharedCacheMapList(a1);
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v71 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v71 <= 0xFu && LockHandle.OldIrql <= 0xFu && v71 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v74 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v75 = (v74 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v74;
      if ( v75 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( *(_DWORD *)(v12 + 32) )
  {
    if ( *(_DWORD *)(v12 + 24) == (_DWORD)v86 )
      *(_DWORD *)(v12 + 24) = v13 + *a6 - *(_DWORD *)(v12 + 16);
    if ( a3 )
      goto LABEL_175;
    v76 = v13 + *a6;
  }
  else
  {
    *(_DWORD *)(v12 + 24) = -1;
    *(_DWORD *)(v12 + 28) = 0;
    v76 = *(_QWORD *)(v12 + 16) + 0x2000LL;
  }
  *(_QWORD *)(v81 + 32) = v76;
LABEL_175:
  if ( *(_QWORD *)(a1 + 16) == a1 + 16 )
    *(_DWORD *)(a1 + 200) = *v63;
  ExReleaseFastMutex((PFAST_MUTEX)(a1 + 288));
  *a6 <<= 12;
  *a5 = v13 << 12;
  *a7 = 0LL;
LABEL_178:
  if ( a8 )
  {
    LOBYTE(v58) = 1;
    PsBoostThreadIoEx(KeGetCurrentThread(), v58, 0LL, 0LL);
  }
  return *a6 != 0;
}
