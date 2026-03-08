/*
 * XREFs of wcstol @ 0x1403D630C
 * Callers:
 *     RtlIpv6StringToAddressW @ 0x1402EC630 (RtlIpv6StringToAddressW.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x140878AAC (DrvDbSplitDeviceIdDriverInfMatch.c)
 * Callees:
 *     wcstoxlX @ 0x1403D60F0 (wcstoxlX.c)
 */

int __cdecl wcstol(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 0, 0);
}
