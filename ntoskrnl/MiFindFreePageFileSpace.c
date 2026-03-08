/*
 * XREFs of MiFindFreePageFileSpace @ 0x140209F7C
 * Callers:
 *     MiGetKernelStackSwapSupport @ 0x1402DBFB8 (MiGetKernelStackSwapSupport.c)
 *     MiReservePageFileSpace @ 0x14032E800 (MiReservePageFileSpace.c)
 *     MiFindPageFileWriteCluster @ 0x1406374E0 (MiFindPageFileWriteCluster.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1406391E0 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140A4071C (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiInvalidatePageFileBitmapsCache @ 0x14020A3E4 (MiInvalidatePageFileBitmapsCache.c)
 *     MiPageFileLargestBitmapsRun @ 0x14020A53C (MiPageFileLargestBitmapsRun.c)
 *     RtlLengthCurrentClearRunForward @ 0x14020B7C4 (RtlLengthCurrentClearRunForward.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlSetBits @ 0x14028BC50 (RtlSetBits.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     MiTransferSoftwarePte @ 0x14032F630 (MiTransferSoftwarePte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRescanPagefileBitmaps @ 0x140392140 (MiRescanPagefileBitmaps.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFindFreePageFileSpaceForward @ 0x1406373A0 (MiFindFreePageFileSpaceForward.c)
 *     MiSetPageFileAllocationBits @ 0x1406391A8 (MiSetPageFileAllocationBits.c)
 */

