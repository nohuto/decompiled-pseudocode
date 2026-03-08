/*
 * XREFs of MiPrepareLargePageSubPageForFree @ 0x140666E94
 * Callers:
 *     MiReadyLargePageToFree @ 0x140350860 (MiReadyLargePageToFree.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiSetPfnIdentity @ 0x14034BE78 (MiSetPfnIdentity.c)
 *     MiClearPfnImageVerified @ 0x14036ABC0 (MiClearPfnImageVerified.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPrepareLargePageSubPageForFree(ULONG_PTR BugCheckParameter2)
{
  volatile signed __int64 *v1; // rbx
  unsigned __int64 v3; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v7; // eax
  bool v8; // zf
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // eax
  unsigned __int64 v14; // r14
  unsigned __int8 v15; // cl
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r9
  int v18; // eax
  unsigned __int64 v19; // r14
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  int v22; // edx
  _DWORD *v23; // r9

  v1 = (volatile signed __int64 *)(BugCheckParameter2 + 24);
  if ( *(_WORD *)(BugCheckParameter2 + 32) != 2 )
  {
    v3 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
    if ( *(_WORD *)(BugCheckParameter2 + 32) != 2 )
    {
      *v1 |= 0x4000000000000000uLL;
      _InterlockedAnd64(v1, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v8 = (v7 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v7;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v3);
      return 0LL;
    }
    _InterlockedAnd64(v1, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v10 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v10 >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v8 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick((__int64)v11);
      }
    }
    __writecr8(v3);
  }
  if ( ((*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7) == 3 )
  {
    v14 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
    MiClearPfnImageVerified(BugCheckParameter2, 12);
    _InterlockedAnd64(v1, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v8 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick((__int64)v16);
      }
    }
    __writecr8(v14);
  }
  if ( ((*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7) == 1 )
  {
    v19 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
    MiSetPfnIdentity(BugCheckParameter2, 0);
    _InterlockedAnd64(v1, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v20 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
        v23 = v21->SchedulerAssist;
        v8 = (v22 & v23[5]) == 0;
        v23[5] &= v22;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick((__int64)v21);
      }
    }
    __writecr8(v19);
  }
  return 1LL;
}
