/*
 * XREFs of ?DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z @ 0x1C024EE44
 * Callers:
 *     ?DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z @ 0x1C024ED7C (-DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z.c)
 *     ?FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z @ 0x1C024F0A8 (-FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C0088258 (GrePolyPatBlt.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00E42C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall DrawDiagonalLine(HDC a1, struct tagRECT *a2, signed int a3, __int64 a4, unsigned int a5)
{
  __m128i *v7; // rdx
  signed int v8; // r11d
  int v10; // r10d
  int v11; // r8d
  int v12; // esi
  int v13; // r9d
  int v14; // r13d
  int v15; // eax
  int v16; // r14d
  int v17; // r14d
  int *v18; // rcx
  __int8 *v19; // rbx
  int v20; // r15d
  int v21; // esi
  int v22; // edi
  int v23; // eax
  __int64 v24; // r8
  char v25; // al
  __int64 v26; // rdx
  LONG v27; // eax
  LONG top; // ecx
  int v29; // eax
  int v30; // eax
  LONG left; // ecx
  int v32; // esi
  int v33; // [rsp+20h] [rbp-E0h]
  int v34; // [rsp+30h] [rbp-D0h] BYREF
  int v35; // [rsp+34h] [rbp-CCh] BYREF
  signed int v36; // [rsp+38h] [rbp-C8h]
  unsigned int v37; // [rsp+3Ch] [rbp-C4h]
  HDC v38; // [rsp+40h] [rbp-C0h]
  __m128i v39; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v40[48]; // [rsp+60h] [rbp-A0h] BYREF

  v38 = a1;
  v36 = a3;
  if ( IsRectEmptyInl(a2) )
    return 0LL;
  v10 = _mm_cvtsi128_si32(*v7);
  v11 = _mm_srli_si128(*v7, 8).m128i_i32[1] - HIDWORD(v7->m128i_i64[0]);
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(*v7, 8));
  v39 = *v7;
  v37 = a5;
  v13 = v12 - v10;
  if ( v11 < v12 - v10 )
  {
    v16 = 1;
    v35 = 1;
    v15 = v13 / v11;
    v14 = v13 / v11;
    v34 = v13 / v11;
  }
  else
  {
    v14 = 1;
    v34 = 1;
    v15 = v11 / v13;
    v16 = v11 / v13;
    v35 = v11 / v13;
  }
  v17 = a3 * v16;
  v18 = &v34;
  v19 = &v39.m128i_i8[12];
  if ( v11 >= v13 )
    v18 = &v35;
  *v18 = v15;
  v20 = v34;
  v21 = v12 - v34;
  v22 = v35;
  v23 = v39.m128i_i32[3] - v35;
  v39.m128i_i32[2] = v21;
  if ( v36 < v8 )
    v19 = &v39.m128i_i8[4];
  v39.m128i_i32[3] -= v35;
  if ( v10 <= v21 )
  {
    v24 = 0LL;
    while ( 1 )
    {
      if ( v39.m128i_i32[1] > v23 )
      {
LABEL_29:
        if ( v8 )
          GrePolyPatBlt(v38, 0xF00021u, (struct _POLYPATBLT *)v40, v8, v33);
        return (unsigned __int16)v20 | ((unsigned __int16)v22 << 16);
      }
      v25 = v37;
      v26 = 3 * v24;
      ++v8;
      ++v24;
      if ( (v37 & 0x800) != 0 )
      {
        if ( v22 > 1 )
        {
          v40[2 * v26] = v10;
          v40[2 * v26 + 2] = v20;
          if ( (v25 & 1) != 0 )
          {
            top = a2->top;
            v29 = v22 + *(_DWORD *)v19 - top;
          }
          else
          {
            top = *(_DWORD *)v19;
            v29 = a2->bottom - *(_DWORD *)v19;
          }
          v40[2 * v26 + 1] = top;
          v40[2 * v26 + 3] = v29;
          *(_QWORD *)&v40[2 * v26 + 4] = 0LL;
          goto LABEL_25;
        }
        *(_QWORD *)&v40[2 * v26 + 4] = 0LL;
        v40[2 * v26 + 1] = *(_DWORD *)v19;
        if ( (v25 & 2) != 0 )
        {
          v30 = a2->right - v10;
          v40[2 * v26] = v10;
        }
        else
        {
          left = a2->left;
          v40[2 * v26] = a2->left;
          v30 = v20 + v10 - left;
        }
        v40[2 * v26 + 2] = v30;
      }
      else
      {
        v27 = *(_DWORD *)v19;
        *(_QWORD *)&v40[2 * v26 + 4] = 0LL;
        v40[2 * v26 + 1] = v27;
        v40[2 * v26] = v10;
        v40[2 * v26 + 2] = v20;
      }
      v40[2 * v26 + 3] = v22;
LABEL_25:
      v32 = v10 + v14;
      v39.m128i_i32[0] = v10 + v14;
      *(_DWORD *)v19 -= v17;
      if ( v24 == 8 )
      {
        GrePolyPatBlt(v38, 0xF00021u, (struct _POLYPATBLT *)v40, 8u, v33);
        v8 = 0;
        v24 = 0LL;
      }
      if ( v32 > v39.m128i_i32[2] )
        goto LABEL_29;
      v23 = v39.m128i_i32[3];
      v10 = v39.m128i_i32[0];
    }
  }
  return (unsigned __int16)v20 | ((unsigned __int16)v22 << 16);
}
