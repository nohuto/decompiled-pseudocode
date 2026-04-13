/*
 * XREFs of ?CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x1800891F0
 * Callers:
 *     ??R_lambda_84d899b7d93de90bfed2062708934b25_@@QEBA_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z @ 0x180088E74 (--R_lambda_84d899b7d93de90bfed2062708934b25_@@QEBA_NPEB_WPEAUITargetedContentIdAliasValue@Intern.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180019478 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180087B70 (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     ??$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18008BD68 (--$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsI.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall CreativeFramework::Actions::SwapStartTileService::CreateTargetedContentTileIdentifier(
        __int64 a1,
        _QWORD *a2,
        char *a3,
        const WCHAR *a4)
{
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID, PVOID, _QWORD *); // rsi
  PVOID Reserved1; // rdi
  const WCHAR *v8; // rcx
  HSTRING_HEADER *v9; // rax
  int v10; // eax
  const WCHAR *v12; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-49h] BYREF
  void *v14[3]; // [rsp+58h] [rbp-31h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp-19h]
  HSTRING_HEADER v16; // [rsp+78h] [rbp-11h] BYREF
  HSTRING_HEADER v17; // [rsp+98h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v13[1] = -2LL;
  v13[2] = a2;
  v12 = a4;
  CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(v14, a3);
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::ITargetedContentUnifiedTileIdentifierFactory>(v13);
  *a2 = 0LL;
  v5 = v13[0];
  v6 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, _QWORD *))(*(_QWORD *)v13[0] + 48LL);
  *a2 = 0LL;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, &v12)[1].Reserved.Reserved1;
  v8 = (const WCHAR *)v14;
  if ( v15 >= 8 )
    v8 = (const WCHAR *)v14[0];
  v12 = v8;
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, &v12);
  v10 = v6(v5, v9[1].Reserved.Reserved1, Reserved1, a2);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x15D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x180089309LL);
  }
  if ( v13[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
  if ( v15 >= 8 )
    operator delete(v14[0]);
  return a2;
}
