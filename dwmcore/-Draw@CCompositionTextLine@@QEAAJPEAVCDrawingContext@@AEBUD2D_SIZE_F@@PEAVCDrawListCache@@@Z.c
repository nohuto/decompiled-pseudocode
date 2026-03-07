__int64 __fastcall CCompositionTextLine::Draw(
        CCompositionTextLine *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_QWORD *)this + 10) )
    return 0LL;
  v4 = *((_QWORD *)this + 13) + 64LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 13) + 64LL) + 8LL);
  v5 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))(*(_QWORD *)v4 + 16LL))(
         v4,
         a2,
         a3,
         a4);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x47,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositiontextline.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
