/*
 * XREFs of iswctype @ 0x1403D496C
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x1402C3260 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x1402C3300 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x1402C5040 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x1402C50C0 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x1403D27F0 (iswalnum.c)
 *     iswalpha @ 0x1403D280C (iswalpha.c)
 *     iswdigit @ 0x1403D2830 (iswdigit.c)
 *     iswspace @ 0x1403D2850 (iswspace.c)
 *     towlower @ 0x1403D3DA0 (towlower.c)
 *     _whiteout @ 0x1403DADB0 (_whiteout.c)
 *     _winput_s @ 0x1403DAE08 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x14058CAD0 (RtlEthernetStringToAddressW.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & (*pwctype)[C];
}
