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
