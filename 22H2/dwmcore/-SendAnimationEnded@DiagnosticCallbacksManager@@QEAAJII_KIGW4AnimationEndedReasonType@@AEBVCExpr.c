/*
 * XREFs of ?SendAnimationEnded@DiagnosticCallbacksManager@@QEAAJII_KIGW4AnimationEndedReasonType@@AEBVCExpressionValue@@@Z @ 0x18016683C
 * Callers:
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x1801B0158 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801643CC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxyForPeer@DiagnosticCallbacksManager@@AEAAPEAUICompObjectDiagnosticsRootProxy@@I@Z @ 0x180167404 (-TryGetProxyForPeer@DiagnosticCallbacksManager@@AEAAPEAUICompObjectDiagnosticsRootProxy@@I@Z.c)
 *     ?GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ @ 0x1801B1734 (-GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ.c)
 */

__int64 __fastcall DiagnosticCallbacksManager::SendAnimationEnded(
        DiagnosticCallbacksManager *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        CExpressionValue *a8)
{
  int ValueSizeInBytes; // eax
  __int64 v11; // r10
  __int64 v12; // r11
  int v13; // ecx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( DiagnosticCallbacksManager::TryGetProxyForPeer(a1, a2) )
  {
    ValueSizeInBytes = CExpressionValue::GetValueSizeInBytes(a8);
    v13 = *(_DWORD *)(v11 + 72);
    if ( v13 == 11 )
      v11 = *(_QWORD *)(v11 + 64);
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _DWORD, int, int, __int64, int))(*(_QWORD *)v12 + 56LL))(
            v12,
            a3,
            a4,
            a5,
            0,
            a7,
            v13,
            v11,
            ValueSizeInBytes);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x113,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
  }
  return 0LL;
}
