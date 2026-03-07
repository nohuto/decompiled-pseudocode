__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, ULONG_PTR a2)
{
  _QWORD *v2; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  int v11; // esi
  ULONG_PTR v12; // rax
  __int64 v13; // rdi
  KIRQL v14; // di
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v28; // eax
  unsigned __int64 v29; // [rsp+20h] [rbp-10h] BYREF
  KIRQL v30; // [rsp+60h] [rbp+30h] BYREF
  __int64 v31; // [rsp+70h] [rbp+40h] BYREF
  __int64 v32; // [rsp+78h] [rbp+48h] BYREF

  v2 = *(_QWORD **)(a1 + 40);
  v30 = 0;
  v4 = MiLockSectionControlArea(v2, 1, &v30);
  v6 = v4;
  if ( !v4 )
    return 0LL;
  if ( (*(_DWORD *)(v4 + 56) & 3) != 0
    || (v8 = *(_QWORD *)(v4 + 136)) == 0
    || (v31 = 0LL, v32 = 0LL, (int)MiTryLockProtoPoolPageAtDpc(v8, v5, &v32, (__int64)&v31) < 0) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v14 = v30;
      if ( v30 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = v30;
        v28 = ~(unsigned __int16)(-1LL << (v30 + 1));
        v18 = (v28 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v28;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v14 = v30;
    }
    __writecr8(v14);
    return 0LL;
  }
  v9 = v31;
  if ( (*(_BYTE *)(v31 + 34) & 0xC0) != 0x40
    || (*(_BYTE *)(v31 + 35) & 0x40) != 0
    || MiIsPageOnBadList(v31)
    || !(unsigned int)MiStandbyPageContentsIntact(v9) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( KiIrqlFlags )
    {
      v22 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v22 - 2) <= 0xDu )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v18 = (v24[5] & 0xFFFF0007) == 0;
        v24[5] &= 0xFFFF0007;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v23);
        v9 = v31;
      }
    }
    __writecr8(2uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_33;
  }
  v10 = MI_READ_PTE_LOCK_FREE(v8);
  v29 = v10;
  if ( (v10 & 1) != 0 )
  {
    v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29);
    v11 = 0;
  }
  else
  {
    if ( qword_140C657C0 )
    {
      if ( (v10 & 0x10) != 0 )
        v10 &= ~0x10uLL;
      else
        v10 &= ~qword_140C657C0;
    }
    v11 = 1;
  }
  v12 = (v10 >> 12) & 0xFFFFFFFFFFLL;
  v13 = 48 * a2 - 0x220000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v15 - 2) <= 0xDu )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = (v17[5] & 0xFFFF0007) == 0;
        v17[5] &= 0xFFFF0007;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    __writecr8(2uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_33:
    MiUnlockProtoPoolPage(v32, v30);
    return 0LL;
  }
  MiCopyPage(a2, v12, 4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
  if ( KiIrqlFlags )
  {
    v19 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v19 - 2) <= 0xDu )
    {
      v20 = KeGetCurrentPrcb();
      v21 = v20->SchedulerAssist;
      v18 = (v21[5] & 0xFFFF0007) == 0;
      v21[5] &= 0xFFFF0007;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(v20);
    }
  }
  __writecr8(2uLL);
  if ( v11 )
    MiUpdatePageAttributeStamp(v31);
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v32, v30);
  return 1LL;
}
