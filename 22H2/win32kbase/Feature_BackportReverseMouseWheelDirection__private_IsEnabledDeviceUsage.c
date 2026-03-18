/*
 * XREFs of Feature_BackportReverseMouseWheelDirection__private_IsEnabledDeviceUsage @ 0x1C00D55FC
 * Callers:
 *     ??0CWheelEvent@CMouseProcessor@@QEAA@PEBVCMouseEvent@1@W4MouseWheelType@@W4MouseWheelRoutingMode@@@Z @ 0x1C01F4B38 (--0CWheelEvent@CMouseProcessor@@QEAA@PEBVCMouseEvent@1@W4MouseWheelType@@W4MouseWheelRoutingMode.c)
 * Callees:
 *     Feature_BackportReverseMouseWheelDirection__private_IsEnabledFallback @ 0x1C00D5634 (Feature_BackportReverseMouseWheelDirection__private_IsEnabledFallback.c)
 */

__int64 Feature_BackportReverseMouseWheelDirection__private_IsEnabledDeviceUsage()
{
  if ( (Feature_BackportReverseMouseWheelDirection__private_featureState & 0x10) != 0 )
    return Feature_BackportReverseMouseWheelDirection__private_featureState & 1;
  else
    return Feature_BackportReverseMouseWheelDirection__private_IsEnabledFallback(
             (unsigned int)Feature_BackportReverseMouseWheelDirection__private_featureState,
             3LL);
}
