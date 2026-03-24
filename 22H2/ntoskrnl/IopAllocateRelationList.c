/*
 * XREFs of IopAllocateRelationList @ 0x14074A604
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x14074A960 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x14074AF10 (PnpInvalidateRelationsInList.c)
 *     PnpBuildRemovalRelationList @ 0x14074C04C (PnpBuildRemovalRelationList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1408A22D0 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     PiAllocateDeviceObjectList @ 0x14074A660 (PiAllocateDeviceObjectList.c)
 *     IopFreeRelationList @ 0x14074A6C8 (IopFreeRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x14074A7F4 (PnpAllocateCriticalMemory.c)
 */

_BYTE *__fastcall IopAllocateRelationList(__int64 a1)
{
  unsigned int v1; // edi
  _BYTE *CriticalMemory; // rbx
  __int64 DeviceObjectList; // rax

  v1 = a1;
  CriticalMemory = (_BYTE *)PnpAllocateCriticalMemory(a1, 1LL, 16LL, 1416654416LL);
  if ( CriticalMemory )
  {
    DeviceObjectList = PiAllocateDeviceObjectList(v1, 8LL);
    *(_QWORD *)CriticalMemory = DeviceObjectList;
    if ( DeviceObjectList )
    {
      CriticalMemory[8] = 0;
    }
    else
    {
      IopFreeRelationList(CriticalMemory);
      return 0LL;
    }
  }
  return CriticalMemory;
}
