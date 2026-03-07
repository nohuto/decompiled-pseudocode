__int64 __fastcall BuildRepData(__int64 a1, int a2, int a3)
{
  int v3; // r10d
  int v4; // r11d
  int v5; // r8d
  int v6; // edi
  int v7; // esi
  __int64 v8; // rax
  _WORD *v9; // r12
  int v10; // edx
  int *v11; // r15
  int *v12; // rcx
  int v13; // ebx
  unsigned __int8 v14; // r14
  char v15; // r13
  int v16; // ecx
  int v17; // edx
  int v18; // r9d
  int v19; // ecx
  int v20; // ecx
  int v21; // edx
  int i; // eax
  __int64 result; // rax
  __int64 v24; // [rsp+0h] [rbp-68h]
  __m128i v25; // [rsp+10h] [rbp-58h]
  __int128 v26; // [rsp+20h] [rbp-48h]
  __int128 v27; // [rsp+20h] [rbp-48h]
  __m128i v28; // [rsp+30h] [rbp-38h]
  __int128 v29; // [rsp+40h] [rbp-28h]
  int *v30; // [rsp+50h] [rbp-18h]
  int v32; // [rsp+B8h] [rbp+50h] BYREF
  int v33; // [rsp+C0h] [rbp+58h] BYREF
  unsigned __int8 v34; // [rsp+C8h] [rbp+60h]

  v33 = a3;
  v32 = a2;
  v3 = 0;
  v4 = a3;
  v24 = 0LL;
  v5 = -1;
  v6 = a2;
  v7 = _mm_cvtsi128_si32(*(__m128i *)a1);
  v26 = *(_OWORD *)(a1 + 16);
  v8 = HIDWORD(*(_QWORD *)a1);
  v28 = *(__m128i *)(a1 + 32);
  v29 = *(_OWORD *)(a1 + 48);
  v9 = (_WORD *)_mm_srli_si128(v28, 8).m128i_u64[0];
  v25 = *(__m128i *)a1;
  if ( v7 >= (int)HIDWORD(*(_QWORD *)a1) )
  {
    if ( v7 <= (int)HIDWORD(*(_QWORD *)a1) )
      return 0LL;
    v10 = HIDWORD(*(_QWORD *)a1);
    v11 = &v33;
    LODWORD(v8) = v7;
    v12 = &v32;
  }
  else
  {
    v10 = v7;
    v11 = &v32;
    v12 = &v33;
  }
  v30 = v12;
  v13 = 0;
  v14 = 0;
  v28.m128i_i16[1] = 0;
  v15 = 0;
  v16 = 2 * v8 + v10;
  v17 = 2 * v10;
  v18 = 2;
  v34 = 0;
  if ( v4 < SHIDWORD(v26) )
  {
    while ( 1 )
    {
      v16 -= v17;
      if ( v16 < 0 )
      {
        ++*v11;
        if ( v5 != -1 )
          *v9++ = v13;
        v4 = v33;
        v16 += 2 * v8;
        v6 = v32;
        v13 = 0;
        v15 = 0;
      }
      ++v15;
      if ( v6 < (int)v26 || v6 >= SDWORD1(v26) || v4 < SDWORD2(v26) || v4 >= SHIDWORD(v26) )
      {
        if ( v5 != -1 )
          break;
      }
      else
      {
        ++v13;
        if ( v5 == -1 )
        {
          LODWORD(v24) = v4;
          v34 = v15 - 1;
          v5 = v6;
          v28.m128i_i8[2] = v15 - 1;
        }
        v3 = v6;
        HIDWORD(v24) = v4;
      }
      ++*v30;
      v4 = v33;
      if ( v33 >= SHIDWORD(v26) )
        break;
      v6 = v32;
    }
    v14 = 0;
  }
  if ( v5 == -1 )
    return 0LL;
  if ( v13 )
  {
    *v9++ = v13;
    v19 = v16 - v17;
    if ( v19 >= 0 )
    {
      do
      {
        ++v14;
        v19 -= v17;
      }
      while ( v19 >= 0 );
      v28.m128i_i8[3] = v14;
    }
  }
  v20 = v5;
  if ( v7 < v25.m128i_i32[1] )
  {
    v21 = 2;
    do
    {
LABEL_29:
      if ( v20 <= (int)v26 )
        break;
      --v20;
      --v21;
    }
    while ( v21 );
    goto LABEL_31;
  }
  v21 = v34;
  v18 = v14;
  if ( v34 )
    goto LABEL_29;
LABEL_31:
  for ( i = v3; v18; --v18 )
  {
    if ( i >= DWORD1(v26) - 1 )
      break;
    ++i;
  }
  v28.m128i_i8[1] = i - v3;
  DWORD1(v27) = v3 + 1;
  v25.m128i_i32[2] = v5;
  *((_QWORD *)&v27 + 1) = v24 + 0x100000000LL;
  v25.m128i_i32[3] = v3 - v5 + 1;
  result = 1LL;
  *(__m128i *)a1 = v25;
  LODWORD(v27) = v5;
  *(_OWORD *)(a1 + 16) = v27;
  *(_QWORD *)&v29 = v9;
  DWORD2(v29) = 1;
  v28.m128i_i8[0] = v5 - v20;
  *(__m128i *)(a1 + 32) = v28;
  *(_OWORD *)(a1 + 48) = v29;
  return result;
}
