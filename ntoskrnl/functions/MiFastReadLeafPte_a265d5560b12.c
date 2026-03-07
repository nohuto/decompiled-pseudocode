__int64 __fastcall MiFastReadLeafPte(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // r8
  unsigned __int8 CurrentIrql; // bl
  char *MmInternal; // rdx
  _DWORD *v6; // rdx
  __int64 v7; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v9; // rcx
  _DWORD *SchedulerAssist; // r11
  __int64 v12; // rsi
  unsigned __int8 v13; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // cl
  struct _KPRCB *v19; // rax
  _DWORD *v20; // r9
  int v21; // edx
  unsigned __int8 v22; // cl
  _DWORD *v23; // r8
  int v24; // eax

  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v12) = 4;
    else
      v12 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v12;
  }
  MmInternal = (char *)KeGetCurrentPrcb()->MmInternal;
  if ( (MiFlags & 0x800000) == 0 || !MmInternal )
  {
    if ( !KiIrqlFlags )
      goto LABEL_26;
    v22 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_26;
    if ( v22 > 0xFu )
      goto LABEL_26;
    if ( CurrentIrql > 0xFu )
      goto LABEL_26;
    if ( v22 < 2u )
      goto LABEL_26;
    CurrentPrcb = KeGetCurrentPrcb();
    v23 = CurrentPrcb->SchedulerAssist;
    v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
    v17 = (v24 & v23[5]) == 0;
    v23[5] &= v24;
    if ( !v17 )
      goto LABEL_26;
LABEL_45:
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_26:
    __writecr8(CurrentIrql);
    return 3221225473LL;
  }
  v6 = MmInternal + 12608;
  if ( *v6 )
  {
    if ( !KiIrqlFlags )
      goto LABEL_26;
    v13 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_26;
    if ( v13 > 0xFu )
      goto LABEL_26;
    if ( CurrentIrql > 0xFu )
      goto LABEL_26;
    if ( v13 < 2u )
      goto LABEL_26;
    CurrentPrcb = KeGetCurrentPrcb();
    v15 = CurrentPrcb->SchedulerAssist;
    v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
    v17 = (v16 & v15[5]) == 0;
    v15[5] &= v16;
    if ( !v17 )
      goto LABEL_26;
    goto LABEL_45;
  }
  *v6 = 2;
  v7 = *(_QWORD *)v3;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL
    && v3 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v9 = *((_QWORD *)&Flink->Flink + ((v3 >> 3) & 0x1FF));
      if ( (v9 & 0x20) != 0 )
        v7 |= 0x20uLL;
      if ( (v9 & 0x42) != 0 )
        v7 |= 0x42uLL;
    }
  }
  *a2 = v7;
  *v6 = 0;
  if ( KiIrqlFlags )
  {
    v18 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
    {
      v19 = KeGetCurrentPrcb();
      v20 = v19->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v17 = (v21 & v20[5]) == 0;
      v20[5] &= v21;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(v19);
    }
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
