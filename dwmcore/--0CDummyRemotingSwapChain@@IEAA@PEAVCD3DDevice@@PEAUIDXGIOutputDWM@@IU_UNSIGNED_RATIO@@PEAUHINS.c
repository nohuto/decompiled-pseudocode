CDummyRemotingSwapChain *__fastcall CDummyRemotingSwapChain::CDummyRemotingSwapChain(
        CDummyRemotingSwapChain *this,
        struct CD3DDevice *a2,
        struct IDXGIOutputDWM *a3,
        int a4,
        struct _UNSIGNED_RATIO a5,
        HINSTANCE a6)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r11

  *((_QWORD *)this + 3) = &CDummyRemotingSwapChain::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 8) = &CDummyRemotingSwapChain::`vbtable'{for `ISwapChain'};
  *((_QWORD *)this + 37) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 40) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_DWORD *)this + 2) = 0;
  CDeviceResource::CDeviceResource((CDummyRemotingSwapChain *)((char *)this + 16));
  ILegacyRemotingSwapChain::ILegacyRemotingSwapChain((CDummyRemotingSwapChain *)((char *)this + 56));
  *(_QWORD *)this = &CDummyRemotingSwapChain::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 2) = &CDummyRemotingSwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 7) = &CDummyRemotingSwapChain::`vftable'{for `ILegacyRemotingSwapChain'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CDummyRemotingSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CDummyRemotingSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 24) = &CDummyRemotingSwapChain::`vftable'{for `IPixelFormat'};
  v9 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v9 + 20) = v9 - 248;
  v10 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v10 + 20) = v10 - 264;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 20) = *(_DWORD *)(*((_QWORD *)this + 3) + 12LL)
                                                                          - 288;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::com_ptr_t<CD3DDevice,wil::err_returncode_policy>(
    (_QWORD *)this + 9,
    v11);
  wil::com_ptr_t<IDXGIOutputDWM,wil::err_returncode_policy>::com_ptr_t<IDXGIOutputDWM,wil::err_returncode_policy>(
    (_QWORD *)this + 10,
    (__int64)a3);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 11) = a6;
  *((_DWORD *)this + 28) = a4;
  *(struct _UNSIGNED_RATIO *)((char *)this + 116) = a5;
  `vector constructor iterator'(
    (char *)this + 128,
    64LL,
    2LL,
    (void (__fastcall *)(char *))CDummyRemotingSwapChain::CPresentStats::CPresentStats);
  *((_DWORD *)this + 64) = 0;
  return this;
}
