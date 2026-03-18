/*
 * XREFs of ExtEnvCriticalFailure @ 0x14051F598
 * Callers:
 *     HalpVpptInitializePhysicalTimer @ 0x140509AD4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x140509E90 (HalpVpptUpdatePhysicalTimer.c)
 *     IvtFreeDomain @ 0x14052C790 (IvtFreeDomain.c)
 *     HsaFreeRemappingTableEntry @ 0x14052FEC0 (HsaFreeRemappingTableEntry.c)
 *     HsaGetDeviceAperture @ 0x1405300C0 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableEntry @ 0x140531320 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
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
