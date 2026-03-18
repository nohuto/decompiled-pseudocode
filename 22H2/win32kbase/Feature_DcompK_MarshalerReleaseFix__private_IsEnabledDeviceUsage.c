/*
 * XREFs of Feature_DcompK_MarshalerReleaseFix__private_IsEnabledDeviceUsage @ 0x1C00D6060
 * Callers:
 *     ?ReleasePathDataResources@CKeyframeAnimationMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0030214 (-ReleasePathDataResources@CKeyframeAnimationMarshaler@DirectComposition@@AEAAXPEAVCApplicationCh.c)
 *     ??1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ @ 0x1C00303FC (--1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     Feature_DcompK_MarshalerReleaseFix__private_IsEnabledFallback @ 0x1C00D6098 (Feature_DcompK_MarshalerReleaseFix__private_IsEnabledFallback.c)
 */

__int64 Feature_DcompK_MarshalerReleaseFix__private_IsEnabledDeviceUsage()
{
  if ( (Feature_DcompK_MarshalerReleaseFix__private_featureState & 0x10) != 0 )
    return Feature_DcompK_MarshalerReleaseFix__private_featureState & 1;
  else
    return Feature_DcompK_MarshalerReleaseFix__private_IsEnabledFallback(
             (unsigned int)Feature_DcompK_MarshalerReleaseFix__private_featureState,
             3LL);
}
