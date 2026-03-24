/*
 * XREFs of PiAllocateDeviceObjectList @ 0x14074A660
 * Callers:
 *     IopAllocateRelationList @ 0x14074A604 (IopAllocateRelationList.c)
 *     PipGrowDeviceObjectList @ 0x1408B2920 (PipGrowDeviceObjectList.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x14074A718 (PiClearDeviceObjectList.c)
 *     PnpAllocateCriticalMemory @ 0x14074A7F4 (PnpAllocateCriticalMemory.c)
 */

_DWORD *__fastcall PiAllocateDeviceObjectList(__int64 a1, int a2)
{
  int v3; // esi
  _DWORD *CriticalMemory; // rax
  _DWORD *v5; // rbx

  v3 = a1;
  CriticalMemory = (_DWORD *)PnpAllocateCriticalMemory(a1, 1LL, 24 * a2 + 16LL, 1416654416LL);
  v5 = CriticalMemory;
  if ( CriticalMemory )
  {
    *CriticalMemory = 0;
    CriticalMemory[2] = 0;
    CriticalMemory[3] = v3;
    CriticalMemory[1] = a2;
    PiClearDeviceObjectList(CriticalMemory);
  }
  return v5;
}
