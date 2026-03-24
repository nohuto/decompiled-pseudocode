/*
 * XREFs of KiSwInterruptPresent @ 0x140A41820
 * Callers:
 *     KiVerifyXcpt15 @ 0x140A1B320 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140A1BB5C (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x140A1BBA0 (KiFilterFiberContext.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 *     ExpLicenseWatchInitWorker @ 0x140A41774 (ExpLicenseWatchInitWorker.c)
 *     KeInitAmd64SpecificState @ 0x140A5F0D4 (KeInitAmd64SpecificState.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140340478 (HvlQueryVsmConnection.c)
 */

__int64 KiSwInterruptPresent()
{
  return HvlQueryVsmConnection(0LL) == 0 ? 0xC0000001 : 0;
}
