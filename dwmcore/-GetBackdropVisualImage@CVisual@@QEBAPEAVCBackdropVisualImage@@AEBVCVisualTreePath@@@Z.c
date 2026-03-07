struct CBackdropVisualImage *__fastcall CVisual::GetBackdropVisualImage(
        CVisual *this,
        const struct CVisualTreePath *a2)
{
  struct CBackdropVisualImage *result; // rax

  result = CVisual::FindTreeData(this, *(const struct CVisualTree **)(*((_QWORD *)a2 + 1) - 8LL));
  if ( result )
    return CTreeData::GetBackdropVisualImage(result, a2);
  return result;
}
