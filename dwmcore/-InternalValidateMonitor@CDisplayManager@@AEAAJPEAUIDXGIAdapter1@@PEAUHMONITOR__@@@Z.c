__int64 __fastcall CDisplayManager::InternalValidateMonitor(
        CDisplayManager *this,
        struct IDXGIAdapter1 *a2,
        HMONITOR a3)
{
  struct IDXGIAdapter1Vtbl *lpVtbl; // rax
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int i; // ebx
  __int64 v8; // rax
  bool v9; // di
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v14; // [rsp+38h] [rbp-49h] BYREF
  __int64 *v15; // [rsp+40h] [rbp-41h] BYREF
  __int64 *v16; // [rsp+48h] [rbp-39h]
  __int64 v17; // [rsp+50h] [rbp-31h] BYREF
  char v18; // [rsp+58h] [rbp-29h]
  _BYTE v19[88]; // [rsp+68h] [rbp-19h] BYREF
  HMONITOR v20; // [rsp+C0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  lpVtbl = a2->lpVtbl;
  v15 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IDXGIAdapter1 *, GUID *, __int64 **))lpVtbl->QueryInterface)(
         a2,
         &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2,
         &v15);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v14 = 0LL;
    for ( i = 0; ; ++i )
    {
      v8 = *v15;
      v17 = 0LL;
      v16 = &v14;
      v18 = 1;
      v9 = (*(int (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(v8 + 40))(v15, i, 0xFFFFFFFFLL, &v17) >= 0;
      if ( v18 )
      {
        v10 = *v16;
        *v16 = v17;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( !v9 )
        break;
      v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 56LL))(v14, v19);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3B,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
          (const char *)(unsigned int)v11);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v14);
        v6 = v12;
        goto LABEL_14;
      }
      if ( a3 == v20 )
      {
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v14);
        v6 = 0;
        goto LABEL_14;
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v14);
    v6 = -2005270526;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
      (const char *)(unsigned int)v5);
  }
LABEL_14:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  return v6;
}
