/*
 * XREFs of DrvGetCurrentDpiInfo @ 0x1C003CBE8
 * Callers:
 *     NtGdiGetCurrentDpiInfo @ 0x1C003CB50 (NtGdiGetCurrentDpiInfo.c)
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C003CAE4 (DrvGetCurrentDpiInfoFromHDev.c)
 *     HMValidateSharedHandle @ 0x1C003DE88 (HMValidateSharedHandle.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 */

__int64 __fastcall DrvGetCurrentDpiInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int CurrentDpiInfoFromHDev; // ebx

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v6 = HMValidateSharedHandle(a1);
  if ( v6 && (v8 = *(_QWORD *)(v6 + 80)) != 0 )
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v8, a2);
  else
    CurrentDpiInfoFromHDev = -1073741811;
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return CurrentDpiInfoFromHDev;
}
