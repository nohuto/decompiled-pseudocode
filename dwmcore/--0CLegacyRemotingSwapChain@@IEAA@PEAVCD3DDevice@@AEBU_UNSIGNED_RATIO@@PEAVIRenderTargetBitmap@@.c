/*
 * XREFs of ??0CLegacyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@AEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAUHINSTANCE__@@@Z @ 0x1801090B8
 * Callers:
 *     ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180108E20 (-Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetB.c)
 * Callees:
 *     ??0?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIRenderTargetBitmap@@@Z @ 0x180034828 (--0-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIRenderTargetBit.c)
 *     ??0CDeviceResource@@IEAA@XZ @ 0x18003C414 (--0CDeviceResource@@IEAA@XZ.c)
 *     ??0?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z @ 0x1800CA614 (--0-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z.c)
 *     ??0ILegacyRemotingSwapChain@@QEAA@XZ @ 0x18010922C (--0ILegacyRemotingSwapChain@@QEAA@XZ.c)
 */

CLegacyRemotingSwapChain *__fastcall CLegacyRemotingSwapChain::CLegacyRemotingSwapChain(
        CLegacyRemotingSwapChain *this,
        struct CD3DDevice *a2,
        const struct _UNSIGNED_RATIO *a3,
        struct IRenderTargetBitmap *a4,
        void *a5,
        HINSTANCE a6)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r10

  *((_QWORD *)this + 1) = &CLegacyRemotingSwapChain::`vbtable'{for `ISwapChain'};
  *((_QWORD *)this + 4) = &CLegacyRemotingSwapChain::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 32) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 35) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
  ILegacyRemotingSwapChain::ILegacyRemotingSwapChain(this);
  *((_DWORD *)this + 4) = 0;
  CDeviceResource::CDeviceResource((CLegacyRemotingSwapChain *)((char *)this + 24));
  *((_QWORD *)this + 3) = &CLegacyRemotingSwapChain::`vftable'{for `CDeviceResource'};
  *(_QWORD *)this = &CLegacyRemotingSwapChain::`vftable'{for `CMILCOMBaseT<ILegacyRemotingSwapChain>'};
  *((_QWORD *)this + 8) = &CLegacyRemotingSwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CLegacyRemotingSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CLegacyRemotingSwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &CLegacyRemotingSwapChain::`vftable'{for `IDeviceResource'};
  v9 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v9 + 4) = v9 - 224;
  v10 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  *(_DWORD *)((char *)this + v10 + 4) = v10 - 240;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 4) = *(_DWORD *)(*((_QWORD *)this + 1) + 12LL)
                                                                         - 264;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::com_ptr_t<CD3DDevice,wil::err_returncode_policy>(
    (_QWORD *)this + 9,
    v11);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(
    (_QWORD *)this + 10,
    (__int64)a4);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 12) = a6;
  *((struct _UNSIGNED_RATIO *)this + 15) = *a3;
  *((_QWORD *)this + 16) = (char *)this + 136;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 25) = a5;
  *((_QWORD *)this + 26) = 0LL;
  *((_BYTE *)this + 216) = a5 != 0LL;
  return this;
}
