__int64 __fastcall CTextVisualContent::HitTest(
        CTextVisualContent *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  __int64 v5; // rax
  CCompositionGlyphRun **v8; // rbx
  CCompositionGlyphRun **v9; // rbp
  int v10; // eax
  unsigned int v11; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0;
  v5 = *((_QWORD *)this - 4);
  v8 = *(CCompositionGlyphRun ***)(v5 + 704);
  v9 = *(CCompositionGlyphRun ***)(v5 + 712);
  while ( 1 )
  {
    if ( v8 == v9 )
      return 0LL;
    v10 = CCompositionGlyphRun::HitTest(*v8, a2, a3, a4);
    v11 = v10;
    if ( v10 < 0 )
      break;
    if ( *a4 )
      return 0LL;
    ++v8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8A,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
