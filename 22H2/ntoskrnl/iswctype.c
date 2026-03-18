/*
 * XREFs of iswctype @ 0x1403DBCE4
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x140358170 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x140358210 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressW @ 0x14035C0E0 (RtlIpv4StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x1403C65C0 (RtlIpv4StringToAddressExW.c)
 *     iswalnum @ 0x1403D9B10 (iswalnum.c)
 *     iswalpha @ 0x1403D9B2C (iswalpha.c)
 *     iswdigit @ 0x1403D9B50 (iswdigit.c)
 *     iswspace @ 0x1403D9B70 (iswspace.c)
 *     towlower @ 0x1403DB140 (towlower.c)
 *     _whiteout @ 0x1403E211C (_whiteout.c)
 *     _winput_s @ 0x1403E2174 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x1405AF670 (RtlEthernetStringToAddressW.c)
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
