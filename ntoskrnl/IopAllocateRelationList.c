/*
 * XREFs of IopAllocateRelationList @ 0x140863684
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x140862D2C (PnpBuildRemovalRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x14087CBE8 (PnpInvalidateRelationsInList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14087E79C (PnpQueuePendingSurpriseRemoval.c)
 * Callees:
 *     IopFreeRelationList @ 0x140863634 (IopFreeRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x1408636E0 (PiAllocateDeviceObjectList.c)
 *     PnpAllocateCriticalMemory @ 0x1408637CC (PnpAllocateCriticalMemory.c)
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
