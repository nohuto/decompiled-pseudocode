void __fastcall CHolographicInteropTexture::ReleaseVisualTree(CHolographicInteropTexture *this)
{
  CVisualTree **v1; // rbx

  v1 = (CVisualTree **)((char *)this + 96);
  if ( *((_QWORD *)this + 12) )
  {
    CVisualTree::RemoveTreeClient(
      *v1,
      (struct IVisualTreeClient *)(((unsigned __int64)this + 64) & -(__int64)(this != 0LL)));
    ReleaseInterface<CVisualTree>((__int64 *)v1);
  }
}
