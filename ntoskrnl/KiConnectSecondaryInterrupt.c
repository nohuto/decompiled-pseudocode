__int64 __fastcall KiConnectSecondaryInterrupt(__int64 a1)
{
  char v2; // si
  unsigned __int8 v3; // cl
  __int64 v4; // r8
  char v5; // bp
  unsigned __int8 v6; // al
  __int64 v7; // rdi
  __int64 v8; // r10
  __int64 v10; // r10
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf

  if ( KiSecondaryInterruptServicesEnabled )
  {
    v2 = 0;
    v3 = *(_BYTE *)(a1 + 92);
    v4 = (unsigned int)(*(_DWORD *)(a1 + 88) - 256);
    v5 = 0;
    if ( (unsigned int)v4 > 0xFF )
      return 3221225711LL;
    if ( v3 > 0xCu )
      return 3221225711LL;
    if ( *(_DWORD *)(a1 + 96) >= (unsigned int)KeNumberProcessors_0 )
      return 3221225711LL;
    v6 = *(_BYTE *)(a1 + 93);
    if ( v6 < v3 )
    {
      if ( v6 )
        return 3221225711LL;
    }
    v7 = KiGlobalSecondaryIDT + 48 * v4;
    KiAcquireSecondaryPassiveConnectLock(v7);
    KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)v7);
    if ( *(_BYTE *)(a1 + 95) )
    {
LABEL_12:
      KxReleaseSpinLock((volatile signed __int64 *)v7);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
          SchedulerAssist[5] &= 0xFFFF0001;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(0LL);
      KeSetEvent((PRKEVENT)(v7 + 8), 0, 0);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v5 )
        return v2 != 0 ? 0x127 : 0;
      return 3221225711LL;
    }
    v8 = *(_QWORD *)(v7 + 40);
    if ( v8 )
    {
      if ( !*(_BYTE *)(a1 + 100) )
        goto LABEL_11;
      if ( !*(_BYTE *)(v8 + 100) )
        goto LABEL_11;
      if ( *(_DWORD *)(v8 + 108) != *(_DWORD *)(a1 + 108) )
        goto LABEL_11;
      v5 = 1;
      v2 = 1;
      KiInsertInterruptObjectOrdered(*(_QWORD *)(v7 + 40), a1);
      if ( *(_BYTE *)(v10 + 93) || !*(_BYTE *)(a1 + 93) )
        goto LABEL_11;
    }
    else
    {
      v5 = 1;
      *(_QWORD *)(a1 + 16) = a1 + 8;
      *(_QWORD *)(a1 + 8) = a1 + 8;
      *(_BYTE *)(v7 + 32) = 0;
    }
    *(_QWORD *)(v7 + 40) = a1;
LABEL_11:
    *(_BYTE *)(a1 + 95) = 1;
    goto LABEL_12;
  }
  return 3221225473LL;
}
