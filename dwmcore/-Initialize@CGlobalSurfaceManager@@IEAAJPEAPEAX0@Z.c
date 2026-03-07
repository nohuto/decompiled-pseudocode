__int64 __fastcall CGlobalSurfaceManager::Initialize(CGlobalSurfaceManager *this, void **a2, void **a3)
{
  void **v3; // rsi
  void **v4; // r14
  HANDLE *v5; // r13
  __int64 v9; // rcx
  int v10; // ebx
  LPVOID v11; // rax
  unsigned int (*v12)(void *); // rdx
  const unsigned __int16 *v13; // r8
  int TokenThread; // eax
  int v15; // ebx
  int v17; // r9d
  signed int LastError; // eax
  unsigned int dwNumberOfBytesToMap; // [rsp+20h] [rbp-60h]
  char *v20; // [rsp+30h] [rbp-50h]
  __int64 v21; // [rsp+38h] [rbp-48h] BYREF
  char v22; // [rsp+40h] [rbp-40h]
  char *v23; // [rsp+48h] [rbp-38h]
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  char v25; // [rsp+58h] [rbp-28h]
  char *v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+68h] [rbp-18h] BYREF
  char v28; // [rsp+70h] [rbp-10h]

  v28 = 1;
  v3 = (void **)((char *)this + 472);
  v27 = 0LL;
  v4 = (void **)((char *)this + 136);
  v26 = (char *)this + 472;
  v5 = (HANDLE *)((char *)this + 96);
  v23 = (char *)this + 136;
  v24 = 0LL;
  v25 = 1;
  v20 = (char *)this + 96;
  v21 = 0LL;
  v22 = 1;
  v10 = NtTokenManagerOpenSectionAndEvents(&v21, (char *)this + 112, &v24, &v27);
  if ( v22 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v20,
      v21);
  if ( v25 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v23,
      v24);
  if ( v28 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v26,
      v27);
  if ( v10 < 0 )
  {
    v15 = v10 | 0x10000000;
    dwNumberOfBytesToMap = 89;
LABEL_16:
    v17 = v15;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v17, dwNumberOfBytesToMap, 0LL);
    return (unsigned int)v15;
  }
  SetLastError(0);
  v11 = MapViewOfFile(*v5, 4u, 0, 0, *((_QWORD *)this + 14));
  if ( !v11 )
  {
    LastError = GetLastError();
    v15 = LastError;
    if ( LastError > 0 )
      v15 = (unsigned __int16)LastError | 0x80070000;
    if ( v15 >= 0 )
      v15 = -2003304445;
    dwNumberOfBytesToMap = 95;
    goto LABEL_16;
  }
  *((_QWORD *)this + 13) = v11;
  TokenThread = CSurfaceManager::CreateTokenThread(this, v12, v13);
  v15 = TokenThread;
  if ( TokenThread < 0 )
  {
    v17 = TokenThread;
    dwNumberOfBytesToMap = 100;
    goto LABEL_20;
  }
  *a2 = *v4;
  *a3 = *v3;
  return (unsigned int)v15;
}
