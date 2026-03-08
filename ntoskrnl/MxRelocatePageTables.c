/*
 * XREFs of MxRelocatePageTables @ 0x140B4F790
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MxMovePageTables @ 0x140B4F948 (MxMovePageTables.c)
 *     MxSwapPages @ 0x140B50198 (MxSwapPages.c)
 */

__int64 __fastcall MxRelocatePageTables(int a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf
  _OWORD v16[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v16[0] = 0LL;
  MiInitializePageColorBase(0LL, 0, (__int64)v16);
  v2 = 0xFFFFF6C000000000uLL;
  v3 = (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = 3LL;
  do
  {
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v4;
  }
  while ( v4 );
  if ( v2 < v3 )
    MxMovePageTables(v2, v3 - 8, 3, a1, (__int64)v16);
  v5 = (((unsigned __int64)(MmPfnDatabase + (MxPfnAllocation << 12)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0xFFFFF6FFFFFFFFF8uLL;
  v7 = 3LL;
  do
  {
    v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v7;
  }
  while ( v7 );
  if ( v5 < v6 )
    MxMovePageTables(v5 + 8, v6, 3, a1, (__int64)v16);
  MxSwapPages(v16, 0xFFFFF6FBC0000000uLL);
  v17 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FBC0000000uLL);
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL)
     - 0x220000000000LL;
  v9 = MiLockPageInline(v8);
  ++*(_WORD *)(v8 + 32);
  v10 = v9;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v15 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v10);
  return result;
}
