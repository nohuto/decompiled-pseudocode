/*
 * XREFs of ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x1800563A0
 * Callers:
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x180056580 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18003F870 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180053384 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x180054EC4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     _lambda_b8642ff14e560df3dcd31f4e91e1514d_::operator() @ 0x180055D4C (_lambda_b8642ff14e560df3dcd31f4e91e1514d_--operator().c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::QuerySizeConstraintsFromApp(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  struct IApplicationView *v4; // rdx
  __int64 WindowForView; // rax
  _QWORD *v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 *v9; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  v9 = (__int64 *)&v7;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v8);
  if ( v8 )
    lambda_b8642ff14e560df3dcd31f4e91e1514d_::operator()(&v9, v8);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v8);
  v2 = v7;
  v3 = *v7;
  WindowForView = ApplicationViewHelpers::GetWindowForView(this, v4);
  LODWORD(v2) = (*(__int64 (__fastcall **)(_QWORD *, __int64))(v3 + 24))(v2, WindowForView);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v7);
  return (unsigned int)v2;
}
