/*
 * XREFs of DrvGetCurrentDpiInfo @ 0x1C00A7004
 * Callers:
 *     NtGdiGetCurrentDpiInfo @ 0x1C00A6F70 (NtGdiGetCurrentDpiInfo.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMValidateSharedHandle @ 0x1C0030048 (HMValidateSharedHandle.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C00A705C (DrvGetCurrentDpiInfoFromHDev.c)
 */

__int64 __fastcall DrvGetCurrentDpiInfo(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int CurrentDpiInfoFromHDev; // ebx

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v5 = HMValidateSharedHandle(a1, v4);
  if ( v5 && (v7 = *(_QWORD *)(v5 + 80)) != 0 )
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v7, a2);
  else
    CurrentDpiInfoFromHDev = -1073741811;
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return CurrentDpiInfoFromHDev;
}
