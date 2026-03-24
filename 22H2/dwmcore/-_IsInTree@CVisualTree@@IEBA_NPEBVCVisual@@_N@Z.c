/*
 * XREFs of ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z @ 0x1800C75C8
 * Callers:
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x180003AB0 (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000BFF8 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x18001065C (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z @ 0x18008D730 (-PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B71D0 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJ_N@Z @ 0x1800D3D60 (-UpdateTransformChildren@CPreComputeContext@@AEAAJ_N@Z.c)
 *     ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJ_N@Z @ 0x1800D95C4 (-UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJ_N@Z.c)
 *     CComposition::ForEachCursorVisual__lambda_f30d7ccad3626cf56a10f5441da8a523___ @ 0x1800ED4B4 (CComposition--ForEachCursorVisual__lambda_f30d7ccad3626cf56a10f5441da8a523___.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x1801F472C (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisualTree::_IsInTree(const struct CVisual **this, const struct CVisual *a2, char a3)
{
  char result; // al
  const struct CVisual *v4; // r9

  result = 0;
  v4 = a2;
  while ( a2 && (!a3 || (*((_BYTE *)a2 + 95) & 2) != 0 && (*((_BYTE *)a2 + 94) & 4) == 0) )
  {
    if ( a2 == this[7] )
      return 1;
    if ( v4 )
    {
      v4 = (const struct CVisual *)*((_QWORD *)v4 + 10);
      if ( v4 )
      {
        if ( a2 == v4 )
          return result;
        v4 = (const struct CVisual *)*((_QWORD *)v4 + 10);
        if ( a2 == v4 )
          return result;
      }
    }
    a2 = (const struct CVisual *)*((_QWORD *)a2 + 10);
  }
  return result;
}
