void __fastcall IopDereferencePassiveInterruptBlock(PVOID P)
{
  char v2; // bp
  unsigned __int8 v3; // di
  unsigned __int8 v4; // di
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  int v15; // eax
  unsigned __int8 v16; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = 0;
  v16 = 0;
  v2 = 0;
  IopAcquireGlobalPassiveInterruptListLock(&v17);
  IopAcquirePassiveInterruptBlockLock(P, &v16);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 48, 0xFFFFFFFF) == 1 )
  {
    v5 = *(_QWORD **)P;
    v6 = (PVOID *)*((_QWORD *)P + 1);
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || *v6 != P )
      __fastfail(3u);
    *v6 = v5;
    v2 = 1;
    v5[1] = v6;
  }
  KxReleaseSpinLock((volatile signed __int64 *)P + 7);
  if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
  {
    v3 = v16;
    if ( v16 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v3 = v16;
      v10 = ~(unsigned __int16)(-1LL << (v16 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v3 = v16;
  }
  __writecr8(v3);
  KxReleaseSpinLock((volatile signed __int64 *)&PassiveInterruptListLock);
  if ( KiIrqlFlags && (v12 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v12 <= 0xFu )
  {
    v4 = v17;
    if ( v17 <= 0xFu && v12 >= 2u )
    {
      v13 = KeGetCurrentPrcb();
      v14 = v13->SchedulerAssist;
      v4 = v17;
      v15 = ~(unsigned __int16)(-1LL << (v17 + 1));
      v11 = (v15 & v14[5]) == 0;
      v14[5] &= v15;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(v13);
    }
  }
  else
  {
    v4 = v17;
  }
  __writecr8(v4);
  if ( v2 )
    ExFreePoolWithTag(P, 0x6269704Bu);
}
