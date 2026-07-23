/*
 * XREFs of iswctype @ 0x1403D4ADC
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x140241780 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x140241820 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x1402435C0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x140243640 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x1403D2960 (iswalnum.c)
 *     iswalpha @ 0x1403D297C (iswalpha.c)
 *     iswdigit @ 0x1403D29A0 (iswdigit.c)
 *     iswspace @ 0x1403D29C0 (iswspace.c)
 *     towlower @ 0x1403D3F10 (towlower.c)
 *     _whiteout @ 0x1403DAF20 (_whiteout.c)
 *     _winput_s @ 0x1403DAF78 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x14058CD00 (RtlEthernetStringToAddressW.c)
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
