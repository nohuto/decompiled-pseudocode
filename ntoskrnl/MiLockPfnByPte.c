/*
 * XREFs of MiLockPfnByPte @ 0x14031A8C0
 * Callers:
 *     MiUpdatePfnForPrefetchByPte @ 0x14031D5F0 (MiUpdatePfnForPrefetchByPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockPfnByPte(unsigned __int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v4; // rax
  int v5; // r15d
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // di
  char v9; // cl
  unsigned __int8 v10; // al
  __int64 v11; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v14; // r9
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int64 v20; // rcx
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  unsigned __int8 v25; // cl
  _DWORD *v26; // r9
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v30; // r8
  int v31; // eax
  unsigned __int8 v32; // al
  _DWORD *v33; // r8
  int v34; // eax
  int v35; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp+20h] BYREF

  while ( 1 )
  {
    v4 = MI_READ_PTE_LOCK_FREE(a1);
    v36 = v4;
    if ( (v4 & 1) != 0 )
    {
      v4 = MI_READ_PTE_LOCK_FREE(&v36);
      v5 = 6;
    }
    else
    {
      if ( (v4 & 0x400) != 0 || (v4 & 0x800) == 0 || v4 && qword_140C657C0 && (qword_140C657C0 & v4) == 0 )
        return 0LL;
      if ( qword_140C657C0 )
      {
        if ( (v4 & 0x10) != 0 )
          v4 &= ~0x10uLL;
        else
          v4 &= ~qword_140C657C0;
      }
      v5 = 2;
    }
    v6 = (v4 >> 12) & 0xFFFFFFFFFFLL;
    if ( v6 > qword_140C65820 || !_bittest64((const signed __int64 *)(48 * v6 - 0x21FFFFFFFFD8LL), 0x36u) )
      return 0LL;
    v7 = 48 * v6 - 0x220000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v14) = 4;
      else
        v14 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v14;
    }
    v35 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v35);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    if ( (*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL) == a1 )
      goto LABEL_8;
    if ( *(__int64 *)(v7 + 40) >= 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !KiIrqlFlags )
        goto LABEL_81;
      v32 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_81;
      if ( v32 > 0xFu )
        goto LABEL_81;
      if ( CurrentIrql > 0xFu )
        goto LABEL_81;
      if ( v32 < 2u )
        goto LABEL_81;
      CurrentPrcb = KeGetCurrentPrcb();
      v33 = CurrentPrcb->SchedulerAssist;
      v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v19 = (v34 & v33[5]) == 0;
      v33[5] &= v34;
      if ( !v19 )
        goto LABEL_81;
LABEL_80:
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      goto LABEL_81;
    }
    if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
LABEL_8:
    v9 = *(_BYTE *)(v7 + 34);
    v10 = v9 & 7;
    if ( v5 == 6 )
    {
      if ( v10 == 6 )
        goto LABEL_10;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v15 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          v17 = v16->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v19 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      __writecr8(CurrentIrql);
      if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v20 = (__int64)(a1 << 25) >> 16;
        if ( (v20 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL)
          && (unsigned int)MiGetSystemRegionType(v20) == 9 )
        {
          return 0LL;
        }
      }
    }
    else
    {
      if ( v10 < 2u || (v9 & 7u) > 4 || (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v25 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v26 = v22->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v19 = (v27 & v26[5]) == 0;
            v26[5] &= v27;
            if ( v19 )
              goto LABEL_66;
          }
        }
        goto LABEL_29;
      }
LABEL_10:
      v11 = MI_READ_PTE_LOCK_FREE(a1);
      if ( v36 == v11 )
      {
        *a2 = CurrentIrql;
        return v7;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v21 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v19 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v19 )
LABEL_66:
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
LABEL_29:
      __writecr8(CurrentIrql);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v28 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v30 = CurrentPrcb->SchedulerAssist;
      v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v19 = (v31 & v30[5]) == 0;
      v30[5] &= v31;
      if ( v19 )
        goto LABEL_80;
    }
  }
LABEL_81:
  __writecr8(CurrentIrql);
  return 0LL;
}
