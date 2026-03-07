__int64 __fastcall ComputeAABBP(__int128 *a1, __int64 a2, __m128i *a3, int a4)
{
  int v5; // r8d
  __int128 v6; // xmm1
  __m128i v7; // xmm2
  __m128i v8; // xmm6
  int v9; // r12d
  int v10; // esi
  int v11; // edi
  int v12; // r14d
  int v13; // r11d
  int v14; // r10d
  int v15; // r9d
  int v16; // r13d
  int v17; // r10d
  int v18; // r15d
  int v19; // r9d
  int v20; // edx
  int v21; // edx
  int v22; // r8d
  char v23; // al
  int v24; // r15d
  __int64 (__fastcall *v25)(int, int, int, int, int); // rax
  __int64 (__fastcall *v26)(); // r8
  __int64 (__fastcall *v27)(); // rdx
  void *v28; // r10
  bool v29; // zf
  int v30; // eax
  int v31; // eax
  int v32; // eax
  __int32 v33; // ecx
  __int32 v34; // eax
  int v35; // edx
  int v36; // ecx
  __m128i v37; // xmm0
  __int64 result; // rax
  __m128i v39; // [rsp+28h] [rbp-99h] BYREF
  int v40; // [rsp+38h] [rbp-89h]
  __int128 v41; // [rsp+48h] [rbp-79h]
  __m128i v42; // [rsp+58h] [rbp-69h]
  __m128i v43; // [rsp+68h] [rbp-59h]
  __int128 v44; // [rsp+78h] [rbp-49h] BYREF
  __int128 v45; // [rsp+88h] [rbp-39h] BYREF
  __int128 v46; // [rsp+98h] [rbp-29h]
  __int64 v47; // [rsp+A8h] [rbp-19h]
  int v48[2]; // [rsp+B8h] [rbp-9h] BYREF
  __int128 v49; // [rsp+C0h] [rbp-1h]
  int v50; // [rsp+128h] [rbp+67h]

  v5 = a3->m128i_i32[0];
  v6 = a1[4];
  v7 = (__m128i)a1[1];
  v41 = *a1;
  v8 = (__m128i)a1[2];
  v44 = a1[3];
  v9 = _mm_cvtsi128_si32(v8);
  v46 = a1[5];
  v43 = v8;
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8));
  v45 = v6;
  *(_QWORD *)&v6 = *((_QWORD *)a1 + 12);
  v42 = v7;
  v47 = v6;
  v43.m128i_i32[2] = v10;
  v43.m128i_i32[0] = v9;
  if ( v10 < v9 )
  {
    v43.m128i_i32[0] = v10;
    v43.m128i_i32[2] = v9;
    v9 = v10;
    v8 = v43;
    v10 = v43.m128i_i32[2];
    v5 |= 1u;
  }
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12));
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
  v43.m128i_i32[3] = v11;
  v43.m128i_i32[1] = v12;
  if ( v11 < v12 )
  {
    v43.m128i_i32[1] = v11;
    v43.m128i_i32[3] = v12;
    v12 = v11;
    v8 = v43;
    v11 = v43.m128i_i32[3];
    v5 |= 2u;
  }
  v13 = _mm_cvtsi128_si32(v7);
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
  v42.m128i_i32[0] = v13;
  v42.m128i_i32[2] = v14;
  if ( v14 < v13 )
  {
    v42.m128i_i32[0] = v14;
    v42.m128i_i32[2] = v13;
    v13 = v14;
    v7 = v42;
    v14 = v42.m128i_i32[2];
    v5 ^= 1u;
  }
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 12));
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 4));
  v42.m128i_i32[3] = v15;
  v42.m128i_i32[1] = v16;
  if ( v15 < v16 )
  {
    v42.m128i_i32[1] = v15;
    v42.m128i_i32[3] = v16;
    v16 = v15;
    v7 = v42;
    v15 = v42.m128i_i32[3];
    v5 ^= 2u;
  }
  if ( v13 >= v14 || v16 >= v15 || v9 >= v10 || v12 >= v11 )
    return 0LL;
  v17 = v14 - v13;
  a3[8].m128i_i64[0] = v46;
  v18 = v11 - v12;
  v50 = v10 - v9;
  v19 = v15 - v16;
  v40 = v11 - v12;
  if ( (1000 * (v10 - v9) + 500) / v17 > 667 && (1000 * v18 + 500) / v19 > 667 )
    v5 |= 0x40u;
  v20 = 524304;
  if ( v50 * v18 >= v17 * v19 )
    v20 = 8;
  v21 = v5 | v20;
  if ( v19 == v18 )
  {
    v22 = a4;
    a3[2].m128i_i64[1] = (__int64)BltMask_CY;
    a3[1].m128i_i64[1] = (__int64)BuildBltAAInfo;
    v23 = 1;
    a3[3].m128i_i64[1] = (__int64)BltAV_CY;
LABEL_32:
    v24 = v21;
    goto LABEL_33;
  }
  if ( v19 >= v18 )
  {
    v22 = a4;
    a3[2].m128i_i64[1] = (__int64)ShrinkMask_CY;
    a3[3].m128i_i64[1] = (__int64)ShrinkAV_CY;
    a3[1].m128i_i64[1] = (__int64)BuildShrinkAAInfo;
    if ( v50 >= v17 || (v23 = 3, a4) )
      v23 = 2;
    goto LABEL_32;
  }
  a3[1].m128i_i64[1] = (__int64)BuildExpandAAInfo;
  a3[2].m128i_i64[1] = (__int64)ExpandMask_CY;
  a3[3].m128i_i64[1] = (__int64)ExpandAV_CY;
  v24 = v21;
  if ( v50 <= v17 )
  {
    v23 = 4;
  }
  else
  {
    if ( (v21 & 0x200) == 0 && 5 * v19 >= v40 && 5 * v17 >= v50 )
      v24 = v21 | 0x4000;
    v23 = 5;
  }
  v22 = a4;
