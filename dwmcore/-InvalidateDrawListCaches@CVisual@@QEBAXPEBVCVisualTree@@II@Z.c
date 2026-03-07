void __fastcall CVisual::InvalidateDrawListCaches(CVisual *this, const struct CVisualTree *a2)
{
  __int64 **TreeData; // rax
  __int64 *v3; // rbx
  __int64 *v4; // rdi

  TreeData = CVisual::FindTreeData(this, a2);
  if ( TreeData )
  {
    v3 = TreeData[2];
    v4 = TreeData[3];
    while ( v3 != v4 )
    {
      if ( !*(_DWORD *)v3 && !*((_DWORD *)v3 + 1) )
        CDrawListCache::Invalidate((CDrawListCache *)v3[2]);
      v3 += 3;
    }
  }
}
