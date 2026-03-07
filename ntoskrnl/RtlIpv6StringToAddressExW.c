NTSTATUS __stdcall RtlIpv6StringToAddressExW(
        PCWSTR AddressString,
        struct in6_addr *Address,
        PULONG ScopeId,
        PUSHORT Port)
{
  WCHAR v7; // r14
  const WCHAR *v8; // rcx
  unsigned __int16 v9; // di
  ULONG v10; // r15d
  bool v11; // bp
  NTSTATUS result; // eax
  PCWSTR v13; // rsi
  wint_t v14; // bx
  int v15; // eax
  WCHAR v16; // bx
  wint_t *v17; // rsi
  unsigned __int16 v18; // r14
  _WORD *v19; // rcx
  __int16 v20; // ax
  wint_t v21; // bx
  __int16 v22; // di
  bool v23; // zf
  __int16 v24; // ax
  PCWSTR v25; // [rsp+50h] [rbp+8h] BYREF

  v25 = 0LL;
  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v7 = *AddressString;
  v8 = AddressString + 1;
  v9 = 0;
  if ( v7 != 91 )
    v8 = AddressString;
  v10 = 0;
  v11 = v7 == 91;
  if ( RtlIpv6StringToAddressW(v8, &v25, Address) < 0 )
    return -1073741811;
  v13 = v25;
  if ( *v25 == 37 )
  {
    v13 = v25 + 1;
    v14 = v25[1];
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
          goto LABEL_41;
      }
    }
  }
  v16 = *v13;
  if ( *v13 != 93 )
    goto LABEL_40;
  if ( v7 != 91 )
    return -1073741811;
  v16 = v13[1];
  v11 = 0;
  if ( v16 != 58 )
  {
LABEL_40:
    if ( !v16 )
      goto LABEL_41;
    return -1073741811;
  }
  v17 = (wint_t *)(v13 + 2);
  v18 = 10;
  if ( *v17 == 48 )
  {
    v19 = v17 + 1;
    v18 = 8;
    v20 = v17[1] - 88;
    ++v17;
    if ( (v20 & 0xFFDF) == 0 )
    {
      v18 = 16;
      v17 = v19 + 1;
    }
  }
  v21 = *v17;
  if ( *v17 )
  {
    while ( 1 )
    {
      if ( v21 < 0x80u && iswctype(v21, 4u) && v21 - 48 < v18 )
      {
        if ( v21 + v18 * (unsigned int)v9 - 48 > 0xFFFF )
          return -1073741811;
        v22 = v9 * v18 - 48;
      }
      else
      {
        if ( v18 != 16
          || v21 >= 0x80u
          || !iswctype(v21, 0x80u)
          || v21 + 16 * v9 - (iswctype(v21, 2u) != 0 ? 97 : 65) + 10 > 0xFFFFu )
        {
          return -1073741811;
        }
        v22 = 16 * v9;
        v23 = iswctype(v21, 2u) == 0;
        v24 = 97;
        if ( v23 )
          v24 = 65;
        v21 = v21 - v24 + 10;
      }
      ++v17;
      v9 = v21 + v22;
      v21 = *v17;
      if ( !*v17 )
        goto LABEL_42;
    }
  }
LABEL_41:
  if ( v11 )
    return -1073741811;
LABEL_42:
  *Port = __ROR2__(v9, 8);
  result = 0;
  *ScopeId = v10;
  return result;
}
