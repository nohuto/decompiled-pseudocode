/*
 * XREFs of ?Invoke@PinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAXXZ @ 0x180093080
 * Callers:
 *     <none>
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18000531C (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180006D10 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180084744 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Actions::PinWebsiteToTaskbarService::Invoke(
        CreativeFramework::Actions::PinWebsiteToTaskbarService *this)
{
  wil::details_abi *v1; // rcx
  __int64 v2; // rdx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v4; // r8
  _QWORD v5[2]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v6[3]; // [rsp+38h] [rbp-48h] BYREF
  __int16 v7; // [rsp+50h] [rbp-30h]
  void **v8; // [rsp+58h] [rbp-28h] BYREF
  struct wil::details_abi::ThreadLocalData *v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+6Ch] [rbp-14h]
  _QWORD *v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+78h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h]
  CreativeFramework::Actions::PinWebsiteToTaskbarService *v15; // [rsp+90h] [rbp+10h] BYREF

  v15 = this;
  v6[0] = retaddr;
  v6[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp";
  v6[2] = "Invoke";
  v7 = 127;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteAction>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PinWebsiteAction>::GetImpl'::`2'::impl,
    1u,
    1u);
  v5[0] = &wil::details::functor_wrapper_void<_lambda_62158d46a05af21ae3d227fe228597be_ &>::`vftable';
  v5[1] = &v15;
  v8 = &wil::details::FeatureFunctorHost::`vftable';
  LOBYTE(v1) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v1, v2);
  v9 = ThreadLocalDataCache;
  v10 = 0;
  v11 = 0;
  if ( ThreadLocalDataCache )
  {
    v11 = *((_DWORD *)ThreadLocalDataCache + 4);
    v10 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v10;
  }
  v12 = v6;
  v13 = 11790758;
  wil::details::RunFunctor((wil::details *)v5, (struct wil::details::IFunctor *)&v8, v4);
  if ( v9 )
    *((_DWORD *)v9 + 4) = v11;
}
