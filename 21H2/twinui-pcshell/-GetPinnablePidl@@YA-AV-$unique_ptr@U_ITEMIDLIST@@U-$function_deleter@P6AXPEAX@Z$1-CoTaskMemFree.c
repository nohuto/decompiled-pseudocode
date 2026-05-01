/*
 * XREFs of ?GetPinnablePidl@@YA?AV?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x18013A050
 * Callers:
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x180138490 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$shared_ptr@VPinReq.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x1800AF0F8 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?GetPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180139EDC (-GetPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@G@std.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802D9D90 (--1-$out_param_t@V-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX.c)
 */

// Hidden C++ exception states: #wind=3
ITEMIDLIST *__fastcall GetPinnablePidl(ITEMIDLIST *a1, _OWORD *a2, __int128 *a3, __int64 a4)
{
  HRESULT v5; // eax
  LPITEMIDLIST ppidl[2]; // [rsp+30h] [rbp-50h] BYREF
  char v8; // [rsp+40h] [rbp-40h]
  ITEMIDLIST *v9; // [rsp+50h] [rbp-30h]
  __int128 v10; // [rsp+60h] [rbp-20h] BYREF
  IUnknown *punk; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v9 = a1;
  v10 = *a3;
  *(_OWORD *)ppidl = *a2;
  GetPinnableItem((void **)&punk, (__int128 *)ppidl, &v10, a4);
  *(_QWORD *)&a1->mkid.cb = 0LL;
  ppidl[0] = a1;
  ppidl[1] = 0LL;
  v8 = 1;
  v5 = SHGetIDListFromObject(punk, &ppidl[1]);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      146LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(ppidl);
  if ( punk )
    winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&punk);
  return a1;
}
