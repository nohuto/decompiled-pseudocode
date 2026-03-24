/*
 * XREFs of ExtEnvCriticalFailure @ 0x1404D52DC
 * Callers:
 *     HalpVpptInitializePhysicalTimer @ 0x1404C09E4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404C0D94 (HalpVpptUpdatePhysicalTimer.c)
 *     HsaFreeRemappingTableEntry @ 0x1404E34D0 (HsaFreeRemappingTableEntry.c)
 *     HsaGetDeviceAperture @ 0x1404E36C4 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404E4800 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __fastcall __noreturn ExtEnvCriticalFailure(
        __int64 a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x5Cu, a2, a3, a4, BugCheckParameter4);
}
