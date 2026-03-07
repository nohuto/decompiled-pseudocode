__int64 __fastcall CCompositionGlyphRun::HitTest(
        CCompositionGlyphRun *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  int Bounds; // eax
  unsigned int v7; // ebx
  struct D2D_RECT_F v9; // [rsp+20h] [rbp-30h] BYREF
  struct D2D_RECT_F v10; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  *a4 = 0;
  v10 = 0LL;
  Bounds = CCompositionGlyphRun::GetBounds((__int64)this, (__int64)a2, &v10);
  v7 = Bounds;
  if ( Bounds >= 0 )
  {
    v9 = v10;
    *a4 = Contains(&v9, a3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionglyphrun.cpp",
      (const char *)(unsigned int)Bounds);
    return v7;
  }
}
