/*
 * XREFs of RtlIpv6AddressToStringExA @ 0x1405AC680
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     sprintf_s @ 0x1403D9BA0 (sprintf_s.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlIpv6AddressToStringA @ 0x1405AC3F0 (RtlIpv6AddressToStringA.c)
 */

NTSTATUS __stdcall RtlIpv6AddressToStringExA(
        const struct in6_addr *Address,
        ULONG ScopeId,
        USHORT Port,
        PSTR AddressString,
        PULONG AddressStringLength)
{
  char v8; // al
  CHAR *p_Src; // rdx
  char *v10; // rax
  char *v11; // rbx
  int v12; // esp
  ULONG v13; // eax
  ULONG v14; // ebx
  char Src; // [rsp+20h] [rbp-98h] BYREF
  CHAR S; // [rsp+21h] [rbp-97h] BYREF
  _BYTE v18[15]; // [rsp+61h] [rbp-57h] BYREF

  if ( !Address || !AddressStringLength || !AddressString && *AddressStringLength )
    return -1073741811;
  v8 = Src;
  if ( Port )
    v8 = 91;
  p_Src = &Src;
  Src = v8;
  if ( Port )
    p_Src = &S;
  v10 = RtlIpv6AddressToStringA(Address, p_Src);
  v11 = v10;
  if ( ScopeId )
    v11 = &v10[sprintf_s(v10, v18 - v10, "%%%u", ScopeId)];
  if ( Port )
    LODWORD(v11) = sprintf_s(v11, v18 - v11, "]:%u", (unsigned __int16)__ROR2__(Port, 8)) + (_DWORD)v11;
  v13 = *AddressStringLength;
  v14 = (_DWORD)v11 - (v12 + 32) + 1;
  *AddressStringLength = v14;
  if ( v13 < v14 )
    return -1073741811;
  memmove(AddressString, &Src, v14);
  return 0;
}
