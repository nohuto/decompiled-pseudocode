__int64 __fastcall AuthzBasepCompareIntegerOperands(unsigned __int8 a1, __int64 a2)
{
  unsigned int v2; // r8d
  int v3; // r9d
  signed __int64 **v4; // rdx
  __int64 v5; // rcx
  unsigned __int16 v6; // r10
  signed __int64 *v7; // rax
  __int64 v8; // rcx
  bool v9; // al
  bool v10; // zf
  signed __int64 v12; // [rsp+20h] [rbp-10h]
  signed __int64 v13; // [rsp+28h] [rbp-8h]

  v12 = -1LL;
  v2 = 0;
  v13 = -1LL;
  v3 = a1;
  v4 = (signed __int64 **)(a2 + 32);
  v5 = 0LL;
  v6 = 2;
  do
  {
    if ( *((_DWORD *)v4 - 5) == 1 )
    {
      v7 = *v4;
    }
    else
    {
      v6 = *((_WORD *)v4 - 16);
      v7 = (signed __int64 *)(*(v4 - 2))[6];
    }
    v4 += 5;
    *(&v12 + v5++) = *v7;
  }
  while ( v5 < 2 );
  if ( v6 == 1 )
  {
    if ( v3 == 128 )
    {
      v10 = v12 == v13;
    }
    else
    {
      switch ( v3 )
      {
        case 129:
          v9 = v12 != v13;
          break;
        case 130:
          v9 = v12 < v13;
          break;
        case 131:
          v9 = v12 <= v13;
          break;
        case 132:
          v9 = v12 > v13;
          break;
        case 133:
          v9 = v12 >= v13;
          break;
        default:
          return v2;
      }
      v10 = v9;
    }
    if ( v10 )
      return 1;
  }
  else
  {
    v8 = (unsigned int)v6 - 2;
    if ( v6 == 2 )
      goto LABEL_12;
    if ( v6 == 6 )
    {
      if ( (unsigned __int64)v12 > 1 || (unsigned __int64)v13 >= 2 )
        return (unsigned int)-1;
LABEL_12:
      LOBYTE(v8) = v3;
      return (unsigned int)AuthzBasepCompareUnsigned(v8);
    }
  }
  return v2;
}
