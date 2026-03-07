__int64 __fastcall CVisualSurface::GetExplicitRealizationSizeCVI(
        CVisualSurface *this,
        struct D2D_VECTOR_2F *a2,
        struct CCachedVisualImage **a3)
{
  struct D2D_VECTOR_2F *v6; // rdi
  struct CCachedVisualImage *v7; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  struct D2D_VECTOR_2F v10; // xmm0_8
  int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CCachedVisualImage *v15; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 200) )
  {
    wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>(
      &v15,
      **((_QWORD **)this + 14));
    v6 = (struct D2D_VECTOR_2F *)((char *)this + 96);
    v7 = v15;
    if ( *((_BYTE *)this + 201)
      || (v13 = (_DWORD)this + 96,
          v8 = CCachedVisualImage::UpdateFromVisualSurface(
                 v15,
                 *((_QWORD *)this + 9),
                 (char *)this + 80,
                 (char *)this + 88),
          v9 = v8,
          v8 >= 0) )
    {
      v10 = *v6;
      v15 = 0LL;
      *a2 = v10;
      v9 = 0;
      *a3 = v7;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x163,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
        (const char *)(unsigned int)v8,
        v13);
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v15);
  }
  else
  {
    v9 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x156,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)0x8000FFFFLL,
      v12);
  }
  return v9;
}
