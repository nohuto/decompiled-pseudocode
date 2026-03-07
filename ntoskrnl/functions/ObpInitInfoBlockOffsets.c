__int64 ObpInitInfoBlockOffsets()
{
  unsigned int v0; // r9d
  unsigned __int8 *v1; // r10
  unsigned __int8 v2; // cl
  unsigned __int8 v3; // r8
  unsigned __int8 v4; // cl
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // cl
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // cl
  unsigned __int8 v13; // r8
  __int64 result; // rax
  unsigned __int8 v15; // cl

  v0 = 0;
  v1 = ObpInfoMaskToOffset;
  do
  {
    v2 = 32 * (v0 & 1) + 32;
    if ( (v0 & 2) == 0 )
      v2 = 32 * (v0 & 1);
    v3 = v2;
    v4 = v2 + 16;
    if ( (v0 & 4) == 0 )
      v4 = v3;
    v5 = v4;
    v6 = v4 + 32;
    if ( (v0 & 8) == 0 )
      v6 = v5;
    v7 = v6;
    v8 = v6 + 16;
    if ( (v0 & 0x10) == 0 )
      v8 = v7;
    v9 = v8;
    v10 = v8 + 16;
    if ( (v0 & 0x20) == 0 )
      v10 = v9;
    v11 = v10;
    v12 = v10 + 16;
    if ( (v0 & 0x40) == 0 )
      v12 = v11;
    v13 = v12;
    result = (unsigned int)v12 + 4;
    v15 = v12 + 4;
    if ( (v0 & 0x80u) == 0 )
      v15 = v13;
    ++v0;
    *v1++ = v15;
  }
  while ( v0 < 0x100 );
  return result;
}
