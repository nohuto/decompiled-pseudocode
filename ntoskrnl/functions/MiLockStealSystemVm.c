__int64 __fastcall MiLockStealSystemVm(ULONG_PTR a1, unsigned __int8 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned int SystemRegionType; // r15d
  unsigned int v10; // edi
  unsigned int v11; // r13d
  char *v12; // rax
  char *v13; // r14
  unsigned __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  char v18; // al
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // cl
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r8
  int v27; // eax
  char *AnyMultiplexedVm; // rax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r8
  int v32; // eax
  struct _KPROCESS *v33; // rcx
  unsigned __int64 SessionVm; // rax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r8
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r8
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r8
  int v46; // eax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r8
  int v50; // eax
  __int64 v51; // [rsp+70h] [rbp+8h]
  unsigned __int64 v52; // [rsp+80h] [rbp+18h] BYREF

  v52 = a3;
  v6 = a2;
  v7 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v51 = v7;
  v8 = (__int64)(a3 << 25) >> 16;
  SystemRegionType = MiGetSystemRegionType(v8);
  v10 = 0;
  if ( v8 < 0xFFFFF68000000000uLL || (v11 = 1, v8 > 0xFFFFF6FFFFFFFFFFuLL) )
    v11 = 0;
  switch ( SystemRegionType )
  {
    case 5u:
      v18 = *(_BYTE *)(a1 + 35);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v18 & 0x10) != 0 )
      {
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v23 = (v22 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v22;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v6);
        return 0LL;
      }
      if ( KiIrqlFlags )
      {
        v24 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v23 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
      __writecr8(v6);
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(5);
      *(_DWORD *)(a4 + 8) |= 0x20u;
      v13 = AnyMultiplexedVm;
      break;
    case 1u:
      *(_QWORD *)(a4 + 56) = MiReferenceOwningSession(a1);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v29 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v23 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
      __writecr8(v6);
      v33 = *(struct _KPROCESS **)(a4 + 56);
      if ( v33 )
      {
        if ( (int)MmAttachSession(v33, (PRKAPC_STATE)(a4 + 72)) >= 0 )
        {
          SessionVm = MiGetSessionVm();
          *(_DWORD *)(a4 + 8) |= 0x80u;
          v13 = (char *)SessionVm;
          break;
        }
        *(_QWORD *)(a4 + 56) = 0LL;
      }
      ++dword_140C1355C;
      return 0LL;
    case 6u:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v35 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v35 >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v37 = v36->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v23 = (v38 & v37[5]) == 0;
          v37[5] &= v38;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v36);
        }
      }
      __writecr8(v6);
      v12 = MiGetAnyMultiplexedVm(2);
      *(_DWORD *)(a4 + 8) |= 0x10u;
      v13 = v12;
      break;
    case 0xCu:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v39 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v39 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v23 = (v42 & v41[5]) == 0;
          v41[5] &= v42;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
      __writecr8(v6);
      v13 = MiGetAnyMultiplexedVm(1);
      *(_DWORD *)(a4 + 48) = 1;
      break;
    default:
      if ( SystemRegionType != 9 || !MiVaIsPageFileHash(v7, v8) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v47 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v47 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v47 >= 2u )
          {
            v48 = KeGetCurrentPrcb();
            v49 = v48->SchedulerAssist;
            v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v23 = (v50 & v49[5]) == 0;
            v49[5] &= v50;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(v48);
          }
        }
        __writecr8(v6);
        ++dword_140C13560;
        return 0LL;
      }
      v13 = MiGetAnyMultiplexedVm(3);
      *(_DWORD *)(a4 + 48) = 2;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v43 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v43 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v43 >= 2u )
        {
          v44 = KeGetCurrentPrcb();
          v45 = v44->SchedulerAssist;
          v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v23 = (v46 & v45[5]) == 0;
          v45[5] &= v46;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v44);
        }
      }
      __writecr8(v6);
      break;
  }
  if ( (unsigned int)MiSynchronizeSystemVa((__int64)v13, v8, SystemRegionType, v11, a4) )
  {
    v14 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
    if ( v11 )
    {
      if ( (unsigned int)MiSmallVaStillMapsFrame(v8, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4)) )
        goto LABEL_12;
    }
    else
    {
      v52 = MI_READ_PTE_LOCK_FREE(v52);
      if ( (v52 & 1) != 0
        && (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v52) >> 12) & 0xFFFFFFFFFFLL) == v14 )
      {
LABEL_12:
        v15 = *(_DWORD *)(a4 + 48);
        if ( v15 == 3
          || v15 == 2
          || (*(_DWORD *)(a4 + 8) & 0x20) != 0
          || (*(_BYTE *)a1 & 1) != 0 && (*(_BYTE *)(a1 + 35) & 8) == 0 )
        {
          if ( v14 <= qword_140C65820 )
          {
            if ( _bittest64(
                   (const signed __int64 *)(16 * ((__int64)(a1 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL),
                   0x36u) )
            {
              v16 = *(_QWORD *)(a1 + 40);
              if ( *(_QWORD *)(qword_140C67048 + 8 * (((unsigned __int64)v16 >> 43) & 0x3FF)) == v51
                && v16 >= 0
                && (v16 & 0x20000000000000LL) == 0
                && !(unsigned int)MiCheckSlabPfnBitmap(a1, 1LL, 0) )
              {
                return 1LL;
              }
            }
          }
        }
        else
        {
          ++dword_140C1356C;
        }
        goto LABEL_82;
      }
    }
    v10 = 2;
  }
LABEL_82:
  MiUnlockStealVm(a4);
  if ( (v13[184] & 7) != 3 )
  {
    ++dword_140C13560;
    return v10;
  }
  ++dword_140C135E8;
  return 0LL;
}
