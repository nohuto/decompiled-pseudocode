/*
 * XREFs of PpmInitHeteroEngine @ 0x140A73E48
 * Callers:
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402696D0 (KeQueryMaximumProcessorCountEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 PpmInitHeteroEngine()
{
  ULONG MaximumProcessorCount; // r14d
  unsigned int v1; // ebp
  unsigned int v2; // edi
  ULONG *v3; // rsi
  ULONG *v4; // rbx

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v1 = 3 * (MaximumProcessorCount + 2);
  v2 = 0;
  PpmHeteroCapability = ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x704D5050u);
  if ( !PpmHeteroCapability )
    return (unsigned int)-1073741670;
  PpmHeteroCapabilityTest = ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x704D5050u);
  v3 = (ULONG *)PpmHeteroCapabilityTest;
  if ( !PpmHeteroCapabilityTest )
  {
    ExFreePoolWithTag(PpmHeteroCapability, 0x704D5050u);
    PpmHeteroCapability = 0LL;
    return (unsigned int)-1073741670;
  }
  v4 = (ULONG *)PpmHeteroCapability;
  memset(PpmHeteroCapability, 0, v1);
  memset(v3, 0, v1);
  *v4 = MaximumProcessorCount;
  *v3 = MaximumProcessorCount;
  return v2;
}
