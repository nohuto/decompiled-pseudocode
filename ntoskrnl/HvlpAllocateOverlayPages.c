/*
 * XREFs of HvlpAllocateOverlayPages @ 0x1405473DC
 * Callers:
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x14053E1E0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlInitializeProcessor @ 0x14080AFA0 (HvlInitializeProcessor.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x1403B4900 (MmAllocateContiguousNodeMemory.c)
 */

__int64 HvlpAllocateOverlayPages()
{
  unsigned int v0; // esi
  __int64 v1; // rdi
  unsigned int v2; // eax
  __int64 result; // rax

  v0 = 0;
  v1 = -1LL;
  while ( 1 )
  {
    v2 = v0++;
    if ( v2 >= 4 )
      break;
    v1 += 0x40000000LL;
    result = MmAllocateContiguousNodeMemory(4096LL, 0, v1, 0, 4, 0x80000000);
    if ( result )
      return result;
  }
  return MmAllocateContiguousNodeMemory(4096LL, 0, -1, 0, 4, 0x80000000);
}
