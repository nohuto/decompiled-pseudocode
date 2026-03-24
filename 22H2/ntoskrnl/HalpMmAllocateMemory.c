/*
 * XREFs of HalpMmAllocateMemory @ 0x1403BAB90
 * Callers:
 *     HalpIommuInitializeAll @ 0x14099B3C4 (HalpIommuInitializeAll.c)
 *     EmonInitializeProfiling @ 0x1409A0330 (EmonInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x1409A9860 (Amd64InitializeProfiling.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x1409B6230 (HalpKdEnumerateDebuggingDevices.c)
 *     HalpRegisterDeviceInUse @ 0x1409B656C (HalpRegisterDeviceInUse.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x1403BAC58 (HalpMmAllocateMemoryInternal.c)
 */

__int64 __fastcall HalpMmAllocateMemory(__int64 a1)
{
  return HalpMmAllocateMemoryInternal(a1, 1LL);
}
