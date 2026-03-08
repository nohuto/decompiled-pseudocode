/*
 * XREFs of MiInitializeBootShadowStackPage @ 0x140642570
 * Callers:
 *     MiInitializeBootKernelShadowStacks @ 0x1403B0CCC (MiInitializeBootKernelShadowStacks.c)
 *     MiInitializeBootKernelShadowStack @ 0x140642510 (MiInitializeBootKernelShadowStack.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x1402093BC (MiMarkPfnVerified.c)
 *     MiLockAndDecrementShareCount @ 0x140210114 (MiLockAndDecrementShareCount.c)
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiAcquireNonPagedResources @ 0x140348D54 (MiAcquireNonPagedResources.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeBootShadowStackPage(unsigned __int64 a1)
{
  unsigned __int64 v2; // rdi
  int v3; // ebx
  unsigned __int64 v4; // rbp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf
  unsigned __int64 v9; // rbx
  __int64 v10; // rbp
  int v11; // r14d
  __int64 v12; // r8
  struct _KPRCB *v13; // r9
  __int64 v14; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v16; // eax
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = MI_READ_PTE_LOCK_FREE(a1);
  v2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL)
     - 0x220000000000LL;
  v3 = 0;
  v4 = (unsigned __int8)MiLockPageInline(v2);
  if ( ((*(_QWORD *)(v2 + 40) >> 60) & 7) != 3 && (_BYTE)KiKernelCetEnabled )
    MiMarkPfnVerified(v2, 4);
  if ( (unsigned int)MiCheckSlabPfnBitmap(v2, 1LL, 0) && !(unsigned int)MiCheckSlabPfnBitmap(v2, 1LL, 1) )
    v3 = 1;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v8 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
  if ( v3 )
  {
    MiAcquireNonPagedResources((unsigned __int64)MiSystemPartition, 1uLL, 0LL, 0);
    result = ++qword_140C69628;
  }
  if ( !(_BYTE)KiKernelCetEnabled )
  {
    v9 = ZeroPte;
    v10 = 48 * (*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v11 = 0;
    if ( MiPteInShadowRange(a1) )
    {
      if ( MiPteHasShadow() )
      {
        v11 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
LABEL_22:
          if ( (ZeroPte & 1) != 0 )
            v9 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_22;
      }
    }
    *(_QWORD *)a1 = v9;
    if ( v11 )
      MiWritePteShadow(a1, v9, v12);
    KeFlushSingleTb((__int64)(a1 << 25) >> 16, 0, 1u);
    MiLockAndDecrementShareCount(v2, 1);
    MiLockAndDecrementShareCount(v10, 0);
    v13 = KeGetCurrentPrcb();
    v14 = 1LL;
    CachedResidentAvailable = (int)v13->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_35;
    if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
    {
      do
      {
        v16 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&v13->CachedResidentAvailable,
                CachedResidentAvailable + 1,
                CachedResidentAvailable);
        v8 = (_DWORD)CachedResidentAvailable == v16;
        LODWORD(CachedResidentAvailable) = v16;
        if ( v8 )
          goto LABEL_36;
      }
      while ( v16 != -1 && (unsigned __int64)(v16 + 1LL) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v13->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v14 = (int)CachedResidentAvailable - 192 + 1LL;
    }
    if ( v14 )
LABEL_35:
      v14 = _InterlockedExchangeAdd64(&qword_140C6F440, v14);
LABEL_36:
    MiReturnCommit((__int64)MiSystemPartition, 1LL, v14);
    return --qword_140C69628;
  }
  return result;
}
