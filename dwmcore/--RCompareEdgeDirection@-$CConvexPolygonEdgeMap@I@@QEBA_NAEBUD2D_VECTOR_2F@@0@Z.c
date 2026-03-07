bool __fastcall CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection::operator()(__int64 a1, float *a2, float *a3)
{
  float v3; // xmm3_4
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  float v9; // xmm1_4
  float v10; // xmm2_4
  unsigned int v11; // r11d
  _DWORD v13[4]; // [rsp+0h] [rbp-28h] BYREF

  v3 = a2[1];
  v13[0] = 0;
  v13[1] = 1;
  v5 = 1LL;
  v13[2] = 3;
  v6 = 1LL;
  v13[3] = 2;
  v7 = 2LL;
  v8 = 2LL;
  v9 = a3[1];
  v10 = *a3;
  if ( v3 <= 0.0 )
    v6 = 0LL;
  if ( *a2 >= 0.0 )
    v8 = 0LL;
  v11 = v13[v8 + v6];
  if ( v9 <= 0.0 )
    v5 = 0LL;
  if ( v10 >= 0.0 )
    v7 = 0LL;
  if ( v11 < v13[v7 + v5] )
    return 1;
  if ( v11 == v13[v7 + v5] )
    return (float)((float)(v9 * *a2) - (float)(v10 * v3)) > 0.000081380211;
  return 0;
}
