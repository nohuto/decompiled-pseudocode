/*
 * XREFs of HalpHandleMachineCheck @ 0x1404BA13C
 * Callers:
 *     HalHandleMcheck @ 0x1404BC9B0 (HalHandleMcheck.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     HalpMceHandler @ 0x1404BAC00 (HalpMceHandler.c)
 *     HalpMceHandlerWithRendezvous @ 0x1404BAE68 (HalpMceHandlerWithRendezvous.c)
 */

__int64 __fastcall HalpHandleMachineCheck(__int64 a1)
{
  __int64 i; // rbx
  __int64 result; // rax
  KIRQL v4; // al
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf

  if ( !HalpMceBroadcast )
    return HalpMceHandler(a1, 0LL);
  for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; ; i = *(_QWORD *)(i + 176) )
  {
    if ( !i )
      return HalpMceHandlerWithRendezvous(a1);
    if ( (((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))HalpWheaReadMsr)(*(_QWORD *)(i + 164), 378LL, 0LL) & 8) != 0 )
      break;
  }
  v4 = KeAcquireSpinLockRaiseToDpc(&HalpMceLocalHandlingLock);
  LOBYTE(v5) = 1;
  v6 = v4;
  HalpMceHandler(a1, v5);
  KxReleaseSpinLock(&HalpMceLocalHandlingLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return result;
}
