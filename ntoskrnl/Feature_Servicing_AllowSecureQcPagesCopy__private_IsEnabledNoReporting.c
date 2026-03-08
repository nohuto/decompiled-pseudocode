/*
 * XREFs of Feature_Servicing_AllowSecureQcPagesCopy__private_IsEnabledNoReporting @ 0x14040A5A0
 * Callers:
 *     MiCopySinglePage @ 0x1402A2358 (MiCopySinglePage.c)
 *     KiOpPreprocessSecureFault @ 0x14056A954 (KiOpPreprocessSecureFault.c)
 * Callees:
 *     Feature_Servicing_AllowSecureQcPagesCopy__private_IsEnabledFallback @ 0x14040A580 (Feature_Servicing_AllowSecureQcPagesCopy__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_AllowSecureQcPagesCopy__private_IsEnabledNoReporting()
{
  if ( (Feature_Servicing_AllowSecureQcPagesCopy__private_featureState & 2) != 0 )
    return Feature_Servicing_AllowSecureQcPagesCopy__private_featureState & 1;
  else
    return Feature_Servicing_AllowSecureQcPagesCopy__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_AllowSecureQcPagesCopy__private_featureState,
             0);
}
