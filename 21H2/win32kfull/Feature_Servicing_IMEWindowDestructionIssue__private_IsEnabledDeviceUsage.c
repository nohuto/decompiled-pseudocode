/*
 * XREFs of Feature_Servicing_IMEWindowDestructionIssue__private_IsEnabledDeviceUsage @ 0x1C0169A30
 * Callers:
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 * Callees:
 *     Feature_Servicing_IMEWindowDestructionIssue__private_IsEnabledFallback @ 0x1C0169A68 (Feature_Servicing_IMEWindowDestructionIssue__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_IMEWindowDestructionIssue__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_IMEWindowDestructionIssue__private_featureState & 0x10) != 0 )
    return Feature_Servicing_IMEWindowDestructionIssue__private_featureState & 1;
  else
    return Feature_Servicing_IMEWindowDestructionIssue__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_IMEWindowDestructionIssue__private_featureState,
             3LL);
}
