/*
 * XREFs of ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@IEBA_NIPEA_N@Z @ 0x18002DF64
 * Callers:
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@IEBA_NIPEA_N@Z @ 0x18002DF64 (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@IEBA_NIPEA_N@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x180093070 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@IEBA_NIPEA_N@Z @ 0x18002DF64 (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@IEBA_NIPEA_N@Z.c)
 *     ?IsWindowBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z @ 0x18002EC24 (-IsWindowBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z.c)
 *     ?IsBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z @ 0x18002EC70 (-IsBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z.c)
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x180030C4C (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 */

char __fastcall CBrushRenderingGraph::DoesBackdropInputContributeToSubgraph(
        CBrushRenderingGraph *this,
        unsigned int a2,
        bool *a3)
{
  char v3; // bl
  char v6; // r12
  char v7; // si
  unsigned int v8; // r15d
  __int64 v9; // rdi
  unsigned int *v10; // rdi
  __int64 v11; // rbp
  unsigned int v13; // [rsp+58h] [rbp+10h]

  v3 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * a2);
  v13 = *(_DWORD *)(v9 + 76);
  if ( v13 )
  {
    v10 = (unsigned int *)(v9 + 84);
    do
    {
      v11 = *v10;
      if ( *((_BYTE *)v10 + 4) )
      {
        if ( CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(*(_QWORD *)(*((_QWORD *)this + 18)
                                                                                             + 8 * v11)
                                                                                 + 8LL)) )
          v7 |= CBrushRenderingGraph::DoesBackdropInputContributeToSubgraph(this, v11, a3);
      }
      else if ( CBrushRenderingGraph::IsBackdropInput(this, v11)
             || CBrushRenderingGraph::IsWindowBackdropInput(this, v11) )
      {
        v6 = 1;
        goto LABEL_8;
      }
      ++v8;
      v10 += 11;
    }
    while ( v8 < v13 );
    if ( !v7 )
      goto LABEL_8;
    *a3 = 1;
    return 1;
  }
LABEL_8:
  *a3 = 0;
  if ( v6 || v7 )
    return 1;
  return v3;
}
