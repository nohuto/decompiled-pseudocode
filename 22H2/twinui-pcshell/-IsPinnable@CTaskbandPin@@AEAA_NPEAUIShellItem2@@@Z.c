/*
 * XREFs of ?IsPinnable@CTaskbandPin@@AEAA_NPEAUIShellItem2@@@Z @ 0x180150234
 * Callers:
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x1801513F0 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18020605C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CTaskbandPin::IsPinnable(CTaskbandPin *this, struct IShellItem2 *a2)
{
  bool v3; // di
  HRESULT (__stdcall *GetString)(IShellItem2 *, const PROPERTYKEY *const, LPWSTR *); // rbx
  unsigned int EffectivePackageStatusForUser; // eax
  unsigned int v7; // [rsp+20h] [rbp-30h] BYREF
  int v8; // [rsp+24h] [rbp-2Ch] BYREF
  __int128 v9; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v3 = 1;
  if ( ((int (__fastcall *)(struct IShellItem2 *, void *, int *))a2->lpVtbl->GetUInt32)(
         a2,
         &PKEY_Launcher_AppState,
         &v8) >= 0 )
  {
    v3 = 0;
    if ( v8 )
    {
      if ( v8 == 7 )
      {
        v9 = 0uLL;
        v10 = 0LL;
        GetString = a2->lpVtbl->GetString;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v9);
        *((_QWORD *)&v9 + 1) = -1LL;
        v10 = -1LL;
        if ( ((int (__fastcall *)(struct IShellItem2 *, __int128 *, __int128 *))GetString)(
               a2,
               &PKEY_AppUserModel_PackageFullName,
               &v9) >= 0
          && (_QWORD)v9
          && *(_WORD *)v9 )
        {
          v7 = 0;
          EffectivePackageStatusForUser = GetEffectivePackageStatusForUser(0LL, v9, &v7);
          if ( EffectivePackageStatusForUser )
            wil::details::in1diag3::_Log_Win32(
              retaddr,
              (void *)0x3A2,
              (unsigned int)"pcshell\\shell\\pinninglib\\lib\\TaskbandPin.cpp",
              (const char *)EffectivePackageStatusForUser,
              v7);
          else
            v3 = (v7 & 0x33BF) == 0;
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v9);
      }
    }
    else
    {
      return 1;
    }
  }
  return v3;
}
