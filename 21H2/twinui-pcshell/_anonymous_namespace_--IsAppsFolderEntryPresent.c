/*
 * XREFs of _anonymous_namespace_::IsAppsFolderEntryPresent @ 0x18013AF7C
 * Callers:
 *     ?IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV?$shared_ptr@VPinRequestContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x18013B8A4 (-IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV-$shar.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x1800AF0F8 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180143160 (-TryGetAppsFolderItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@.c)
 */

bool __fastcall anonymous_namespace_::IsAppsFolderEntryPresent(__int128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // dl
  _QWORD *AppsFolderItem; // rax
  bool v6; // bl
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  LODWORD(v10) = 0;
  v6 = 0;
  if ( *((_QWORD *)a1 + 1) )
  {
    v8 = 0LL;
    v9 = *a1;
    AppsFolderItem = (_QWORD *)TryGetAppsFolderItem(&v10, &v9, &v8, a4);
    v4 = 1;
    if ( *AppsFolderItem )
      v6 = 1;
  }
  if ( (v4 & 1) != 0 && v10 )
    winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v10);
  return v6;
}
