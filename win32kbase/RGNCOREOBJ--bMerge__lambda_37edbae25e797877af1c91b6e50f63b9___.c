char __fastcall RGNCOREOBJ::bMerge__lambda_37edbae25e797877af1c91b6e50f63b9___(
        __m128i **a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5)
{
  unsigned int *v5; // rsi
  __m128i **v6; // r15
  int *v7; // rdi
  _DWORD *v8; // r14
  __m128i si128; // xmm0
  __int64 v10; // rdx
  unsigned int *v11; // rbx
  unsigned int v12; // r8d
  int *v13; // r13
  signed int v14; // ecx
  _DWORD *v15; // r12
  signed int v16; // ebp
  int *v17; // r9
  signed int v18; // edx
  unsigned __int8 v19; // r11
  unsigned __int8 v20; // al
  int v21; // r10d
  int v22; // ecx
  int v23; // edx
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // r8d
  int v27; // eax
  __int32 v28; // eax
  __int32 v29; // eax
  int v30; // eax
  unsigned int v31; // eax
  unsigned int v33; // eax
  unsigned int v34; // ecx
  RGNOBJ *v35; // rbx
  __int64 v36; // rcx
  _DWORD *v37; // [rsp+28h] [rbp-60h]
  __m128i v38; // [rsp+30h] [rbp-58h]

  v5 = 0LL;
  v6 = a1;
  v7 = *(int **)(*(_QWORD *)a2 + 8LL);
  v8 = *(_DWORD **)(*(_QWORD *)a3 + 8LL);
  v37 = v8;
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
  (*a1)[1].m128i_i64[0] = (*a1)->m128i_i64[1];
  (*a1)[1].m128i_i32[2] = 0;
  (*a1)[1].m128i_i32[3] = 0;
  (*a1)[2] = si128;
  while ( 2 )
  {
    v10 = (*v6)->m128i_u32[0];
    v11 = (unsigned int *)(*v6)[1].m128i_i64[0];
    v12 = 4 * (*v8 + *v7) + 16;
    if ( v12 > (*v6)->m128i_i32[0] - (*v6)[1].m128i_i32[2] )
    {
      v33 = 2 * v10;
      if ( (unsigned __int64)(2 * v10) > 0xFFFFFFFF )
        return 0;
      v34 = v33 + v12;
      if ( v33 + v12 < v33 )
        return 0;
      if ( v34 + 1120 < v34 )
        return 0;
      v35 = *(RGNOBJ **)(a5 + 8);
      if ( !(unsigned int)RGNOBJ::bExpand(v35, v34 + 1120) )
        return 0;
      if ( *(_QWORD *)v35 )
        v36 = *(_QWORD *)v35 + 24LL;
      else
        v36 = 0LL;
      **(_QWORD **)a5 = v36;
      v11 = (unsigned int *)(*v6)[1].m128i_i64[0];
      if ( v5 )
        v5 = &v11[-*(v11 - 1) - 4];
    }
    v13 = v8 + 3;
    v14 = v8[1];
    v15 = v11 + 3;
    v16 = v7[2];
    v17 = v7 + 3;
    v18 = v7[1];
    v19 = a4;
    if ( v16 >= v8[2] )
      v16 = v8[2];
    v11[2] = v16;
    v20 = 1;
    if ( v18 <= v14 )
      v18 = v14;
    v11[1] = v18;
    v21 = *v8;
    v22 = *v7;
    *v11 = 0;
    while ( v22 )
    {
      v23 = *v17;
      v24 = v20;
      if ( v21 )
      {
        v30 = *v13;
        if ( v23 < *v13 )
        {
          ++v17;
          --v22;
          v20 = afjA[v24];
        }
        else
        {
          ++v13;
          --v21;
          if ( v23 <= v30 )
          {
            ++v17;
            v20 = afjAB[v24];
            --v22;
          }
          else
          {
            v23 = v30;
            v20 = afjB[v24];
          }
        }
      }
      else
      {
        v20 = afjA[v20];
        ++v17;
        --v22;
      }
LABEL_13:
      if ( (v19 & v20) != 0 )
      {
        ++*v11;
        *v15++ = v23;
        v19 ^= 0xFu;
      }
    }
    if ( v21 )
    {
      v23 = *v13++;
      --v21;
      v20 = afjB[v20];
      goto LABEL_13;
    }
    v8 = v37;
    v6 = a1;
    v11[*v11 + 3] = *v11;
    if ( v5 && (v25 = *v5, (_DWORD)v25 == *v11) && !memcmp(v5 + 3, v11 + 3, 4 * v25) )
    {
      v31 = v11[2];
      v11 = v5;
      v5[2] = v31;
    }
    else if ( v5 != v11 )
    {
      (*a1)[1].m128i_i64[0] = (__int64)&v11[*v11 + 4];
      (*a1)[1].m128i_i32[2] += 4 * *v11 + 16;
      ++(*a1)[1].m128i_i32[3];
    }
    v26 = v11[2];
    if ( v26 == 0x7FFFFFFF )
      return 1;
    if ( *v11 )
    {
      v38 = (*a1)[2];
      v27 = _mm_cvtsi128_si32(v38);
      if ( (int)v11[3] < v27 )
        v27 = v11[3];
      v38.m128i_i32[0] = v27;
      v28 = HIDWORD((*a1)[2].m128i_i64[0]);
      if ( (int)v11[1] < v38.m128i_i32[1] )
        v28 = v11[1];
      v38.m128i_i32[1] = v28;
      v29 = (*a1)[2].m128i_i64[1];
      if ( (int)v11[*v11 + 2] > v38.m128i_i32[2] )
        v29 = v11[*v11 + 2];
      v38.m128i_i32[2] = v29;
      if ( v26 > v38.m128i_i32[3] )
        v38.m128i_i32[3] = v11[2];
      (*a1)[2] = v38;
    }
    if ( v16 == v7[2] )
      v7 = (int *)((char *)v7 + (unsigned int)(4 * *v7 + 16));
    if ( v16 == v37[2] )
    {
      v8 = (_DWORD *)((char *)v37 + (unsigned int)(4 * *v37 + 16));
      v37 = v8;
    }
    if ( (unsigned __int64)v7 < *(_QWORD *)(*(_QWORD *)a2 + 16LL)
      && (unsigned __int64)v8 < *(_QWORD *)(*(_QWORD *)a3 + 16LL) )
    {
      v5 = v11;
      continue;
    }
    return 0;
  }
}
