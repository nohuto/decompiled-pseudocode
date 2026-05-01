/*
 * XREFs of _anonymous_namespace_::PinShellItem @ 0x18013DBE8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012ADA0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E410 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E410.c)
 *     ?PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18013C100 (-PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITE.c)
 *     ?PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18013C270 (-PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDL.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_d2b9f9141b354d7aab2c271df0a099ad___ @ 0x180132A98 (_anonymous_namespace_--RunSynchronousInSTA__lambda_d2b9f9141b354d7aab2c271df0a099ad___.c)
 */

__int64 __fastcall anonymous_namespace_::PinShellItem(__int64 a1, int a2, __int64 a3)
{
  __int128 v4; // [rsp+20h] [rbp-50h]
  __int128 v5; // [rsp+30h] [rbp-40h]
  __int128 v6[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v7; // [rsp+60h] [rbp-10h] BYREF
  __int64 v8; // [rsp+80h] [rbp+10h] BYREF
  int v9; // [rsp+88h] [rbp+18h] BYREF

  v9 = a2;
  v8 = a1;
  v7 = 0;
  *((_QWORD *)&v4 + 1) = &v8;
  *(_QWORD *)&v4 = a3;
  *(_QWORD *)&v5 = &v9;
  *((_QWORD *)&v5 + 1) = &v7;
  v6[0] = v4;
  v6[1] = v5;
  anonymous_namespace_::RunSynchronousInSTA__lambda_d2b9f9141b354d7aab2c271df0a099ad___(v6);
  return v7;
}
