/*
 * XREFs of RtlIpv6StringToAddressExA @ 0x1405EBE60
 * Callers:
 *     <none>
 * Callees:
 *     __isascii @ 0x1403E1A70 (__isascii.c)
 *     isdigit @ 0x1403E1A90 (isdigit.c)
 *     islower @ 0x1403E1AC0 (islower.c)
 *     isxdigit @ 0x1403E1B80 (isxdigit.c)
 *     RtlIpv6StringToAddressA @ 0x1405EBA00 (RtlIpv6StringToAddressA.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressExA(
        PCSTR AddressString,
        struct in6_addr *Address,
        PULONG ScopeId,
        PUSHORT Port)
{
  CHAR v6; // r12
  bool v7; // zf
  const CHAR *v8; // rcx
  unsigned __int16 v9; // di
  unsigned int v10; // r15d
  bool v11; // bp
  PCSTR v12; // rbx
  int v13; // esi
  unsigned __int16 v14; // r12
  PCSTR v15; // rcx
  char v16; // al
  CHAR v17; // r14
  __int16 v18; // ax
  __int16 v19; // di
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  __int16 v23; // cx
  PULONG v24; // rax
  PCSTR v26; // [rsp+60h] [rbp+8h] BYREF
  PULONG v27; // [rsp+70h] [rbp+18h]

  v27 = ScopeId;
  v26 = 0LL;
  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v6 = *AddressString;
  v7 = *AddressString == 91;
  v8 = AddressString + 1;
  v9 = 0;
  if ( !v7 )
    v8 = AddressString;
  v10 = 0;
  v11 = v7;
  if ( RtlIpv6StringToAddressA(v8, &v26, Address) < 0 )
    return -1073741811;
  v12 = v26;
  if ( *v26 == 37 )
  {
    v12 = v26 + 1;
    v13 = v26[1];
    if ( !_isascii(v13) || !isdigit(v13) )
      return -1073741811;
    if ( (_BYTE)v13 )
    {
      while ( (_BYTE)v13 != 93 )
      {
        if ( !_isascii((char)v13)
          || !isdigit((char)v13)
          || (char)v13 + 2 * (5 * (unsigned __int64)v10 - 24) > 0xFFFFFFFF )
        {
          return -1073741811;
        }
        ++v12;
        v10 = (char)v13 + 2 * (5 * v10 - 24);
        LOBYTE(v13) = *v12;
        if ( !*v12 )
          goto LABEL_43;
      }
    }
  }
  if ( *v12 == 93 )
  {
    if ( v6 != 91 )
      return -1073741811;
    ++v12;
    v11 = 0;
    if ( *v12 == 58 )
    {
      ++v12;
      v14 = 10;
      if ( *v12 == 48 )
      {
        v15 = v12 + 1;
        v14 = 8;
        v16 = *++v12 - 88;
        if ( (v16 & 0xDF) == 0 )
        {
          v14 = 16;
          v12 = v15 + 1;
        }
      }
      v17 = *v12;
      if ( *v12 )
      {
        while ( 1 )
        {
          if ( _isascii(v17) && isdigit(v17) && v17 - 48 < v14 )
          {
            if ( v17 + v14 * (unsigned int)v9 - 48 > 0xFFFF )
              return -1073741811;
            v18 = v17;
            v19 = v9 * v14 - 48;
          }
          else
          {
            if ( v14 != 16 || !_isascii(v17) || !isxdigit(v17) )
              return -1073741811;
            if ( !_isascii(v17) || (v20 = islower(v17), v21 = 97, !v20) )
              v21 = 65;
            if ( v17 + 16 * (unsigned int)v9 - v21 + 10 > 0xFFFF )
              return -1073741811;
            v19 = 16 * v9;
            if ( !_isascii(v17) || (v22 = islower(v17), v23 = 97, !v22) )
              v23 = 65;
            v18 = v17 - v23 + 10;
          }
          ++v12;
          v9 = v18 + v19;
          v17 = *v12;
          if ( !*v12 )
            goto LABEL_45;
        }
      }
    }
  }
LABEL_43:
  if ( !*v12 )
  {
    v9 = 0;
    if ( !v11 )
    {
LABEL_45:
      v24 = v27;
      *Port = __ROR2__(v9, 8);
      *v24 = v10;
      return 0;
    }
  }
  return -1073741811;
}
