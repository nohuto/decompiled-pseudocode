/*
 * XREFs of ?GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180057188
 * Callers:
 *     ?GetAppViewFileName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180057014 (-GetAppViewFileName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     ?GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z @ 0x1802DFEB8 (-GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z.c)
 *     ?IsSameAppId@Win32PrimaryAppInformation@@QEAA_NPEAUIApplicationView@@@Z @ 0x18044BC50 (-IsSameAppId@Win32PrimaryAppInformation@@QEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetWindowImageName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUHWND__@@@Z @ 0x1800572C4 (-GetWindowImageName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32ApplicationViewHelpers::GetApplicationViewImageName(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  int v4; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v2 + 24))(a2, &v8);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x29,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\Win32ApplicationViewHelpers.h",
      (const char *)(unsigned int)v4,
      v6);
    __debugbreak();
  }
  Win32ApplicationViewHelpers::GetWindowImageName(a1, v8);
  return a1;
}
