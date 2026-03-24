/*
 * XREFs of MiGatherPagefilePages @ 0x1403318B4
 * Callers:
 *     MiModifiedPageWriter @ 0x1403BEA70 (MiModifiedPageWriter.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     MiWriteComplete @ 0x1402549D0 (MiWriteComplete.c)
 *     MiReleaseWriteInProgressCharges @ 0x140255084 (MiReleaseWriteInProgressCharges.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiWriteCompletePfn @ 0x1402A6310 (MiWriteCompletePfn.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     IoAsynchronousPageWrite @ 0x1402E5D7C (IoAsynchronousPageWrite.c)
 *     MiFillNoReservationCluster @ 0x140318F70 (MiFillNoReservationCluster.c)
 *     MiUpdatePagefilePeakUsage @ 0x14031C9D0 (MiUpdatePagefilePeakUsage.c)
 *     MI_PAGEFILE_WRITE @ 0x140323B04 (MI_PAGEFILE_WRITE.c)
 *     MiMapPageFileHash @ 0x140327238 (MiMapPageFileHash.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x1403295A4 (MiMakePagefileWriterEntryAvailable.c)
 *     MiSetPageFileAllocationBits @ 0x140329EE8 (MiSetPageFileAllocationBits.c)
 *     MiFindPageFileWriteCluster @ 0x14032AEFC (MiFindPageFileWriteCluster.c)
 *     MiStoreWriteModifiedPages @ 0x14032F960 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x140332DF4 (MiUpdatePfnBackingStore.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x140333BF0 (MiInvalidatePageFileBitmapsCache.c)
 *     MiPageFileLargestBitmapsRun @ 0x140333E78 (MiPageFileLargestBitmapsRun.c)
 *     MiBuildReservationCluster @ 0x1403866F0 (MiBuildReservationCluster.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPageFileNoFreeSpace @ 0x140543B74 (MiPageFileNoFreeSpace.c)
 */

__int64 __fastcall MiGatherPagefilePages(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r8
  struct _KTHREAD *CurrentThread; // r13
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  __int16 v9; // cx
  unsigned __int16 v10; // dx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r12
  __int16 v13; // dx
  unsigned int v14; // edi
  ULONG v15; // eax
  unsigned int v16; // ecx
  ULONG v17; // r13d
  unsigned int v18; // eax
  ULONG v19; // edi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned int v22; // r10d
  ULONG v23; // esi
  _QWORD *v24; // r15
  unsigned int v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  _QWORD *v29; // r15
  unsigned int v30; // eax
  __int64 v31; // r15
  int v32; // edi
  unsigned int v33; // edi
  int v34; // ecx
  unsigned __int64 v35; // rax
  int v36; // eax
  unsigned __int64 v37; // rcx
  unsigned int v38; // r15d
  __int64 result; // rax
  unsigned __int64 v40; // r15
  __int64 v41; // rax
  NTSTATUS *v42; // r15
  NTSTATUS v43; // eax
  unsigned __int64 v44; // r13
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  bool v49; // zf
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  unsigned __int64 v54; // rsi
  _QWORD *v55; // r13
  __int64 v56; // rdi
  __int64 v57; // r8
  unsigned __int8 v58; // al
  unsigned __int8 v59; // di
  struct _KPRCB *v60; // r10
  int v61; // eax
  int v62; // eax
  unsigned __int8 v63; // di
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r9
  _DWORD *v66; // r8
  int v67; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v71; // eax
  ULONG v72; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v73; // [rsp+64h] [rbp-35h] BYREF
  unsigned int v74; // [rsp+68h] [rbp-31h]
  struct _KTHREAD *v75; // [rsp+70h] [rbp-29h]
  unsigned __int64 v76; // [rsp+78h] [rbp-21h]
  unsigned __int64 v77; // [rsp+80h] [rbp-19h]
  unsigned __int64 v78; // [rsp+88h] [rbp-11h]
  __int64 v79; // [rsp+90h] [rbp-9h]
  __int64 v80; // [rsp+A0h] [rbp+7h]
  KIRQL v82; // [rsp+108h] [rbp+6Fh]
  unsigned int v83; // [rsp+108h] [rbp+6Fh]
  int v84; // [rsp+108h] [rbp+6Fh]
  unsigned __int8 v85; // [rsp+108h] [rbp+6Fh]
  int v86; // [rsp+110h] [rbp+77h] BYREF
  ULONG v87; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v73 = 0;
  v5 = 0;
  v80 = v1;
  v6 = 1LL;
  v7 = *(_QWORD *)(v1 + 248);
  v79 = v7;
  v75 = CurrentThread;
  if ( !*(_QWORD *)(v1 + 24) )
    goto LABEL_74;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 216) = 131120;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v8 = a1 + 256;
  v9 = *(_WORD *)(v1 + 204);
  v77 = v8;
  v10 = *(_WORD *)(v1 + 204);
  if ( *(_DWORD *)(v7 + 1160) )
    v5 = 4;
  v11 = *(_QWORD *)(v7 + 40LL * (v9 & 0xF) + 2816);
  if ( !_bittest16((const __int16 *)&v10, 4u)
    && (v5 & 4) != 0
    && (v12 = *(_QWORD *)(v7 + 40LL * *(unsigned int *)(v7 + 1156) + 2816)) != 0 )
  {
    v5 |= 2u;
  }
  else
  {
    if ( *(_DWORD *)(v7 + 1152) )
      goto LABEL_66;
    v12 = *(_QWORD *)(v7 + 2752);
  }
  if ( v11 )
  {
    v13 = v10 >> 4;
    goto LABEL_10;
  }
  if ( !v12 || (v13 = v10 >> 4, (v13 & 1) != 0) )
  {
LABEL_66:
    v40 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 232));
    *(_BYTE *)(v1 + 206) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 232));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v40 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v71 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
          v49 = (v71 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v71;
          if ( v49 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v40);
    *(_QWORD *)v4 = 2575857425LL;
    goto LABEL_52;
  }
