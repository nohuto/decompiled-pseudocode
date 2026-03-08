/*
 * XREFs of ?LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z @ 0x1802122E8
 * Callers:
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x1800EBA24 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 * Callees:
 *     ?TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x18003E85C (-TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendAnimationStarted@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z @ 0x1801B7A1C (-SendAnimationStarted@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z.c)
 */

void __fastcall CAnimationLoggingManager::LogAnimationStarted(
        CAnimationLoggingManager *this,
        __int64 a2,
        struct CResource *a3,
        __int64 a4,
        unsigned int a5)
{
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rax
  struct CAnimationLoggingManager::ResourceDebugInfo *v9; // rbx
  DiagnosticCallbacksManager *v10; // r14
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-A8h]
  unsigned int v15; // [rsp+20h] [rbp-A8h]
  unsigned __int16 v16; // [rsp+28h] [rbp-A0h]
  _BYTE v17[64]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v18; // [rsp+80h] [rbp-48h] BYREF
  int v19; // [rsp+88h] [rbp-40h]
  char v20; // [rsp+8Ch] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  if ( a3 )
  {
    DebugInfoForResource = CAnimationLoggingManager::TryGetDebugInfoForResource(this, a3);
    v9 = DebugInfoForResource;
    if ( DebugInfoForResource )
    {
      if ( *((_DWORD *)DebugInfoForResource + 10) )
      {
        v10 = *(DiagnosticCallbacksManager **)(*((_QWORD *)this + 2) + 1248LL);
        memset_0(v17, 0, sizeof(v17));
        v11 = *(_QWORD *)a3;
        v18 = 0LL;
        v19 = 18;
        v20 = 0;
        v12 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _BYTE *))(v11 + 136))(a3, a5, v17);
        if ( v12 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            575LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
            (const char *)(unsigned int)v12,
            v14);
        v13 = DiagnosticCallbacksManager::SendAnimationStarted(
                v10,
                *((_DWORD *)v9 + 10),
                *((_DWORD *)v9 + 11),
                a2,
                a5,
                v16,
                (const struct CExpressionValue *)v17);
        if ( v13 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            584LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
            (const char *)(unsigned int)v13,
            v15);
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v18);
      }
    }
  }
}
