PSTR __stdcall RtlIpv6AddressToStringA(const struct in6_addr *Addr, PSTR S)
{
  unsigned int v2; // ebp
  PSTR v3; // r14
  char *v4; // rdi
  USHORT v6; // ax
  USHORT v7; // r10
  int v8; // ecx
  const char *v9; // r9
  int v10; // eax
  int v12; // r10d
  int v13; // r11d
  int v14; // esi
  int v15; // edx
  __int64 i; // r8
  int v17; // r9d
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // r15
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // r13
  int v27; // eax

  v2 = 8;
  v3 = S + 46;
  v4 = S;
  if ( !*(_DWORD *)Addr->u.Byte && !Addr->u.Word[2] && !Addr->u.Word[3] && Addr->u.Word[6] )
  {
    v6 = Addr->u.Word[4];
    if ( v6 )
    {
      if ( v6 == 0xFFFF && !Addr->u.Word[5] )
      {
        v10 = sprintf_s(
                S,
                0x2EuLL,
                "::ffff:0:%u.%u.%u.%u",
                Addr->u.Byte[12],
                Addr->u.Byte[13],
                Addr->u.Byte[14],
                Addr->u.Byte[15]);
        return &v4[v10];
      }
    }
    else
    {
      v7 = Addr->u.Word[5];
      if ( ((v7 + 1) & 0xFFFE) == 0 )
      {
        v8 = Addr->u.Byte[14];
        v9 = &Src;
        if ( v7 )
          v9 = "ffff:";
        v10 = sprintf_s(S, 0x2EuLL, "::%hs%u.%u.%u.%u", v9, Addr->u.Byte[12], Addr->u.Byte[13], v8, Addr->u.Byte[15]);
        return &v4[v10];
      }
    }
  }
  v12 = 0;
  v13 = 0;
  v14 = 0;
  if ( (Addr->u.Word[4] & 0xFFFD) == 0 && Addr->u.Word[5] == 0xFE5E )
    v2 = 6;
  v15 = 0;
  for ( i = 0LL; i < v2; ++i )
  {
    v17 = v15 + 1;
    if ( Addr->u.Word[i] )
    {
      v14 = v15 + 1;
    }
    else
    {
      v18 = v12 - v13;
      v19 = v15 - v14 + 1;
      v20 = v14;
      if ( v19 <= v12 - v13 )
        v20 = v13;
      v13 = v20;
      v21 = v17;
      if ( v19 <= v18 )
        v21 = v12;
      v12 = v21;
    }
    v15 = v17;
  }
  v22 = 0;
  if ( v12 - v13 > 1 )
    v22 = v12;
  v23 = v22;
  v24 = 0;
  if ( v12 - v13 > 1 )
    v24 = v13;
  v25 = 0LL;
  v26 = v24;
  do
  {
    if ( v26 > v25 || v25 >= v23 )
    {
      if ( v25 && v25 != v23 )
        v4 += sprintf_s(v4, v3 - v4, ":");
      v27 = sprintf_s(v4, v3 - v4, "%x", (unsigned __int16)__ROR2__(Addr->u.Word[v25], 8));
    }
    else
    {
      v27 = sprintf_s(v4, v3 - v4, "::");
      v25 = v23 - 1;
    }
    ++v25;
    v4 += v27;
  }
  while ( v25 < v2 );
  if ( v2 < 8 )
    v4 += sprintf_s(v4, v3 - v4, ":%u.%u.%u.%u", Addr->u.Byte[12], Addr->u.Byte[13], Addr->u.Byte[14], Addr->u.Byte[15]);
  return v4;
}
