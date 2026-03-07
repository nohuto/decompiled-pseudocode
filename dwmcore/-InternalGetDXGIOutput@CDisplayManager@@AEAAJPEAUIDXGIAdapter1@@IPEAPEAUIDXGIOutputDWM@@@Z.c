__int64 __fastcall CDisplayManager::InternalGetDXGIOutput(
        CDisplayManager *this,
        struct IDXGIAdapter1 *a2,
        int a3,
        struct IDXGIOutputDWM **a4)
{
  struct IDXGIAdapter1Vtbl *lpVtbl; // rax
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int i; // ebx
  __int64 v10; // rax
  bool v11; // di
  __int64 v12; // rcx
  int v13; // edi
  struct IDXGIOutputDWM *v14; // rax
  __int64 v15; // rdx
  struct IDXGIOutputDWM *v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, struct IDXGIOutputDWM **); // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v20; // [rsp+48h] [rbp-B8h]
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22; // [rsp+58h] [rbp-A8h]
  char v23[8]; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+68h] [rbp-98h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  *a4 = 0LL;
  lpVtbl = a2->lpVtbl;
  v19 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IDXGIAdapter1 *, GUID *, __int64 **))lpVtbl->QueryInterface)(
         a2,
         &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2,
         &v19);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v18 = 0LL;
    for ( i = 0; ; ++i )
    {
      v10 = *v19;
      v21 = 0LL;
      v20 = (__int64 *)&v18;
      v22 = 1;
      v11 = (*(int (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(v10 + 40))(v19, i, 0xFFFFFFFFLL, &v21) >= 0;
      if ( v22 )
      {
        v12 = *v20;
        *v20 = v21;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( !v11 )
        break;
      v17 = 0LL;
      wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((__int64 *)&v17);
      v13 = (**v18)(v18, &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976, &v17);
      if ( v13 < 0 )
      {
        v15 = 243LL;
        goto LABEL_15;
      }
      v13 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, char *))(*(_QWORD *)v17 + 32LL))(v17, v23);
      if ( v13 < 0 )
      {
        v15 = 246LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
          (const char *)(unsigned int)v13);
        wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v17);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
        v8 = v13;
        goto LABEL_17;
      }
      if ( a3 == v24 )
      {
        v14 = v17;
        v17 = 0LL;
        *a4 = v14;
        wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v17);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
        v8 = 0;
        goto LABEL_17;
      }
      wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v17);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
    v8 = -2005270526;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
      (const char *)(unsigned int)v7);
  }
LABEL_17:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  return v8;
}
