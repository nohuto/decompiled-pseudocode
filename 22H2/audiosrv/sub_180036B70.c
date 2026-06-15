/*
 * XREFs of sub_180036B70 @ 0x180036B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005D53C @ 0x18005D53C (sub_18005D53C.c)
 */

__int64 __fastcall sub_180036B70(__int64 a1, unsigned int a2, float *a3, _BYTE *a4, _QWORD *a5)
{
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  float *v12; // r11
  __m128 v13; // xmm1
  unsigned int v14; // r11d
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  float v19; // xmm0_4
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // rsi
  float v24; // xmm1_4
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == *(_DWORD *)(a1 + 92) )
  {
    v8 = 0LL;
    if ( a2 )
    {
      if ( a2 >= 0x10 )
      {
        v9 = *(_QWORD *)(a1 + 112);
        v10 = a2 - 1;
        v11 = a1 + 100;
        v12 = &a3[v10];
        v13 = _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 100), (__m128)*(unsigned int *)(a1 + 100), 0);
        if ( ((unsigned __int64)a3 > v9 + 4 * v10 || (unsigned __int64)v12 < v9)
          && ((unsigned __int64)a3 > v11 || (unsigned __int64)v12 < v11) )
        {
          v14 = 8;
          do
          {
            *(__m128 *)&a3[v8] = _mm_mul_ps(*(__m128 *)(v9 + 4 * v8), v13);
            v8 = (unsigned int)(v8 + 16);
            *(__m128 *)&a3[v14 - 4] = _mm_mul_ps(*(__m128 *)(v9 + 4LL * (v14 - 4)), v13);
            *(__m128 *)&a3[v14] = _mm_mul_ps(*(__m128 *)(v9 + 4LL * v14), v13);
            v15 = v14 + 4;
            v14 += 16;
            *(__m128 *)&a3[v15] = _mm_mul_ps(*(__m128 *)(v9 + 4 * v15), v13);
          }
          while ( (unsigned int)v8 < (a2 & 0xFFFFFFF0) );
        }
      }
      if ( (unsigned int)v8 < a2 )
      {
        v16 = *(_QWORD *)(a1 + 112);
        v17 = v8;
        v18 = a2 - (unsigned int)v8;
        do
        {
          v19 = *(float *)(v17 * 4 + v16);
          a3[v17++] = v19 * *(float *)(a1 + 100);
          --v18;
        }
        while ( v18 );
      }
    }
    v20 = *(_QWORD *)(a1 + 104);
    *a4 = *(_BYTE *)(a1 + 456);
    v21 = *(_QWORD *)(a1 + 448);
    if ( v20 >= v21 )
      v21 = v20;
    *a5 = v21;
    if ( a2 )
    {
      v22 = *(_QWORD *)(a1 + 440) - (_QWORD)a3;
      v23 = a2;
      do
      {
        if ( *(_QWORD *)(a1 + 464) )
          v24 = sub_18005D53C();
        else
          v24 = *(float *)((char *)a3 + v22) * *a3;
        *a3++ = v24;
        --v23;
      }
      while ( v23 );
    }
    return 0LL;
  }
  else
  {
    sub_18004BD84(retaddr, 1317LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", 2147942487LL);
    sub_18004BD84(retaddr, 1602LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", 2147942487LL);
    return 2147942487LL;
  }
}
