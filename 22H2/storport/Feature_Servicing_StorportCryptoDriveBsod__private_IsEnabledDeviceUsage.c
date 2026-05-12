/*
 * XREFs of Feature_Servicing_StorportCryptoDriveBsod__private_IsEnabledDeviceUsage @ 0x1C001E7E8
 * Callers:
 *     RaUnitStartIo @ 0x1C0003A20 (RaUnitStartIo.c)
 * Callees:
 *     Feature_Servicing_StorportCryptoDriveBsod__private_IsEnabledFallback @ 0x1C001E820 (Feature_Servicing_StorportCryptoDriveBsod__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_StorportCryptoDriveBsod__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_StorportCryptoDriveBsod__private_featureState & 0x10) != 0 )
    return Feature_Servicing_StorportCryptoDriveBsod__private_featureState & 1;
  else
    return Feature_Servicing_StorportCryptoDriveBsod__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_StorportCryptoDriveBsod__private_featureState,
             3LL);
}
