__int64 __fastcall CDecodeBitmap::CopyRegion(
        CDecodeBitmap *this,
        FastRegion::Internal::CRgnData **a2,
        struct ID3D11Texture2D *a3,
        int a4)
{
  int v7; // eax
  int v8; // ebx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 (__fastcall ****)(_QWORD)); // rcx
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rbx
  int v12; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r14
  int v17; // r8d
  __int64 v18; // rcx
  unsigned int v19; // edx
  FastRegion::Internal::CRgnData *v20; // rcx
  __int64 v22; // [rsp+50h] [rbp-39h] BYREF
  __int64 (__fastcall ***v23)(_QWORD); // [rsp+58h] [rbp-31h] BYREF
  __int64 v24; // [rsp+60h] [rbp-29h] BYREF
  unsigned int v25; // [rsp+68h] [rbp-21h] BYREF
  int v26; // [rsp+6Ch] [rbp-1Dh]
  int v27; // [rsp+70h] [rbp-19h]
  int v28; // [rsp+74h] [rbp-15h]
  char v29[8]; // [rsp+78h] [rbp-11h] BYREF
  unsigned __int64 v30; // [rsp+80h] [rbp-9h]
  int *v31; // [rsp+88h] [rbp-1h]
  __int64 v32; // [rsp+90h] [rbp+7h]
  int v33; // [rsp+98h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v24 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
         &v24);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\decodebitmap.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_15;
  }
  v23 = 0LL;
  v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 (__fastcall ****)(_QWORD)))(*((_QWORD *)this + 17)
                                                                                   + 8LL
                                                                                   + *(int *)(*(_QWORD *)(*((_QWORD *)this + 17) + 8LL)
                                                                                            + 4LL));
  v10 = (**v9)(v9, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, &v23);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\decodebitmap.cpp",
      (const char *)(unsigned int)v10);
LABEL_5:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v23);
    goto LABEL_15;
  }
  v22 = 0LL;
  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(**v23)(v23);
  v12 = (**v11)(v11, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, &v22);
  v8 = v12;
  if ( v12 < 0 )
  {
    v13 = (unsigned int)v12;
    v14 = 125LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\decodebitmap.cpp",
      (const char *)v13);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
    goto LABEL_5;
  }
  v15 = *((_QWORD *)this + 17) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 17) + 8LL) + 8LL);
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v8 = *(_DWORD *)(v16 + 1088);
  if ( v8 < 0 )
  {
    v13 = (unsigned int)v8;
    v14 = 128LL;
    goto LABEL_8;
  }
  FastRegion::Internal::CRgnData::BeginIterator(*a2, (struct FastRegion::CRegion::Iterator *)v29);
  while ( (unsigned __int64)v31 < v30 )
  {
    v17 = v31[2];
    v18 = 2 * v33;
    v26 = *v31;
    v28 = v17;
    v19 = *(_DWORD *)(v32 + 4 * v18);
    v27 = *(_DWORD *)(v32 + 4 * v18 + 4);
    v25 = v19;
    CD3DDevice::CopySubresourceRegion(v16, v24, a4, (int *)&v25, v22, 0, v19, v26, 0);
    FastRegion::Internal::CRgnData::StepIterator(v20, (struct FastRegion::CRegion::Iterator *)v29);
  }
  CD2DBitmapCache::AddInvalidRegion(this, a2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v23);
  v8 = 0;
LABEL_15:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
  return (unsigned int)v8;
}
