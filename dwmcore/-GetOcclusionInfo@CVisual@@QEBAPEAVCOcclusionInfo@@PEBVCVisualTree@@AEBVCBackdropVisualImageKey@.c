struct COcclusionInfo *__fastcall CVisual::GetOcclusionInfo(
        CVisual *this,
        const struct CVisualTree *a2,
        const struct CBackdropVisualImageKey *a3)
{
  __int64 v4; // rbx
  __int64 **TreeData; // rax

  v4 = 0LL;
  TreeData = CVisual::FindTreeData(this, a2);
  if ( TreeData )
    return CTreeData::GetOcclusionInfo((CTreeData *)TreeData, a3, 0);
  return (struct COcclusionInfo *)v4;
}