LABEL_10:
  if ( (v5 & 2) == 0
    && v12
    && (v13 & 1) == 0
    && (!v11
     || (*(_BYTE *)(v1 + 207) & 1) != 0
     || (unsigned int)MiPageFileLargestBitmapsRun(v1) >= *(_DWORD *)(v1 + 136) >> 2
     && (v12 >= (unsigned __int64)(unsigned int)dword_140CFB18C >> 2 || v12 >= v11)) )
  {
    v5 |= 2u;
  }
  v14 = dword_140CFB18C;
  v86 = dword_140CFB18C;
  if ( (v5 & 2) != 0 )
  {
    if ( v12 < (unsigned int)dword_140CFB18C )
      v14 = v12;
    v86 = v14;
  }
  if ( *(_BYTE *)(v7 + 1000) )
  {
    v84 = 0;
    v44 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 996));
    if ( *(_BYTE *)(v7 + 1002) )
    {
      *(_BYTE *)(v7 + 1002) = 0;
      *(_BYTE *)(v7 + 1000) = 0;
      v84 = 1;
    }
    else if ( *(_BYTE *)(v7 + 1000) )
    {
      v14 = *(unsigned __int8 *)(v7 + 1000);
      v86 = v14;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 996));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v45 = KeGetCurrentIrql();
        if ( v45 <= 0xFu && (unsigned __int8)v44 <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = v46->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
          v49 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v49 )
            KiRemoveSystemWorkPriorityKick(v46);
          v14 = v86;
        }
      }
    }
    __writecr8(v44);
    if ( v84 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    CurrentThread = v75;
  }
  if ( (*(_DWORD *)(v4 + 40) & 0x1Cu) < 8 )
  {
    if ( v14 > 0x100 )
      v14 = 256;
    v86 = v14;
  }
  v5 |= 1u;
  --CurrentThread->KernelApcDisable;
  if ( (v5 & 2) != 0 )
  {
    v72 = 0;
    MiFindPageFileWriteCluster(v1, &v72, (unsigned int *)&v86, 0);
    v2 = (unsigned int)v86;
    if ( v86 )
    {
      v18 = MiFillNoReservationCluster((_DWORD *)v7, v77, (unsigned int)v86, v6);
      v17 = v72;
      v16 = v18;
      v87 = v18;
      goto LABEL_23;
    }
LABEL_74:
    MiPageFileNoFreeSpace(v1, v4, v2, v6);
    goto LABEL_52;
  }
  v87 = v14;
  v15 = MiBuildReservationCluster(v77, v1, &v87, &v73);
  v16 = v73;
  v17 = v15;
  v72 = v15;
  v18 = v87;
