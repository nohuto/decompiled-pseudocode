/*
 * XREFs of RtlIpv6StringToAddressExW @ 0x140248F70
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv6StringToAddressW @ 0x140249010 (RtlIpv6StringToAddressW.c)
 *     iswctype @ 0x1403E3CE0 (iswctype.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressExW(
        PCWSTR AddressString,
        struct in6_addr *Address,
        PULONG ScopeId,
        PUSHORT Port)
{
  WCHAR v7; // r15
  const WCHAR *v8; // rcx
  unsigned __int16 v9; // si
  ULONG v10; // r14d
  bool v11; // bp
  NTSTATUS result; // eax
  PCWSTR v13; // rbx
  wint_t v14; // di
  int v15; // eax
  unsigned __int16 v16; // r15
  PCWSTR v17; // rcx
  __int16 v18; // ax
  wint_t v19; // di
  __int16 v20; // si
  bool v21; // zf
  __int16 v22; // ax
  PCWSTR v23; // [rsp+50h] [rbp+8h] BYREF

  v23 = 0LL;
  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v7 = *AddressString;
  v8 = AddressString + 1;
  v9 = 0;
  if ( v7 != 91 )
    v8 = AddressString;
  v10 = 0;
  v11 = v7 == 91;
  if ( RtlIpv6StringToAddressW(v8, &v23, Address) < 0 )
    return -1073741811;
  v13 = v23;
  if ( *v23 == 37 )
  {
    v13 = v23 + 1;
    v14 = v23[1];
    if ( v14 >= 0x80u || !iswctype(v14, 4u) )
      return -1073741811;
    if ( v14 )
    {
      while ( v14 != 93 )
      {
        if ( v14 >= 0x80u || !iswctype(v14, 4u) || v14 + 2 * (5 * (unsigned __int64)v10 - 24) > 0xFFFFFFFF )
          return -1073741811;
        ++v13;
        v15 = v14;
        v14 = *v13;
        v10 = v15 + 2 * (5 * v10 - 24);
        if ( !*v13 )
          goto LABEL_40;
      }
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
      v16 = 10;
      if ( *v13 == 48 )
      {
        v17 = v13 + 1;
        v16 = 8;
        v18 = v13[1] - 88;
        ++v13;
        if ( (v18 & 0xFFDF) == 0 )
        {
          v16 = 16;
          v13 = v17 + 1;
        }
      }
      v19 = *v13;
      if ( *v13 )
      {
        while ( 1 )
        {
          if ( v19 < 0x80u && iswctype(v19, 4u) && v19 - 48 < v16 )
          {
            if ( v19 + v16 * (unsigned int)v9 - 48 > 0xFFFF )
              return -1073741811;
            v20 = v9 * v16 - 48;
          }
          else
          {
            if ( v16 != 16
              || v19 >= 0x80u
              || !iswctype(v19, 0x80u)
              || v19 + 16 * v9 - (iswctype(v19, 2u) != 0 ? 97 : 65) + 10 > 0xFFFFu )
            {
              return -1073741811;
            }
            v20 = 16 * v9;
            v21 = iswctype(v19, 2u) == 0;
            v22 = 97;
            if ( v21 )
              v22 = 65;
            v19 = v19 - v22 + 10;
          }
          ++v13;
          v9 = v19 + v20;
          v19 = *v13;
          if ( !*v13 )
            goto LABEL_42;
        }
      }
    }
  }
LABEL_40:
  if ( *v13 )
    return -1073741811;
  v9 = 0;
  if ( v11 )
    return -1073741811;
LABEL_42:
  *Port = __ROR2__(v9, 8);
  result = 0;
  *ScopeId = v10;
  return result;
}
