/*
 * XREFs of ?DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z @ 0x180211EE8
 * Callers:
 *     _lambda_c032fb9048ad168ba2bd3d1dd4629f64_::_lambda_invoker_cdecl_ @ 0x180210EF0 (_lambda_c032fb9048ad168ba2bd3d1dd4629f64_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x18003E85C (-TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180049354 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendDebugStart@DiagnosticCallbacksManager@@QEAAJII_KIAEBVCExpressionValue@@@Z @ 0x1801B7B6C (-SendDebugStart@DiagnosticCallbacksManager@@QEAAJII_KIAEBVCExpressionValue@@@Z.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18021203C (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

void __fastcall CAnimationLoggingManager::DeferredSendDebugStart(
        CAnimationLoggingManager *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v6; // rcx
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v9; // rdi
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rax
  struct CAnimationLoggingManager::ResourceDebugInfo *v11; // rbx
  __int64 v12; // rax
  DiagnosticCallbacksManager *v13; // rsi
  int v14; // eax
  const char *v15; // [rsp+20h] [rbp-98h]
  unsigned int v16; // [rsp+20h] [rbp-98h]
  _BYTE v17[64]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v18; // [rsp+70h] [rbp-48h] BYREF
  int v19; // [rsp+78h] [rbp-40h]
  char v20; // [rsp+7Ch] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(*(CResourceTable **)(v6 + 32), a2);
    v9 = ResourceWithoutType;
    if ( ResourceWithoutType )
    {
      DebugInfoForResource = CAnimationLoggingManager::TryGetDebugInfoForResource(this, ResourceWithoutType);
      v11 = DebugInfoForResource;
      if ( DebugInfoForResource )
      {
        if ( *((_DWORD *)DebugInfoForResource + 10) )
        {
          memset_0(v17, 0, sizeof(v17));
          v12 = *((_QWORD *)this + 2);
          v18 = 0LL;
          v19 = 18;
          v20 = 0;
          v13 = *(DiagnosticCallbacksManager **)(v12 + 1248);
          if ( (*(int (__fastcall **)(struct CResource *, _QWORD, _BYTE *))(*(_QWORD *)v9 + 136LL))(v9, a4, v17) < 0 )
            wil::details::in1diag3::FailFast_UnexpectedMsg(
              retaddr,
              (void *)0x126,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
              "Unexpectedly failed to get property.",
              v15);
          v14 = DiagnosticCallbacksManager::SendDebugStart(
                  v13,
                  *((_DWORD *)v11 + 10),
                  *((_DWORD *)v11 + 11),
                  a3,
                  a4,
                  (const struct CExpressionValue *)v17);
          if ( v14 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              288LL,
              (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
              (const char *)(unsigned int)v14,
              v16);
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v18);
        }
      }
    }
  }
}
