void __fastcall CLegacySwapChain::~CLegacySwapChain(CLegacySwapChain *this)
{
  char *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rcx
  CD3DDevice *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rcx

  v2 = (char *)this + 216;
  *(_QWORD *)this = &CLegacySwapChain::`vftable'{for `IOverlaySwapChain'};
  *((_QWORD *)this + 2) = &CLegacySwapChain::`vftable'{for `CMILCOMBaseWeakRef'};
  *((_QWORD *)this + 5) = &CLegacySwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 27) = &CLegacySwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CLegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CLegacySwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &CLegacySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 16LL) + 8) = &CLegacySwapChain::`vftable'{for `ILegacySwapChain'};
  v3 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v3 + 4) = v3 - 360;
  v4 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  *(_DWORD *)((char *)this + v4 + 4) = v4 - 376;
  v5 = *(int *)(*((_QWORD *)this + 1) + 12LL);
  *(_DWORD *)((char *)this + v5 + 4) = v5 - 400;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 16LL) + 4) = *(_DWORD *)(*((_QWORD *)this + 1) + 16LL)
                                                                         - 424;
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 44);
  *((_QWORD *)this + 44) = 0LL;
  if ( v6 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v6);
  v7 = (CD3DDevice *)*((_QWORD *)this + 10);
  if ( v7 )
  {
    CD3DDevice::AdvanceUnpin(v7, *(struct _LUID *)((char *)this + 116), *((unsigned int *)this + 28), 1u);
    *(_BYTE *)(*((_QWORD *)this + 10) + 1508LL) = 1;
  }
  v8 = *((_QWORD *)this + 16);
  if ( v8 )
  {
    v9 = v8 + 8 + *(int *)(*(_QWORD *)(v8 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 48LL))(v9, v2);
  }
  v10 = (volatile signed __int32 *)*((_QWORD *)this + 44);
  if ( v10 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v10);
  v11 = *((_QWORD *)this + 31);
  if ( v11 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CSwapChainBuffer>>>(v11, *((_QWORD *)this + 32));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 31),
      (*((_QWORD *)this + 33) - *((_QWORD *)this + 31)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 31) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 30);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 29);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 28);
  COverlaySwapChainBase::~COverlaySwapChainBase(this);
}
