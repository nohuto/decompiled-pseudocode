/*
 * XREFs of Feature_1391280440__private_IsEnabledDeviceUsage @ 0x1C00DE19C
 * Callers:
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C01811A8 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     Feature_1391280440__private_IsEnabledFallback @ 0x1C00DE1D4 (Feature_1391280440__private_IsEnabledFallback.c)
 */

__int64 Feature_1391280440__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1391280440__private_featureState & 0x10) != 0 )
    return Feature_1391280440__private_featureState & 1;
  else
    return Feature_1391280440__private_IsEnabledFallback((unsigned int)Feature_1391280440__private_featureState, 3LL);
}
