__int64 __fastcall CBitmapResource::Create(
        struct CComposition *a1,
        struct IBitmapRealization *a2,
        struct CBitmapResource **a3)
{
  unsigned int v3; // ebx
  CBitmapResource *v7; // rax
  __int64 v8; // rcx
  CBitmapResource *v9; // rax
  struct CBitmapResource *v10; // rdi
  CBitmapResource *v12; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v7 = (CBitmapResource *)DefaultHeap::AllocClear(0x78uLL);
  if ( !v7 )
  {
    v12 = 0LL;
    goto LABEL_5;
  }
  v9 = CBitmapResource::CBitmapResource(v7, a1, a2);
  v12 = v9;
  v10 = v9;
  if ( !v9 )
  {
LABEL_5:
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x1Bu, 0LL);
    goto LABEL_6;
  }
  (*(void (__fastcall **)(CBitmapResource *))(*(_QWORD *)v9 + 8LL))(v9);
  v12 = 0LL;
  *a3 = v10;
LABEL_6:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
  return v3;
}
