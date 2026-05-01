/*
 * XREFs of ?GetPosition@CWinRTApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802055B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180053384 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x180054EC4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     _lambda_45f761d2d247477984b20cf6ec7ae807_::operator() @ 0x180055DB4 (_lambda_45f761d2d247477984b20cf6ec7ae807_--operator().c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_bf566675836f3ff339c235f1251539b2___ @ 0x18020494C (ShellPositionerHelpers--PerformCallbackOnView__lambda_bf566675836f3ff339c235f1251539b2___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetPosition(CWinRTApplicationView *this, const struct _GUID *a2, void **a3)
{
  int v6; // ebx
  CWinRTApplicationView *v8; // [rsp+20h] [rbp-20h] BYREF
  __int128 v9; // [rsp+28h] [rbp-18h]
  void **v10; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  IUnknown *punk; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF
  IUnknown **p_punk; // [rsp+70h] [rbp+30h] BYREF

  *a3 = 0LL;
  punk = 0LL;
  p_punk = &punk;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v13);
  if ( v13 )
    lambda_45f761d2d247477984b20cf6ec7ae807_::operator()((__int64 **)&p_punk, v13);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v13);
  v8 = this;
  v9 = (__int128)*a2;
  v10 = a3;
  v6 = ShellPositionerHelpers::PerformCallbackOnView__lambda_bf566675836f3ff339c235f1251539b2___(
         punk,
         (__int64)this,
         &v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&punk);
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF8,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
