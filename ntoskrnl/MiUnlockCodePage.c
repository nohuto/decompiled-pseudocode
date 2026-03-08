/*
 * XREFs of MiUnlockCodePage @ 0x1402A441C
 * Callers:
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiHandleDriverNonPagedSections @ 0x140726FEC (MiHandleDriverNonPagedSections.c)
 *     MiUnlockDriverCode @ 0x14084EDE0 (MiUnlockDriverCode.c)
 *     MiUnlockDriverPages @ 0x14087313C (MiUnlockDriverPages.c)
 *     MmUnlockPreChargedPagedPool @ 0x140A2DD70 (MmUnlockPreChargedPagedPool.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockCodePage(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  result = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( v3 <= a2 )
  {
    v7 = result;
    v8 = result;
    if ( !a3 )
      v7 = v3;
    v17 = MI_READ_PTE_LOCK_FREE(v7);
    v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v17) >> 12) & 0xFFFFFFFFFFLL;
    if ( a3 )
      v9 += (v3 >> 3) & 0x1FF;
    v10 = 48 * v9 - 0x220000000000LL;
    v11 = (unsigned __int8)MiLockPageInline(v10);
    MiRemoveLockedPageChargeAndDecRef(v10);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v11);
    v3 += 8LL;
    result = v8 + 8;
    if ( (v3 & 0xFFF) != 0 )
      result = v8;
  }
  return result;
}
