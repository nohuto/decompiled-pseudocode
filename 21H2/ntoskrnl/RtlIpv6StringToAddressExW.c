/*
 * XREFs of RtlIpv6StringToAddressExW @ 0x140241780
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv6StringToAddressW @ 0x140241820 (RtlIpv6StringToAddressW.c)
 *     iswctype @ 0x1403D4ADC (iswctype.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressExW(
        PCWSTR AddressString,
        struct in6_addr *Address,
        PULONG ScopeId,
        PUSHORT Port)
{
  WCHAR v7; // bp
  const WCHAR *v8; // rcx
  unsigned __int16 v9; // si
  ULONG v10; // r14d
  bool v11; // r13
  NTSTATUS result; // eax
  PCWSTR v13; // rbx
  wint_t v14; // di
  unsigned __int16 v15; // bp
  PCWSTR v16; // rcx
  __int16 v17; // ax
  __int16 v18; // si
  bool v19; // zf
  __int16 v20; // ax
  wint_t v21; // di
  PCWSTR v22; // [rsp+50h] [rbp+8h] BYREF

  v22 = 0LL;
  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v7 = *AddressString;
  v8 = AddressString + 1;
  v9 = 0;
  if ( v7 != 91 )
    v8 = AddressString;
  v10 = 0;
  v11 = v7 == 91;
  if ( RtlIpv6StringToAddressW(v8, &v22, Address) < 0 )
    return -1073741811;
  v13 = v22;
  if ( *v22 == 37 )
  {
    v13 = v22 + 1;
    v14 = v22[1];
    if ( v14 >= 0x80u || !iswctype(v14, 4u) )
      return -1073741811;
    while ( v14 && v14 != 93 )
    {
      if ( v14 >= 0x80u || !iswctype(v14, 4u) || v14 + 2 * (5 * (unsigned __int64)v10 - 24) > 0xFFFFFFFF )
        return -1073741811;
      ++v13;
      v10 = v14 + 2 * (5 * v10 - 24);
      v14 = *v13;
    }
  }
  if ( *v13 == 93 )
  {
    if ( v7 != 91 )
      return -1073741811;
    ++v13;
    v11 = 0;
    if ( *v13 == 58 )
    {
      ++v13;
      v15 = 10;
      if ( *v13 == 48 )
      {
        v16 = v13 + 1;
        v15 = 8;
        v17 = v13[1] - 88;
        ++v13;
        if ( (v17 & 0xFFDF) == 0 )
        {
          v15 = 16;
          v13 = v16 + 1;
        }
      }
      while ( 1 )
      {
        v21 = *v13;
        if ( !*v13 )
          break;
        if ( v21 < 0x80u && iswctype(v21, 4u) && v21 - 48 < v15 )
        {
          if ( v21 + v15 * (unsigned int)v9 - 48 > 0xFFFF )
            return -1073741811;
          v18 = v9 * v15 - 48;
        }
        else
        {
          if ( v15 != 16
            || v21 >= 0x80u
            || !iswctype(v21, 0x80u)
            || v21 + 16 * v9 - (iswctype(v21, 2u) != 0 ? 97 : 65) + 10 > 0xFFFFu )
          {
            return -1073741811;
          }
          v18 = 16 * v9;
          v19 = iswctype(v21, 2u) == 0;
          v20 = 97;
          if ( v19 )
            v20 = 65;
          v21 = v21 - v20 + 10;
        }
        v9 = v21 + v18;
        ++v13;
      }
    }
  }
  if ( *v13 || v11 )
    return -1073741811;
  *Port = __ROR2__(v9, 8);
  result = 0;
  *ScopeId = v10;
  return result;
}
