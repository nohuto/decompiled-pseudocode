__int64 __fastcall CProjectedShadow::GenerateSurfaceBrush(
        __int64 a1,
        __int64 a2,
        struct IBitmapRealization *a3,
        __int64 a4,
        struct CBitmapResource *a5)
{
  struct CBitmapResource *v5; // rsi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  CSurfaceBrush *v11; // rax
  __int64 v12; // rcx
  CSurfaceBrush *v13; // rbx
  __int64 v14; // rax
  unsigned int v16; // [rsp+20h] [rbp-10h]
  CSurfaceBrush *v17; // [rsp+58h] [rbp+28h] BYREF

  v5 = a5;
  v17 = 0LL;
  a5 = 0LL;
  *(_QWORD *)v5 = 0LL;
  v8 = CBitmapResource::Create(*(struct CComposition **)(a1 + 16), a3, &a5);
  v10 = v8;
  if ( v8 < 0 )
  {
    v16 = 1265;
    goto LABEL_10;
  }
  v11 = (CSurfaceBrush *)DefaultHeap::AllocClear(0xD8uLL);
  if ( v11 )
    v11 = CSurfaceBrush::CSurfaceBrush(v11, *(struct CComposition **)(a1 + 16));
  wil::com_ptr_t<CSurfaceBrush,wil::err_returncode_policy>::operator=((__int64 *)&v17, (__int64)v11);
  v13 = v17;
  if ( v17 )
  {
    v8 = CSurfaceBrush::SetSurface((struct CResource **)v17, a5);
    v10 = v8;
    if ( v8 >= 0 )
    {
      CSurfaceBrush::SetSurfaceContentRect((__int64)v13, a4);
      v14 = *(_QWORD *)v13;
      *((_DWORD *)v13 + 24) = 0;
      (*(void (__fastcall **)(CSurfaceBrush *, _QWORD, CSurfaceBrush *))(v14 + 72))(v13, 0LL, v13);
      LODWORD(v17) = 0;
      ((void (__fastcall *)(char *, void *, CSurfaceBrush **))xmmword_1803E1BA0)(
        (char *)v13 + SDWORD2(xmmword_1803E1BA0),
        &CSurfaceBrush::sc_HorizontalAlignment,
        &v17);
      LODWORD(v17) = 0;
      ((void (__fastcall *)(char *, void *, CSurfaceBrush **))xmmword_1803E1BD8)(
        (char *)v13 + SDWORD2(xmmword_1803E1BD8),
        &CSurfaceBrush::sc_VerticalAlignment,
        &v17);
      v17 = 0LL;
      *(_QWORD *)v5 = v13;
      goto LABEL_11;
    }
    v16 = 1270;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v16, 0LL);
    goto LABEL_11;
  }
  v10 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x4F4u, 0LL);
LABEL_11:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&a5);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  return v10;
}
