/*
 * XREFs of ?GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ @ 0x1802140C8
 * Callers:
 *     ?SendAnimationEnded@DiagnosticCallbacksManager@@QEAAJII_KIGW4AnimationEndedReasonType@@AEBVCExpressionValue@@@Z @ 0x1801B7958 (-SendAnimationEnded@DiagnosticCallbacksManager@@QEAAJII_KIGW4AnimationEndedReasonType@@AEBVCExpr.c)
 *     ?SendAnimationStarted@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z @ 0x1801B7A1C (-SendAnimationStarted@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z.c)
 *     ?SendDebugStart@DiagnosticCallbacksManager@@QEAAJII_KIAEBVCExpressionValue@@@Z @ 0x1801B7B6C (-SendDebugStart@DiagnosticCallbacksManager@@QEAAJII_KIAEBVCExpressionValue@@@Z.c)
 *     ?SendPropertyChanged@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z @ 0x1801B7D3C (-SendPropertyChanged@DiagnosticCallbacksManager@@QEAAJII_KIGAEBVCExpressionValue@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CExpressionValue::GetValueSizeInBytes(CExpressionValue *this)
{
  __int64 v1; // rdx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  v1 = 0LL;
  if ( !*((_BYTE *)this + 76) )
    return v1;
  v2 = *((_DWORD *)this + 18);
  if ( v2 > 69 )
  {
    v7 = v2 - 70;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 33;
        if ( !v9 )
          return 24LL;
        if ( v9 == 161 )
          return 64LL;
        return v1;
      }
    }
    return 16LL;
  }
  if ( v2 == 69 )
    return 16LL;
  v3 = v2 - 17;
  if ( !v3 )
    return 1LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 4LL;
  v5 = v4 - 17;
  if ( !v5 )
    return 8LL;
  v6 = v5 - 7;
  if ( !v6 )
    return 4LL;
  if ( v6 == 10 )
    return 12LL;
  return v1;
}
