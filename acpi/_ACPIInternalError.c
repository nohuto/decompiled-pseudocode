/*
 * XREFs of _ACPIInternalError @ 0x1C0001B74
 * Callers:
 *     ACPITableLoadCallBack @ 0x1C003F3C0 (ACPITableLoadCallBack.c)
 *     AcpiArblibScoreRequirement @ 0x1C007D280 (AcpiArblibScoreRequirement.c)
 *     ACPIRootInitialize @ 0x1C0093768 (ACPIRootInitialize.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C00952EC (ACPISystemPowerQueryDeviceCapabilities.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn ACPIInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA3u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
