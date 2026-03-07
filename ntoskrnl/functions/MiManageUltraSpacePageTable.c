unsigned __int64 __fastcall MiManageUltraSpacePageTable(__int64 *a1, unsigned int a2, int a3)
{
  int v5; // r14d
  int v6; // r15d
  __int64 v7; // rdi
  __int64 **v8; // rbx
  int v9; // r13d
  unsigned int v10; // ebp
  unsigned __int64 v11; // rdx
  int v12; // ecx
  _QWORD **v13; // rcx
  __int64 *v14; // rdx
  _QWORD *v15; // r15
  __int64 v16; // rcx
  __int64 **v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // r14
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // r8
  unsigned __int8 CurrentIrql; // al
  KIRQL v26; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  bool v30; // zf
  unsigned __int64 v31; // rbp
  __int64 *v32; // rbx
  struct _KPRCB *v33; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v35; // eax
  signed __int32 v37[8]; // [rsp+0h] [rbp-78h] BYREF
  int v38; // [rsp+20h] [rbp-58h]
  __int64 v39; // [rsp+28h] [rbp-50h]
  PEX_SPIN_LOCK SpinLock; // [rsp+30h] [rbp-48h]
  KIRQL v41; // [rsp+88h] [rbp+10h]
  unsigned int v42; // [rsp+98h] [rbp+20h]

  v5 = 0;
  v6 = *(_DWORD *)(qword_140C6B208 + 4);
  v39 = *(_QWORD *)(qword_140C65720 + 376LL * (a2 >> byte_140C6570D) + 368);
  v38 = v6;
  v7 = v39 + 392;
  SpinLock = (PEX_SPIN_LOCK)(v39 + 552);
  v8 = (__int64 **)(v39 + 520);
  v41 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v39 + 552));
  _InterlockedOr(v37, 0);
  v9 = KiTbFlushTimeStamp;
  v10 = 0;
  v42 = KiTbFlushTimeStamp & 3;
  do
  {
    v11 = *(_QWORD *)(v7 + 16);
    if ( v11 )
    {
      v12 = *(_DWORD *)(v7 + 24);
      if ( (unsigned int)(v9 - v12) <= 2 && ((v12 & 1) != 0 || (unsigned int)(v9 - v12) < 2) )
      {
        if ( v6 && !v5 && v11 >= 8 )
        {
          KeFlushTb(3LL, 1u);
          v5 = 1;
          --v10;
          v7 -= 32LL;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v7 + 8LL) = *(_QWORD *)(v7 + 8);
        **(_QWORD **)(v7 + 8) = *(_QWORD *)v7;
        v13 = *(_QWORD ***)v7;
        v14 = v8[1];
        if ( (__int64 **)(*v8)[1] != v8
          || (__int64 **)*v14 != v8
          || (_QWORD **)(*v13)[1] != v13
          || (_QWORD **)*v13[1] != v13 )
        {
          goto LABEL_39;
        }
        *v14 = (__int64)v13;
        v8[1] = v13[1];
        *v13[1] = v8;
        v13[1] = v14;
        v8[2] = (__int64 *)((char *)v8[2] + *(_QWORD *)(v7 + 16));
        *(_QWORD *)(v7 + 8) = v7;
        *(_QWORD *)v7 = v7;
        *(_QWORD *)(v7 + 16) = 0LL;
      }
    }
    ++v10;
    v7 += 32LL;
  }
  while ( v10 < 4 );
  v15 = v8 + 2;
  if ( a1 )
  {
    if ( !*v15 && !a3 )
    {
      KeFlushTb(3LL, 1u);
      goto LABEL_29;
    }
    v16 = 32LL * v42 + v39 + 392;
    if ( !*(_QWORD *)(v16 + 16) )
      *(_DWORD *)(v16 + 24) = v9;
    v17 = *(__int64 ***)(v16 + 8);
    if ( *v17 != (__int64 *)v16 )
      goto LABEL_39;
    *a1 = v16;
    a1[1] = (__int64)v17;
    *v17 = a1;
    *(_QWORD *)(v16 + 8) = a1;
    a1 = 0LL;
    ++*(_QWORD *)(v16 + 16);
  }
  if ( !a3 && *v15 )
  {
    a1 = *v8;
    v18 = **v8;
    if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v18 + 8) != a1 )
      goto LABEL_39;
    *v8 = (__int64 *)v18;
    *(_QWORD *)(v18 + 8) = v8;
    --*v15;
  }
LABEL_29:
  if ( *v15 <= 0x100uLL || !a3 )
  {
    v23 = 0LL;
    v19 = 0LL;
    goto LABEL_41;
  }
  v19 = *v8;
  if ( !v38 )
  {
    v22 = 256LL;
    do
    {
      v19 = (__int64 *)*v19;
      --v22;
    }
    while ( v22 );
    v20 = (__int64 *)v19[1];
    if ( *(__int64 **)(*v19 + 8) == v19 && (__int64 *)*v20 == v19 )
    {
      *v20 = (__int64)v8;
      v21 = 256LL;
      goto LABEL_38;
    }
LABEL_39:
    __fastfail(3u);
  }
  *v8 = (__int64 *)v8;
  v20 = (__int64 *)v8;
  v21 = 0LL;
LABEL_38:
  v8[1] = v20;
  v23 = *v15 - v21;
  *v15 = v21;
LABEL_41:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
  {
    v26 = v41;
    if ( v41 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << (v41 + 1));
      v30 = (v29 & SchedulerAssist[5]) == 0;
      v24 = (unsigned int)v29 & SchedulerAssist[5];
      SchedulerAssist[5] = v24;
      if ( v30 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v26 = v41;
  }
  __writecr8(v26);
  if ( !v19 )
    goto LABEL_64;
  if ( v23 )
  {
    v31 = v23;
    do
    {
      v32 = (__int64 *)*v19;
      MiReleaseFreshPage((__int64)v19);
      v19 = v32;
      --v31;
    }
    while ( v31 );
  }
  MiReturnCommit((__int64)&MiSystemPartition, v23, v24);
  v33 = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)v33->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
  {
LABEL_62:
    if ( v23 )
      _InterlockedExchangeAdd64(&qword_140C6F440, v23);
    goto LABEL_64;
  }
  if ( v23 + CachedResidentAvailable > 0x100 || v23 >= 0x80000 )
  {
LABEL_59:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v33->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v23 += (int)CachedResidentAvailable - 192;
    }
    goto LABEL_62;
  }
  while ( 1 )
  {
    v35 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&v33->CachedResidentAvailable,
            CachedResidentAvailable + v23,
            CachedResidentAvailable);
    v30 = (_DWORD)CachedResidentAvailable == v35;
    LODWORD(CachedResidentAvailable) = v35;
    if ( v30 )
      break;
    if ( v35 == -1 || v23 + v35 > 0x100 )
      goto LABEL_59;
  }
LABEL_64:
  if ( a1 )
    return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x44000000000LL) >> 4);
  else
    return -1LL;
}
