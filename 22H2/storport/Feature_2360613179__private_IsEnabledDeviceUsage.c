/*
 * XREFs of Feature_2360613179__private_IsEnabledDeviceUsage @ 0x1C001D618
 * Callers:
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077B5C (RaidAdapterDiagnosticIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C007B44C (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     Feature_2360613179__private_IsEnabledFallback @ 0x1C001D650 (Feature_2360613179__private_IsEnabledFallback.c)
 */

__int64 Feature_2360613179__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2360613179__private_featureState & 0x10) != 0 )
    return Feature_2360613179__private_featureState & 1;
  else
    return Feature_2360613179__private_IsEnabledFallback((unsigned int)Feature_2360613179__private_featureState, 3LL);
}
