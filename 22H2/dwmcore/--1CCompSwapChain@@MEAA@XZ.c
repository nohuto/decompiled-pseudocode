/*
 * XREFs of ??1CCompSwapChain@@MEAA@XZ @ 0x180250A94
 * Callers:
 *     ??_ECCompSwapChain@@MEAAPEAXI@Z @ 0x180250BF0 (--_ECCompSwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180060020 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??1CDeviceResource@@MEAA@XZ @ 0x18006194C (--1CDeviceResource@@MEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B594 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompSwapChain::~CCompSwapChain(CCompSwapChain *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  CD3DDevice *v7; // rcx

  *(_QWORD *)this = &CCompSwapChain::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CCompSwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 7) = &CCompSwapChain::`vftable'{for `ICompositionSwapChain'};
  *((_QWORD *)this + 9) = &CCompSwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CCompSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CCompSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 24) = &CCompSwapChain::`vftable'{for `IPixelFormat'};
  v2 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v2 + 20) = v2 - 360;
  v3 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v3 + 20) = v3 - 376;
  v4 = *(int *)(*((_QWORD *)this + 3) + 12LL);
  *(_DWORD *)((char *)this + v4 + 20) = v4 - 400;
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
  {
    v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 48LL))(v6, (char *)this + 72);
  }
  FastRegion::CRegion::FreeMemory((void **)this + 38);
  FastRegion::CRegion::FreeMemory((void **)this + 29);
  FastRegion::CRegion::FreeMemory((void **)this + 20);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 14);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 13);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 96);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 11);
  v7 = (CD3DDevice *)*((_QWORD *)this + 10);
  if ( v7 )
    CD3DDevice::Release(v7);
  CDeviceResource::~CDeviceResource((CCompSwapChain *)((char *)this + 16));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
