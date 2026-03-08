/*
 * XREFs of HalpMmAllocateMemory @ 0x14037A380
 * Callers:
 *     EmonInitializeProfiling @ 0x140A868F0 (EmonInitializeProfiling.c)
 *     HalpIommuInitializeAll @ 0x140A8DA7C (HalpIommuInitializeAll.c)
 *     Amd64InitializeProfiling @ 0x140A95700 (Amd64InitializeProfiling.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x140AAF060 (HalpKdEnumerateDebuggingDevices.c)
 *     HalpRegisterDeviceInUse @ 0x140AAF2D0 (HalpRegisterDeviceInUse.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x14037A7A8 (HalpMmAllocateMemoryInternal.c)
 */

__int64 __fastcall HalpMmAllocateMemory(__int64 a1)
{
  return HalpMmAllocateMemoryInternal(a1, 1LL);
}
