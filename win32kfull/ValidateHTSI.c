/*
 * XREFs of ValidateHTSI @ 0x1C025409C
 * Callers:
 *     AAHalftoneBitmap @ 0x1C0253604 (AAHalftoneBitmap.c)
 * Callees:
 *     ValidateRGBBitFields @ 0x1C02543A4 (ValidateRGBBitFields.c)
 */

__int64 __fastcall ValidateHTSI(__int64 a1, int a2)
{
  int v3; // edx
  __int64 v4; // rax
  __int64 v6; // rdx
  __int128 *v7; // rax
  __int64 v8; // rax
  __m128i *v9; // rcx
  unsigned int v10; // r9d
  unsigned __int8 v11; // r11
  char v12; // bl
  int v13; // eax
  int v14; // edx
  __int128 v15; // [rsp+20h] [rbp-20h]
  __m128i v16; // [rsp+20h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-10h]
  _DWORD *v18; // [rsp+30h] [rbp-10h]

  if ( !a2 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    if ( !v8 )
      return 4294967260LL;
    v9 = *(__m128i **)(v8 + 32);
    if ( !v9 )
      return 4294967279LL;
    v10 = 2;
    v11 = _mm_cvtsi128_si32(*v9);
    v16 = *v9;
    v18 = (_DWORD *)v9[1].m128i_i64[0];
    if ( v11 > 2u )
      return 4294967267LL;
    v12 = 4;
    *(_BYTE *)(a1 + 84) = v16.m128i_i8[3];
    v13 = *(unsigned __int8 *)(v8 + 10);
    *(_BYTE *)(a1 + 65) = v13;
    if ( v13 != 1 )
    {
      switch ( v13 )
      {
        case 2:
          v10 = 16;
          break;
        case 3:
          v10 = 256;
          break;
        case 4:
          v12 = 2;
          goto LABEL_45;
        case 5:
          if ( !v11
            && *(__int16 *)((char *)v16.m128i_i16 + 1) == 769
            && v16.m128i_i8[3] <= 5u
            && v16.m128i_i32[1] == 255 )
          {
            v14 = SrcOrderTable[v16.m128i_u8[3]];
            *(_DWORD *)(a1 + 72) = 255 << (8 * BYTE1(v14));
            *(_DWORD *)(a1 + 76) = 255 << (8 * BYTE2(v14));
            *(_DWORD *)(a1 + 80) = 255 << (8 * HIBYTE(v14));
            return (unsigned int)ValidateRGBBitFields(a1 + 64) != 0 ? 1 : -18;
          }
          return 4294967272LL;
        case 6:
LABEL_45:
          if ( !v11 && v16.m128i_i8[2] == v12 && v16.m128i_i32[2] == 3 && v18 )
          {
            *(_DWORD *)(a1 + 72) = *v18;
            *(_DWORD *)(a1 + 76) = v18[1];
            *(_DWORD *)(a1 + 80) = v18[2];
            return (unsigned int)ValidateRGBBitFields(a1 + 64) != 0 ? 1 : -18;
          }
          return 4294967278LL;
        default:
          return 4294967287LL;
      }
    }
    if ( v16.m128i_i8[1] == 1 )
    {
      if ( v16.m128i_i8[2] < 3u )
        return 4294967272LL;
      if ( v16.m128i_i8[3] > 5u )
        return 4294967273LL;
      if ( !v18 )
        return 4294967278LL;
      if ( v16.m128i_i32[2] <= v10 && v16.m128i_i32[2] )
      {
        if ( v16.m128i_i32[1] != 255 )
          return 4294967274LL;
        return (unsigned int)ValidateRGBBitFields(a1 + 64) != 0 ? 1 : -18;
      }
    }
    return 4294967276LL;
  }
  v3 = a2 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      v4 = *(_QWORD *)(a1 + 32);
      if ( v4 )
      {
        if ( *(_BYTE *)(v4 + 10) != 1 )
          return 4294967286LL;
      }
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 40);
    if ( !v6 )
      return 4294967259LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    if ( *(_BYTE *)(v6 + 10) != 1
      && *(_BYTE *)(v6 + 10) != 2
      && *(_BYTE *)(v6 + 10) != 5
      && *(_BYTE *)(v6 + 10) != 6
      && *(unsigned __int8 *)(v6 + 10) != 252
      && *(unsigned __int8 *)(v6 + 10) != 253 )
    {
      if ( *(unsigned __int8 *)(v6 + 10) == 254 )
      {
        v7 = *(__int128 **)(v6 + 32);
        if ( v7 )
        {
          v17 = *((_QWORD *)v7 + 2);
          v15 = *v7;
          if ( v17 )
          {
            if ( *(_QWORD *)((char *)&v15 + 4) == 0x100000000FFLL && BYTE2(v15) == 1 && !(_BYTE)v15 )
              *(_QWORD *)(a1 + 56) = v17;
          }
        }
      }
      else if ( *(unsigned __int8 *)(v6 + 10) != 255 )
      {
        return 4294967285LL;
      }
    }
  }
  return 1LL;
}
