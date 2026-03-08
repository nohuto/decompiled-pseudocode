/*
 * XREFs of ??0CDummyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGIOutputDWM@@IU_UNSIGNED_RATIO@@PEAUHINSTANCE__@@@Z @ 0x18029584C
 * Callers:
 *     ?Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180295C98 (-Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003A2A4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CDeviceResource@@IEAA@XZ @ 0x18003C414 (--0CDeviceResource@@IEAA@XZ.c)
 *     ??0?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z @ 0x1800CA614 (--0-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z.c)
 *     ??0ILegacyRemotingSwapChain@@QEAA@XZ @ 0x18010922C (--0ILegacyRemotingSwapChain@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIDXGIOutputDWM@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIOutputDWM@@@Z @ 0x1801F5FD0 (--0-$com_ptr_t@UIDXGIOutputDWM@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIOutputDWM@@@Z.c)
 */

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
