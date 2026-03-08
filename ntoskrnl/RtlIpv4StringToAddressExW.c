/*
 * XREFs of RtlIpv4StringToAddressExW @ 0x1403C0D00
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv4StringToAddressW @ 0x1402EFD60 (RtlIpv4StringToAddressW.c)
 *     iswctype @ 0x1403D67C4 (iswctype.c)
 */

NTSTATUS __stdcall RtlIpv4StringToAddressExW(
        PCWSTR AddressString,
        BOOLEAN Strict,
        struct in_addr *Address,
        PUSHORT Port)
{
  wint_t *v6; // rsi
  unsigned __int16 v7; // bp
  unsigned __int16 v8; // di
  wint_t v9; // bx
  __int16 v10; // di
  bool v11; // zf
  __int16 v12; // ax
  wint_t *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  if ( !AddressString
    || !Address
    || !Port
    || RtlIpv4StringToAddressW(AddressString, Strict, (LPCWSTR *)&v13, Address) < 0 )
  {
    return -1073741811;
  }
  if ( *v13 == 58 )
  {
    v6 = v13 + 1;
    v7 = 10;
    v8 = 0;
    if ( v13[1] == 48 )
    {
      v7 = 8;
      v6 = v13 + 2;
      if ( ((v13[2] - 88) & 0xFFDF) == 0 )
      {
        v7 = 16;
        v6 = v13 + 3;
      }
    }
    v9 = *v6;
    if ( *v6 )
    {
      while ( 1 )
      {
        ++v6;
        if ( v9 < 0x80u && iswctype(v9, 4u) && (unsigned __int16)(v9 - 48) < v7 )
        {
          if ( v9 + v8 * (unsigned int)v7 - 48 > 0xFFFF )
            return -1073741811;
          v10 = v8 * v7 - 48;
        }
        else
        {
          if ( v7 != 16
            || v9 >= 0x80u
            || !iswctype(v9, 0x80u)
            || v9 + 16 * v8 - (iswctype(v9, 2u) != 0 ? 97 : 65) + 10 > 0xFFFFu )
          {
            return -1073741811;
          }
          v10 = 16 * v8;
          v11 = iswctype(v9, 2u) == 0;
          v12 = 97;
          if ( v11 )
            v12 = 65;
          v9 = v9 - v12 + 10;
        }
        v8 = v9 + v10;
        v9 = *v6;
        if ( !*v6 )
          goto LABEL_27;
      }
    }
    return -1073741811;
  }
  if ( *v13 )
    return -1073741811;
  v8 = 0;
LABEL_27:
  *Port = __ROR2__(v8, 8);
  return 0;
}
