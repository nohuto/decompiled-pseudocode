/*
 * XREFs of RtlEthernetAddressToStringA @ 0x1405AC2C0
 * Callers:
 *     <none>
 * Callees:
 *     sprintf_s @ 0x1403D9BA0 (sprintf_s.c)
 */

PSTR __stdcall RtlEthernetAddressToStringA(const DL_EUI48 *Addr, PSTR S)
{
  return &S[sprintf_s(
              S,
              0x12uLL,
              "%02X-%02X-%02X-%02X-%02X-%02X",
              Addr->Byte[0],
              Addr->Byte[1],
              Addr->Byte[2],
              Addr->Byte[3],
              Addr->Byte[4],
              Addr->Byte[5])];
}
