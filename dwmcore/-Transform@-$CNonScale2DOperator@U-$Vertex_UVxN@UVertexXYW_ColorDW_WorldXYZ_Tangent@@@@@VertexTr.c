void __fastcall VertexTransfer::CNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        __int64 a1,
        float *a2,
        unsigned int a3,
        float *a4,
        __int64 a5)
{
  float v5; // xmm1_4
  _QWORD *v6; // rax
  char *v7; // rdx
  __int64 v8; // rcx

  *(float *)a5 = (float)((float)(a4[4] * a2[1]) + (float)(*a2 * *a4)) + a4[12];
  v5 = (float)((float)(a4[1] * *a2) + (float)(a4[5] * a2[1])) + a4[13];
  *(_DWORD *)(a5 + 8) = 1065353216;
  *(float *)(a5 + 4) = v5;
  if ( a3 )
  {
    v6 = (_QWORD *)(a5 + 48);
    v7 = (char *)a2 - a5;
    v8 = a3;
    do
    {
      *v6 = *(_QWORD *)((char *)v6 + (_QWORD)v7 - 32);
      ++v6;
      --v8;
    }
    while ( v8 );
  }
}
