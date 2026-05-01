/*
 * XREFs of ?QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z @ 0x18047B718
 * Callers:
 *     ?InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x18047B530 (-InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18046A124 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch@@@details@wil.c)
 *     ?FindLeastRecentlyActivatedItem@PPILayoutOperation@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x18047B3B8 (-FindLeastRecentlyActivatedItem@PPILayoutOperation@@AEAAJPEAPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PPILayoutOperation::QueryInsertApp(
        PPILayoutOperation *this,
        struct IApplicationView *a2,
        __int64 a3)
{
  int v5; // eax
  __int64 *v6; // rcx
  __int64 v7; // r10
  int v8; // ebx
  __int64 v9; // rdx
  int LeastRecentlyActivatedItem; // eax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v14; // [rsp+50h] [rbp+18h] BYREF
  struct IApplicationView *v15; // [rsp+58h] [rbp+20h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch>::GetImpl'::`2'::impl,
    0,
    a3);
  if ( (*(unsigned int (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 8) + 184LL))(
         *((_QWORD *)this + 8),
         a2) )
  {
    return 0LL;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 8) + 168LL))(
         *((_QWORD *)this + 8),
         0LL,
         &v14);
  v6 = (__int64 *)*((_QWORD *)this + 8);
  v7 = *v6;
  if ( v5 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IApplicationView *, __int64))(v7 + 248))(v6, 0LL, a2, 1LL);
    if ( v8 < 0 )
    {
      v9 = 206LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
    return 0LL;
  }
  if ( (*(unsigned int (**)(void))(v7 + 72))() > 1 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    LeastRecentlyActivatedItem = PPILayoutOperation::FindLeastRecentlyActivatedItem(this, &v15);
    v8 = LeastRecentlyActivatedItem;
    if ( LeastRecentlyActivatedItem >= 0 )
    {
      LeastRecentlyActivatedItem = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IApplicationView *, __int64))(**((_QWORD **)this + 8) + 248LL))(
                                     *((_QWORD *)this + 8),
                                     v15,
                                     a2,
                                     1LL);
      v8 = LeastRecentlyActivatedItem;
      if ( LeastRecentlyActivatedItem >= 0 )
      {
        v8 = 0;
        goto LABEL_16;
      }
      v12 = 221LL;
    }
    else
    {
      v12 = 220LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
      (const char *)(unsigned int)LeastRecentlyActivatedItem);
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    return (unsigned int)v8;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 8) + 232LL))(
         *((_QWORD *)this + 8),
         a2,
         1LL);
  if ( v8 < 0 )
  {
    v9 = 213LL;
    goto LABEL_5;
  }
  return 0LL;
}
