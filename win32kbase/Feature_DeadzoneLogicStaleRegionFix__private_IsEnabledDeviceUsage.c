/*
 * XREFs of Feature_DeadzoneLogicStaleRegionFix__private_IsEnabledDeviceUsage @ 0x1C00DFF30
 * Callers:
 *     ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x1C020A744 (-ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z.c)
 * Callees:
 *     Feature_DeadzoneLogicStaleRegionFix__private_IsEnabledFallback @ 0x1C00DFF68 (Feature_DeadzoneLogicStaleRegionFix__private_IsEnabledFallback.c)
 */

__int64 Feature_DeadzoneLogicStaleRegionFix__private_IsEnabledDeviceUsage()
{
  if ( (Feature_DeadzoneLogicStaleRegionFix__private_featureState & 0x10) != 0 )
    return Feature_DeadzoneLogicStaleRegionFix__private_featureState & 1;
  else
    return Feature_DeadzoneLogicStaleRegionFix__private_IsEnabledFallback(
             (unsigned int)Feature_DeadzoneLogicStaleRegionFix__private_featureState,
             3LL);
}
