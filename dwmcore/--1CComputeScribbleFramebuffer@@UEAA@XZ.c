/*
 * XREFs of ??1CComputeScribbleFramebuffer@@UEAA@XZ @ 0x180201538
 * Callers:
 *     ??_ECComputeScribbleFramebuffer@@UEAAPEAXI@Z @ 0x180201600 (--_ECComputeScribbleFramebuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DA7C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleSynchronizer@@QEAA@XZ @ 0x1802015BC (--1CComputeScribbleSynchronizer@@QEAA@XZ.c)
 */

void __fastcall CComputeScribbleFramebuffer::~CComputeScribbleFramebuffer(CComputeScribbleFramebuffer *this)
{
  void *v2; // rdi
  CD3DDevice *v3; // rcx

  FastRegion::CRegion::FreeMemory((void **)this + 20);
  FastRegion::CRegion::FreeMemory((void **)this + 10);
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this + 9);
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    CComputeScribbleSynchronizer::~CComputeScribbleSynchronizer(*((CComputeScribbleSynchronizer **)this + 6));
    operator delete(v2);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
  v3 = (CD3DDevice *)*((_QWORD *)this + 2);
  if ( v3 )
    CD3DDevice::Release(v3);
}
