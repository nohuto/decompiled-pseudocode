/*
 * XREFs of MiCheckProtoPtePageState @ 0x140283EB0
 * Callers:
 *     MmPurgeSection @ 0x1402836F0 (MmPurgeSection.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiAnyProtosAreMapped @ 0x1402A35A0 (MiAnyProtosAreMapped.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     MiIsSubsectionClean @ 0x140622654 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x140623294 (MiPurgeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x14063CAD0 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x140229800 (MiWriteValidPteVolatile.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiAreChargesNeededToLockPage @ 0x140284D60 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140286190 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiInvalidPteConforms @ 0x140287530 (MiInvalidPteConforms.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x140348ED0 (MiChargePartitionResidentAvailable.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiCheckProtoPtePageState(ULONG_PTR BugCheckParameter1, unsigned __int8 *a2)
{
  unsigned __int64 *v4; // r14
  unsigned __int64 v5; // r11
  __int64 v6; // r10
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r10
  char v17; // si
  void *v18; // rbx
  struct _KPRCB *v19; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v21; // ett
  unsigned __int64 v22; // rsi
  volatile signed __int64 *v23; // rbx
  char i; // al
  unsigned __int64 result; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v27; // r9
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v30; // r9
  int v31; // eax
  bool v32; // zf
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  unsigned __int8 v37; // cl
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // edx
  unsigned __int8 v41; // cl
  struct _KPRCB *v42; // r9
  _DWORD *v43; // r8
  int v44; // eax
  int v45; // [rsp+60h] [rbp+8h] BYREF
  int v46; // [rsp+70h] [rbp+18h] BYREF

  v4 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 2 )
  {
    v5 = 0x7FFFFFFFFFFFFFFFLL;
    v6 = 0x40000000000000LL;
    while ( 2 )
    {
      v7 = 2LL;
      v8 = 0xFFFFDE0000000000uLL;
      do
      {
        while ( 1 )
        {
          v9 = *v4;
          if ( (*v4 & 1) != 0 )
            break;
          if ( (v9 & 0x400) != 0 || (v9 & 0x800) == 0 )
            goto LABEL_33;
          if ( (unsigned int)MiInvalidPteConforms(*v4) )
          {
            v10 = v9;
            if ( qword_140C657C0 && (v9 & 0x10) == 0 )
              v10 = v9 & ~qword_140C657C0;
            goto LABEL_7;
          }
        }
        if ( (v9 & 0x200) != 0 )
          goto LABEL_33;
        v10 = *v4;
LABEL_7:
        v11 = (v10 >> 12) & 0xFFFFFFFFFFLL;
      }
      while ( v11 > qword_140C65820 || (v6 & *(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL)) == 0 );
      v12 = v8 + 48 * v11;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v7);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v27) = 4;
        else
          v27 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v27;
      }
      v45 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v45);
          while ( *(__int64 *)(v12 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
        v6 = 0x40000000000000LL;
        v5 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v14 = *v4;
      *a2 = CurrentIrql;
      if ( v14 != v9 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), v5);
        if ( KiIrqlFlags )
        {
          v28 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v30 = CurrentPrcb->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v32 = (v31 & v30[5]) == 0;
            v30[5] &= v31;
            if ( v32 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v5 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v6 = 0x40000000000000LL;
          }
        }
        __writecr8(CurrentIrql);
        continue;
      }
      break;
    }
    if ( (v14 & 1) == 0 )
    {
      if ( (*(_BYTE *)(v12 + 34) & 7u) >= 6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), v5);
        if ( KiIrqlFlags )
        {
          v33 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
          {
            v34 = KeGetCurrentPrcb();
            v35 = v34->SchedulerAssist;
            v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v32 = (v36 & v35[5]) == 0;
            v35[5] &= v36;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
        __writecr8(CurrentIrql);
        MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
        continue;
      }
LABEL_44:
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), v5);
      if ( KiIrqlFlags )
      {
        v41 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v41 <= 0xFu && CurrentIrql <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v32 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
      __writecr8(CurrentIrql);
LABEL_33:
      result = 0LL;
      *a2 = 17;
      return result;
    }
    break;
  }
  if ( (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    goto LABEL_44;
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v12) )
    goto LABEL_22;
  v16 = *(_QWORD *)(v12 + 40);
  if ( v16 < 0 && (*(_DWORD *)(v12 + 16) & 0x400LL) != 0 || (unsigned int)MiIsPfnCommitNotCharged(v15) )
  {
    v17 = 1;
    v18 = *(void **)(qword_140C67048 + 8 * (((unsigned __int64)v16 >> 43) & 0x3FF));
    if ( (unsigned int)MiChargeCommit(v18, 1LL, 4LL) )
      goto LABEL_18;
  }
  else
  {
    v17 = 0;
    v18 = *(void **)(qword_140C67048 + 8 * (((unsigned __int64)v16 >> 43) & 0x3FF));
LABEL_18:
    if ( v18 == &MiSystemPartition )
    {
      v19 = KeGetCurrentPrcb();
      CachedResidentAvailable = v19->CachedResidentAvailable;
      while ( CachedResidentAvailable )
      {
        if ( CachedResidentAvailable == -1 )
          break;
        v21 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&v19->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v21 == CachedResidentAvailable )
          goto LABEL_22;
      }
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable(v18, 1LL, 0xFFFFFFFFLL) )
    {
      if ( v17 )
        MiReturnCommit(v18, 1LL);
      goto LABEL_23;
    }
LABEL_22:
    ++*(_WORD *)(v12 + 32);
  }
LABEL_23:
  v22 = *a2;
  v23 = (volatile signed __int64 *)(*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL);
  for ( i = *(_BYTE *)(v12 + 34); (i & 0x20) != 0; i = *(_BYTE *)(v12 + 34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)v22 != 17 )
    {
      if ( KiIrqlFlags )
      {
        v37 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v37 >= 2u )
        {
          v38 = KeGetCurrentPrcb();
          v39 = v38->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
          v32 = (v40 & v39[5]) == 0;
          v39[5] &= v40;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v38);
        }
      }
      __writecr8(v22);
    }
    v46 = 0;
    while ( (*(_BYTE *)(v12 + 34) & 0x20) != 0 )
      KeYieldProcessorEx(&v46);
    MiLockPageInline(v12);
  }
  *(_BYTE *)(v12 + 34) = i | 0x20;
  if ( (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) == 0 && (*(_BYTE *)v23 & 0x20) == 0 )
    MiWriteValidPteVolatile(v23, 1, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v12;
}
