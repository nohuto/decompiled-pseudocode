NTSTATUS __stdcall RtlIpv6StringToAddressExA(
        PCSTR AddressString,
        struct in6_addr *Address,
        PULONG ScopeId,
        PUSHORT Port)
{
  CHAR v6; // r14
  bool v7; // zf
  const CHAR *v8; // rcx
  unsigned __int16 v9; // si
  unsigned int v10; // r12d
  bool v11; // r15
  PCSTR v12; // rbx
  int v13; // edi
  CHAR v14; // di
  unsigned __int16 v15; // bp
  CHAR *v16; // r14
  __int16 v17; // ax
  __int16 v18; // si
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  __int16 v22; // cx
  PULONG v23; // rax
  PCSTR v25; // [rsp+60h] [rbp+8h] BYREF
  PULONG v26; // [rsp+70h] [rbp+18h]

  v26 = ScopeId;
  v25 = 0LL;
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
  if ( RtlIpv6StringToAddressA(v8, &v25, Address) < 0 )
    return -1073741811;
  v12 = v25;
  if ( *v25 == 37 )
  {
    v12 = v25 + 1;
    v13 = v25[1];
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
        v10 = (char)v13 - 48 + 10 * v10;
        LOBYTE(v13) = *v12;
        if ( !*v12 )
          goto LABEL_44;
      }
    }
  }
  v14 = *v12;
  if ( *v12 == 93 )
  {
    if ( v6 != 91 )
      return -1073741811;
    v14 = v12[1];
    v11 = 0;
    if ( v14 == 58 )
    {
      v15 = 10;
      v16 = (CHAR *)(v12 + 2);
      if ( v12[2] == 48 )
      {
        v15 = 8;
        v16 = (CHAR *)(v12 + 3);
        if ( ((v12[3] - 88) & 0xDF) == 0 )
        {
          v15 = 16;
          v16 = (CHAR *)(v12 + 4);
        }
      }
      v14 = *v16;
      if ( *v16 )
      {
        while ( 1 )
        {
          if ( _isascii(v14) && isdigit(v14) && v14 - 48 < v15 )
          {
            if ( v14 + v15 * (unsigned int)v9 - 48 > 0xFFFF )
              return -1073741811;
            v17 = v14;
            v18 = v9 * v15 - 48;
          }
          else
          {
            if ( v15 != 16 || !_isascii(v14) || !isxdigit(v14) )
              return -1073741811;
            if ( !_isascii(v14) || (v19 = islower(v14), v20 = 97, !v19) )
              v20 = 65;
            if ( v14 + 16 * (unsigned int)v9 - v20 + 10 > 0xFFFF )
              return -1073741811;
            v18 = 16 * v9;
            if ( !_isascii(v14) || (v21 = islower(v14), v22 = 97, !v21) )
              v22 = 65;
            v17 = v14 - v22 + 10;
          }
          ++v16;
          v9 = v17 + v18;
          v14 = *v16;
          if ( !*v16 )
            goto LABEL_45;
        }
      }
    }
  }
  if ( !v14 )
  {
LABEL_44:
    if ( !v11 )
    {
LABEL_45:
      v23 = v26;
      *Port = __ROR2__(v9, 8);
      *v23 = v10;
      return 0;
    }
  }
  return -1073741811;
}
