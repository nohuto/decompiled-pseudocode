__int64 __fastcall PcReadCounter(__int64 *a1)
{
  unsigned __int8 v1; // al
  __int64 v3; // rcx
  __int16 v4; // r8
  int v5; // edx
  unsigned __int16 v6; // r11
  int v7; // r8d
  unsigned __int8 v8; // al
  int v9; // ecx
  unsigned __int8 v10; // al
  unsigned __int16 v11; // r11
  int v12; // r8d
  unsigned __int8 v13; // al
  int v14; // ecx
  unsigned __int8 v15; // al
  unsigned int v16; // edx
  __int64 result; // rax

  v1 = *((_BYTE *)a1 + 16);
  v3 = *a1;
  v4 = v1 & 3;
  v5 = 16776960;
  if ( v1 >= 4u )
  {
    v11 = v3 + 2 + 4 * v4;
    do
    {
      v12 = v5;
      __outbyte(*a1 + 24, 0);
      v13 = __inbyte(v11);
      v14 = v13;
      v15 = __inbyte(v11);
      v5 = v14 | (v15 << 8);
    }
    while ( ((v5 ^ v12) & 0xFFFF00) != 0 );
  }
  else
  {
    v6 = v3 + 1 + 2 * v4;
    do
    {
      v7 = v5;
      __outbyte(*a1 + 12, 0);
      v8 = __inbyte(v6);
      v9 = v8;
      v10 = __inbyte(v6);
      v5 = v9 | (v10 << 8);
    }
    while ( ((v5 ^ v7) & 0xFFFF00) != 0 );
  }
  v16 = (unsigned __int16)(v5 + 1);
  result = 2 * v16;
  if ( !*((_BYTE *)a1 + 21) )
    return v16;
  return result;
}
