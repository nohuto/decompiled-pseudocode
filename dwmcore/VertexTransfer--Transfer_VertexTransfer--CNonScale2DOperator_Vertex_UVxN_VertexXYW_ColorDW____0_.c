void __fastcall VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  int i; // r9d
  __int64 v6; // r11
  __int64 v7; // r10

  v2 = *(_DWORD *)(a1 + 20);
  v3 = 0;
  for ( i = a2; v3 < v2; *(_DWORD *)(v7 + 12) = *(_DWORD *)(v6 + 12) )
  {
    VertexTransfer::CNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
      a1,
      *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 16) * v3,
      *(_DWORD *)(a1 + 40),
      i,
      *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v3));
    ++v3;
  }
}
