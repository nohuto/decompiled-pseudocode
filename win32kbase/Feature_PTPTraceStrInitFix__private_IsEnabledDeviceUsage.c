/*
 * XREFs of Feature_PTPTraceStrInitFix__private_IsEnabledDeviceUsage @ 0x1C00E0D38
 * Callers:
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C020EABC (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     Feature_PTPTraceStrInitFix__private_IsEnabledFallback @ 0x1C00E0D70 (Feature_PTPTraceStrInitFix__private_IsEnabledFallback.c)
 */

__int64 Feature_PTPTraceStrInitFix__private_IsEnabledDeviceUsage()
{
  if ( (Feature_PTPTraceStrInitFix__private_featureState & 0x10) != 0 )
    return Feature_PTPTraceStrInitFix__private_featureState & 1;
  else
    return Feature_PTPTraceStrInitFix__private_IsEnabledFallback(
             (unsigned int)Feature_PTPTraceStrInitFix__private_featureState,
             3LL);
}
