/*
 * XREFs of ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x180014F2C
 * Callers:
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x180089670 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 * Callees:
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800094F0 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z @ 0x180014FC8 (-IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z.c)
 */

char __fastcall CVisualTree::IsAncestorInSameSpace(
        const struct CVisual **this,
        const struct CVisual **a2,
        const struct CVisual *a3)
{
  const struct CVisual **v4; // rbx
  char v6; // di
  char IsPreserve3D; // al
  const struct CVisual *v8; // rdx
  char v9; // r9

  v4 = a2;
  v6 = 0;
  if ( CVisualTree::_IsInTree((const struct CVisualTree *)this, (__int64)a2, 0) )
  {
    if ( CVisualTree::_IsInTree((const struct CVisualTree *)this, (__int64)a3, 0) )
    {
      if ( v4 != (const struct CVisual **)a3 )
      {
        CVisual::IsPreserve3D((CVisual *)v4, v4[11]);
        if ( v4 != (const struct CVisual **)this[8] )
        {
          do
          {
            IsPreserve3D = CVisual::IsPreserve3D((CVisual *)v4, v4[11]);
            if ( v9 != IsPreserve3D )
              break;
            if ( v8 == a3 )
              return 1;
            v4 = (const struct CVisual **)v8;
          }
          while ( v8 != this[8] );
        }
      }
    }
  }
  return v6;
}
