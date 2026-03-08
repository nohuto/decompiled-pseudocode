/*
 * XREFs of iswctype @ 0x1403D67C4
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x1402EC590 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x1402EC630 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressW @ 0x1402EFD60 (RtlIpv4StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x1403C0D00 (RtlIpv4StringToAddressExW.c)
 *     iswalnum @ 0x1403D45F0 (iswalnum.c)
 *     iswalpha @ 0x1403D460C (iswalpha.c)
 *     iswdigit @ 0x1403D4630 (iswdigit.c)
 *     iswspace @ 0x1403D4650 (iswspace.c)
 *     towlower @ 0x1403D5C20 (towlower.c)
 *     _whiteout @ 0x1403DCBFC (_whiteout.c)
 *     _winput_s @ 0x1403DCC54 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x1405AD1C0 (RtlEthernetStringToAddressW.c)
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
