/*
 * XREFs of Feature_Servicing_SePrivilegeCheck__private_IsEnabledDeviceUsage @ 0x140419ACC
 * Callers:
 *     MiIsUserQueryVmCallerTrusted @ 0x1407D08DC (MiIsUserQueryVmCallerTrusted.c)
 * Callees:
 *     Feature_Servicing_SePrivilegeCheck__private_IsEnabledFallback @ 0x140419B04 (Feature_Servicing_SePrivilegeCheck__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_SePrivilegeCheck__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_SePrivilegeCheck__private_featureState & 0x10) != 0 )
    return Feature_Servicing_SePrivilegeCheck__private_featureState & 1;
  else
    return Feature_Servicing_SePrivilegeCheck__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_SePrivilegeCheck__private_featureState,
             3LL);
}
