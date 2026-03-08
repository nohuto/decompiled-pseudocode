/*
 * XREFs of RtlIpv4AddressToStringExA @ 0x1405AC330
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv4AddressToStringA @ 0x1403C8C40 (RtlIpv4AddressToStringA.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     sprintf_s @ 0x1403D9BA0 (sprintf_s.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

NTSTATUS __stdcall RtlIpv4AddressToStringExA(
        const struct in_addr *Address,
        USHORT Port,
        PSTR AddressString,
        PULONG AddressStringLength)
{
  char *v7; // rax
  int v8; // ebx
  ULONG v9; // ebx
  NTSTATUS result; // eax
  CHAR S[22]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[2]; // [rsp+36h] [rbp-32h] BYREF

  if ( !Address || !AddressStringLength || !AddressString && *AddressStringLength )
    return -1073741811;
  v7 = RtlIpv4AddressToStringA(Address, S);
  v8 = (int)v7;
  if ( Port )
    v8 = sprintf_s(v7, v12 - v7, ":%u", (unsigned __int16)__ROR2__(Port, 8)) + (_DWORD)v7;
  v9 = v8 - (unsigned int)S + 1;
  if ( *AddressStringLength < v9 )
  {
    *AddressStringLength = v9;
    return -1073741811;
  }
  memmove(AddressString, S, v9);
  result = 0;
  *AddressStringLength = v9;
  return result;
}
