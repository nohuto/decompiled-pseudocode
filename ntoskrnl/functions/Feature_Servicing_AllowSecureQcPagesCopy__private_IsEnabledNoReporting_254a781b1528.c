__int64 Feature_Servicing_AllowSecureQcPagesCopy__private_IsEnabledNoReporting()
{
  if ( (Feature_Servicing_AllowSecureQcPagesCopy__private_featureState & 2) != 0 )
    return Feature_Servicing_AllowSecureQcPagesCopy__private_featureState & 1;
  else
    return Feature_Servicing_AllowSecureQcPagesCopy__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_AllowSecureQcPagesCopy__private_featureState,
             0);
}
