/*
 * XREFs of ??1CRemoteRenderTarget@@UEAA@XZ @ 0x18010B2B4
 * Callers:
 *     ??_GCRemoteRenderTarget@@UEAAPEAXI@Z @ 0x18010B270 (--_GCRemoteRenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800343B8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CF54 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078A28 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DFD90 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CRemoteRenderTarget::~CRemoteRenderTarget(CRemoteRenderTarget *this)
{
  CResource *v2; // rcx
  CResource *v3; // rcx

  FastRegion::CRegion::FreeMemory((void **)this + 40);
  v2 = (CResource *)*((_QWORD *)this + 24);
  if ( v2 )
    CResource::InternalRelease(v2);
  v3 = (CResource *)*((_QWORD *)this + 23);
  if ( v3 )
    CResource::InternalRelease(v3);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 176);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 21);
  CRenderTarget::~CRenderTarget(this);
}
