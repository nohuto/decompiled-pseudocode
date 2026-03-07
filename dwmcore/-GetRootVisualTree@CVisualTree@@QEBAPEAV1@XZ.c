struct CVisualTree *__fastcall CVisualTree::GetRootVisualTree(CVisualTree *this)
{
  CVisual *v1; // r11
  CVisualTree *v2; // r10
  struct CVisualTree *VisualTreeNoRef; // rax
  __int64 v4; // r11

  v1 = (CVisual *)*((_QWORD *)this + 8);
  v2 = this;
  while ( v1 )
  {
    VisualTreeNoRef = CVisual::GetVisualTreeNoRef(v1);
    v1 = *(CVisual **)(v4 + 88);
    if ( VisualTreeNoRef )
      v2 = VisualTreeNoRef;
  }
  return v2;
}
