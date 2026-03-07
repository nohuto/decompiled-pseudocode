__int64 __fastcall KiSynchronizeStibpPairing(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf
  __int64 result; // rax
  _DWORD v13[68]; // [rsp+30h] [rbp-138h] BYREF

  memset(&v13[2], 0, 0x100uLL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v4) = 4096;
    else
      v4 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v4;
  }
  v5 = *(_QWORD *)(a1 + 11696);
  v13[0] = 2097153;
  memset(&v13[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v13, *(_DWORD *)(v5 + 36));
  KiIpiSendPacket(0, (int)v13, (__int64)KiSynchronizeStibpPairingTarget, 0LL, 0LL, 0LL);
  KiIpiStallOnPacketTargetsPrcb(v6, a1);
  if ( KiIrqlFlags )
  {
    v7 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v11 = (v10 & v9[5]) == 0;
      v9[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
