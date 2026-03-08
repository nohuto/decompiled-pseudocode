/*
 * XREFs of MiProbeLockFrame @ 0x140268ED0
 * Callers:
 *     MiProbeAndLockPacket @ 0x140268C30 (MiProbeAndLockPacket.c)
 *     MmProbeAndLockSelectedPages @ 0x1403CF7D0 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiLockPageTablePage @ 0x14026A4D0 (MiLockPageTablePage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiReferenceIoPages @ 0x14029BA60 (MiReferenceIoPages.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402C3B80 (ExAcquireRundownProtectionCacheAware.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiChargePartitionResidentAvailable @ 0x140348ED0 (MiChargePartitionResidentAvailable.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockNonPagedPoolPte @ 0x14063F214 (MiLockNonPagedPoolPte.c)
 */

__int64 __fastcall MiProbeLockFrame(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rbx
  char v5; // dl
  unsigned __int16 v6; // ax
  __int64 v7; // rcx
  unsigned int v8; // r14d
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  char v12; // bp
  unsigned __int64 v13; // rdx
  void *v14; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v17; // ett
  char v18; // al
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 result; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  unsigned int v25; // eax
  __int64 v26; // rax
  int v27; // [rsp+80h] [rbp+18h] BYREF
  int v28; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 > qword_140C65820 || !_bittest64((const signed __int64 *)(48 * v2 - 0x21FFFFFFFFD8LL), 0x36u) )
  {
    result = MiReferenceIoPages(0, v2, a2, 0, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      *(_WORD *)(*(_QWORD *)(a1 + 64) + 10LL) |= 0x800u;
      return 0LL;
    }
    else
    {
      ++dword_140C67B90;
    }
    return result;
  }
  if ( (*(_DWORD *)(a1 + 72) & 0xF) != 4
    || (v24 = *(_QWORD *)(a1 + 8), (unsigned int)MI_IS_PHYSICAL_ADDRESS(v24))
    || (v26 = MiLockNonPagedPoolPte(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
        v4 = v26,
        v2 = 0xAAAAAAAAAAAAAAABuLL * ((v26 + 0x220000000000LL) >> 4),
        *(_QWORD *)(a1 + 136) = v2,
        !v26) )
  {
    v4 = 48 * v2 - 0x220000000000LL;
    v27 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v27);
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
  }
  v5 = *(_BYTE *)(v4 + 34);
  if ( (v5 & 7u) <= 1 || (v6 = *(_WORD *)(v4 + 32)) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++dword_140C67B84;
    return 3221225477LL;
  }
  if ( v6 >= 0x7FFFu )
    goto LABEL_73;
  v7 = *(_QWORD *)(v4 + 40);
  v8 = 1;
  v9 = 1LL;
  if ( (v7 & 0x10000000000LL) != 0 )
  {
LABEL_23:
    ++*(_WORD *)(v4 + 32);
    goto LABEL_26;
  }
  if ( (v7 & 0x20000000000000LL) == 0 )
  {
    v10 = *(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v6 == 1 )
    {
      if ( v10 || (v11 = 0, (v5 & 8) != 0) )
        v11 = 1;
      if ( v11 )
        goto LABEL_14;
    }
    else if ( v6 == 2 && v10 && (v5 & 8) != 0 )
    {
LABEL_14:
      v12 = 0;
      if ( v7 < 0 && (*(_DWORD *)(v4 + 16) & 0x400LL) != 0
        || (v9 = 0x8000000000000000uLL, v13 = *(_QWORD *)(v4 + 8) | 0x8000000000000000uLL, v13 <= 0xFFFFF6BFFFFFFF78uLL)
        && v13 >= 0xFFFFF68000000000uLL
        && (*(_BYTE *)(v4 + 35) & 0x20) != 0 )
      {
        v12 = 1;
        v14 = *(void **)(qword_140C67048 + 8 * (((unsigned __int64)v7 >> 43) & 0x3FF));
        if ( !(unsigned int)MiChargeCommit(v14, 1LL, 8LL) )
          goto LABEL_73;
      }
      else
      {
        v14 = *(void **)(qword_140C67048 + 8 * (((unsigned __int64)v7 >> 43) & 0x3FF));
      }
      if ( v14 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
        while ( CachedResidentAvailable )
        {
          if ( CachedResidentAvailable == -1 )
            break;
          v17 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v17 == CachedResidentAvailable )
            goto LABEL_23;
        }
      }
      v25 = MiChargePartitionResidentAvailable(v14, 1LL, 0LL);
      v9 = v25;
      if ( !v25 )
      {
        if ( v12 )
          MiReturnCommit(v14, 1LL);
        goto LABEL_73;
      }
    }
    ++*(_WORD *)(v4 + 32);
    if ( (_DWORD)v9 )
      goto LABEL_26;
LABEL_73:
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++dword_140C67B88;
    return 3221225633LL;
  }
  ++*(_WORD *)(v4 + 32);
LABEL_26:
  if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
    && (*(_QWORD *)(v4 + 16) & 4) != 0
    && (*(_QWORD *)(v4 + 16) & 0x400LL) == 0 )
  {
    *(_BYTE *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL)) + 715LL) = 1;
  }
  v18 = *(_BYTE *)(v4 + 34);
  if ( (v18 & 0x20) != 0 && (v18 & 8) == 0 && (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)v4 + 232LL));
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_DWORD *)(a1 + 72) & 0xF) == 1 )
  {
    v19 = *(_QWORD *)(v4 + 40);
    if ( (v19 & 0x10000000000LL) == 0 && (((unsigned __int64)v19 >> 60) & 7) != 1 )
    {
      v20 = v19 & 0xFFFFFFFFFFLL;
      if ( (v19 & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL && *(_QWORD *)(a1 + 144) != v20 )
      {
        if ( v19 < 0 )
        {
          v22 = v4;
        }
        else
        {
          v22 = 48 * v20 - 0x220000000000LL;
          v8 = 2;
        }
        if ( !(unsigned int)MiLockPageTablePage(v22, v8, v9) )
        {
          v28 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v28);
            while ( *(__int64 *)(v4 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v4);
          _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          ++dword_140C67B8C;
          return 3221225633LL;
        }
        if ( (*(_DWORD *)(a1 + 72) & 0x40) == 0 )
          *(_QWORD *)(a1 + 144) = *(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL;
        *(_WORD *)(*(_QWORD *)(a1 + 64) + 10LL) |= 0x100u;
      }
    }
  }
  if ( *(char *)(*(_QWORD *)(a1 + 64) + 10LL) < 0 && *(__int64 *)(v4 + 40) < 0 )
  {
    v23 = *(_QWORD *)(v4 + 16);
    if ( (v23 & 0x400) != 0 )
    {
      if ( qword_140C657C0 && (v23 & 0x10) == 0 )
        v23 &= ~qword_140C657C0;
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v23 >> 16) + 112LL));
    }
  }
  if ( ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FF) != 0 )
    ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(qword_140C67048
                                                                                    + 8
                                                                                    * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL))
                                                                        + 2432LL));
  return 0LL;
}
