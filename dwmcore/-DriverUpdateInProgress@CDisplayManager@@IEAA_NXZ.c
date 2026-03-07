char __fastcall CDisplayManager::DriverUpdateInProgress(struct _RTL_CRITICAL_SECTION *this)
{
  struct IDXGIFactory5 *v1; // rbx
  unsigned int v2; // esi
  char v3; // di
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  bool v5; // r14
  struct IDXGIAdapter *v6; // rcx
  struct IDXGIAdapter *v8; // [rsp+28h] [rbp-28h] BYREF
  char v9; // [rsp+30h] [rbp-20h]
  _DWORD v10[2]; // [rsp+38h] [rbp-18h] BYREF
  int *v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+48h] [rbp-8h]
  int v13; // [rsp+4Ch] [rbp-4h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+80h] [rbp+30h] BYREF
  int v15; // [rsp+88h] [rbp+38h] BYREF
  struct IDXGIAdapter *v16; // [rsp+90h] [rbp+40h] BYREF
  struct IDXGIFactory5 *v17; // [rsp+98h] [rbp+48h] BYREF

  v14 = this;
  v17 = 0LL;
  CDisplayManager::InternalGetDXGIFactory(this, &v17);
  v1 = v17;
  if ( v17 )
  {
    v16 = 0LL;
    v2 = 0;
    v3 = 1;
    while ( 1 )
    {
      lpVtbl = v1->lpVtbl;
      v8 = 0LL;
      v9 = 1;
      v5 = ((int (__fastcall *)(struct IDXGIFactory5 *, _QWORD, struct IDXGIAdapter **))lpVtbl->EnumAdapters1)(
             v1,
             v2,
             &v8) >= 0;
      if ( v9 )
      {
        v6 = v16;
        v16 = v8;
        if ( v6 )
          ((void (__fastcall *)(struct IDXGIAdapter *))v6->lpVtbl->Release)(v6);
      }
      if ( !v5 )
        break;
      LODWORD(v14) = 0;
      if ( (int)CKMAdapterHandle::Initialize((CKMAdapterHandle *)&v14, v16) >= 0 )
      {
        v15 = 0;
        v13 = 0;
        v10[0] = (_DWORD)v14;
        v11 = &v15;
        v10[1] = 11;
        v12 = 4;
        D3DKMTQueryAdapterInfo(v10);
        if ( v15 )
        {
          CKMAdapterHandle::~CKMAdapterHandle((CKMAdapterHandle *)&v14);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
          goto LABEL_13;
        }
      }
      CKMAdapterHandle::~CKMAdapterHandle((CKMAdapterHandle *)&v14);
      ++v2;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  }
  v3 = 0;
LABEL_13:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  return v3;
}
