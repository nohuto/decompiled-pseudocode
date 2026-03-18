/*
 * XREFs of ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180227F3C
 * Callers:
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x18022853C (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1802343A4 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z @ 0x1802761C0 (-Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x180107AB0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_14978362@@@details@wil@@QEAA_NXZ @ 0x180119B04 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_14978362@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x180215910 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 *     ?GetDebugTargetInfo@CConditionalExpression@@AEBA?AUDebugTargetInfo@1@XZ @ 0x180227E6C (-GetDebugTargetInfo@CConditionalExpression@@AEBA-AUDebugTargetInfo@1@XZ.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x18023F060 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 */

__int64 __fastcall CConditionalExpression::GetValue(
        MatrixSubchannelMaskInfo **this,
        struct CExpressionValueStack *a2,
        wchar_t *a3,
        float *a4)
{
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // esi
  float *v12; // rax
  wchar_t *AnimationLoggingManagerNoRef; // rax
  unsigned int v15[4]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF

  *a4 = 0.0;
  v8 = 0LL;
  v9 = (*((__int64 (__fastcall **)(MatrixSubchannelMaskInfo **, struct CExpressionValueStack *, wchar_t *, __int64 *))*this
        + 32))(
         this,
         a2,
         a3,
         &v16);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x207u, 0LL);
  }
  else
  {
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_14978362>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_14978362>::GetImpl'::`2'::impl)
      || v11 != 1 )
    {
      v12 = (float *)CExpressionValueStack::PeekStackValue(a2, 0);
      --*((_DWORD *)a2 + 4);
      v8 = (__int64)v12;
      *a4 = *v12;
    }
    if ( *((int *)this[41] + 1) < 0 )
    {
      CConditionalExpression::GetDebugTargetInfo((__int64)this, (__int64)v15);
      AnimationLoggingManagerNoRef = (wchar_t *)CBaseExpression::GetAnimationLoggingManagerNoRef((CBaseExpression *)this);
      CAnimationLoggingManager::LogDebugPropertyUpdate(
        AnimationLoggingManagerNoRef,
        (struct CResource *)this,
        2,
        a3,
        90,
        v15[0],
        v15[1],
        this[25],
        v8);
    }
  }
  return v11;
}
