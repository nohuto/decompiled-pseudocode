__int64 __fastcall CVisual::CreateOrUpdateBVI(
        struct CVisual *a1,
        struct CVisualTreePath *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  CVisual *v7; // rsi
  const struct CVisualTree *v8; // rbp
  CTreeData *v9; // r15
  struct CBackdropVisualImage *BackdropVisualImage; // rax
  CCachedVisualImage *v11; // rdi
  unsigned int v12; // ebx
  bool v14; // bp
  const char **DebugString; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  _BYTE v18[8]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v19[8]; // [rsp+38h] [rbp-30h] BYREF
  void *lpMem; // [rsp+78h] [rbp+10h] BYREF

  v7 = *(CVisual **)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 64LL);
  v8 = *(const struct CVisualTree **)(*((_QWORD *)a2 + 1) - 8LL);
  v9 = CVisual::EnsureTreeData(a1, v8);
  BackdropVisualImage = CTreeData::GetBackdropVisualImage(v9, a2);
  v11 = BackdropVisualImage;
  if ( BackdropVisualImage )
  {
    CMILRefCountImpl::AddReference((struct CBackdropVisualImage *)((char *)BackdropVisualImage + 8));
  }
  else
  {
    v14 = CVisual::GetVisualTreeNoRef(v7) == v8;
    lpMem = 0LL;
    CBackdropVisualImage::Create(g_pComposition, a1, a2, v14, (struct CBackdropVisualImage **)&lpMem);
    v11 = (CCachedVisualImage *)lpMem;
    CTreeData::SetBackdropVisualImage(v9, a2, (struct CBackdropVisualImage *)lpMem);
    if ( dword_1803E0760 )
    {
      DebugString = (const char **)CVisualTreePath::GetDebugString(a2, &lpMem);
      v16 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v18, "pBVI=0x%p, bviPath=[%s]", v11, *DebugString);
      v17 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v19, "Visual-CreatedNewBVI");
      DwmDbg::Backdrops::LogBrushEtwEvent(v17, a1, v16);
      if ( lpMem )
        operator delete(lpMem);
    }
  }
  v12 = CBackdropVisualImage::ValidateRootAndSourceRectangle(v11, a5);
  if ( v11 )
    CResource::InternalRelease(v11);
  return v12;
}
