/*
 * XREFs of FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403929CC
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1405EA170 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     FsRtlpRequestShareableOplock @ 0x1402057B0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x140206110 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402067A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140206930 (ExReleaseFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x140242E00 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x140291250 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402912F0 (KeAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpOplockKeysEqual @ 0x1402D6290 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockDequeueRH @ 0x1402D7250 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140305248 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036C590 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpClearOwner @ 0x140375A58 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403798E4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1404F0520 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404F08CC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1405EA118 (FsRtlpOplockUpperLowerCompatible.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall FsRtlpAcknowledgeOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int a6)
{
  unsigned int v8; // esi
  _QWORD *PoolWithTag; // r15
  char v10; // r12
  char v11; // di
  __int64 v12; // rdx
  int v13; // ecx
  bool v14; // zf
  int v15; // r10d
  unsigned int v16; // r11d
  unsigned int v17; // ecx
  __int64 v18; // r8
  _QWORD *v19; // rdi
  __int64 *v20; // r12
  int v21; // eax
  unsigned int v22; // esi
  _QWORD *v23; // r11
  int v24; // r10d
  __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  char v30; // al
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  struct _KTHREAD *v34; // rcx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // r8
  void *v38; // rcx
  char v40; // [rsp+50h] [rbp-78h]
  char v41; // [rsp+51h] [rbp-77h]
  char v42; // [rsp+59h] [rbp-6Fh]
  char v43; // [rsp+5Ah] [rbp-6Eh] BYREF
  char v44; // [rsp+5Bh] [rbp-6Dh] BYREF
  char v45; // [rsp+5Ch] [rbp-6Ch]
  int v46; // [rsp+60h] [rbp-68h]
  _QWORD *v47; // [rsp+68h] [rbp-60h] BYREF
  char v48; // [rsp+70h] [rbp-58h]
  char v49; // [rsp+71h] [rbp-57h]
  _QWORD *v50; // [rsp+78h] [rbp-50h]
  __int64 v51; // [rsp+80h] [rbp-48h]
  __int64 v52; // [rsp+88h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-38h]
  struct _KTHREAD *v54; // [rsp+98h] [rbp-30h]
  __int64 v55; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v56; // [rsp+D8h] [rbp+10h]

  v56 = a2;
  v55 = a1;
  v8 = 0;
  PoolWithTag = 0LL;
  v47 = 0LL;
  v40 = 0;
  v10 = 0;
  v45 = 0;
  v48 = 0;
  v42 = 0;
  v11 = 0;
  v49 = 0;
  v44 = 0;
  v43 = 0;
  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    return 3221225699LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v13 = *(_DWORD *)(v55 + 144);
  if ( (v13 & 0xF00000) == 0 && (((v13 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) != 0
    || (((v13 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 && *(_QWORD *)(v55 + 72) == v55 + 72 )
  {
LABEL_32:
    v8 = -1073741597;
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_98;
  }
  v51 = *(_QWORD *)(a3 + 24);
  v14 = (*(_DWORD *)(v51 + 8) & 4) == 0;
  v15 = *(_DWORD *)(v51 + 8) & 4;
  v46 = v15;
  v41 = !v14;
  v16 = 0;
  if ( v15 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x18uLL, 0x6F725346u);
    v47 = PoolWithTag;
    *(_OWORD *)PoolWithTag = 0LL;
    PoolWithTag[2] = 0LL;
    v15 = v46;
    v16 = 0;
  }
  v17 = *(_DWORD *)(v55 + 144) & 0x1F0FFDF;
  v18 = 3174464LL;
  if ( v17 <= 0x307040 )
  {
    if ( v17 != 3174464 )
    {
      if ( v17 == 12288 || v17 == 45056 || v17 == 1060864 )
        goto LABEL_8;
      if ( v17 != 1069120 && v17 != 1077312 )
        goto LABEL_32;
    }
LABEL_39:
    v25 = v56;
    if ( !v15 )
      goto LABEL_44;
    v26 = *(_QWORD *)(v55 + 8);
    v27 = *(_QWORD *)(v56 + 48);
    if ( v26 == v27 || !FsRtlpOplockKeysEqual(v27, v26, 0) )
      goto LABEL_32;
    v15 = v46;
    if ( !v46 )
    {
LABEL_44:
      if ( *(_QWORD *)(v55 + 8) != *(_QWORD *)(v25 + 48) )
        goto LABEL_32;
      if ( !v15 )
        goto LABEL_81;
    }
    if ( a4 )
    {
LABEL_81:
      v36 = *(_DWORD *)(v55 + 144) & 0x1F0FFDF;
      if ( (v36 == 1069120 || v36 == 1077312 || v36 == 3174464 || v36 == 5271616 || v36 == 8409152 || v36 == 8417344)
        && (a4 & 0x7000) > (*(_DWORD *)(v55 + 144) & 0x200000 | ((*(_DWORD *)(v55 + 144) & 0x100000 | (*(_DWORD *)(v55 + 144) >> 1) & 0x200000u) >> 1)) >> 7
        && *(_QWORD *)(v55 + 88) != v55 + 88 )
      {
        v11 = 1;
      }
      if ( v11 )
      {
        v37 = *(_QWORD *)(a3 + 24);
        *(_OWORD *)v37 = 0LL;
        *(_QWORD *)(v37 + 16) = 0LL;
        *(_DWORD *)(v37 + 4) = (*(_DWORD *)(v55 + 144) >> 12) & 7;
        *(_DWORD *)(v37 + 8) = (*(_DWORD *)(v55 + 144) & 0x200000 | ((*(_DWORD *)(v55 + 144) & 0x100000 | (*(_DWORD *)(v55 + 144) >> 1) & 0x200000u) >> 1)) >> 19;
        *(_DWORD *)(v37 + 12) |= 1u;
        *(_QWORD *)(a3 + 56) = 24LL;
        v8 = -2147483602;
        *(_DWORD *)(a3 + 48) = -2147483602;
        IofCompleteRequest((PIRP)a3, 1);
        goto LABEL_98;
      }
      FsRtlpModifyThreadPriorities(v55, 0LL, 0);
      FsRtlpClearOwner(v55, 0LL);
      *(_BYTE *)(v55 + 32) = 0;
      v8 = FsRtlpGrantAnyOplockFromExclusive(v55, a3, v25, a4, a5, v41, &v47, &v43, &v44, a6);
      PoolWithTag = v47;
      goto LABEL_93;
    }
    FsRtlpModifyThreadPriorities(v55, 0LL, 0);
    FsRtlpClearOwner(v55, 0LL);
    *(_BYTE *)(v55 + 32) = 0;
    *(_DWORD *)(v55 + 144) = *(_DWORD *)(v55 + 144) & 0x20 | 1;
    PoolWithTag[2] = *(_QWORD *)(v55 + 8);
    v28 = (_QWORD *)(v55 + 104);
    v29 = *(_QWORD *)(v55 + 104);
    if ( *(_QWORD *)(v29 + 8) == v55 + 104 )
    {
      *PoolWithTag = v29;
      PoolWithTag[1] = v28;
      *(_QWORD *)(v29 + 8) = PoolWithTag;
      *v28 = PoolWithTag;
      PoolWithTag = 0LL;
      v47 = 0LL;
      *(_QWORD *)(v55 + 8) = 0LL;
      *(_DWORD *)(v55 + 144) |= 0x1000000u;
      *(_DWORD *)(a3 + 48) = 0;
      IofCompleteRequest((PIRP)a3, 1);
      goto LABEL_93;
    }
LABEL_80:
    __fastfail(3u);
  }
  if ( v17 != 8400896 )
  {
    if ( v17 != 5271616 && v17 != 8409152 && v17 != 8417344 )
      goto LABEL_32;
    goto LABEL_39;
  }
LABEL_8:
  v19 = *(_QWORD **)(v55 + 72);
  while ( 1 )
  {
    v50 = v19;
    if ( v19 == (_QWORD *)(v55 + 72) )
      goto LABEL_24;
    v20 = (__int64 *)(v56 + 48);
    if ( v15 )
      break;
    if ( v19[3] == *v20 )
      goto LABEL_12;
LABEL_55:
    v19 = (_QWORD *)*v19;
    v10 = v45;
  }
  v12 = v19[3];
  if ( v12 == *v20 )
    goto LABEL_55;
  v30 = FsRtlpOplockKeysEqual(*v20, v12, 0);
  v16 = 0;
  v15 = v46;
  if ( !v30 )
    goto LABEL_55;
LABEL_12:
  v40 = 1;
  v21 = v19[6] & 0xF00000;
  v22 = a6;
  if ( v21 != 0x800000 )
  {
    if ( v21 != 0x100000
      || (a4 & 0x7000) <= 0x3000
      || *(_QWORD *)(v55 + 88) == v55 + 88 && (unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a6) )
    {
      goto LABEL_14;
    }
    v31 = *(_QWORD *)(a3 + 24);
    *(_OWORD *)v31 = 0LL;
    *(_QWORD *)(v31 + 16) = 0LL;
    *(_DWORD *)(v31 + 4) = 3;
    if ( *(_QWORD *)(v55 + 88) != v55 + 88 )
      v22 = 1;
LABEL_63:
    *(_DWORD *)(v31 + 8) = v22;
    *(_DWORD *)(v31 + 12) |= 1u;
    *(_QWORD *)(a3 + 56) = 24LL;
    v8 = -2147483602;
    *(_DWORD *)(a3 + 48) = -2147483602;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_23;
  }
  if ( a4 && (*(_QWORD *)(v55 + 88) != v55 + 88 || !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a6)) )
  {
    v31 = *(_QWORD *)(a3 + 24);
    *(_OWORD *)v31 = 0LL;
    *(_QWORD *)(v31 + 16) = 0LL;
    *(_DWORD *)(v31 + 4) = 3;
    if ( *(_QWORD *)(v55 + 88) != v55 + 88 )
      v22 = v16;
    goto LABEL_63;
  }
LABEL_14:
  FsRtlpOplockDequeueRH((__int64)v19, v12, v18);
  if ( !v24 )
  {
    v42 = 1;
    if ( !a4 )
    {
      ObfDereferenceObjectWithTag((PVOID)v19[3], 0x746C6644u);
      goto LABEL_17;
    }
    goto LABEL_71;
  }
  PoolWithTag[2] = v19[3];
  v32 = (_QWORD *)(v55 + 104);
  v33 = *(_QWORD *)(v55 + 104);
  if ( *(_QWORD *)(v33 + 8) != v55 + 104 )
    goto LABEL_80;
  *PoolWithTag = v33;
  PoolWithTag[1] = v32;
  *(_QWORD *)(v33 + 8) = PoolWithTag;
  *v32 = PoolWithTag;
  PoolWithTag = v23;
  v47 = v23;
LABEL_17:
  if ( a4 )
  {
LABEL_71:
    if ( (a4 & 0x4040) == 0 && (a4 & 0x3010) != 0 )
    {
      v8 = FsRtlpRequestShareableOplock(&v55, v56, a3, a4, a5, v41, 1, v22);
    }
    else
    {
      *(_QWORD *)v55 = a3;
      v52 = *(_QWORD *)(a3 + 184);
      *(_BYTE *)(v52 + 3) |= 1u;
      *(_QWORD *)(a3 + 56) = v55;
      CurrentThread = KeGetCurrentThread();
      *(_QWORD *)(v55 + 16) = CurrentThread->ApcState.Process;
      v34 = KeGetCurrentThread();
      v54 = v34;
      *(_QWORD *)(v55 + 24) = v34;
      ObfReferenceObjectWithTag(v34, 0x746C6644u);
      *(_BYTE *)(v55 + 32) = 0;
      if ( v46 )
      {
        ObfReferenceObjectWithTag((PVOID)*v20, 0x746C6644u);
        v35 = *v20;
      }
      else
      {
        v35 = v19[3];
      }
      *(_QWORD *)(v55 + 8) = v35;
      *(_DWORD *)(v55 + 144) = a4 | *(_DWORD *)(v55 + 144) & 0x20 | 0x40;
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        FsRtlpCancelExclusiveIrp(a3, 1, v41 ^ 1);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
      }
      v40 = 1;
      v19 = v50;
      PoolWithTag = v47;
      v8 = 259;
    }
  }
  else
  {
    FsRtlpComputeShareableOplockState(v55);
    v8 = 0;
    *(_DWORD *)(a3 + 48) = 0;
    IofCompleteRequest((PIRP)a3, 1);
  }
  FsRtlpModifyThreadPriorities(v55, (__int64)v19, 0);
  FsRtlpClearOwner(v55, (__int64)v19);
  if ( *(_QWORD *)(v55 + 72) == v55 + 72 )
    *(_BYTE *)(v55 + 32) = 0;
  ExFreePoolWithTag(v19, 0);
  if ( v46 )
    *(_DWORD *)(v55 + 144) |= 0x1000000u;
LABEL_23:
  v10 = 1;
LABEL_24:
  if ( !v40 )
    goto LABEL_32;
  if ( v42 )
    FsRtlpReleaseIrpsWaitingForRH(v55);
  if ( !v10 )
  {
LABEL_93:
    if ( v43 )
    {
      while ( 1 )
      {
        v38 = *(void **)(v55 + 88);
        if ( v38 == (void *)(v55 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v38);
      }
    }
    if ( v44 )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v55 + 8), 0x746C6644u);
      *(_QWORD *)(v55 + 8) = 0LL;
    }
  }
LABEL_98:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v55 + 152));
  return v8;
}
