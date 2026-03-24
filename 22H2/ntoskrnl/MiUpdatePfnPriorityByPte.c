/*
 * XREFs of MiUpdatePfnPriorityByPte @ 0x1402AC5A0
 * Callers:
 *     MiSystemFault @ 0x140291A80 (MiSystemFault.c)
 *     MiPfPrepareSequentialReadList @ 0x14063B4F0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14063D030 (MiPfPrepareReadList.c)
 * Callees:
 *     MiInvalidPteConforms @ 0x14023AEB0 (MiInvalidPteConforms.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiIsPteInStore @ 0x1402E1DE0 (MiIsPteInStore.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiRelinkStandbyPage @ 0x14033AFE8 (MiRelinkStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiUpdatePfnPriorityByPte(unsigned __int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  _QWORD *p_Flink; // r9
  unsigned __int64 v7; // rdx
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // si
  char v14; // di
  char v15; // al
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  char v27; // cl
  unsigned int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  int v33; // [rsp+70h] [rbp+18h] BYREF
  __int64 v34; // [rsp+78h] [rbp+20h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      result = MI_READ_PTE_LOCK_FREE(a1);
      v34 = result;
      v7 = result;
      if ( (result & 1) != 0 )
      {
        if ( (unsigned __int64)&v34 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v34 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(&v34, result, v5, p_Flink)
          && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
        {
          p_Flink = &KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink->Flink;
          if ( !p_Flink )
          {
            v7 = v34;
            v8 = 6;
            goto LABEL_22;
          }
          v9 = p_Flink[((unsigned __int64)&v34 >> 3) & 0x1FF];
          if ( (v9 & 0x20) != 0 )
            v7 |= 0x20uLL;
          if ( (v9 & 0x42) != 0 )
            v7 |= 0x42uLL;
        }
        v8 = 6;
      }
      else
      {
        if ( (result & 0x400) != 0 )
          return result;
        if ( (result & 0x800) == 0 )
          return result;
        result = MiInvalidPteConforms(result);
        if ( !(_DWORD)result )
          return result;
        if ( qword_140C4DF40 )
        {
          if ( (v7 & 0x10) != 0 )
            v7 &= ~0x10uLL;
          else
            v7 &= ~qword_140C4DF40;
        }
        v8 = 2;
      }
LABEL_22:
      v10 = (v7 >> 12) & 0xFFFFFFFFFLL;
      v11 = 6 * v10;
      result = 0x4000000000000LL;
      if ( (*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
        return result;
      v12 = 48 * v10 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        p_Flink = KeGetCurrentPrcb()->SchedulerAssist;
        v10 = (-1LL << (CurrentIrql + 1)) & 4;
        v11 = (unsigned int)v10 | *((_DWORD *)p_Flink + 5);
        *((_DWORD *)p_Flink + 5) = v11;
      }
      v33 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v33, v10, v11, (__int64)p_Flink);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
      if ( (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) != a1
        && (!(unsigned int)MI_PFN_IS_PROTO(v12) || a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        goto LABEL_71;
      }
      v14 = *(_BYTE *)(v12 + 34);
      v15 = v14 & 7;
      if ( v8 != 6 )
        break;
      if ( v15 == 6 )
        goto LABEL_51;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v20 = (v19 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v21 = (__int64)(a1 << 25) >> 16;
        if ( v21 < 0xFFFFF68000000000uLL || v21 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          result = MiGetSystemRegionType(v21);
          if ( (_DWORD)result == 9 )
            return result;
        }
      }
    }
    if ( (unsigned __int8)(v15 - 2) <= 2u && (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) == 0 )
      break;
LABEL_52:
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
LABEL_51:
  v22 = MI_READ_PTE_LOCK_FREE(a1);
  if ( v34 != v22 )
    goto LABEL_52;
  v27 = *(_BYTE *)(v12 + 35);
  if ( (v27 & 8) != 0 )
    v28 = 5;
  else
    v28 = v27 & 7;
  if ( a2 != v28 && a2 >= v28 )
  {
    if ( (v14 & 7) == 2 )
    {
      if ( v28
        || (*(_DWORD *)(v12 + 16) & 0x400LL) != 0
        || !(unsigned int)MiIsPteInStore(
                            *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v12 + 40) >> 39) & 0x3FFLL)),
                            *(_QWORD *)(v12 + 16)) )
      {
        MiRelinkStandbyPage(v12, a2);
      }
    }
    else
    {
      *(_BYTE *)(v12 + 35) = v27 ^ (a2 ^ v27) & 7;
    }
  }
LABEL_71:
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
