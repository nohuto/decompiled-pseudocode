/*
 * XREFs of ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x1801FED50
 * Callers:
 *     ?GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z @ 0x1801FE050 (-GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z.c)
 *     ?GetViews@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1801FE600 (-GetViews@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?GetViewsByZOrder@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1801FE780 (-GetViewsByZOrder@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     _lambda_ee3e0a0da20eb1cf2fabc213f82c029b_::operator() @ 0x18005331C (_lambda_ee3e0a0da20eb1cf2fabc213f82c029b_--operator().c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180053384 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x180054EC4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::RefreshCollection(CApplicationViewManager *this)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v3; // rdx
  __int64 *v5; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v7; // [rsp+48h] [rbp+18h] BYREF
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF

  v8 = 0LL;
  v5 = (__int64 *)&v8;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v9);
  if ( v9 )
    lambda_ee3e0a0da20eb1cf2fabc213f82c029b_::operator()(&v5, v9);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v9);
  if ( v8 )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    v2 = (**v8)(v8, &GUID_2c464444_1696_4977_b07c_617cf0de9c17, &v7);
    v1 = v2;
    if ( v2 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
      v1 = v2;
      if ( v2 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
        goto LABEL_11;
      }
      v3 = 490LL;
    }
    else
    {
      v3 = 488LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_10;
  }
  v1 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E5,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)0x8007139FLL);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v8);
  return v1;
}
