void __fastcall CVisual::InvalidateTransformParent(CVisual *this, const struct CVisualTree *a2)
{
  struct CTreeData *v3; // rdi
  __int64 v4; // r9
  __int64 v5; // rax

  if ( this != *((CVisual **)a2 + 8) )
  {
    v3 = CVisual::EnsureTreeData(this, a2);
    v4 = *((_QWORD *)v3 + 32);
    v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 33) + 16LL) + 496LL);
    if ( v4 != v5 )
    {
      *((_QWORD *)v3 + 32) = v5;
      if ( v4 != v5 - 1 )
      {
        CVisual::PropagateFlags(this, 5LL);
        *((_BYTE *)v3 + 161) = 1;
      }
    }
  }
}
