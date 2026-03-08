/*
 * XREFs of MiMapSystemCachePage @ 0x14062C834
 * Callers:
 *     MmCopyToCachedPage @ 0x14021DBE0 (MmCopyToCachedPage.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMapFrame @ 0x14062C794 (MiMapFrame.c)
 */

__int64 __fastcall MiMapSystemCachePage(unsigned __int64 a1, unsigned __int64 *a2, char a3)
{
  unsigned __int64 i; // rsi
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rdx
  int v17; // eax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  int v22; // eax
  _DWORD *v23; // r8

  for ( i = *a2; (*a2 & 1) != 0; i = *a2 )
  {
    v7 = (i >> 12) & 0xFFFFFFFFFFLL;
    if ( v7 > qword_140C65820 || !_bittest64((const signed __int64 *)(48 * v7 - 0x21FFFFFFFFD8LL), 0x36u) )
      break;
    v8 = 48 * v7 - 0x220000000000LL;
    v9 = (unsigned __int8)MiLockPageInline(v8);
    if ( (*a2 & 1) == 0 )
      goto LABEL_27;
    if ( ((*a2 >> 12) & 0xFFFFFFFFFFLL) == v7 )
    {
      if ( (unsigned int)MiAddLockedPageCharge(48 * v7 - 0x220000000000LL, 0) )
      {
        if ( (a3 & 4) == 0 || !_bittest64((const signed __int64 *)(v8 + 40), 0x35u) )
          *(_BYTE *)(v8 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v14 = (v17 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v17;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v9);
        return MiMapFrame(a1, v7);
      }
LABEL_27:
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v20 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v23 = v21->SchedulerAssist;
          v14 = (v22 & v23[5]) == 0;
          v23[5] &= v22;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v21);
        }
      }
      __writecr8(v9);
      return 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v10 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v10 >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v11);
      }
    }
    __writecr8(v9);
  }
  return 0LL;
}
