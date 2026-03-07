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
