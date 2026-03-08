/*
 * XREFs of RGNCOREOBJ::bMerge__lambda_4f08034d680f118a0a3da8ec85dc396d___ @ 0x1C0042368
 * Callers:
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C003E660 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003E878 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 * Callees:
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x1C001CA1C (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?vCopy@RGNCOREOBJ@@QEAAXAEBV1@@Z @ 0x1C0043830 (-vCopy@RGNCOREOBJ@@QEAAXAEBV1@@Z.c)
 *     ??0RGNCOREMEMOBJ@@QEAA@K@Z @ 0x1C00A8764 (--0RGNCOREMEMOBJ@@QEAA@K@Z.c)
 *     memcmp @ 0x1C00E17D0 (memcmp.c)
 */

char __fastcall RGNCOREOBJ::bMerge__lambda_4f08034d680f118a0a3da8ec85dc396d___(
        __m128i **a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        struct RGNCOREOBJ *a5)
{
  __m128i **v5; // r14
  unsigned int *v6; // rsi
  unsigned __int8 v7; // r13
  int *v8; // rbp
  int *v9; // r15
  __m128i si128; // xmm0
  const struct RGNCOREOBJ *v11; // rdi
  __int64 v12; // rdx
  unsigned int *v13; // rbx
  unsigned int v14; // r8d
  int *v15; // r10
  signed int v16; // r12d
  int *v17; // r8
  signed int v18; // edx
  signed int v19; // ecx
  _DWORD *v20; // r11
  int v21; // r9d
  unsigned __int8 v22; // al
  int v23; // edx
  __int64 v24; // rax
  __int32 v25; // r9d
  unsigned int v26; // edx
  signed int v27; // ecx
  __m128i *v28; // r8
  int v29; // eax
  __int32 v30; // ecx
  __int32 v31; // eax
  __int32 v32; // edx
  __int32 v33; // eax
  __int32 v34; // eax
  int v35; // ecx
  __int64 v36; // r11
  int v37; // eax
  _BYTE *v38; // rax
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // ecx
  PVOID v43; // rbx
  void *v44; // rax
  PVOID v45; // [rsp+20h] [rbp-68h] BYREF
  __m128i v46; // [rsp+28h] [rbp-60h]

  v5 = a1;
  v6 = 0LL;
  v7 = a4;
  v8 = *(int **)(*(_QWORD *)a2 + 8LL);
  v9 = *(int **)(*(_QWORD *)a3 + 8LL);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) - 4LL) + 16)
                 + 12) != 0x7FFFFFFF
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 16LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 16LL) - 4LL) + 16)
                 + 12) != 0x7FFFFFFF )
  {
    return 0;
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v11 = a5;
  (*a1)[1].m128i_i64[0] = (*a1)->m128i_i64[1];
  (*a1)[1].m128i_i32[2] = 0;
  (*a1)[1].m128i_i32[3] = 0;
  (*a1)[2] = si128;
  while ( 2 )
  {
    v12 = (*v5)->m128i_u32[0];
    v13 = (unsigned int *)(*v5)[1].m128i_i64[0];
    v14 = 4 * (*v9 + *v8) + 16;
    if ( v14 > (*v5)->m128i_i32[0] - (*v5)[1].m128i_i32[2] )
    {
      v41 = 2 * v12;
      if ( (unsigned __int64)(2 * v12) > 0xFFFFFFFF )
        return 0;
      v42 = v41 + v14;
      if ( v41 + v14 < v41 || v42 + 1120 < v42 )
        return 0;
      RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v45, v42 + 1120);
      v43 = v45;
      if ( v45 )
      {
        RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v45, v11);
        v44 = *(void **)v11;
        *(_QWORD *)v11 = v43;
        LOBYTE(v43) = 1;
        v45 = v44;
      }
      RGNCOREOBJ::vDeleteRGNCOREOBJ(&v45);
      if ( !(_BYTE)v43 )
        return 0;
      v13 = (unsigned int *)(*v5)[1].m128i_i64[0];
      if ( v6 )
        v6 = &v13[-*(v13 - 1) - 4];
    }
    v15 = v8 + 3;
    v16 = v8[2];
    v17 = v9 + 3;
    v18 = v8[1];
    v19 = v9[1];
    if ( v16 >= v9[2] )
      v16 = v9[2];
    v13[2] = v16;
    if ( v18 <= v19 )
      v18 = v19;
    v46.m128i_i64[0] = (__int64)(v13 + 3);
    v13[1] = v18;
    v20 = v13 + 3;
    v21 = *v8;
    v22 = 1;
    v23 = *v9;
    *v13 = 0;
    while ( v21 )
    {
      v35 = *v15;
      v36 = v22;
      if ( v23 )
      {
        v37 = *v17;
        if ( v35 < *v17 )
        {
          v38 = afjA;
        }
        else
        {
          ++v17;
          --v23;
          if ( v35 > v37 )
          {
            v35 = v37;
            v38 = afjB;
LABEL_48:
            v22 = v38[v36];
            goto LABEL_36;
          }
          v38 = &afjAB;
        }
        ++v15;
        --v21;
        goto LABEL_48;
      }
      v22 = afjA[v22];
      ++v15;
      --v21;
LABEL_36:
      v20 = (_DWORD *)v46.m128i_i64[0];
LABEL_37:
      if ( (v7 & v22) != 0 )
      {
        ++*v13;
        *v20++ = v35;
        v46.m128i_i64[0] = (__int64)v20;
        v7 ^= 0xFu;
      }
    }
    if ( v23 )
    {
      v35 = *v17++;
      --v23;
      v22 = afjB[v22];
      goto LABEL_37;
    }
    v11 = a5;
    v5 = a1;
    v13[*v13 + 3] = *v13;
    if ( v6 && (v24 = *v6, (_DWORD)v24 == *v13) && !memcmp(v6 + 3, v13 + 3, 4 * v24) )
    {
      v40 = v13[2];
      v13 = v6;
      v6[2] = v40;
    }
    else if ( v6 != v13 )
    {
      (*a1)[1].m128i_i64[0] = (__int64)&v13[*v13 + 4];
      (*a1)[1].m128i_i32[2] += 4 * *v13 + 16;
      ++(*a1)[1].m128i_i32[3];
    }
    v25 = v13[2];
    if ( v25 != 0x7FFFFFFF )
    {
      v26 = *v13;
      if ( *v13 )
      {
        v27 = v13[3];
        v28 = *a1;
        v46 = (*a1)[2];
        v29 = _mm_cvtsi128_si32(v46);
        if ( v27 < v29 )
          v29 = v27;
        v30 = v13[1];
        v46.m128i_i32[0] = v29;
        v31 = v46.m128i_i32[1];
        if ( v30 < v46.m128i_i32[1] )
          v31 = v30;
        v46.m128i_i32[1] = v31;
        v32 = v13[v26 + 2];
        v33 = v46.m128i_i32[2];
        if ( v32 > v46.m128i_i32[2] )
          v33 = v32;
        v46.m128i_i32[2] = v33;
        v34 = v46.m128i_i32[3];
        if ( v25 > v46.m128i_i32[3] )
          v34 = v25;
        v46.m128i_i32[3] = v34;
        v28[2] = v46;
      }
      if ( v16 == v8[2] )
        v8 = (int *)((char *)v8 + (unsigned int)(4 * *v8 + 16));
      if ( v16 == v9[2] )
        v9 = (int *)((char *)v9 + (unsigned int)(4 * *v9 + 16));
      if ( (unsigned __int64)v8 >= *(_QWORD *)(*(_QWORD *)a2 + 16LL)
        || (unsigned __int64)v9 >= *(_QWORD *)(*(_QWORD *)a3 + 16LL) )
      {
        return 0;
      }
      v7 = a4;
      v6 = v13;
      continue;
    }
    return 1;
  }
}
