/*
 * XREFs of ??1CComputeScribbleSynchronizer@@QEAA@XZ @ 0x1802015BC
 * Callers:
 *     ??1?$unique_ptr@VCComputeScribbleSynchronizer@@U?$default_delete@VCComputeScribbleSynchronizer@@@std@@@std@@QEAA@XZ @ 0x180201508 (--1-$unique_ptr@VCComputeScribbleSynchronizer@@U-$default_delete@VCComputeScribbleSynchronizer@@.c)
 *     ??1CComputeScribbleFramebuffer@@UEAA@XZ @ 0x180201538 (--1CComputeScribbleFramebuffer@@UEAA@XZ.c)
 *     ?Initialize@CComputeScribbleFramebuffer@@AEAAJXZ @ 0x180201C54 (-Initialize@CComputeScribbleFramebuffer@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DA7C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800FF340 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall CComputeScribbleSynchronizer::~CComputeScribbleSynchronizer(
        CComputeScribbleSynchronizer *this,
        void *a2)
{
  wil::details *v3; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 5);
  if ( v3 )
    wil::details::CloseHandle(v3, a2);
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this + 2);
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this + 1);
}
