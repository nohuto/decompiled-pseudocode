_DWORD *__fastcall EmitterShapes::CPathEmitterEdge::GetPointOnEdge(__int64 a1, _DWORD *a2, float a3)
{
  float v3; // xmm2_4
  __int64 v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0

  v3 = a3 * *(float *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  while ( 1 )
  {
    if ( v5 == *(_QWORD *)(a1 + 32) )
    {
      *a2 = 0;
      a2[1] = 0;
      return a2;
    }
    v7 = v6;
    *(float *)&v7 = *(float *)&v6 + *(float *)(v5 + 48);
    if ( *(float *)&v7 >= v3 )
      break;
    v6 = v7;
    v5 += 56LL;
  }
  EmitterShapes::CPathEmitterEdge::Figure::GetPointOnEdge(v5, a2);
  return a2;
}