LABEL_33:
  a3->m128i_i8[4] = v23;
  if ( v17 == v50 )
  {
    a3->m128i_i8[5] = 0;
    v25 = GrayCopyDIB_CX;
    if ( !v22 )
      v25 = (__int64 (__fastcall *)(int, int, int, int, int))CopyDIB_CX;
    v26 = BltMask_CX;
    v27 = BltAV_CX;
    v28 = BuildBltAAInfo;
  }
  else if ( v17 >= v50 )
  {
    a3->m128i_i8[5] = 1;
    v24 |= 0x2000u;
    v25 = (__int64 (__fastcall *)(int, int, int, int, int))GrayShrinkDIB_CX;
    v29 = v22 == 0;
    v28 = BuildShrinkAAInfo;
    v26 = ShrinkMask_CX;
    if ( v29 )
      v25 = ShrinkDIB_CX;
    v27 = ShrinkAV_CX;
  }
  else
  {
    a3->m128i_i8[5] = 2;
    v25 = GrayExpandDIB_CX;
    if ( !v22 )
      v25 = ExpandDIB_CX;
    v28 = BuildExpandAAInfo;
    v27 = ExpandAV_CX;
    v26 = ExpandMask_CX;
  }
  a3[2].m128i_i64[0] = (__int64)v26;
  a3[3].m128i_i64[0] = (__int64)v27;
  a3[1].m128i_i64[0] = (__int64)v28;
  a3->m128i_i64[1] = (__int64)v25;
  if ( (v41 & 0x40) != 0 )
  {
    a3[2].m128i_i64[0] = (__int64)BltMask_CX;
    a3[2].m128i_i64[1] = (__int64)BltMask_CY;
    a3[3].m128i_i64[1] = (__int64)TileAV_CY;
    a3[1].m128i_i64[0] = (__int64)BuildTileAAInfo;
    a3[1].m128i_i64[1] = (__int64)BuildTileAAInfo;
    a3->m128i_i8[4] = 0;
    a3[3].m128i_i64[0] = 0LL;
    a3->m128i_i64[1] = 0LL;
  }
  v30 = DWORD2(v46) - v13;
  a3->m128i_i32[0] = v24;
  a3[8].m128i_i32[2] = v30;
  v31 = HIDWORD(v46) - v16;
  v29 = (v41 & 1) == 0;
  a3[4] = v7;
  a3[8].m128i_i32[3] = v31;
  v39 = v8;
  if ( !v29 && !IntersectRECTL(v39.m128i_i32, (int *)&v44) )
    return 0LL;
  if ( (v41 & 0x10) != 0 )
  {
    if ( !IntersectRECTL(v39.m128i_i32, (int *)&v45) )
      return 0LL;
    v9 -= v45;
    v32 = DWORD1(v45);
    v10 -= v45;
    v39.m128i_i32[0] -= v45;
    v12 -= DWORD1(v45);
    v39.m128i_i32[2] -= v45;
    v11 -= DWORD1(v45);
    v39.m128i_i32[1] -= DWORD1(v45);
    v39.m128i_i32[3] -= DWORD1(v45);
    a3[8].m128i_i32[0] -= v45;
    a3[8].m128i_i32[1] -= v32;
    v43.m128i_i32[0] = v9;
    *(__int64 *)((char *)v43.m128i_i64 + 4) = __PAIR64__(v10, v12);
    v43.m128i_i32[3] = v11;
    v8 = v43;
  }
  v48[1] = 0;
  v48[0] = 0;
  *(_QWORD *)&v49 = *(_QWORD *)(a2 + 12);
  if ( !IntersectRECTL(v39.m128i_i32, v48) )
    return 0LL;
  if ( (v24 & 1) != 0 )
  {
    v33 = v39.m128i_i32[2] - v39.m128i_i32[0];
    v39.m128i_i32[0] = v10 - v39.m128i_i32[2];
    v34 = v33 + v10 - v39.m128i_i32[2];
    a3[7].m128i_i32[0] = v10;
    v43.m128i_i32[0] = 0;
    v43.m128i_i32[2] = v10 - v9;
    v8 = v43;
    v39.m128i_i32[2] = v34;
  }
  if ( (v24 & 2) != 0 )
  {
    v35 = v39.m128i_i32[3] - v39.m128i_i32[1];
    v39.m128i_i32[1] = v11 - v39.m128i_i32[3];
    v36 = v35 + v11 - v39.m128i_i32[3];
    a3[7].m128i_i32[1] = v11;
    v43.m128i_i32[1] = 0;
    v43.m128i_i32[3] = v11 - v12;
    v8 = v43;
    v39.m128i_i32[3] = v36;
  }
  v37 = v39;
  result = 1LL;
  a3[6] = v8;
  a3[5] = v37;
  return result;
}
