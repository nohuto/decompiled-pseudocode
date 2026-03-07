void __fastcall CDrawingContext::DrawVisualTreeData::~DrawVisualTreeData(
        CDrawingContext::DrawVisualTreeData *this,
        unsigned int a2)
{
  CVisualTreePath *v2; // rcx

  v2 = (CVisualTreePath *)*((_QWORD *)this + 4);
  if ( v2 )
    CVisualTreePath::`scalar deleting destructor'(v2, a2);
}
