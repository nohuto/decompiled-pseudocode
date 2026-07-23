/*
 * XREFs of PopPepGetComponentVetoMasks @ 0x1405747F0
 * Callers:
 *     PopFxTraceDeviceRegistration @ 0x1406724C8 (PopFxTraceDeviceRegistration.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PopPepGetComponentVetoMasks(__int64 a1, unsigned int a2, __int64 a3)
{
  volatile LONG *v3; // rbx
  __int64 v6; // rbp
  __int64 v7; // rsi
  KIRQL v8; // al
  int v9; // edi
  unsigned __int64 v10; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf

  v3 = (volatile LONG *)(a1 + 64);
  v6 = a1 + 200LL * a2;
  v7 = 0LL;
  v8 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v9 = *(_DWORD *)(a1 + 172);
  v10 = v8;
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  if ( v9 == 2 )
  {
    if ( *(_DWORD *)(v6 + 372) )
    {
      do
      {
        *(_DWORD *)(a3 + 4 * v7) = *(_DWORD *)(*(_QWORD *)(v6 + 376) + 24 * v7 + 16);
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *(_DWORD *)(v6 + 372) );
    }
    LOBYTE(v7) = 1;
  }
  return v7;
}
