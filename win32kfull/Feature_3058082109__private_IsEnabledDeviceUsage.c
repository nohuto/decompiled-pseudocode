/*
 * XREFs of Feature_3058082109__private_IsEnabledDeviceUsage @ 0x1C012FDC0
 * Callers:
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0278BE8 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z.c)
 *     GreResetDCInternal @ 0x1C02B0050 (GreResetDCInternal.c)
 * Callees:
 *     Feature_3058082109__private_IsEnabledFallback @ 0x1C012FDF8 (Feature_3058082109__private_IsEnabledFallback.c)
 */

__int64 Feature_3058082109__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3058082109__private_featureState & 0x10) != 0 )
    return Feature_3058082109__private_featureState & 1;
  else
    return Feature_3058082109__private_IsEnabledFallback((unsigned int)Feature_3058082109__private_featureState, 3LL);
}
