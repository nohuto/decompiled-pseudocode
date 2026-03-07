__int64 __fastcall CD3DDevice::EnsureBeginCreateD3D12Resources(CD3DDevice *this)
{
  void **v1; // rsi
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int DirectInkFactory; // eax
  int started; // edi
  void *v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v12; // [rsp+28h] [rbp-28h] BYREF
  void **v13; // [rsp+30h] [rbp-20h]
  PTP_WORK *v14; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IDCompositionDirectInkFactoryPartner *v17; // [rsp+70h] [rbp+20h] BYREF
  __int64 v18; // [rsp+78h] [rbp+28h] BYREF

  v1 = (void **)((char *)this + 1032);
  if ( !*((_QWORD *)this + 129) )
  {
    v3 = (__int64 *)*((_QWORD *)this + 67);
    v4 = *v3;
    v18 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 56))(v3, &v18);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD06,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
        (const char *)(unsigned int)v5);
LABEL_15:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
      return v6;
    }
    v17 = 0LL;
    DirectInkFactory = CD2DContext::GetDirectInkFactory((CD3DDevice *)((char *)this + 16), &v17);
    v6 = DirectInkFactory;
    if ( DirectInkFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD09,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
        (const char *)(unsigned int)DirectInkFactory);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
      goto LABEL_15;
    }
    v11 = v18;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v12 = v17;
    if ( v17 )
      (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v17 + 8LL))(v17);
    v14 = 0LL;
    v13 = v1;
    v15 = 1;
    started = CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___(
                (__int64)&v11,
                &v14);
    if ( v15 )
    {
      v9 = *v13;
      *v13 = v14;
      if ( v9 )
      {
        CAsyncTask<CD3DDevice::D3D12Resources>::~CAsyncTask<CD3DDevice::D3D12Resources>((__int64)v9);
        operator delete(v9);
      }
    }
    if ( started < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD14,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
        (const char *)(unsigned int)started);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
      v6 = started;
      goto LABEL_15;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
  }
  return 0LL;
}
