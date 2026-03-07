__int64 __fastcall KdDeregisterPowerHandler(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v4; // rdx
  __int64 v5; // rax
  void *v6; // rsi
  char v7; // di
  __int64 *v8; // rcx
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  __int64 **v15; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v4) = 0x8000;
    else
      v4 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v4;
  }
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v5 = KdpPowerListHead;
  v6 = 0LL;
  v7 = 0;
  if ( (__int64 *)KdpPowerListHead != &KdpPowerListHead )
  {
    while ( 1 )
    {
      v8 = *(__int64 **)v5;
      v6 = (void *)v5;
      if ( a1 == v5 )
        break;
      v5 = *(_QWORD *)v5;
      if ( v8 == &KdpPowerListHead )
        goto LABEL_11;
    }
    v15 = *(__int64 ***)(v5 + 8);
    if ( v8[1] != v5 || *v15 != (__int64 *)v5 )
      __fastfail(3u);
    *v15 = v8;
    v7 = 1;
    v8[1] = (__int64)v15;
  }
LABEL_11:
  KxReleaseSpinLock((volatile signed __int64 *)&KdpPowerSpinLock);
  if ( KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( !v7 )
    return 3221226021LL;
  ExFreePoolWithTag(v6, 0x6F49644Bu);
  return 0LL;
}
