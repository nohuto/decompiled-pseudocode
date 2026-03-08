/*
 * XREFs of ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x1801FF518
 * Callers:
 *     ??1?$unique_ptr@VCComputeScribbleScheduler@@U?$default_delete@VCComputeScribbleScheduler@@@std@@@std@@QEAA@XZ @ 0x1801F84D8 (--1-$unique_ptr@VCComputeScribbleScheduler@@U-$default_delete@VCComputeScribbleScheduler@@@std@@.c)
 *     ??1CComputeScribbleRenderer@@EEAA@XZ @ 0x1801F8508 (--1CComputeScribbleRenderer@@EEAA@XZ.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801F8740 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800FF340 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CComputeScribbleStopwatch@@QEAA@XZ @ 0x1801FF65C (--1CComputeScribbleStopwatch@@QEAA@XZ.c)
 *     ??1ThreadSharedData@CComputeScribbleScheduler@@QEAA@XZ @ 0x1801FF68C (--1ThreadSharedData@CComputeScribbleScheduler@@QEAA@XZ.c)
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x1802005F4 (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 */

void __fastcall CComputeScribbleScheduler::~CComputeScribbleScheduler(CComputeScribbleScheduler *this)
{
  void *v2; // rdx
  unsigned int v3; // r8d
  const char *v4; // r9
  __int64 v5; // rcx
  void *v6; // rdx
  void *v7; // rdi
  wil::details *v8; // rcx
  char *v9; // rcx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int64)(*((_QWORD *)this + 8) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 240LL))(*((_QWORD *)this + 24));
    if ( WaitForSingleObject(*((HANDLE *)this + 8), 0xFFFFFFFF) == -1 )
      wil::details::in1diag3::Log_GetLastError(retaddr, v2, v3, v4);
  }
  v5 = *((_QWORD *)this + 27);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 27);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 24);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 23);
  CComputeScribbleScheduler::ThreadSharedData::~ThreadSharedData((CComputeScribbleScheduler *)((char *)this + 88));
  v7 = (void *)*((_QWORD *)this + 10);
  if ( v7 )
  {
    CComputeScribbleStopwatch::~CComputeScribbleStopwatch(*((CComputeScribbleStopwatch **)this + 10));
    operator delete(v7);
  }
  v8 = (wil::details *)*((_QWORD *)this + 9);
  if ( v8 )
    wil::details::CloseHandle(v8, v6);
  v9 = (char *)*((_QWORD *)this + 8);
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v9);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 4);
  v10 = *((_QWORD *)this + 3);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
}
