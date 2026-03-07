const struct CTreeData *__fastcall CVisual::GetParentTreeData(
        CVisual **this,
        const struct CVisualTree *a2,
        struct CTreeData *a3,
        bool *a4)
{
  const struct CTreeData *result; // rax
  bool v5; // si
  CVisual *TransformParent; // rax

  result = 0LL;
  v5 = 0;
  if ( this != *((CVisual ***)a2 + 8) )
  {
    TransformParent = CVisual::GetTransformParent((CVisual *)this, a2, 0LL);
    if ( TransformParent )
    {
      result = CVisual::FindTreeData(TransformParent, a2);
      v5 = 1;
    }
    else
    {
      result = CVisual::FindTreeData(this[11], a2);
    }
  }
  if ( a4 )
    *a4 = v5;
  return result;
}
