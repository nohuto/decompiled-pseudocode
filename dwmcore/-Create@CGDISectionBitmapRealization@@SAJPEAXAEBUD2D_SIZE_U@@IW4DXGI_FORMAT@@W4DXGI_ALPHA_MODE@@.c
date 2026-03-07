__int64 __fastcall CGDISectionBitmapRealization::Create(
        HANDLE hObject,
        const struct D2D_SIZE_U *a2,
        int a3,
        enum DXGI_FORMAT a4,
        enum DXGI_ALPHA_MODE a5,
        unsigned __int8 **a6,
        struct IGDIBitmapRealization **a7)
{
  unsigned __int8 **v7; // r15
  struct IGDIBitmapRealization **v9; // r12
  UINT32 width; // eax
  UINT32 height; // eax
  CGDISectionBitmapRealization *v15; // rax
  __int64 v16; // rcx
  unsigned __int8 **v17; // rbx
  unsigned __int8 **v18; // rsi
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // edi
  unsigned __int64 v22; // rdx
  bool v24; // [rsp+28h] [rbp-B1h]
  HANDLE v25; // [rsp+38h] [rbp-A1h] BYREF
  UINT32 v26; // [rsp+40h] [rbp-99h]
  UINT32 v27; // [rsp+44h] [rbp-95h]
  int v28; // [rsp+48h] [rbp-91h]
  enum DXGI_FORMAT v29; // [rsp+4Ch] [rbp-8Dh]
  _OWORD v30[2]; // [rsp+50h] [rbp-89h] BYREF
  __int64 v31; // [rsp+70h] [rbp-69h]
  _DWORD v32[20]; // [rsp+78h] [rbp-61h] BYREF
  __int128 v33; // [rsp+C8h] [rbp-11h]

  v7 = a6;
  v9 = a7;
  *a6 = 0LL;
  *v9 = 0LL;
  memset_0(v32, 0, 0x90uLL);
  v32[12] = 0;
  a6 = 0LL;
  v32[0] = a5;
  v31 = 0LL;
  width = a2->width;
  v32[18] = (_DWORD)FLOAT_1_0;
  v26 = width;
  height = a2->height;
  memset(v30, 0, sizeof(v30));
  v27 = height;
  v32[19] = 0;
  v33 = _xmm;
  LODWORD(v30[0]) = 1;
  v25 = hObject;
  v28 = a3;
  v29 = a4;
  v15 = (CGDISectionBitmapRealization *)operator new(0x1F8uLL);
  if ( v15 )
    v15 = CGDISectionBitmapRealization::CGDISectionBitmapRealization(
            v15,
            (const struct CSM_BUFFER_ATTRIBUTES *)v32,
            (const struct CSM_REALIZATION_INFO *)v30,
            (const struct CSM_SYSMEM_SECTION_INFO *)&v25,
            v24);
  wil::com_ptr_t<CGDISectionBitmapRealization,wil::err_returncode_policy>::operator=(&a6, v15);
  v17 = a6;
  if ( a6 )
  {
    v18 = a6;
    v19 = (*((__int64 (__fastcall **)(unsigned __int8 **))*a6 + 8))(a6);
    v21 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x37u, 0LL);
    }
    else
    {
      v22 = (unsigned __int64)(v17 + 49);
      *v7 = v17[47];
      v17 = 0LL;
      *v9 = (struct IGDIBitmapRealization *)(v22 & -(__int64)(v18 != 0LL));
    }
  }
  else
  {
    v21 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x32u, 0LL);
    if ( hObject )
      CloseHandle(hObject);
  }
  if ( v17 )
    (*((void (__fastcall **)(unsigned __int8 **))*v17 + 2))(v17);
  return v21;
}
