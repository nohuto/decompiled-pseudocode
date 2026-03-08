/*
 * XREFs of ??1CDDARenderTarget@@UEAA@XZ @ 0x1801F61C8
 * Callers:
 *     ??_ECDDARenderTarget@@UEAAPEAXI@Z @ 0x1801F6230 (--_ECDDARenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18003BFFC (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CDDARenderTarget::~CDDARenderTarget(CDDARenderTarget *this)
{
  CResource *v2; // rcx

  FastRegion::CRegion::FreeMemory((void **)this + 251);
  COcclusionContext::~COcclusionContext((void **)this + 57);
  v2 = (CResource *)*((_QWORD *)this + 21);
  if ( v2 )
    CResource::InternalRelease(v2);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 160);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 19);
  CRenderTarget::~CRenderTarget(this);
}
