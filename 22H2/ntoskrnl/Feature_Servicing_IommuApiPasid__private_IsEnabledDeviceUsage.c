/*
 * XREFs of Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage @ 0x14040F1C4
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1403A91BC (HalpIommuAllocateDmaDomain.c)
 *     IommuDomainAttachDeviceEx @ 0x1405259D0 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDeviceEx @ 0x140525E10 (IommuDomainDetachDeviceEx.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x14082AEB4 (IommupDeviceEnablePasidTaggedDma.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x140933B50 (IommupDeviceDisablePasidTaggedDma.c)
 *     IommuDomainAttachPasidDevice @ 0x140935690 (IommuDomainAttachPasidDevice.c)
 *     IommuDomainDetachPasidDevice @ 0x140935790 (IommuDomainDetachPasidDevice.c)
 *     IommuPasidDeviceCreate @ 0x140935810 (IommuPasidDeviceCreate.c)
 *     IommuPasidDeviceDelete @ 0x1409358D0 (IommuPasidDeviceDelete.c)
 * Callees:
 *     Feature_Servicing_IommuApiPasid__private_IsEnabledFallback @ 0x14040F1FC (Feature_Servicing_IommuApiPasid__private_IsEnabledFallback.c)
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
