/*
 * XREFs of Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsage @ 0x14040A2B8
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x1403A29E0 (KeAddTriageDumpDataBlock.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405682D4 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 * Callees:
 *     Feature_TriageDumpDataExtension__private_IsEnabledFallback @ 0x14040A2F0 (Feature_TriageDumpDataExtension__private_IsEnabledFallback.c)
 */

__int64 Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsage()
{
  if ( (Feature_TriageDumpDataExtension__private_featureState & 0x10) != 0 )
    return Feature_TriageDumpDataExtension__private_featureState & 1;
  else
    return Feature_TriageDumpDataExtension__private_IsEnabledFallback(
             (unsigned int)Feature_TriageDumpDataExtension__private_featureState,
             3LL);
}
