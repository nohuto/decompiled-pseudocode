_DWORD *__fastcall EmitterShapes::CPathEmitterEdge::Figure::GetPointOnEdge(char **a1, _DWORD *a2, float a3, float a4)
{
  float v5; // xmm4_4
  unsigned int v6; // eax
  unsigned int *v7; // r10
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  char *v11; // r8

  v5 = 0.0;
  v6 = 1;
  v7 = (unsigned int *)a1[3];
  v8 = (a1[4] - (char *)v7) >> 2;
  if ( v8 <= 1 )
  {
LABEL_5:
    *a2 = 0;
    a2[1] = 0;
  }
  else
  {
    v9 = 1LL;
    while ( (float)(*(float *)&v7[v9] + v5) < a3 )
    {
      ++v6;
      v5 = *(float *)&v7[v9] + v5;
      v9 = v6;
      if ( v6 >= v8 )
        goto LABEL_5;
    }
    v11 = *a1;
    if ( v9 <= (a1[1] - *a1) >> 3 )
      v11 += 8 * v9;
    EmitterShapes::GetPointOnLine(
      (_DWORD)a2,
      *(_QWORD *)&(*a1)[8 * v6 - 8],
      _mm_unpacklo_ps((__m128)*(unsigned int *)v11, (__m128)*((unsigned int *)v11 + 1)).m128_u32[0],
      (_DWORD)a1,
      LODWORD(a4));
  }
  return a2;
}
