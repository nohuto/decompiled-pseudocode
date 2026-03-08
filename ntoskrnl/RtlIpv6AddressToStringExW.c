/*
 * XREFs of RtlIpv6AddressToStringExW @ 0x14039EF80
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv6AddressToStringW @ 0x14039F060 (RtlIpv6AddressToStringW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403D8840 (swprintf_s.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

NTSTATUS __stdcall RtlIpv6AddressToStringExW(
        const struct in6_addr *Address,
        ULONG ScopeId,
        USHORT Port,
        PWSTR AddressString,
        PULONG AddressStringLength)
{
  WCHAR *p_Src; // rdx
  wchar_t *v9; // rax
  wchar_t *v10; // rbx
  ULONG v11; // eax
  ULONG v12; // ebx
  __int16 Src; // [rsp+20h] [rbp-D8h] BYREF
  WCHAR S; // [rsp+22h] [rbp-D6h] BYREF
  _BYTE v16[14]; // [rsp+A2h] [rbp-56h] BYREF

  if ( !Address || !AddressStringLength || !AddressString && *AddressStringLength )
    return -1073741811;
  if ( Port )
    Src = 91;
  p_Src = (WCHAR *)&Src;
  if ( Port )
    p_Src = &S;
  v9 = RtlIpv6AddressToStringW(Address, p_Src);
  v10 = v9;
  if ( ScopeId )
    v10 = &v9[swprintf_s(v9, (v16 - (_BYTE *)v9) >> 1, L"%%%u", ScopeId)];
  if ( Port )
    v10 += swprintf_s(v10, (v16 - (_BYTE *)v10) >> 1, L"]:%u", (unsigned __int16)__ROR2__(Port, 8));
  v11 = *AddressStringLength;
  v12 = (((char *)v10 - (char *)&Src) >> 1) + 1;
  *AddressStringLength = v12;
  if ( v11 < v12 )
    return -1073741811;
  memmove(AddressString, &Src, 2LL * v12);
  return 0;
}
