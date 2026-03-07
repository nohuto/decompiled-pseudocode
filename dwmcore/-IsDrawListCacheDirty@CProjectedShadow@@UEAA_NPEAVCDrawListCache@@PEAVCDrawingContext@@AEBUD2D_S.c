char __fastcall CProjectedShadow::IsDrawListCacheDirty(
        CProjectedShadow *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  int v5; // r10d
  char v6; // bl
  unsigned __int64 v7; // rdi
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  struct IRenderTargetBitmap **v15; // rcx
  __int64 *v16; // rcx

  v5 = *((_DWORD *)this + 82);
  v6 = 0;
  v7 = *((_QWORD *)a2 + 4);
  if ( v5 )
  {
    v12 = v5 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( (unsigned int)(v14 - 1) > 1 )
            goto LABEL_10;
        }
        else if ( IsDrawListCachDirtyFromShadowAsset((__int64 *)&CProjectedShadow::s_cp1xBlurAsset, v7) )
        {
          return 1;
        }
        v15 = &CProjectedShadow::s_cp2xBlurAsset;
      }
      else
      {
        if ( IsDrawListCachDirtyFromShadowAsset((__int64 *)&CProjectedShadow::s_cpHalfBlurAsset, v7) )
          return 1;
        v15 = &CProjectedShadow::s_cp1xBlurAsset;
      }
      if ( IsDrawListCachDirtyFromShadowAsset((__int64 *)v15, v7) )
        return 1;
      v16 = &CProjectedShadow::s_cpMaskForBlur;
    }
    else
    {
      v16 = (__int64 *)&CProjectedShadow::s_cpFastShadowIntermediate;
    }
  }
  else
  {
    v16 = (__int64 *)((char *)this + 368);
  }
  if ( IsDrawListCachDirtyFromShadowAsset(v16, v7) )
    return 1;
LABEL_10:
  if ( CContent::IsDrawListCacheDirty(this, (__int64)a2, a3, a4, a5) )
    return 1;
  return v6;
}
