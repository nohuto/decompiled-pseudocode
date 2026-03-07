void __fastcall VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  float v4; // xmm2_4
  int i; // r9d
  __int64 v7; // r11
  unsigned int v8; // eax
  __int64 v9; // r10

  v2 = *(_DWORD *)(a1 + 20);
  v3 = 0;
  v4 = *(float *)(a1 + 44);
  for ( i = a2; v3 < v2; *(_DWORD *)(v9 + 12) = v8 )
  {
    VertexTransfer::CNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
      a1,
      *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 16) * v3,
      *(_DWORD *)(a1 + 40),
      i,
      *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v3));
    v8 = BlendStraightColorDW(*(_DWORD *)(v7 + 12), v4);
    ++v3;
  }
}
