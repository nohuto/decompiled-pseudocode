struct _LUID __fastcall CDisplayManager::GetWarpAdapterLuid(struct _RTL_CRITICAL_SECTION *this, struct _LUID *a2)
{
  struct IDXGIFactory5 *v3; // rbx
  unsigned int i; // esi
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  bool v6; // r14
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-E0h] BYREF
  struct IDXGIFactory5 *v10; // [rsp+28h] [rbp-D8h] BYREF
  __int64 *v11; // [rsp+30h] [rbp-D0h]
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  char v13; // [rsp+40h] [rbp-C0h]
  _BYTE v14[296]; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID v15; // [rsp+178h] [rbp+78h]
  char v16; // [rsp+180h] [rbp+80h]

  v10 = 0LL;
  *a2 = g_luidZero;
  if ( (int)CDisplayManager::InternalGetDXGIFactory(this, &v10) >= 0 )
  {
    v9 = 0LL;
    v3 = v10;
    for ( i = 0; ; ++i )
    {
      lpVtbl = v3->lpVtbl;
      v12 = 0LL;
      v11 = &v9;
      v13 = 1;
      v6 = ((int (__fastcall *)(struct IDXGIFactory5 *, _QWORD, __int64 *))lpVtbl->EnumAdapters1)(v3, i, &v12) >= 0;
      if ( v13 )
      {
        v7 = *v11;
        *v11 = v12;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      if ( !v6 )
        break;
      memset_0(v14, 0, 0x138uLL);
      if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 80LL))(v9, v14) >= 0 && (v16 & 2) != 0 )
      {
        *a2 = v15;
        break;
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v9);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
  return (struct _LUID)a2;
}
