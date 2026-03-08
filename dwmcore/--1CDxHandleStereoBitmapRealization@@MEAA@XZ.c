/*
 * XREFs of ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x1802AF8F8
 * Callers:
 *     ??_ECDxHandleStereoBitmapRealization@@MEAAPEAXI@Z @ 0x1802AFA20 (--_ECDxHandleStereoBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x180032B7C (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AdjustStereoEntityCount@CComposition@@QEAAX_N@Z @ 0x1801B16E4 (-AdjustStereoEntityCount@CComposition@@QEAAX_N@Z.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::~CDxHandleStereoBitmapRealization(
        CDxHandleStereoBitmapRealization *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CComposition *v6; // rcx

  *(_QWORD *)this = &CDxHandleStereoBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 40) = &CDxHandleStereoBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 45) = &CDxHandleStereoBitmapRealization::`vftable'{for `ISwapChainRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResource'};
  v2 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v2 + 12) = v2 - 496;
  v3 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v3 + 12) = v3 - 512;
  v4 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 528;
  v5 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 552;
  v6 = (CComposition *)*(int *)(*((_QWORD *)this + 2) + 20LL);
  *(_DWORD *)((char *)this + (_QWORD)v6 + 12) = (_DWORD)v6 - 576;
  CComposition::AdjustStereoEntityCount(v6, 0);
  CD2DBitmapCache::~CD2DBitmapCache((CDxHandleStereoBitmapRealization *)((char *)this + 408));
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 50);
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
}
