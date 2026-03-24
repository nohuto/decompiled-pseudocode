/*
 * XREFs of ComputeAABBP @ 0x1C001D83C
 * Callers:
 *     SetupAAHeader @ 0x1C001CDD8 (SetupAAHeader.c)
 * Callees:
 *     IntersectRECTL @ 0x1C001DC54 (IntersectRECTL.c)
 */

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
  __int64 (__fastcall *v22)(int, int, int, int, int, int, int, __int64, __int64, int); // r8
  int v23; // r15d
  char v24; // al
  int v25; // ecx
  __int64 (__fastcall *v26)(); // r9
  __int64 (__fastcall *v27)(int, int, int, int, int); // rax
  __int64 (__fastcall *v28)(); // rdx
  __int64 (__fastcall *v29)(); // rcx
  int v30; // eax
  int v31; // eax
  bool v32; // zf
  int v33; // eax
  __m128i v34; // xmm0
  __int64 result; // rax
  __int32 v36; // ecx
  __int32 v37; // eax
  int v38; // edx
  int v39; // ecx
  __m128i v40; // [rsp+28h] [rbp-99h] BYREF
  int v41; // [rsp+38h] [rbp-89h]
  __int128 v42; // [rsp+48h] [rbp-79h]
  __m128i v43; // [rsp+58h] [rbp-69h]
  __m128i v44; // [rsp+68h] [rbp-59h]
  __int128 v45; // [rsp+78h] [rbp-49h] BYREF
  __int128 v46; // [rsp+88h] [rbp-39h] BYREF
  __int128 v47; // [rsp+98h] [rbp-29h]
  __int64 v48; // [rsp+A8h] [rbp-19h]
  _DWORD v49[2]; // [rsp+B8h] [rbp-9h] BYREF
  __int128 v50; // [rsp+C0h] [rbp-1h]
  int v51; // [rsp+128h] [rbp+67h]

  v5 = a3->m128i_i32[0];
  v6 = a1[4];
  v7 = (__m128i)a1[1];
  v42 = *a1;
  v8 = (__m128i)a1[2];
  v45 = a1[3];
  v9 = _mm_cvtsi128_si32(v8);
  v47 = a1[5];
  v44 = v8;
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8));
  v46 = v6;
  *(_QWORD *)&v6 = *((_QWORD *)a1 + 12);
  v43 = v7;
  v48 = v6;
  v44.m128i_i32[2] = v10;
  v44.m128i_i32[0] = v9;
  if ( v10 < v9 )
  {
    v44.m128i_i32[0] = v10;
    v44.m128i_i32[2] = v9;
    v9 = v10;
    v8 = v44;
    v10 = v44.m128i_i32[2];
    v5 |= 1u;
  }
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12));
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
  v44.m128i_i32[3] = v11;
  v44.m128i_i32[1] = v12;
  if ( v11 < v12 )
  {
    v44.m128i_i32[1] = v11;
    v44.m128i_i32[3] = v12;
    v12 = v11;
    v8 = v44;
    v11 = v44.m128i_i32[3];
    v5 |= 2u;
  }
  v13 = _mm_cvtsi128_si32(v7);
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
  v43.m128i_i32[0] = v13;
  v43.m128i_i32[2] = v14;
  if ( v14 < v13 )
  {
    v43.m128i_i32[0] = v14;
    v43.m128i_i32[2] = v13;
    v13 = v14;
    v7 = v43;
    v14 = v43.m128i_i32[2];
    v5 ^= 1u;
  }
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 12));
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 4));
  v43.m128i_i32[3] = v15;
  v43.m128i_i32[1] = v16;
  if ( v15 < v16 )
  {
    v43.m128i_i32[1] = v15;
    v43.m128i_i32[3] = v16;
    v16 = v15;
    v7 = v43;
    v15 = v43.m128i_i32[3];
    v5 ^= 2u;
  }
  if ( v13 >= v14 || v16 >= v15 || v9 >= v10 || v12 >= v11 )
    return 0LL;
  v17 = v14 - v13;
  a3[8].m128i_i64[0] = v47;
  v18 = v11 - v12;
  v51 = v10 - v9;
  v19 = v15 - v16;
  v41 = v11 - v12;
  if ( (1000 * (v10 - v9) + 500) / v17 > 667 && (1000 * v18 + 500) / v19 > 667 )
    v5 |= 0x40u;
  v20 = 524304;
  if ( v51 * v18 >= v17 * v19 )
    v20 = 8;
  v21 = v5 | v20;
  v22 = BuildBltAAInfo;
  if ( v19 == v18 )
  {
    v25 = a4;
    a3[2].m128i_i64[1] = (__int64)BltMask_CY;
    a3[3].m128i_i64[1] = (__int64)BltAV_CY;
    v24 = 1;
    a3[1].m128i_i64[1] = (__int64)BuildBltAAInfo;
LABEL_43:
    v23 = v21;
    goto LABEL_24;
  }
  if ( v19 >= v18 )
  {
    a3[1].m128i_i64[1] = (__int64)BuildShrinkAAInfo;
    v25 = a4;
    a3[2].m128i_i64[1] = (__int64)ShrinkMask_CY;
    a3[3].m128i_i64[1] = (__int64)ShrinkAV_CY;
    if ( v51 >= v17 || (v24 = 3, a4) )
      v24 = 2;
    goto LABEL_43;
  }
  a3[2].m128i_i64[1] = (__int64)ExpandMask_CY;
  a3[3].m128i_i64[1] = (__int64)ExpandAV_CY;
  a3[1].m128i_i64[1] = (__int64)BuildExpandAAInfo;
  v23 = v21;
  if ( v51 <= v17 )
  {
    v24 = 4;
  }
  else
  {
    if ( (v21 & 0x200) == 0 && 5 * v19 >= v41 && 5 * v17 >= v51 )
      v23 = v21 | 0x4000;
    v24 = 5;
  }
  v25 = a4;
