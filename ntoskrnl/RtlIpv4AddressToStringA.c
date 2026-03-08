/*
 * XREFs of RtlIpv4AddressToStringA @ 0x1403C8C40
 * Callers:
 *     RtlIpv4AddressToStringExA @ 0x1405AC330 (RtlIpv4AddressToStringExA.c)
 * Callees:
 *     sprintf_s @ 0x1403D9BA0 (sprintf_s.c)
 */

PSTR __stdcall RtlIpv4AddressToStringA(const struct in_addr *Addr, PSTR S)
{
  return &S[sprintf_s(
              S,
              0x10uLL,
              "%u.%u.%u.%u",
              (unsigned __int8)Addr->S_un.S_addr,
              Addr->S_un.S_un_b.s_b2,
              Addr->S_un.S_un_b.s_b3,
              Addr->S_un.S_un_b.s_b4)];
}
