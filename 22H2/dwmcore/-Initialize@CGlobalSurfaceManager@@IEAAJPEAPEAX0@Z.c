/*
 * XREFs of ?Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1800B5238
 * Callers:
 *     ?Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z @ 0x1800B5194 (-Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180030E04 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateTokenThread@CGlobalSurfaceManager@@IEAAJXZ @ 0x1800B53CC (-CreateTokenThread@CGlobalSurfaceManager@@IEAAJXZ.c)
 */

__int64 __fastcall CGlobalSurfaceManager::Initialize(CGlobalSurfaceManager *this, void **a2, void **a3)
{
  void **v3; // rsi
  void **v4; // r14
  HANDLE *v5; // r13
  __int64 v9; // rcx
  int v10; // ebx
  LPVOID v11; // rax
  HANDLE EventW; // rax
  int TokenThread; // eax
  int v14; // ebx
  int v16; // r9d
  signed int LastError; // eax
  unsigned int dwNumberOfBytesToMap; // [rsp+20h] [rbp-60h]
  void **v19; // [rsp+30h] [rbp-50h]
  void *v20; // [rsp+38h] [rbp-48h] BYREF
  char v21; // [rsp+40h] [rbp-40h]
  void **v22; // [rsp+48h] [rbp-38h]
  void *v23; // [rsp+50h] [rbp-30h] BYREF
  char v24; // [rsp+58h] [rbp-28h]
  void **v25; // [rsp+60h] [rbp-20h]
  void *v26; // [rsp+68h] [rbp-18h] BYREF
  char v27; // [rsp+70h] [rbp-10h]

  v27 = 1;
  v3 = (void **)((char *)this + 440);
  v26 = 0LL;
  v4 = (void **)((char *)this + 432);
  v25 = (void **)((char *)this + 440);
  v5 = (HANDLE *)((char *)this + 448);
  v22 = (void **)((char *)this + 432);
  v23 = 0LL;
  v24 = 1;
  v19 = (void **)((char *)this + 448);
  v20 = 0LL;
  v21 = 1;
  v10 = NtTokenManagerOpenSectionAndEvents(&v20, (char *)this + 464, &v23, &v26);
  if ( v21 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v19,
      v20);
  if ( v24 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v22,
      v23);
  if ( v27 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v25,
      v26);
  if ( v10 < 0 )
  {
    v14 = v10 | 0x10000000;
    dwNumberOfBytesToMap = 100;
LABEL_15:
    v16 = v14;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v16, dwNumberOfBytesToMap, 0LL);
    return (unsigned int)v14;
  }
  SetLastError(0);
  v11 = MapViewOfFile(*v5, 4u, 0, 0, *((_QWORD *)this + 58));
  if ( !v11 )
  {
    LastError = GetLastError();
    v14 = LastError;
    if ( LastError > 0 )
      v14 = (unsigned __int16)LastError | 0x80070000;
    dwNumberOfBytesToMap = 106;
    if ( v14 >= 0 )
      v14 = -2003304445;
    goto LABEL_15;
  }
  *((_QWORD *)this + 57) = v11;
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 53,
    EventW);
  if ( ((*((_QWORD *)this + 53) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v14 = -2147024882;
    dwNumberOfBytesToMap = 115;
    goto LABEL_15;
  }
  TokenThread = CGlobalSurfaceManager::CreateTokenThread(this);
  v14 = TokenThread;
  if ( TokenThread < 0 )
  {
    v16 = TokenThread;
    dwNumberOfBytesToMap = 118;
    goto LABEL_22;
  }
  *a2 = *v4;
  *a3 = *v3;
  return (unsigned int)v14;
}
