/*
 * XREFs of ??1CaptureBitsResponse@@UEAA@XZ @ 0x180020294
 * Callers:
 *     ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x180020610 (--1VisualCaptureBitsResponse@@UEAA@XZ.c)
 *     ??_GCaptureBitsResponse@@UEAAPEAXI@Z @ 0x1801DCBF0 (--_GCaptureBitsResponse@@UEAAPEAXI@Z.c)
 *     ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x1801F6A60 (--1MagnifierCaptureBitsResponse@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18003BFFC (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CaptureBitsResponse::~CaptureBitsResponse(CaptureBitsResponse *this)
{
  char *v2; // rdi
  const void *v3; // rcx
  void *v4; // rcx

  v2 = (char *)this + 1680;
  *(_QWORD *)this = &CaptureBitsResponse::`vftable';
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((char *)this + 1680);
  v3 = (const void *)*((_QWORD *)this + 208);
  if ( v3 )
    UnmapViewOfFile(v3);
  v4 = (void *)*((_QWORD *)this + 207);
  if ( v4 )
    CloseHandle(v4);
  _InterlockedDecrement(&CaptureBitsResponse::s_cOutstandingCaptures);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(v2);
  COcclusionContext::~COcclusionContext((CaptureBitsResponse *)((char *)this + 72));
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)this + 64);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 6);
  if ( *((_QWORD *)this + 5) )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease();
  *(_QWORD *)this = &CResponseItem::`vftable';
}