LABEL_24:
  v26 = BltMask_CX;
  a3->m128i_i8[4] = v24;
  if ( v17 == v51 )
  {
    a3->m128i_i8[5] = 0;
    v27 = GrayCopyDIB_CX;
    if ( !v25 )
      v27 = CopyDIB_CX;
    v29 = BltAV_CX;
    v28 = BltMask_CX;
  }
  else if ( v17 >= v51 )
  {
    a3->m128i_i8[5] = 1;
    v23 |= 0x2000u;
    v27 = GrayShrinkDIB_CX;
    v32 = v25 == 0;
    v22 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64, __int64, int))BuildShrinkAAInfo;
    v29 = ShrinkAV_CX;
    if ( v32 )
      v27 = ShrinkDIB_CX;
    v28 = ShrinkMask_CX;
  }
  else
  {
    a3->m128i_i8[5] = 2;
    v27 = GrayExpandDIB_CX;
    if ( !v25 )
      v27 = ExpandDIB_CX;
    v22 = BuildExpandAAInfo;
    v28 = ExpandMask_CX;
    v29 = ExpandAV_CX;
  }
  a3[2].m128i_i64[0] = (__int64)v28;
  a3[3].m128i_i64[0] = (__int64)v29;
  a3[1].m128i_i64[0] = (__int64)v22;
  a3->m128i_i64[1] = (__int64)v27;
  if ( (v42 & 0x40) != 0 )
  {
    a3[3].m128i_i64[0] = 0LL;
    a3->m128i_i64[1] = 0LL;
    a3[2].m128i_i64[1] = (__int64)BltMask_CY;
    a3[3].m128i_i64[1] = (__int64)TileAV_CY;
    a3[1].m128i_i64[0] = (__int64)BuildTileAAInfo;
    a3[1].m128i_i64[1] = (__int64)BuildTileAAInfo;
    a3->m128i_i8[4] = 0;
    a3[2].m128i_i64[0] = (__int64)BltMask_CX;
  }
  v30 = DWORD2(v47) - v13;
  a3->m128i_i32[0] = v23;
  a3[8].m128i_i32[2] = v30;
  v31 = HIDWORD(v47) - v16;
  v32 = (v42 & 1) == 0;
  a3[4] = v7;
  a3[8].m128i_i32[3] = v31;
  v40 = v8;
  if ( !v32 && !(unsigned int)IntersectRECTL(&v40, &v45, v22, BltMask_CX) )
    return 0LL;
  if ( (v42 & 0x10) != 0 )
  {
    if ( !(unsigned int)IntersectRECTL(&v40, &v46, v22, v26) )
      return 0LL;
    v9 -= v46;
    v33 = DWORD1(v46);
    v10 -= v46;
    v40.m128i_i32[0] -= v46;
    v12 -= DWORD1(v46);
    v40.m128i_i32[2] -= v46;
    v11 -= DWORD1(v46);
    v40.m128i_i32[1] -= DWORD1(v46);
    v40.m128i_i32[3] -= DWORD1(v46);
    a3[8].m128i_i32[0] -= v46;
    a3[8].m128i_i32[1] -= v33;
    v44.m128i_i32[0] = v9;
    *(__int64 *)((char *)v44.m128i_i64 + 4) = __PAIR64__(v10, v12);
    v44.m128i_i32[3] = v11;
    v8 = v44;
  }
  v49[1] = 0;
  v49[0] = 0;
  *(_QWORD *)&v50 = *(_QWORD *)(a2 + 12);
  if ( !(unsigned int)IntersectRECTL(&v40, v49, v22, v26) )
    return 0LL;
  if ( (v23 & 1) != 0 )
  {
    v36 = v40.m128i_i32[2] - v40.m128i_i32[0];
    v40.m128i_i32[0] = v10 - v40.m128i_i32[2];
    v37 = v36 + v10 - v40.m128i_i32[2];
    a3[7].m128i_i32[0] = v10;
    v44.m128i_i32[0] = 0;
    v44.m128i_i32[2] = v10 - v9;
    v8 = v44;
    v40.m128i_i32[2] = v37;
  }
  if ( (v23 & 2) != 0 )
  {
    v38 = v40.m128i_i32[3] - v40.m128i_i32[1];
    v40.m128i_i32[1] = v11 - v40.m128i_i32[3];
    v39 = v38 + v11 - v40.m128i_i32[3];
    a3[7].m128i_i32[1] = v11;
    v44.m128i_i32[1] = 0;
    v44.m128i_i32[3] = v11 - v12;
    v8 = v44;
    v40.m128i_i32[3] = v39;
  }
  v34 = v40;
  result = 1LL;
  a3[6] = v8;
  a3[5] = v34;
  return result;
}
