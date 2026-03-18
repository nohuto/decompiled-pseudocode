/*
 * XREFs of KiSwInterruptPresent @ 0x140B373F0
 * Callers:
 *     KiVerifyXcpt15 @ 0x140B18320 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140B18B50 (KeCheckedKernelInitialize.c)
 *     KeFreeInitializationCode @ 0x140B18BF4 (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x140B18C30 (KiFilterFiberContext.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 *     ExpLicenseWatchInitWorker @ 0x140B3734C (ExpLicenseWatchInitWorker.c)
 *     KeInitAmd64SpecificState @ 0x140B739B0 (KeInitAmd64SpecificState.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14033FE98 (HvlQueryVsmConnection.c)
 */

__int64 KiSwInterruptPresent()
{
  return HvlQueryVsmConnection(0LL) == 0 ? 0xC0000001 : 0;
}
