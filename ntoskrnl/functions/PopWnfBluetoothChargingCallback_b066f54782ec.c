__int64 __fastcall PopWnfBluetoothChargingCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // edi
  KIRQL v5; // al
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  char v13[4]; // [rsp+20h] [rbp-18h] BYREF
  int v14[5]; // [rsp+24h] [rbp-14h] BYREF
  int v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = a4;
  v13[0] = 0;
  v14[0] = 1;
  v4 = ExQueryWnfStateData(a1, &v15, v13, v14);
  if ( v4 >= 0 )
  {
    if ( v14[0] )
    {
      v5 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
      byte_140C3D4E5 = v13[0];
      v6 = v5;
      if ( PopCsResiliencyStats[0] && v13[0] && !byte_140C3C723 )
        byte_140C3C723 = 1;
      KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v6);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v4;
}
