/*
 * XREFs of Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage @ 0x140409C64
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1403A43AC (HalpIommuAllocateDmaDomain.c)
 *     IommuDomainAttachDeviceEx @ 0x1405234A0 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDeviceEx @ 0x1405238E0 (IommuDomainDetachDeviceEx.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x140822E44 (IommupDeviceEnablePasidTaggedDma.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x140930C20 (IommupDeviceDisablePasidTaggedDma.c)
 *     IommuDomainAttachPasidDevice @ 0x140932680 (IommuDomainAttachPasidDevice.c)
 *     IommuDomainDetachPasidDevice @ 0x140932780 (IommuDomainDetachPasidDevice.c)
 *     IommuPasidDeviceCreate @ 0x140932800 (IommuPasidDeviceCreate.c)
 *     IommuPasidDeviceDelete @ 0x1409328C0 (IommuPasidDeviceDelete.c)
 * Callees:
 *     Feature_Servicing_IommuApiPasid__private_IsEnabledFallback @ 0x140409C9C (Feature_Servicing_IommuApiPasid__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_IommuApiPasid__private_featureState & 0x10) != 0 )
    return Feature_Servicing_IommuApiPasid__private_featureState & 1;
  else
    return Feature_Servicing_IommuApiPasid__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_IommuApiPasid__private_featureState,
             3LL);
}
