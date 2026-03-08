/*
 * XREFs of ??1CComputeScribbleRenderer@@EEAA@XZ @ 0x1801F8508
 * Callers:
 *     ??_GCComputeScribbleRenderer@@EEAAPEAXI@Z @ 0x1801F85B0 (--_GCComputeScribbleRenderer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DA7C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x1801FF518 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
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
