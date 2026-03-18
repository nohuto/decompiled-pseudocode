/*
 * XREFs of ??1CComputeScribbleRenderer@@EEAA@XZ @ 0x1801FB888
 * Callers:
 *     ??_GCComputeScribbleRenderer@@EEAAPEAXI@Z @ 0x1801FB930 (--_GCComputeScribbleRenderer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DB6C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x180202898 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 */

void __fastcall CComputeScribbleRenderer::~CComputeScribbleRenderer(CComputeScribbleRenderer *this)
{
  CComputeScribbleScheduler *v2; // rbx

  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this + 5);
  v2 = (CComputeScribbleScheduler *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CComputeScribbleScheduler::~CComputeScribbleScheduler(v2);
    operator delete(v2);
  }
}
