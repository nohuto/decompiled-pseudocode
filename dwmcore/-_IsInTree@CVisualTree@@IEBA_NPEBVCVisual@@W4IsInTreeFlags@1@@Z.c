/*
 * XREFs of ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800094F0
 * Callers:
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800059F0 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x180008F54 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?Append@CVisualTreePath@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z @ 0x180014100 (-Append@CVisualTreePath@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x180014F2C (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004B1A0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x1800A43BC (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x18012DF70 (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 *     _lambda_4d6035b5fdecd7bb0589f89584db9c3e_::operator() @ 0x1801E94EC (_lambda_4d6035b5fdecd7bb0589f89584db9c3e_--operator().c)
 *     _lambda_f7805202518b118888e0b3d23c76c683_::operator() @ 0x1801E958C (_lambda_f7805202518b118888e0b3d23c76c683_--operator().c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x180210D58 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z @ 0x1800095EC (-GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z.c)
 *     ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x180009628 (-GetEffectAlpha@CVisual@@QEBAMXZ.c)
 */

char __fastcall CVisualTree::_IsInTree(const struct CVisualTree *a1, __int64 a2, int a3)
{
  char v3; // si
  float v5; // xmm7_4
  __int64 v6; // rbx
  __int64 v8; // rdi
  float VisualAlpha; // xmm6_4

  v3 = 0;
  v5 = *(float *)&FLOAT_1_0;
  v6 = a2;
  v8 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( (unsigned int)(a3 - 1) <= 1 )
      {
        if ( (*(_BYTE *)(v6 + 103) & 1) == 0 )
          break;
        if ( (*(_BYTE *)(v6 + 102) & 2) != 0 )
          break;
        if ( a3 == 2 )
        {
          VisualAlpha = CVisual::GetVisualAlpha((CVisual *)v6, a1);
          v5 = v5 * (float)(VisualAlpha * CVisual::GetEffectAlpha((CVisual *)v6));
          if ( COERCE_FLOAT(LODWORD(v5) & _xmm) < 0.0000011920929 )
            break;
        }
      }
      if ( v6 == *((_QWORD *)a1 + 8) )
        return 1;
      if ( !v8 || (v8 = *(_QWORD *)(v8 + 88)) == 0 || v6 != v8 && (v8 = *(_QWORD *)(v8 + 88), v6 != v8) )
      {
        v6 = *(_QWORD *)(v6 + 88);
        if ( v6 )
          continue;
      }
      return v3;
    }
  }
  return v3;
}
