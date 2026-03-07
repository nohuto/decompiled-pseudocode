__int64 __fastcall CDrawingContext::RenderOverlayColor(
        struct CDrawingContext *a1,
        const struct _D3DCOLORVALUE *a2,
        struct D2D_RECT_F *a3,
        const struct D2D_MATRIX_3X2_F *a4)
{
  CDrawListEntryBuilder *v4; // rdi
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  struct D2D_RECT_F v12; // [rsp+30h] [rbp-18h] BYREF

  v4 = (struct CDrawingContext *)((char *)a1 + 3568);
  v12 = *a3;
  v6 = CDrawingContext::GenerateDrawListForOverlayColor(a1, a2, &v12, a4, (struct CDrawingContext *)((char *)a1 + 3568));
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x19A8u, 0LL);
  }
  else
  {
    v9 = CDrawListEntryBuilder::Render(v4, a1);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x19AAu, 0LL);
  }
  CDrawListEntryBuilder::Reset(v4);
  return v8;
}
