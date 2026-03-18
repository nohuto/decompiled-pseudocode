/*
 * XREFs of IopAllocateRelationList @ 0x1408689DC
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x140868084 (PnpBuildRemovalRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x140881998 (PnpInvalidateRelationsInList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140883540 (PnpQueuePendingSurpriseRemoval.c)
 * Callees:
 *     IopFreeRelationList @ 0x14086898C (IopFreeRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x140868A38 (PiAllocateDeviceObjectList.c)
 *     PnpAllocateCriticalMemory @ 0x140868B24 (PnpAllocateCriticalMemory.c)
 */

__int64 __fastcall IopAllocateRelationList(__int64 a1)
{
  unsigned int v1; // edi
  __int64 CriticalMemory; // rbx
  __int64 DeviceObjectList; // rax

  v1 = a1;
  CriticalMemory = PnpAllocateCriticalMemory(a1, 256LL, 16LL, 1416654416LL);
  if ( CriticalMemory )
  {
    DeviceObjectList = PiAllocateDeviceObjectList(v1, 8LL);
    *(_QWORD *)CriticalMemory = DeviceObjectList;
    if ( DeviceObjectList )
    {
      *(_BYTE *)(CriticalMemory + 8) = 0;
    }
    else
    {
      IopFreeRelationList((_QWORD *)CriticalMemory);
      return 0LL;
    }
  }
  return CriticalMemory;
}
