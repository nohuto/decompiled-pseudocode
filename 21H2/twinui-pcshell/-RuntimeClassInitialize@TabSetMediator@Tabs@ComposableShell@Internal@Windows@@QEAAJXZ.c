/*
 * XREFs of ?RuntimeClassInitialize@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@QEAAJXZ @ 0x18030C238
 * Callers:
 *     ??$MakeAndInitialize@VTabSetMediator@Tabs@ComposableShell@Internal@Windows@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180309A30 (--$MakeAndInitialize@VTabSetMediator@Tabs@ComposableShell@Internal@Windows@@UIUnknown@@$$V@Detai.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801BF384 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediator::RuntimeClassInitialize(
        Windows::Internal::ComposableShell::Tabs::TabSetMediator *this)
{
  int v1; // eax
  _OWORD v3[2]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3[0] = xmmword_1805B2A48;
  v3[1] = 0LL;
  v1 = CImmersiveShellComponent::RegisterServiceInformation(
         (Windows::Internal::ComposableShell::Tabs::TabSetMediator *)((char *)this + 48),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v3,
         1LL);
  if ( v1 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      30LL,
      (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
      (const char *)(unsigned int)v1);
  return 0LL;
}
