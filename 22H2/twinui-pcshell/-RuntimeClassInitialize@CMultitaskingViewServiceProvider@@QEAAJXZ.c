/*
 * XREFs of ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x1803ED530
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewServiceProvider@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803EC83C (--$MakeAndInitialize@VCMultitaskingViewServiceProvider@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1801BD004 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801BF1D4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Initialize@ForegroundStaging@@QEAAJXZ @ 0x1803ED198 (-Initialize@ForegroundStaging@@QEAAJXZ.c)
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1803EDDE4 (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::RuntimeClassInitialize(IUnknown *this)
{
  int inited; // edi
  __int64 v3; // rdx
  struct IUnknownVtbl *v5; // rax
  struct IUnknownVtbl *v6; // rax
  struct IUnknownVtbl *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  _OWORD v10[3]; // [rsp+20h] [rbp-79h] BYREF
  struct IUnknownVtbl *lpVtbl; // [rsp+50h] [rbp-49h]
  __int64 v12; // [rsp+58h] [rbp-41h]
  __int128 v13; // [rsp+60h] [rbp-39h]
  struct IUnknownVtbl *v14; // [rsp+70h] [rbp-29h]
  __int64 v15; // [rsp+78h] [rbp-21h]
  __int128 v16; // [rsp+80h] [rbp-19h]
  struct IUnknownVtbl *v17; // [rsp+90h] [rbp-9h]
  __int64 v18; // [rsp+98h] [rbp-1h]
  __int128 v19; // [rsp+A0h] [rbp+7h]
  struct IUnknownVtbl *v20; // [rsp+B0h] [rbp+17h]
  __int64 v21; // [rsp+B8h] [rbp+1Fh]
  __int128 v22; // [rsp+C0h] [rbp+27h]
  struct IUnknownVtbl *v23; // [rsp+D0h] [rbp+37h]
  __int64 v24; // [rsp+D8h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  inited = CObjectWithThreadUseDetection::InitApartmentId((CObjectWithThreadUseDetection *)&this[14]);
  if ( inited < 0 )
  {
    v3 = 101LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)inited);
    return (unsigned int)inited;
  }
  inited = CMultitaskingViewServiceProvider::_InitChildServices(this);
  if ( inited < 0 )
  {
    v3 = 103LL;
    goto LABEL_3;
  }
  lpVtbl = this[23].lpVtbl;
  v12 = 0LL;
  v14 = this[24].lpVtbl;
  v15 = 0LL;
  v5 = this[22].lpVtbl;
  v10[0] = *(_OWORD *)&SID_MultitaskingViewServiceProvider.Revision;
  v17 = v5;
  v18 = 0LL;
  v6 = this[25].lpVtbl;
  v10[2] = *(_OWORD *)&SID_AllUpView.Revision;
  v20 = v6;
  v21 = 0LL;
  v7 = this[27].lpVtbl;
  v13 = *(_OWORD *)&SID_PPIAllUpView.Revision;
  v23 = v7;
  v24 = 0LL;
  v10[1] = 0LL;
  v16 = *(_OWORD *)&SID_MultitaskingViewGestureHandler.Revision;
  v19 = *(_OWORD *)&SID_MultitaskingViewVisibilityService.Revision;
  v22 = *(_OWORD *)&SID_ApplicationViewIconLoaderService.Revision;
  inited = CImmersiveShellComponent::RegisterServiceInformation(
             (CImmersiveShellComponent *)&this[3],
             (const struct CImmersiveShellComponent::ISC_SERVICE *)v10,
             6LL);
  if ( inited < 0 )
  {
    v3 = 117LL;
    goto LABEL_3;
  }
  v8 = ForegroundStaging::Initialize((ForegroundStaging *)&this[30]);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x78,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
