/*
 * XREFs of iswctype @ 0x1403E3CE0
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x140248F70 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x140249010 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x14024C9F0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x14024CA70 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x1403E1BB0 (iswalnum.c)
 *     iswalpha @ 0x1403E1BCC (iswalpha.c)
 *     iswdigit @ 0x1403E1BF0 (iswdigit.c)
 *     iswspace @ 0x1403E1C10 (iswspace.c)
 *     towlower @ 0x1403E3150 (towlower.c)
 *     _whiteout @ 0x1403EA090 (_whiteout.c)
 *     _winput_s @ 0x1403EA0E8 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x1405EC120 (RtlEthernetStringToAddressW.c)
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
