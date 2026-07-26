/*
 * XREFs of ?ndisXlateWakeUpPatternListToWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0096A2C
 * Callers:
 *     ?ndisOidPostWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091F00 (-ndisOidPostWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

void __fastcall ndisXlateWakeUpPatternListToWolPatternList(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  unsigned int v3; // edx
  SIZE_T v4; // r14
  __m128i *v5; // r15
  unsigned int v6; // r10d
  __m128i *v7; // r9
  unsigned int v8; // r11d
  unsigned __int64 v9; // r8
  int v10; // eax
  size_t v11; // r8
  __m128i *PoolWithTag; // rax
  __m128i *v13; // r13
  __m128i *v14; // r12
  unsigned int v15; // eax
  unsigned int v16; // ebp
  __m128i v17; // xmm1
  __int32 v18; // esi
  unsigned int v19; // ecx
  __int64 v20; // rdi
  unsigned __int64 v21; // rbx
  unsigned int v22; // edx
  __int64 v23; // r8
  __int64 v24; // [rsp+50h] [rbp-58h]
  unsigned int v25; // [rsp+B0h] [rbp+8h]
  unsigned int v26; // [rsp+B0h] [rbp+8h]
  __int64 v27; // [rsp+C0h] [rbp+18h]
  __m128i *v28; // [rsp+C8h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 4);
  v27 = v1;
  v3 = 0;
  v4 = *(unsigned int *)(v1 + 52);
  if ( (unsigned int)v4 > *(_DWORD *)(v1 + 48) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x74u,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids);
    return;
  }
  if ( !(_DWORD)v4 )
    return;
  v5 = *(__m128i **)(v1 + 40);
  v6 = *(_DWORD *)(v1 + 52);
  *(_QWORD *)(v1 + 52) = 0LL;
  v7 = v5;
  if ( (unsigned int)v4 >= 0x18 )
  {
    do
    {
      v24 = v7[1].m128i_i64[0];
      v8 = _mm_cvtsi128_si32(_mm_srli_si128(*v7, 8));
      v9 = (unsigned int)v24 + _mm_srli_si128(*v7, 8).m128i_u32[1];
      v3 += (v8 + v24 + 203) & 0xFFFFFFF8;
      if ( (unsigned __int64)v8 + 24 > v9 )
        LODWORD(v9) = v8 + 24;
      v6 -= v9;
      v7 = (__m128i *)((char *)v7 + (unsigned int)v9);
    }
    while ( v6 >= 0x18 );
  }
  *((_DWORD *)a1 + 10) = 0;
  v10 = 0;
  if ( *(_DWORD *)(v1 + 48) < v3 )
  {
    v10 = -1073676268;
    *(_DWORD *)(v1 + 56) = v3;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  if ( v10 )
  {
    v11 = v4;
LABEL_13:
    memset(v5, 0, v11);
    return;
  }
  PoolWithTag = (__m128i *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x7877444Eu);
  v28 = PoolWithTag;
  v13 = PoolWithTag;
  v11 = v4;
  if ( !PoolWithTag )
  {
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_13;
  }
  memmove(PoolWithTag, v5, v4);
  memset(v5, 0, *(unsigned int *)(v1 + 48));
  v14 = v5;
  v15 = 0;
  if ( (unsigned int)v4 >= 0x18 )
  {
    v16 = 0;
    do
    {
      v17 = *v13;
      v18 = v13[1].m128i_i64[0];
      v14[10].m128i_i32[0] = 196;
      v19 = _mm_cvtsi128_si32(_mm_srli_si128(v17, 8));
      v14[9].m128i_i32[1] = v17.m128i_i32[1];
      v20 = v19;
      v25 = v19;
      v14[10].m128i_i32[1] = v19;
      v14->m128i_i32[0] = 12845440;
      v14[10].m128i_i32[2] = v19 + 196;
      v14->m128i_i32[2] = _mm_cvtsi128_si32(v17);
      v14->m128i_i32[3] = 1;
      v14[10].m128i_i32[3] = v18;
      memmove((char *)v14[12].m128i_i64 + 4, &v13[1].m128i_u64[1], v19);
      v21 = HIDWORD(_mm_srli_si128(v17, 8).m128i_u64[0]);
      memmove(&v14->m128i_i8[v14[10].m128i_u32[2]], &v13->m128i_i8[v21], v14[10].m128i_u32[3]);
      v22 = v21 + v18;
      v16 += (v18 + v25 + 203) & 0xFFFFFFF8;
      v23 = v16;
      if ( v20 + 24 > (unsigned __int64)(unsigned int)(v21 + v18) )
        v22 = v25 + 24;
      LODWORD(v4) = v4 - v22;
      v13 = (__m128i *)((char *)v13 + v22);
      if ( (unsigned int)v4 < 0x18 )
        v23 = 0LL;
      v14[9].m128i_i32[2] = v23;
      v14 = (__m128i *)((char *)v5 + v23);
    }
    while ( (unsigned int)v4 >= 0x18 );
    v13 = v28;
    v26 = v16;
    v1 = v27;
    v15 = v26;
  }
  *(_DWORD *)(v1 + 52) = v15;
  *(_DWORD *)(v1 + 56) = v15;
  ExFreePoolWithTag(v13, 0);
}
