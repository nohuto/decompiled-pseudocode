/*
 * XREFs of ViFlushZeroMapRegisterBaseWcbs @ 0x1405FE678
 * Callers:
 *     VfPutDmaAdapter @ 0x140A868E0 (VfPutDmaAdapter.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140A83B84 (SUBTRACT_MAP_REGISTERS.c)
 */

__int64 __fastcall ViFlushZeroMapRegisterBaseWcbs(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rdx
  _QWORD *v5; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  _QWORD *v10; // rcx

  v1 = (KSPIN_LOCK *)(a1 + 144);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  v4 = *(_QWORD **)(a1 + 128);
  while ( v4 != (_QWORD *)(a1 + 128) )
  {
    v5 = v4 - 9;
    v4 = (_QWORD *)*v4;
    if ( !v5[11] && !v5[12] && *((_DWORD *)v5 + 13) == 3 )
    {
      v10 = (_QWORD *)v5[10];
      if ( (_QWORD *)v4[1] != v5 + 9 || (_QWORD *)*v10 != v5 + 9 )
        __fastfail(3u);
      *v10 = v4;
      v4[1] = v10;
      SUBTRACT_MAP_REGISTERS(a1, *((unsigned int *)v5 + 12));
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v5);
      break;
    }
  }
  KxReleaseSpinLock(v1);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return result;
}