__int64 __fastcall MiFindFreePageFileSpace(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // esi
  unsigned __int64 v7; // rbx
  __int64 v8; // r13
  unsigned int v9; // r14d
  unsigned int v10; // esi
  _QWORD *v11; // r15
  __int64 i; // r14
  __int64 v13; // rdi
  __int16 v14; // dx
  _WORD *v15; // rcx
  int v16; // eax
  volatile LONG *v17; // rdi
  int v18; // ecx
  unsigned __int64 v19; // r14
  KIRQL v20; // al
  KIRQL v21; // r15
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  bool v24; // zf
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  ULONG FreePageFileSpaceForward; // eax
  ULONG v30; // edi
  char v31; // al
  unsigned int v32; // esi
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  unsigned int v36; // eax
  int v37; // esi
  ULONG v38; // eax
  unsigned __int64 v39; // rdx
  unsigned int v40; // eax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned int v43; // ecx
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  int v46; // eax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  int v50; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v54; // eax
  int v55; // [rsp+30h] [rbp-50h] BYREF
  int v56; // [rsp+34h] [rbp-4Ch]
  int v57; // [rsp+38h] [rbp-48h]
  PEX_SPIN_LOCK SpinLock; // [rsp+40h] [rbp-40h]
  __int128 v59; // [rsp+48h] [rbp-38h]
  __int128 v60; // [rsp+58h] [rbp-28h]
  __int128 v61; // [rsp+68h] [rbp-18h]
  __int64 v62; // [rsp+78h] [rbp-8h]
  unsigned int v65; // [rsp+D8h] [rbp+58h]

  v65 = a4;
  v62 = 0LL;
  v4 = a4;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  if ( a3 < 0xFFFFFFFF )
  {
    LODWORD(v7) = -1;
    if ( (a4 & 0x10) != 0 )
      goto LABEL_3;
    v8 = *(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a2) >> 4) + 17056);
    if ( (a4 & 0x65) == 1
      && (unsigned int)MiPageFileLargestBitmapsRun(*(_QWORD *)(a1
                                                             + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a2) >> 4)
                                                             + 17056)) < a3 )
    {
      v4 |= 0x10u;
      v65 = v4;
    }
    else
    {
      v34 = *a2;
      if ( qword_140C657C0 && (v34 & 0x10) == 0 )
        v34 &= ~qword_140C657C0;
      v7 = HIDWORD(v34);
    }
    if ( (v4 & 0x10) != 0 )
    {
LABEL_3:
      v8 = *(_QWORD *)(a1 + 17056);
      v9 = *(_DWORD *)(a1 + 17048);
      if ( (*(_BYTE *)(v8 + 204) & 0x40) != 0 )
        v10 = 0;
      else
        v10 = MiPageFileLargestBitmapsRun(*(_QWORD *)(a1 + 17056));
      if ( v9 > 1 )
      {
        v11 = (_QWORD *)(a1 + 17064);
        for ( i = v9 - 1; i; --i )
        {
          v13 = *v11;
          v14 = *(_WORD *)(v8 + 204);
          v15 = (_WORD *)(*v11 + 204LL);
          if ( (v14 & 0x10) != 0 && (*(_BYTE *)v15 & 0x10) == 0 || (v14 & 0x20) != 0 && (*(_BYTE *)v15 & 0x20) == 0 )
          {
            v8 = *v11;
            v40 = MiPageFileLargestBitmapsRun(*v11);
          }
          else
          {
            if ( (*v15 & 0x30) != 0 )
              goto LABEL_10;
            v40 = MiPageFileLargestBitmapsRun(*v11);
            if ( v40 <= v10 )
              goto LABEL_10;
            v8 = v13;
          }
          v10 = v40;
LABEL_10:
          ++v11;
        }
      }
      v4 = v65;
    }
    v16 = 0;
    v17 = (volatile LONG *)(v8 + 232);
    v55 = 0;
    v18 = v4 & 4;
    v57 = v18;
    while ( 1 )
    {
      v19 = 0LL;
      SpinLock = v17;
      v56 = 0;
      if ( v18 )
      {
        v21 = 0;
      }
      else
      {
        if ( (v4 & 1) != 0 || v16 )
        {
          v20 = ExAcquireSpinLockExclusive(v17);
        }
        else
        {
          v56 = 1;
          v20 = ExAcquireSpinLockShared(v17);
        }
        v21 = v20;
      }
      if ( (*(_BYTE *)(v8 + 207) & 1) != 0 )
      {
LABEL_91:
        if ( !v57 )
        {
          if ( v56 )
            ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
          else
            ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v21 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v54 = ~(unsigned __int16)(-1LL << (v21 + 1));
              v24 = (v54 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v54;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(v21);
        }
        return 0LL;
      }
      if ( (_DWORD)v7 == -1 )
        goto LABEL_19;
      v35 = *(_QWORD *)(v8 + 112);
      if ( (unsigned int)v7 >= *(_DWORD *)(v35 + 24) )
      {
        if ( (v4 & 0x48) != 0 )
          goto LABEL_91;
LABEL_19:
        LODWORD(v22) = a3;
        goto LABEL_20;
      }
      if ( _bittest64(*(const signed __int64 **)(v35 + 32), (unsigned int)v7)
        || _bittest64(*(const signed __int64 **)(v35 + 16), (unsigned int)v7) )
      {
        v30 = 0;
        v37 = v4 & 0x40;
      }
      else
      {
        v36 = RtlLengthCurrentClearRunForward(v35 + 24, (unsigned int)v7, (unsigned int)a3);
        if ( v36 == (_DWORD)a3 )
        {
          v37 = v4 & 0x40;
LABEL_77:
          v38 = RtlLengthCurrentClearRunForward(*(_QWORD *)(v8 + 112) + 8LL, (unsigned int)v7, v36);
          v22 = a3;
          v30 = v38;
          if ( v38 != (_DWORD)a3 && !v37 )
            v30 = 0;
          goto LABEL_78;
        }
        v37 = v4 & 0x40;
        if ( v37 )
          goto LABEL_77;
        v30 = 0;
      }
      v22 = a3;
LABEL_78:
      if ( v30 == v22 || v37 )
      {
        v55 = v7;
        goto LABEL_49;
      }
      v17 = SpinLock;
      v4 = v65;
LABEL_20:
      v23 = (unsigned int)v22;
      if ( (v4 & 8) != 0 )
      {
        v55 = v7;
        FreePageFileSpaceForward = MiFindFreePageFileSpaceForward(v8, &v55, (unsigned int)v22, v4);
        LODWORD(v7) = v55;
        goto LABEL_48;
      }
      while ( 2 )
      {
        LODWORD(v62) = 0;
        v24 = (*(_BYTE *)(v8 + 152) & 1) == 0;
        v25 = *(_QWORD *)(v8 + 144);
        HIDWORD(v62) = v23;
        if ( !v24 && v25 )
          v25 ^= v8 + 144;
        v19 = 0LL;
        while ( 1 )
        {
          if ( !v25 )
            goto LABEL_45;
          if ( (unsigned int)v23 >= *(_DWORD *)(v25 + 52) )
          {
            if ( (unsigned int)v23 > *(_DWORD *)(v25 + 52) )
            {
              v26 = *(_QWORD *)(v25 + 8);
              goto LABEL_29;
            }
            if ( !*(_DWORD *)(v25 + 48) )
              break;
          }
          v26 = *(_QWORD *)v25;
          v19 = v25;
LABEL_29:
          if ( (*(_BYTE *)(v8 + 152) & 1) != 0 && v26 )
            v25 ^= v26;
          else
            v25 = v26;
        }
        v27 = *(_QWORD *)v25;
        v19 = v25;
        if ( (*(_BYTE *)(v8 + 152) & 1) != 0 && v27 )
          v27 ^= v25;
        a4 = 0LL;
        if ( v27 )
        {
          while ( 1 )
          {
            if ( (unsigned int)v23 < *(_DWORD *)(v27 + 52) )
              goto LABEL_39;
            if ( (unsigned int)v23 <= *(_DWORD *)(v27 + 52) )
              break;
            v28 = *(_QWORD *)(v27 + 8);
LABEL_40:
            if ( (*(_BYTE *)(v8 + 152) & 1) != 0 && v28 )
              v27 ^= v28;
            else
              v27 = v28;
            if ( !v27 )
            {
              if ( a4 )
                v19 = a4;
              goto LABEL_45;
            }
          }
          if ( !*(_DWORD *)(v27 + 48) )
            a4 = v27;
LABEL_39:
          v28 = *(_QWORD *)v27;
          goto LABEL_40;
        }
LABEL_45:
        if ( *(_DWORD *)(v19 + 52) != -1 )
        {
          FreePageFileSpaceForward = a3;
LABEL_47:
          LODWORD(v7) = *(_DWORD *)(v19 + 48);
          v55 = v7;
LABEL_48:
          v30 = FreePageFileSpaceForward;
LABEL_49:
          if ( v30 )
          {
            v31 = v65;
            v32 = 0;
            if ( (v65 & 1) != 0 )
            {
              v32 = 2;
              RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(v8 + 112) + 24LL), v7, v30);
              *(_QWORD *)(v8 + 48) -= v30;
              v31 = v65;
            }
            if ( (v31 & 2) != 0 )
            {
              v32 |= 1u;
              MiSetPageFileAllocationBits(v8, (unsigned int)v7, v30, a4);
            }
            if ( v32 )
              MiInvalidatePageFileBitmapsCache(v8, (unsigned int)v7, v30, v19);
            if ( !v57 )
            {
              if ( v56 )
                ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
              else
                ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
              if ( KiIrqlFlags )
              {
                v47 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v47 <= 0xFu && v21 <= 0xFu && v47 >= 2u )
                {
                  v48 = KeGetCurrentPrcb();
                  v49 = v48->SchedulerAssist;
                  v50 = ~(unsigned __int16)(-1LL << (v21 + 1));
                  v24 = (v50 & v49[5]) == 0;
                  v49[5] &= v50;
                  if ( v24 )
                    KiRemoveSystemWorkPriorityKick(v48);
                  LODWORD(v7) = v55;
                }
              }
              __writecr8(v21);
            }
            *a2 = MiTransferSoftwarePte(*a2, v8, (unsigned int)v7, v32);
            return v30;
          }
          goto LABEL_91;
        }
        v39 = *(unsigned int *)(v8 + 140);
        if ( v39 < a3 || (unsigned int)v39 < 0x20 )
        {
          if ( (v4 & 0x80u) != 0 )
            goto LABEL_91;
          v41 = *(_QWORD *)v19;
          v42 = v19;
          if ( *(_QWORD *)v19 )
          {
            while ( 1 )
            {
              v19 = v41;
              if ( !*(_QWORD *)(v41 + 8) )
                break;
              v41 = *(_QWORD *)(v41 + 8);
            }
          }
          else
          {
            while ( 1 )
            {
              v19 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !v19 || *(_QWORD *)(v19 + 8) == v42 )
                break;
              v42 = v19;
            }
          }
          v43 = *(_DWORD *)(v8 + 140);
          if ( v19 )
          {
            FreePageFileSpaceForward = *(_DWORD *)(v19 + 52);
            if ( v43 <= FreePageFileSpaceForward || (unsigned int)v39 < 0x20 )
              goto LABEL_47;
          }
          else if ( v43 < 0x20 )
          {
            goto LABEL_91;
          }
        }
        if ( !v56 )
        {
          MiRescanPagefileBitmaps(v8, v39, v23, a4);
          v23 = (unsigned int)a3;
          continue;
        }
        break;
      }
      ExReleaseSpinLockSharedFromDpcLevel(v17);
      if ( KiIrqlFlags )
      {
        v44 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v44 <= 0xFu && v21 <= 0xFu && v44 >= 2u )
        {
          v45 = KeGetCurrentPrcb();
          a4 = (unsigned __int64)v45->SchedulerAssist;
          v46 = ~(unsigned __int16)(-1LL << (v21 + 1));
          v24 = (v46 & *(_DWORD *)(a4 + 20)) == 0;
          *(_DWORD *)(a4 + 20) &= v46;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v45);
        }
      }
      __writecr8(v21);
      v18 = v57;
      v16 = 1;
    }
  }
  return 0LL;
}
