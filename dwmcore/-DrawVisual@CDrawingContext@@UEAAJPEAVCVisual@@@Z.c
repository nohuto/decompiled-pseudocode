__int64 __fastcall CDrawingContext::DrawVisual(CDrawingContext *this, struct CVisual *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const struct CMILMatrix *TopByReference; // rax
  __int128 *v7; // r8
  int v9[20]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct CVisualTree *v11; // [rsp+88h] [rbp+10h] BYREF

  if ( !a2 )
    return 0LL;
  v11 = 0LL;
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset(&v11);
  v4 = CSubVisualTree::Create(a2, &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31B,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)v4,
      v9[0]);
  }
  else
  {
    v9[16] = 0;
    CVisual::GetRootTransform(a2, (struct CMILMatrix *)v9, 0, 0);
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 384));
    CMILMatrix::Multiply((CMILMatrix *)v9, TopByReference);
    v7 = (__int128 *)((char *)v11 + 72);
    if ( !*((_QWORD *)v11 + 8) )
      v7 = &TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v5 = CDrawingContext::DrawSubVisualTree((char *)this - 16, v11, v7, v9);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
  return v5;
}
