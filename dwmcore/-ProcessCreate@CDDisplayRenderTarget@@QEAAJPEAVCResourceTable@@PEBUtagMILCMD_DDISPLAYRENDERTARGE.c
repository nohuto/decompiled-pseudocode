__int64 __fastcall CDDisplayRenderTarget::ProcessCreate(
        CDDisplayRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DDISPLAYRENDERTARGET_CREATE *a3)
{
  void *v3; // rdx
  int v6; // eax
  int v7; // eax

  v3 = (void *)*((_QWORD *)a3 + 3);
  if ( v3 != (void *)-1LL )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 21,
      v3);
  *(_QWORD *)((char *)this + 18444) = *((_QWORD *)a3 + 1);
  v6 = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 4613) = 0;
  *((_DWORD *)this + 4617) = v6;
  *((_DWORD *)this + 28) = *((_DWORD *)a3 + 8);
  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 9);
  *((_QWORD *)this + 13) = *((_QWORD *)a3 + 5);
  v7 = 3;
  if ( *((_DWORD *)a3 + 12) < 3u )
    v7 = 2;
  *((_DWORD *)this + 4618) = v7;
  return 0LL;
}
