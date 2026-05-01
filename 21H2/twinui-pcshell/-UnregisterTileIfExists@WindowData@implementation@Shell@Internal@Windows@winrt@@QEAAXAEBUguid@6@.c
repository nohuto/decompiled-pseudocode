/*
 * XREFs of ?UnregisterTileIfExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x1800F2F5C
 * Callers:
 *     ?EnsureTileRemoved@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUITileNotification@Tiles@456@@Z @ 0x1800EA624 (-EnsureTileRemoved@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUITileNoti.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAA_NXZ @ 0x1800EE728 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEA.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::UnregisterTileIfExists(
        winrt::Windows::Internal::Shell::implementation::WindowData *this,
        const struct winrt::guid *a2)
{
  _QWORD *v3; // rsi
  _QWORD *i; // rbx
  __int64 v5; // rdi
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (_QWORD *)*((_QWORD *)this + 4);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v5 = i[4];
    if ( *(_OWORD *)(v5 + 72) == *(_OWORD *)a2
      && wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl)
      && *(_BYTE *)(v5 + 185) )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 112) + 96LL))(
             *(_QWORD *)(v5 + 112),
             *(_QWORD *)(v5 + 32));
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          188LL,
          (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
          (const char *)(unsigned int)v6);
        JUMPOUT(0x1800F302BLL);
      }
      *(_BYTE *)(v5 + 185) = 0;
    }
  }
}
