__int64 __fastcall MiSynchronizeSystemVa(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  char v8; // al
  unsigned __int8 v9; // al
  volatile __int32 *v10; // rdi
  unsigned __int8 v11; // r15
  unsigned __int8 CurrentIrql; // dl
  int v13; // eax
  unsigned __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r15
  unsigned __int64 v17; // rdi
  __int64 SystemCacheReverseMap; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  char *AnyMultiplexedVm; // rax
  _DWORD *SchedulerAssist; // r10
  __int64 v24; // r8
  int v25; // eax
  __int64 valid; // rax
  __int64 SharedVm; // rdi
  KIRQL v28; // al
  _DWORD *v29; // r9
  __int64 v30; // r8
  signed __int32 v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+28h] [rbp-50h] BYREF
  __int128 v33; // [rsp+30h] [rbp-48h] BYREF
  __int128 v34; // [rsp+40h] [rbp-38h]
  signed __int32 v35; // [rsp+90h] [rbp+18h]
  signed __int32 v36; // [rsp+90h] [rbp+18h]

  v5 = 0;
  LODWORD(v32) = 0;
  v33 = 0LL;
  v34 = 0LL;
  if ( !(_DWORD)a3 )
    return 0LL;
  *(_DWORD *)(a5 + 16) = 0;
  v8 = *(_BYTE *)(a5 + 37);
  *(_QWORD *)(a5 + 24) = a1;
  if ( (_DWORD)a4 )
  {
    *(_BYTE *)(a5 + 37) = v8 | 1;
    SharedVm = MiGetSharedVm(a1, a2, a3, a4);
    v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    *(_BYTE *)(a5 + 36) = v28;
    MiFillPteHierarchy(a2, &v33);
    if ( !(unsigned int)MiPageTableStillExists(&v33, &v32) )
      goto LABEL_57;
    if ( (_DWORD)v32 )
    {
      if ( (*(_DWORD *)(a5 + 4) & 4) == 0 )
        goto LABEL_57;
      *(_DWORD *)(a5 + 16) = v32;
    }
    goto LABEL_15;
  }
  *(_BYTE *)(a5 + 37) = v8 & 0xFE;
  v9 = *(_BYTE *)(a1 + 184) & 7;
  if ( v9 > 4u )
  {
    if ( v9 != 5 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v24) = 4;
        else
          v24 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v24;
      }
      goto LABEL_12;
    }
    goto LABEL_5;
  }
  if ( v9 != 2 )
  {
LABEL_5:
    v10 = (volatile __int32 *)(a1 + 192);
    goto LABEL_6;
  }
  v10 = (volatile __int32 *)&unk_140C69E00;
LABEL_6:
  v11 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v11 <= 0xFu )
  {
    v29 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v11 == 2 )
      LODWORD(v30) = 4;
    else
      v30 = (-1LL << (v11 + 1)) & 4;
    v29[5] |= v30;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, v11);
  }
  else
  {
    _m_prefetchw((const void *)v10);
    v35 = *v10 & 0x7FFFFFFF;
    v31 = _InterlockedCompareExchange(v10, v35 + 1, v35);
    if ( v31 != v35 )
    {
      while ( v31 >= 0 )
      {
        v36 = v31;
        v31 = _InterlockedCompareExchange(v10, v31 + 1, v31);
        if ( v31 == v36 )
          goto LABEL_9;
      }
      ExpWaitForSpinLockSharedAndAcquire(v10, v11);
    }
  }
LABEL_9:
  if ( *((_DWORD *)v10 + 1) )
    _InterlockedExchange(v10 + 1, 0);
  CurrentIrql = v11;
LABEL_12:
  *(_BYTE *)(a5 + 36) = CurrentIrql;
  v32 = 0LL;
  v13 = MiFastLockLeafPageTable(a1, a2, 0LL);
  v14 = a2 >> 9;
  if ( v13 )
  {
    *(_QWORD *)&v33 = (v14 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v33 + 1) = (((unsigned __int64)v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)&v34 = ((*((_QWORD *)&v33 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v34 + 1) = (((unsigned __int64)v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = *((_QWORD *)&v33 + v13);
    v16 = *((_QWORD *)&v33 + v13 - 1);
    v32 = v16;
    v17 = v33;
    if ( v15 )
      goto LABEL_14;
  }
  else
  {
    v17 = (v14 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  valid = MiLockLowestValidPageTable(a1, v17, &v32);
  v16 = v32;
  v15 = valid;
LABEL_14:
  *(_QWORD *)(a5 + 40) = v15;
  if ( v16 != v17 )
  {
    if ( (*(_DWORD *)(a5 + 4) & 4) != 0 && (MI_READ_PTE_LOCK_FREE(v16) & 0x81) == 0x81 )
    {
      do
      {
        v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v25 = ++v5;
      }
      while ( v17 != v16 );
      *(_DWORD *)(a5 + 16) = v25;
      return 1LL;
    }
    goto LABEL_57;
  }
LABEL_15:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    if ( *(_DWORD *)(a5 + 48) == 3 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
LABEL_25:
      *(_QWORD *)(a5 + 24) = AnyMultiplexedVm;
      return 1LL;
    }
    SystemCacheReverseMap = MiGetSystemCacheReverseMap(a2);
    if ( SystemCacheReverseMap && *(_QWORD *)(SystemCacheReverseMap + 32) >> 62 == 3 )
    {
      v20 = MiGetSystemCacheReverseMap(a2);
      v21 = *(_QWORD *)(v20 + 24) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (*(_QWORD *)(v20 + 24) & 1) == 0 )
        v21 = *(_QWORD *)(v20 + 24);
      AnyMultiplexedVm = (char *)(*(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(*(_QWORD *)v21 + 60LL) & 0x3FF))
                                + 17344LL);
      goto LABEL_25;
    }
LABEL_57:
    MiUnlockSystemVa(a5);
    return 0LL;
  }
  return 1LL;
}
