/*
 * XREFs of Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage @ 0x1C000361C
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00023F0 (NVMeCompletionDpcRoutine.c)
 *     NVMeRequestComplete @ 0x1C000318C (NVMeRequestComplete.c)
 *     NVMeHwFindAdapter @ 0x1C0007CD0 (NVMeHwFindAdapter.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     NVMeControllerRemove @ 0x1C000E18C (NVMeControllerRemove.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C0023ED4 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 * Callees:
 *     Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledFallback @ 0x1C0003654 (Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_featureState & 0x10) != 0 )
    return Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_featureState & 1;
  else
    return Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_featureState,
             3LL);
}
