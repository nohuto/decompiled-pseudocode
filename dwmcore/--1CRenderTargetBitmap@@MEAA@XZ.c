/*
 * XREFs of ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18003C0DC
 * Callers:
 *     ??_GCDecodeBitmap@@UEAAPEAXI@Z @ 0x18001F9E0 (--_GCDecodeBitmap@@UEAAPEAXI@Z.c)
 *     ??_GCScratchRenderTargetBitmap@@UEAAPEAXI@Z @ 0x18003BFC0 (--_GCScratchRenderTargetBitmap@@UEAAPEAXI@Z.c)
 *     ??_ECRenderTargetBitmap@@MEAAPEAXI@Z @ 0x1800FC1C0 (--_ECRenderTargetBitmap@@MEAAPEAXI@Z.c)
 *     ??_ECStereoRenderTargetBitmap@@UEAAPEAXI@Z @ 0x1802B2500 (--_ECStereoRenderTargetBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180034214 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CDeviceResource@@MEAA@XZ @ 0x18003C394 (--1CDeviceResource@@MEAA@XZ.c)
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x18003C8F4 (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 */

void __fastcall CRenderTargetBitmap::~CRenderTargetBitmap(CRenderTargetBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx

  *(_QWORD *)this = &CRenderTargetBitmap::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 10) = &CRenderTargetBitmap::`vftable';
  *((_QWORD *)this + 15) = &CScratchRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CRenderTargetBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CRenderTargetBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CRenderTargetBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16) = &CRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
  v2 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v2 + 12) = v2 - 144;
  v3 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v3 + 12) = v3 - 160;
  v4 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 176;
  v5 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 200;
  v6 = *(int *)(*((_QWORD *)this + 2) + 20LL);
  *(_DWORD *)((char *)this + v6 + 12) = v6 - 224;
  CRenderTargetBitmap::ReleaseDeviceTarget(this);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)this + 136);
  CDeviceResource::~CDeviceResource((CRenderTargetBitmap *)((char *)this + 80));
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
