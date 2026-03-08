/*
 * XREFs of PnpAllocateCriticalMemory @ 0x1408637CC
 * Callers:
 *     PnpSetTargetDeviceRemove @ 0x140862DC8 (PnpSetTargetDeviceRemove.c)
 *     PnpResizeTargetDeviceBlock @ 0x140862F0C (PnpResizeTargetDeviceBlock.c)
 *     PiEventBuildPdoList @ 0x140863160 (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x1408633B8 (PnpCompileDeviceInstancePaths.c)
 *     IopAllocateRelationList @ 0x140863684 (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x1408636E0 (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x14086374C (PiEventAllocateVetoBuffer.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14087E79C (PnpQueuePendingSurpriseRemoval.c)
 *     PiProcessQueryAndCancelRemoval @ 0x14096E8C4 (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocateCriticalMemory(int a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-18h] BYREF

  result = ExAllocatePool2(a2, a3, a4);
  if ( !result && a1 )
  {
    do
    {
      if ( a1 == 4 )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      result = ExAllocatePool2(a2, a3, a4);
    }
    while ( !result );
  }
  return result;
}
