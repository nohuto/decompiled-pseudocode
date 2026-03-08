/*
 * XREFs of KiSwInterruptPresent @ 0x140B65038
 * Callers:
 *     KiVerifyXcpt15 @ 0x140B14320 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140B14B50 (KeCheckedKernelInitialize.c)
 *     KeFreeInitializationCode @ 0x140B14BF4 (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x140B14C30 (KiFilterFiberContext.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 *     ExpLicenseWatchInitWorker @ 0x140B64F94 (ExpLicenseWatchInitWorker.c)
 *     KeInitAmd64SpecificState @ 0x140B6F644 (KeInitAmd64SpecificState.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x1402D8618 (HvlQueryVsmConnection.c)
 */

__int64 KiSwInterruptPresent()
{
  return HvlQueryVsmConnection(0LL) == 0 ? 0xC0000001 : 0;
}
