/*
 * XREFs of ExtEnvCriticalFailure @ 0x14051D068
 * Callers:
 *     HalpVpptInitializePhysicalTimer @ 0x1405079F4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x140507DB0 (HalpVpptUpdatePhysicalTimer.c)
 *     IvtFreeDomain @ 0x14052A260 (IvtFreeDomain.c)
 *     HsaFreeRemappingTableEntry @ 0x14052D9F0 (HsaFreeRemappingTableEntry.c)
 *     HsaGetDeviceAperture @ 0x14052DBF0 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableEntry @ 0x14052EE50 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
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
