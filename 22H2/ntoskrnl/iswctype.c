/*
 * XREFs of iswctype @ 0x1403D426C
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x14031C5D0 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x14031C670 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x14031E3B0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x14031E430 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x1403D20F0 (iswalnum.c)
 *     iswalpha @ 0x1403D210C (iswalpha.c)
 *     iswdigit @ 0x1403D2130 (iswdigit.c)
 *     iswspace @ 0x1403D2150 (iswspace.c)
 *     towlower @ 0x1403D36A0 (towlower.c)
 *     _whiteout @ 0x1403DA6B0 (_whiteout.c)
 *     _winput_s @ 0x1403DA708 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x14058CA10 (RtlEthernetStringToAddressW.c)
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
