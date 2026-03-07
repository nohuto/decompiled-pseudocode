__int64 __fastcall CHolographicFrameProcessor::Initialize(
        CHolographicFrameProcessor *this,
        struct CComposition *a2,
        int a3,
        void *a4,
        enum DXGI_FORMAT a5,
        unsigned int a6,
        unsigned int a7)
{
  signed int v7; // esi
  __int64 v10; // rbx
  __int64 v11; // rcx
  RTL_SRWLOCK *v12; // rcx
  HANDLE CurrentProcess; // rbx
  HANDLE v14; // rax
  signed int LastError; // eax
  __int64 v16; // rcx

  v7 = 0;
  *((_DWORD *)this + 17) = a6;
  *((_DWORD *)this + 18) = a7;
  *((_DWORD *)this + 16) = 87;
  *((_DWORD *)this + 28) = a3;
  v10 = *((_QWORD *)a2 + 33);
  if ( *((_QWORD *)this + 6) != v10 )
  {
    if ( v10 )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v10 + 16));
    v11 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = v10;
    if ( v11 )
      CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)(v11 + 8));
  }
  v12 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  if ( v12 )
  {
    CHolographicManager::AddWin32kInteropTexture(
      v12,
      (struct IUnknown *)(((unsigned __int64)this + 40) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
      (char *)this + 40);
    SetLastError(0);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 15,
      0LL);
    CurrentProcess = GetCurrentProcess();
    v14 = GetCurrentProcess();
    if ( !DuplicateHandle(v14, a4, CurrentProcess, (LPHANDLE)this + 15, 0, 0, 2u) )
    {
      LastError = GetLastError();
      v7 = LastError;
      if ( LastError > 0 )
        v7 = (unsigned __int16)LastError | 0x80070000;
      if ( v7 >= 0 )
        v7 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v7, 0x44u, 0LL);
    }
  }
  else
  {
    v7 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147418113, 0x39u, 0LL);
  }
  return (unsigned int)v7;
}
