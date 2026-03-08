/*
 * XREFs of NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C0075F10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkGetSessionTokenManager @ 0x1C000DB30 (DxgkGetSessionTokenManager.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtTokenManagerGetAnalogExclusiveTokenEvent(HANDLE *a1)
{
  struct DXGGLOBAL *Global; // rax
  int SessionTokenManager; // edi
  __int64 v4; // rbx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38069) + 560LL))() )
  {
    v7 = 0LL;
    SessionTokenManager = DxgkGetSessionTokenManager(&v7);
    if ( SessionTokenManager >= 0 )
    {
      v4 = v7;
      SessionTokenManager = (*(__int64 (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)v7 + 112LL))(v7, &Handle);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  else
  {
    SessionTokenManager = -1073741790;
  }
  if ( SessionTokenManager < 0 )
    goto LABEL_13;
  if ( Handle == (HANDLE)-1LL )
  {
    SessionTokenManager = -1073741811;
  }
  else
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a1 = Handle;
  }
  if ( SessionTokenManager < 0 )
  {
LABEL_13:
    if ( Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, 1);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
