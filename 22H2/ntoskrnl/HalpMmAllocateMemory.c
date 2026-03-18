/*
 * XREFs of HalpMmAllocateMemory @ 0x14037DD30
 * Callers:
 *     EmonInitializeProfiling @ 0x140A89F00 (EmonInitializeProfiling.c)
 *     HalpIommuInitializeAll @ 0x140A90F0C (HalpIommuInitializeAll.c)
 *     Amd64InitializeProfiling @ 0x140A98840 (Amd64InitializeProfiling.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x140AB2FC0 (HalpKdEnumerateDebuggingDevices.c)
 *     HalpRegisterDeviceInUse @ 0x140AB3230 (HalpRegisterDeviceInUse.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x14037E158 (HalpMmAllocateMemoryInternal.c)
 */

__int64 __fastcall HalpMmAllocateMemory(__int64 a1)
{
  return HalpMmAllocateMemoryInternal(a1, 1LL);
}