LABEL_23:
  if ( v18 )
  {
    v86 = v18;
    v74 = v16 - 1;
    v19 = v18;
    v73 = v16 - 1;
    v82 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 232));
    if ( (v5 & 2) != 0 )
    {
      MiFindPageFileWriteCluster(v1, &v72, (unsigned int *)&v86, 1);
      v17 = v72;
      v19 = v86;
    }
    else
    {
      MiSetPageFileAllocationBits(v1, v17, v87);
      v20 = v87;
      v21 = 0LL;
      v22 = -1;
      v76 = 0LL;
      if ( v77 > v77 + 8LL * v87 )
        v20 = 0LL;
      v78 = v20;
      if ( v20 )
      {
        v23 = v17;
        v24 = (_QWORD *)v77;
        do
        {
          v25 = v22;
          if ( *v24 != qword_140C4ED68
            || (v21 = v76, v20 = v78, _bittest64(*(const signed __int64 **)(*(_QWORD *)(v1 + 112) + 32LL), v23)) )
          {
            if ( v22 != -1 )
            {
              MiInvalidatePageFileBitmapsCache(v1, v22, v23 - v22, 0LL);
              v21 = v76;
              v20 = v78;
              v22 = -1;
            }
          }
          else
          {
            v22 = v23;
            if ( v25 != -1 )
              v22 = v25;
          }
          ++v21;
          ++v23;
          ++v24;
          v76 = v21;
        }
        while ( v21 < v20 );
        v4 = a1;
      }
    }
    if ( (v5 & 2) == 0 )
      *(_DWORD *)(v1 + 136) = v19 + *(_DWORD *)(v1 + 136) - (*(_DWORD *)(v1 + 136) >> 2);
    MiUpdatePagefilePeakUsage((_QWORD *)v1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 232));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v50 = KeGetCurrentIrql();
        if ( v50 <= 0xFu && v82 <= 0xFu && v50 >= 2u )
        {
          v51 = KeGetCurrentPrcb();
          v52 = v51->SchedulerAssist;
          v53 = ~(unsigned __int16)(-1LL << (v82 + 1));
          v49 = (v53 & v52[5]) == 0;
          v52[5] &= v53;
          if ( v49 )
            KiRemoveSystemWorkPriorityKick(v51);
          v19 = v86;
          v17 = v72;
          v74 = v73;
        }
      }
    }
    __writecr8(v82);
    KeLeaveCriticalRegionThread((__int64)v75);
    v5 &= ~1u;
    LODWORD(v76) = v5;
    if ( v19 != v87 )
    {
      v54 = v77 + 8LL * v87;
      v55 = (_QWORD *)(v77 + 8LL * v19);
      do
      {
        v56 = 48LL * *v55 - 0x58000000000LL;
        v85 = MiLockPageInline(v56, v26, v27, v28);
        MiWriteCompletePfn(v56, 1LL, v57);
        _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v58 = KeGetCurrentIrql(), v58 <= 0xFu) )
        {
          v59 = v85;
          if ( v85 <= 0xFu && v58 >= 2u )
          {
            v60 = KeGetCurrentPrcb();
            v26 = -1LL << (v85 + 1);
            v28 = v60->SchedulerAssist;
            v61 = ~(unsigned __int16)v26;
            v49 = (v61 & v28[5]) == 0;
            v27 = (unsigned int)v61 & v28[5];
            v28[5] = v27;
            if ( v49 )
              KiRemoveSystemWorkPriorityKick(v60);
          }
        }
        else
        {
          v59 = v85;
        }
        __writecr8(v59);
        ++v55;
      }
      while ( (unsigned __int64)v55 < v54 );
      v19 = v86;
      v74 = v86 - v87 + v73;
      v73 = v74;
      MiReleaseWriteInProgressCharges(v79, v87 - v86, 0);
      v17 = v72;
      v5 = v76;
      v4 = a1;
      v1 = v80;
    }
    v29 = (_QWORD *)v77;
    *(_DWORD *)(v4 + 248) = v19 << 12;
    *(_DWORD *)(v4 + 136) = v19 << 12;
    *(_DWORD *)(v4 + 140) = v74;
    v30 = 0;
    v87 = v19;
    v83 = 0;
    LODWORD(v76) = v17;
    do
    {
      if ( *v29 != qword_140C4ED68 )
      {
        MiUpdatePfnBackingStore(48LL * *v29 - 0x58000000000LL, v1, v17, 0LL);
        v30 = v83;
      }
      ++v30;
      ++v29;
      ++v17;
      v83 = v30;
      v86 = v30;
    }
    while ( v30 < v19 );
    v31 = v79;
    v72 = v17;
    *(_WORD *)(a1 + 216) = 8 * (dword_140CFB18C + 6);
    *(_DWORD *)(a1 + 40) &= ~2u;
    v32 = *(_DWORD *)(a1 + 40) >> 2;
    *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000014];
    v33 = v32 & 7;
    v34 = *(_DWORD *)(v31 + 860);
    v35 = *(_QWORD *)(v31 + 7104);
    if ( v34 )
    {
      if ( v35 >= 0x420 )
      {
        v62 = 0;
      }
      else
      {
        v33 = 4;
        v62 = v34 - 1;
      }
      *(_DWORD *)(v31 + 860) = v62;
    }
    else
    {
      if ( v35 < 0xA0 )
      {
        *(_DWORD *)(v31 + 860) = 32;
      }
      else
      {
        if ( v35 >= 0x120 )
          goto LABEL_45;
        *(_DWORD *)(v31 + 860) = 8;
      }
      v33 = 4;
    }
