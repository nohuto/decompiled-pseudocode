__int64 __fastcall NtTokenManagerOpenSectionAndEvents(HANDLE *a1, _QWORD *a2, HANDLE *a3, HANDLE *a4)
{
  _QWORD *v6; // rbx
  struct DXGGLOBAL *Global; // rax
  int SessionTokenManager; // esi
  __int64 v10; // rbx
  HANDLE Handle; // [rsp+38h] [rbp-40h] BYREF
  HANDLE v13; // [rsp+40h] [rbp-38h] BYREF
  HANDLE v14; // [rsp+48h] [rbp-30h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h] BYREF

  v6 = a2;
  v14 = (HANDLE)-1LL;
  v16 = 0LL;
  v13 = (HANDLE)-1LL;
  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38069) + 560LL))() )
  {
    v15 = 0LL;
    SessionTokenManager = DxgkGetSessionTokenManager(&v15);
    if ( SessionTokenManager >= 0 )
    {
      v10 = v15;
      SessionTokenManager = (*(__int64 (__fastcall **)(__int64, HANDLE *, __int64 *, HANDLE *, HANDLE *))(*(_QWORD *)v15 + 48LL))(
                              v15,
                              &v14,
                              &v16,
                              &v13,
                              &Handle);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v6 = a2;
    }
  }
  else
  {
    SessionTokenManager = -1073741790;
  }
  if ( a1 && v6 && a3 && a4 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a1 = v14;
    if ( v6 + 1 < v6 || (unsigned __int64)(v6 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *v6 = v16;
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v13;
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = Handle;
  }
  else
  {
    SessionTokenManager = -1073741811;
  }
  if ( SessionTokenManager < 0 )
  {
    if ( Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, 1);
    if ( v13 != (HANDLE)-1LL )
      ObCloseHandle(v13, 1);
    if ( v14 != (HANDLE)-1LL )
      ObCloseHandle(v14, 1);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
