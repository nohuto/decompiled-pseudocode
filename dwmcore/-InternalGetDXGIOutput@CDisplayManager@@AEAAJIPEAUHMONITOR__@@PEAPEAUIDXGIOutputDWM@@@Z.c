__int64 __fastcall CDisplayManager::InternalGetDXGIOutput(
        CDisplayManager *this,
        int a2,
        HMONITOR a3,
        struct IDXGIOutputDWM **a4)
{
  int DXGIFactory; // eax
  unsigned int v8; // ebx
  struct IDXGIFactory5 *v9; // rbx
  unsigned int v10; // r14d
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  int v12; // edi
  __int64 v13; // rcx
  int v14; // eax
  unsigned int i; // esi
  __int64 v16; // rax
  bool v17; // di
  __int64 v18; // rcx
  struct IDXGIOutputDWM *v19; // rax
  int v21; // eax
  __int64 v22; // rdx
  int v23; // [rsp+28h] [rbp-E0h]
  __int64 v24; // [rsp+38h] [rbp-D0h] BYREF
  struct IDXGIOutputDWM *v25; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v26; // [rsp+48h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 **); // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v28; // [rsp+58h] [rbp-B0h]
  __int64 v29; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-A0h]
  struct IDXGIFactory5 *v31; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v32[88]; // [rsp+78h] [rbp-90h] BYREF
  HMONITOR v33; // [rsp+D0h] [rbp-38h]
  _BYTE v34[16]; // [rsp+D8h] [rbp-30h] BYREF
  int v35; // [rsp+E8h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  *a4 = 0LL;
  v31 = 0LL;
  DXGIFactory = CDisplayManager::InternalGetDXGIFactory(this, &v31);
  v8 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
      (const char *)(unsigned int)DXGIFactory,
      v23);
    goto LABEL_19;
  }
  v27 = 0LL;
  v9 = v31;
  v10 = 0;
LABEL_3:
  lpVtbl = v9->lpVtbl;
  v29 = 0LL;
  v28 = (__int64 *)&v27;
  LOBYTE(v30) = 1;
  v12 = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, _QWORD, __int64 *))lpVtbl->EnumAdapters1)(v9, v10, &v29);
  if ( (_BYTE)v30 )
  {
    v13 = *v28;
    *v28 = v29;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v12 < 0 )
    goto LABEL_18;
  v26 = 0LL;
  v14 = (**v27)(v27, &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2, &v26);
  v12 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
      (const char *)(unsigned int)v14,
      v23);
    goto LABEL_33;
  }
  v24 = 0LL;
  for ( i = 0; ; ++i )
  {
    v16 = *v26;
    v29 = 0LL;
    v28 = &v24;
    LOBYTE(v30) = 1;
    v17 = (*(int (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(v16 + 40))(v26, i, 0xFFFFFFFFLL, &v29) >= 0;
    if ( (_BYTE)v30 )
    {
      v18 = *v28;
      *v28 = v29;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    if ( !v17 )
    {
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
      ++v10;
      goto LABEL_3;
    }
    if ( a2 )
    {
      v25 = 0LL;
      wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset(&v25);
      v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v24)(
              v24,
              &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
              (__int64 *)&v25);
      if ( v12 < 0 )
      {
        v22 = 187LL;
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v25 + 32LL))(v25, v34);
        if ( v12 >= 0 )
        {
          if ( a2 == v35 )
          {
            v19 = v25;
            v25 = 0LL;
            *a4 = v19;
            wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v25);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
            v8 = 0;
            goto LABEL_19;
          }
          wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v25);
          continue;
        }
        v22 = 190LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
        (const char *)(unsigned int)v12,
        v23);
      wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v25);
      goto LABEL_31;
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 56LL))(v24, v32);
    v12 = v21;
    if ( v21 < 0 )
      break;
    if ( a3 == v33 )
    {
      v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIOutputDWM **))v24)(
             v24,
             &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
             a4);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
      goto LABEL_19;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC9,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
    (const char *)(unsigned int)v21,
    v23);
LABEL_31:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
LABEL_33:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
LABEL_18:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
  v8 = v12;
LABEL_19:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
  return v8;
}
