NTSTATUS __stdcall RtlIpv4StringToAddressExA(
        PCSTR AddressString,
        BOOLEAN Strict,
        struct in_addr *Address,
        PUSHORT Port)
{
  PCSTR v5; // rsi
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // r14
  CHAR v8; // bp
  int v9; // eax
  int v10; // ecx
  __int16 v11; // bx
  int v12; // eax
  __int16 v13; // cx
  PCSTR v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  if ( !AddressString || !Address || !Port || RtlIpv4StringToAddressA(AddressString, Strict, &v15, Address) < 0 )
    return -1073741811;
  if ( *v15 == 58 )
  {
    v5 = v15 + 1;
    v6 = 0;
    v7 = 10;
    if ( v15[1] == 48 )
    {
      v7 = 8;
      v5 = v15 + 2;
      if ( ((v15[2] - 88) & 0xDF) == 0 )
      {
        v7 = 16;
        v5 = v15 + 3;
      }
    }
    v8 = *v5;
    if ( *v5 )
    {
      while ( 1 )
      {
        ++v5;
        if ( _isascii(v8) && isdigit(v8) && (unsigned __int16)(v8 - 48) < v7 )
        {
          if ( v6 * (unsigned int)v7 + v8 - 48 > 0xFFFF )
            return -1073741811;
          v6 = v8 + v6 * v7 - 48;
        }
        else
        {
          if ( v7 != 16 || !_isascii(v8) || !isxdigit(v8) )
            return -1073741811;
          if ( !_isascii(v8) || (v9 = islower(v8), v10 = 97, !v9) )
            v10 = 65;
          if ( v8 + 16 * (unsigned int)v6 - v10 + 10 > 0xFFFF )
            return -1073741811;
          v11 = 16 * v6;
          if ( !_isascii(v8) || (v12 = islower(v8), v13 = 97, !v12) )
            v13 = 65;
          v6 = v8 - v13 + 10 + v11;
        }
        v8 = *v5;
        if ( !*v5 )
          goto LABEL_30;
      }
    }
    return -1073741811;
  }
  if ( *v15 )
    return -1073741811;
  v6 = 0;
LABEL_30:
  *Port = __ROR2__(v6, 8);
  return 0;
}
