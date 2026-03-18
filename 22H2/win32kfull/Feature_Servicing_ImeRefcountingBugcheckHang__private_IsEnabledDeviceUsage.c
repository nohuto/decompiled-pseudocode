/*
 * XREFs of Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage @ 0x1C013CB2C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledFallback @ 0x1C013CB64 (Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_ImeRefcountingBugcheckHang__private_featureState & 0x10) != 0 )
    return Feature_Servicing_ImeRefcountingBugcheckHang__private_featureState & 1;
  else
    return Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_ImeRefcountingBugcheckHang__private_featureState,
             3LL);
}
