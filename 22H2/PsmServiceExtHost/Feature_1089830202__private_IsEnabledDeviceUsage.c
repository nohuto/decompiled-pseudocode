/*
 * XREFs of Feature_1089830202__private_IsEnabledDeviceUsage @ 0x180047600
 * Callers:
 *     CrmRegistrationCreateActivity @ 0x180030118 (CrmRegistrationCreateActivity.c)
 * Callees:
 *     <none>
 */

__int64 Feature_1089830202__private_IsEnabledDeviceUsage()
{
  __int64 v1; // [rsp+8h] [rbp+8h]

  LODWORD(v1) = Feature_1089830202__private_featureState;
  if ( (Feature_1089830202__private_featureState & 0x10) != 0 )
    return Feature_1089830202__private_featureState & 1;
  else
    return Feature_1089830202__private_IsEnabledFallback(v1, 3LL);
}