LABEL_45:
    *(_DWORD *)(a1 + 40) = (4 * v33) | *(_DWORD *)(a1 + 40) & 0xFFFFFFE3;
    if ( v33 < 2 )
    {
      v41 = (__int64)v75;
      --v75->SpecialApcDisable;
      ++*(_DWORD *)(v31 + 692);
      KiLeaveGuardedRegionUnsafe(v41);
    }
    MI_PAGEFILE_WRITE(a1, (_QWORD *)(a1 + 184), v33, ((v5 >> 1) & 1) == 0, -1);
    v36 = *(_DWORD *)(v31 + 848);
    v37 = *(_QWORD *)(v31 + 840);
    if ( v36 == 512 )
      v37 -= v37 >> 9;
    else
      *(_DWORD *)(v31 + 848) = v36 + 1;
    *(_QWORD *)(v31 + 840) = v37 + v87;
    v38 = v76;
    *(_DWORD *)(a1 + 40) &= ~0x20u;
    *(_QWORD *)(a1 + 176) = (unsigned __int64)v38 << 12;
    if ( v5 >= 4 && (int)MiStoreWriteModifiedPages(a1) >= 0 )
      goto LABEL_51;
    __incgsdword(0x2EACu);
    __addgsdword(0x2EA8u, v87);
    MiMapPageFileHash(v1, a1 + 208, 0LL, v38, v87);
    v42 = (NTSTATUS *)(a1 + 16);
    if ( (*(_WORD *)(v1 + 204) & 0x800) != 0 )
    {
      *v42 = 0;
      *(_QWORD *)(a1 + 24) = *(unsigned int *)(a1 + 248);
    }
    else
    {
      v43 = IoAsynchronousPageWrite(
              *(struct _FILE_OBJECT **)(v1 + 56),
              (struct _MDL *)(a1 + 208),
              (LARGE_INTEGER *)(a1 + 176),
              (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiWriteComplete,
              (void *)a1,
              v33,
              *(_DWORD *)(v1 + 200),
              0,
              0LL,
              (struct _IO_STATUS_BLOCK *)(a1 + 16),
              (IRP **)(a1 + 32));
      if ( (v43 & 0xC0000000) != 0xC0000000 )
      {
LABEL_51:
        CurrentThread = v75;
        goto LABEL_52;
      }
      *v42 = v43;
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    v63 = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiWriteComplete(a1, (unsigned int *)(a1 + 16), 0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v64 = KeGetCurrentIrql();
        if ( v64 <= 0xFu && v63 <= 0xFu && v64 >= 2u )
        {
          v65 = KeGetCurrentPrcb();
          v66 = v65->SchedulerAssist;
          v67 = ~(unsigned __int16)(-1LL << (v63 + 1));
          v49 = (v67 & v66[5]) == 0;
          v66[5] &= v67;
          if ( v49 )
            KiRemoveSystemWorkPriorityKick(v65);
        }
      }
    }
    __writecr8(v63);
    goto LABEL_51;
  }
  CurrentThread = v75;
  --v75->SpecialApcDisable;
  MiMakePagefileWriterEntryAvailable((_QWORD *)v4);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_52:
  result = 1LL;
  if ( (v5 & 1) != 0 )
    return (__int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return result;
}
