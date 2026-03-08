/*
 * XREFs of MiLockNonPagedPoolPte @ 0x14063F214
 * Callers:
 *     MiProbeLockFrame @ 0x140268ED0 (MiProbeLockFrame.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockNonPagedPoolPte(ULONG_PTR BugCheckParameter3, unsigned __int8 *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  while ( 1 )
  {
    v14 = MI_READ_PTE_LOCK_FREE(BugCheckParameter3);
    v4 = v14;
    if ( (v14 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x5307uLL, (__int64)(BugCheckParameter3 << 25) >> 16, BugCheckParameter3, 0LL);
    v5 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFFLL)
       - 0x220000000000LL;
    v6 = MiLockPageInline(v5);
    v7 = v6;
    *a2 = v6;
    if ( v4 == MI_READ_PTE_LOCK_FREE(BugCheckParameter3) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v7);
  }
  return v5;
}
