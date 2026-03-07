__int64 __fastcall HvBufferCheckSum(__int64 a1, unsigned int a2)
{
  int v2; // r9d
  __int64 v3; // r10
  unsigned int v4; // edx
  int v5; // r8d
  unsigned __int8 *v6; // r11
  _DWORD *v7; // rcx
  __int64 v8; // r10
  unsigned int v9; // r8d
  __int64 v11; // rcx
  int v12; // eax

  v2 = 0;
  v3 = a2 >> 2;
  v4 = a2 & 3;
  v5 = 0;
  v6 = (unsigned __int8 *)(a1 + 4 * v3);
  if ( (unsigned int)v3 > 1 )
  {
    v7 = (_DWORD *)(a1 + 4);
    v8 = (unsigned int)(v3 - 1);
    do
    {
      v5 ^= *v7++;
      --v8;
    }
    while ( v8 );
  }
  if ( v4 )
  {
    v11 = v4;
    do
    {
      v12 = *v6++;
      v2 = v12 + (v2 << 8);
      --v11;
    }
    while ( v11 );
  }
  v9 = v2 ^ v5;
  if ( v9 == -1 )
  {
    return (unsigned int)-2;
  }
  else if ( !v9 )
  {
    return 1;
  }
  return v9;
}
