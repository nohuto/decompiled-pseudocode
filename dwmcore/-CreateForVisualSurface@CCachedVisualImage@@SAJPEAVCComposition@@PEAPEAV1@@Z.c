__int64 __fastcall CCachedVisualImage::CreateForVisualSurface(struct CComposition *a1, struct CCachedVisualImage **a2)
{
  CCachedVisualImage *v4; // rax
  CCachedVisualImage *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CCachedVisualImage *v13; // [rsp+40h] [rbp+18h] BYREF

  v4 = (CCachedVisualImage *)DefaultHeap::AllocClear(0x738uLL);
  if ( v4 )
    v4 = CCachedVisualImage::CCachedVisualImage(v4, a1, 1);
  wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>(
    &v13,
    v4);
  v5 = v13;
  if ( !v13 )
  {
    v7 = -2147024882;
    v9 = 129LL;
    v10 = 2147942414LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
      (const char *)v10,
      v11);
    goto LABEL_6;
  }
  v6 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v13 + 48LL))(v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v10 = (unsigned int)v6;
    v9 = 131LL;
    goto LABEL_9;
  }
  *((_DWORD *)v5 + 38) = 0;
  *((_DWORD *)v5 + 39) = 87;
  *((_DWORD *)v5 + 41) = 1;
  CCachedVisualImage::ChoosePixelFormat(v5);
  v13 = 0LL;
  v7 = 0;
  *a2 = v5;
LABEL_6:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v13);
  return v7;
}
