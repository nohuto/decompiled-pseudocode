__int64 __fastcall CVisualBitmap::Draw(
        CVisualBitmap *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v4; // ebx
  int v9; // eax
  __int64 v10; // rcx
  CVisual *v11; // rbx
  int VisualTree; // eax
  __int64 v13; // rcx
  __int128 *v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  struct CVisualTree *v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  if ( *((_QWORD *)this - 8) )
  {
    if ( CVisualBitmap::CanUseCVI((CVisualBitmap *)((char *)this - 136), a2) )
    {
      v9 = CContent::Draw((CVisualBitmap *)((char *)this - 40), a2, a3, a4);
      v4 = v9;
      if ( v9 >= 0 )
        return v4;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x86u, 0LL);
    }
    v18 = 0LL;
    v11 = (CVisual *)*((_QWORD *)this - 8);
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((__int64 *)&v18);
    VisualTree = CVisual::GetVisualTree(v11, &v18);
    v4 = VisualTree;
    if ( VisualTree < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, VisualTree, 0x8Eu, 0LL);
    }
    else
    {
      v14 = (__int128 *)((char *)v18 + 72);
      if ( !*((_QWORD *)v18 + 8) )
        v14 = &TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v15 = CDrawingContext::DrawSubVisualTree((__int64)a2, (__int64)v18, (__int64)v14, 0LL);
      v4 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x92u, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
  }
  return v4;
}
