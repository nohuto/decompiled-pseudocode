/*
 * XREFs of PnpAllocateCriticalMemory @ 0x14074A7F4
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x14073283C (PiProcessQueryAndCancelRemoval.c)
 *     PnpSetTargetDeviceRemove @ 0x14074A49C (PnpSetTargetDeviceRemove.c)
 *     IopAllocateRelationList @ 0x14074A604 (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x14074A660 (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x14074A778 (PiEventAllocateVetoBuffer.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14074A960 (PnpQueuePendingSurpriseRemoval.c)
 *     PiEventBuildPdoList @ 0x14074AC68 (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x14074B1E4 (PnpCompileDeviceInstancePaths.c)
 *     PnpResizeTargetDeviceBlock @ 0x14074BE58 (PnpResizeTargetDeviceBlock.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PnpAllocateCriticalMemory(int a1, POOL_TYPE a2, SIZE_T a3, ULONG a4)
{
  ULONG i; // r8d
  PVOID result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-18h] BYREF

  for ( i = a4; ; i = a4 )
  {
    result = ExAllocatePoolWithTag(a2, a3, i);
    if ( result || (a1 & 0xFFFFFFFB) == 0 )
      break;
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
