/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x18007F7E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcFreeChangeRegistration @ 0x18007F810 (RtlpFcFreeChangeRegistration.c)
 *     RtlpFcRemoveChangeRegistration @ 0x18007F89C (RtlpFcRemoveChangeRegistration.c)
 */

NTSTATUS __cdecl RtlUnregisterFeatureConfigurationChangeNotification(
        RTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  NTSTATUS result; // eax

  if ( !byte_18016C508 )
  {
    RtlpFcRemoveChangeRegistration(RegistrationHandle, RegistrationHandle);
    return RtlpFcFreeChangeRegistration(RegistrationHandle);
  }
  return result;
}
