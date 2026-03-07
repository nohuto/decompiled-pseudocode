void __fastcall CD3DDevice::~CD3DDevice(CD3DDevice *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  void *v6; // rdi
  _DWORD *v7; // rdi
  int i; // esi
  void *v9; // rcx
  void **v10; // rdi
  void **v11; // rdi
  void *v12; // rcx
  bool v13; // zf
  void *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  void **v21; // rsi
  void *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &CD3DDevice::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 2) = &CD3DDevice::`vftable'{for `CD2DContext'};
  CD3DDevice::ProcessPendingUnpin(this, 1);
  CD3DDevice::DestroyAllResources(this);
  v2 = (char *)*((_QWORD *)this + 117);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 117) = 0LL;
  }
  v3 = *((_QWORD *)this + 70);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 888LL))(v3);
    v4 = *((_QWORD *)this + 70);
    *((_QWORD *)this + 70) = 0LL;
    if ( *((_QWORD *)this + 57) )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    *((_QWORD *)this + 57) = v4;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0p_EventWriteTransfer(v3, &EVTDESC_HWDEVICE_DESTROY, this);
  v5 = *((_QWORD *)this + 282);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  `vector destructor iterator'(
    (char *)this + 2224,
    8uLL,
    4uLL,
    (void (*)(void *))wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>);
  `vector destructor iterator'(
    (char *)this + 2216,
    8uLL,
    1uLL,
    (void (*)(void *))wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>);
  `vector destructor iterator'(
    (char *)this + 1832,
    8uLL,
    0x30uLL,
    wil::com_ptr_t<ID3D11SamplerState,wil::err_returncode_policy>::~com_ptr_t<ID3D11SamplerState,wil::err_returncode_policy>);
  `vector destructor iterator'(
    (char *)this + 1640,
    8uLL,
    0x18uLL,
    (void (*)(void *))wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>);
  `vector destructor iterator'(
    (char *)this + 1544,
    8uLL,
    0xCuLL,
    (void (*)(void *))wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>);
  v6 = (void *)*((_QWORD *)this + 192);
  if ( v6 )
  {
    CSurfaceShaderComposer::~CSurfaceShaderComposer(*((CSurfaceShaderComposer **)this + 192));
    operator delete(v6, 0x70uLL);
  }
  v7 = (_DWORD *)((char *)this + 1528);
  if ( *((_QWORD *)this + 189) )
  {
    for ( i = 0; i < *v7; ++i )
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(*((_QWORD *)this + 190) + 8LL * i));
    operator delete(*((void **)this + 189));
    *((_QWORD *)this + 189) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 190);
  if ( v9 )
  {
    operator delete(v9);
    *((_QWORD *)this + 190) = 0LL;
  }
  *v7 = 0;
  v10 = (void **)*((_QWORD *)this + 181);
  if ( v10 )
  {
    v21 = (void **)*((_QWORD *)this + 182);
    while ( v10 != v21 )
    {
      if ( *v10 )
        operator delete(*v10, 8uLL);
      ++v10;
    }
    std::_Deallocate<16,0>(
      *((void **)this + 181),
      (*((_QWORD *)this + 183) - *((_QWORD *)this + 181)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 181) = 0LL;
    *((_QWORD *)this + 182) = 0LL;
    *((_QWORD *)this + 183) = 0LL;
  }
  v11 = (void **)((char *)this + 1200);
  if ( (__int64)(*((_QWORD *)this + 151) - *((_QWORD *)this + 150)) >> 5 )
    detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 1200,
      0LL);
  v12 = *v11;
  v13 = *((_QWORD *)this + 150) == (_QWORD)this + 1224;
  *v11 = 0LL;
  if ( v13 )
    v12 = 0LL;
  operator delete(v12);
  *((_QWORD *)this + 138) = &CD3DResourceManager::`vftable';
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 1080);
  v14 = (void *)*((_QWORD *)this + 129);
  if ( v14 )
  {
    CAsyncTask<CD3DDevice::D3D12Resources>::~CAsyncTask<CD3DDevice::D3D12Resources>(*((_QWORD *)this + 129));
    operator delete(v14, 0x68uLL);
  }
  v15 = *((_QWORD *)this + 126);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = *((_QWORD *)this + 125);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v17 = *((_QWORD *)this + 124);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = *((_QWORD *)this + 123);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 72);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 71);
  v19 = *((_QWORD *)this + 70);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 69);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 68);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 67);
  v20 = *((_QWORD *)this + 64);
  if ( v20 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CAtlasTexture>>>(v20, *((_QWORD *)this + 65));
    std::_Deallocate<16,0>(
      *((void **)this + 64),
      (*((_QWORD *)this + 66) - *((_QWORD *)this + 64)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 64) = 0LL;
    *((_QWORD *)this + 65) = 0LL;
    *((_QWORD *)this + 66) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 464);
  CD2DContext::~CD2DContext((CD3DDevice *)((char *)this + 16));
  CD3DResourceLeakChecker::~CD3DResourceLeakChecker((CD3DDevice *)((char *)this + 456));
}
