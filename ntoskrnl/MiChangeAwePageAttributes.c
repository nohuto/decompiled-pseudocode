/*
 * XREFs of MiChangeAwePageAttributes @ 0x140646E94
 * Callers:
 *     MiIncrementAweMapCount @ 0x140648524 (MiIncrementAweMapCount.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x140211998 (MiChangePageAttributeBatch.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiChangeAwePageAttributes(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbp
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf
  __int64 v14; // rbx
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 *v21; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v6 = a2 + 24;
  v7 = (unsigned __int8)MiLockPageInline(a2);
  if ( *(_WORD *)(a2 + 32) > 2u
    || (*(_QWORD *)v6 & 0x3FFFFFFFFFFFFFFFLL) != 1
    || (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v6, 0x7FFFFFFFFFFFFFFFuLL);
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
    return 3221225496LL;
  }
  v14 = *(_QWORD *)(a2 + 16);
  _InterlockedAnd64((volatile signed __int64 *)v6, 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v15 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v15 >= 2u )
    {
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v12 = (v18 & v17[5]) == 0;
      v17[5] &= v18;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)v16);
    }
  }
  __writecr8(v7);
  v19 = 0LL;
  v20 = 0LL;
  if ( v3 )
  {
    while ( *(_WORD *)(v6 + 8) <= 2u && (*(_QWORD *)v6 & 0x4000000000000000LL) == 0 )
    {
      *(_QWORD *)(v6 - 8) = v19;
      ++v20;
      v19 = v6 - 24;
      v6 += 48LL;
      if ( v20 >= v3 )
        goto LABEL_24;
    }
    while ( v19 )
    {
      v21 = (__int64 *)(v19 + 16);
      v19 = *(_QWORD *)(v19 + 16);
      *v21 = v14;
    }
    return 3221225496LL;
  }
LABEL_24:
  MiChangePageAttributeBatch(v19, a3, v14);
  return 0LL;
}
