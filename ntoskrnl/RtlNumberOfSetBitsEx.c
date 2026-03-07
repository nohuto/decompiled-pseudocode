__int64 __fastcall RtlNumberOfSetBitsEx(_QWORD *a1)
{
  char *v1; // r11
  unsigned __int64 v2; // rdx
  __int64 v3; // r10
  __int64 v4; // rsi
  int v5; // r8d
  unsigned __int64 v6; // rbx
  int v7; // r9d
  int v8; // edx
  int v9; // edi
  unsigned __int64 v10; // rdx
  int i; // r8d
  char v12; // cl
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  char v17; // cl

  v1 = (char *)a1[1];
  v2 = *a1 >> 3;
  v3 = *a1 & 7LL;
  v4 = 0LL;
  v5 = (unsigned __int8)v1 & 7;
  v6 = v2 + (v3 != 0);
  if ( 8 - (unsigned __int64)(a1[1] & 7) > v2 )
  {
    v9 = 0;
    v7 = v2 + (v3 != 0);
    v10 = 0LL;
  }
  else
  {
    v7 = 8 - v5;
    v8 = ((_BYTE)v2 - (8 - (_BYTE)v5)) & 7;
    v9 = v8 + 1;
    if ( !v3 )
      v9 = v8;
    v10 = v6 - (unsigned int)(v9 + v7);
  }
  for ( i = 0; v7; --v7 )
  {
    v12 = *v1++;
    if ( i == v6 - 1 && v3 )
      v12 &= byte_140018DE0[v3];
    ++i;
    v4 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v12);
  }
  if ( v10 )
  {
    v13 = ((v10 - 1) >> 3) + 1;
    i += 8 * v13;
    do
    {
      v14 = *(_QWORD *)v1;
      v15 = *(_QWORD *)v1;
      v1 += 8;
      v4 += (0x101010101010101LL
           * ((((v14 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v14 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v14 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v14 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      --v13;
    }
    while ( v13 );
  }
  if ( v9 )
  {
    v16 = v6 - 1;
    do
    {
      v17 = *v1++;
      if ( i == v16 && v3 )
        v17 &= byte_140018DE0[v3];
      ++i;
      v4 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v17);
      --v9;
    }
    while ( v9 );
  }
  return v4;
}
