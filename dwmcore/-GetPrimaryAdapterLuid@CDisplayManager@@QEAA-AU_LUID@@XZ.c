struct _LUID __fastcall CDisplayManager::GetPrimaryAdapterLuid(CDisplayManager *this, struct _LUID *a2)
{
  int DXGIFactory; // eax
  __int64 v4; // rcx
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  struct IDXGIFactory5 *v10; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[296]; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID v13; // [rsp+178h] [rbp+78h]

  v11[0] = 0LL;
  v10 = 0LL;
  *a2 = g_luidZero;
  DXGIFactory = CDisplayManager::InternalGetDXGIFactory(this, &v10);
  v9 = DXGIFactory;
  v5 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_180355808, 2u, DXGIFactory, 0x6Au, 0LL);
    goto LABEL_9;
  }
  v6 = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, _QWORD, __int64 *))v10->lpVtbl->EnumAdapters1)(v10, 0LL, v11);
  v9 = v6;
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180355808, 2u, v6, 0x6Du, 0LL);
LABEL_9:
    TranslateDXGIorD3DErrorInContext(v5, 4, &v9);
    v5 = v9;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
  if ( v5 >= 0 && (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11[0] + 80LL))(v11[0], v12) >= 0 )
    *a2 = v13;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v11);
  return (struct _LUID)a2;
}
