/*
 * XREFs of KiDisconnectSecondaryInterrupt @ 0x14056F468
 * Callers:
 *     KeDisconnectInterrupt @ 0x14028E38C (KeDisconnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KiDisconnectInterruptCommon @ 0x14028E714 (KiDisconnectInterruptCommon.c)
 *     HalDisableInterrupt @ 0x14028E8F0 (HalDisableInterrupt.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14039E508 (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x14039EB38 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiDisconnectSecondaryInterrupt(__int64 a1, _DWORD *a2)
{
  bool v4; // si
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v8; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  unsigned int v13; // ebx
  unsigned __int8 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0;
  v4 = 0;
  v5 = KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a1 + 88) - 256);
  KiAcquireSecondaryPassiveConnectLock(v5);
  KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)v5, &v15);
  if ( *(_BYTE *)(a1 + 95) )
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( v6 == a1 )
      v4 = *(_QWORD *)(v6 + 8) == v6 + 8;
  }
  KxReleaseSpinLock((volatile signed __int64 *)v5);
  if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
  {
    v8 = v15;
    if ( v15 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = v15;
      v11 = ~(unsigned __int16)(-1LL << (v15 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  else
  {
    v8 = v15;
  }
  __writecr8(v8);
  if ( v4 )
    HalDisableInterrupt(a2);
  v13 = KiDisconnectInterruptCommon(1, a1, (__int64)a2);
  KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v13;
}
