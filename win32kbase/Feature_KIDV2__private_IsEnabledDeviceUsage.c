/*
 * XREFs of Feature_KIDV2__private_IsEnabledDeviceUsage @ 0x1C00DDF28
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C008097C (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0082990 (xxxInternalActivateKeyboardLayout.c)
 *     NtMITSetInputDelegationMode @ 0x1C016BD10 (NtMITSetInputDelegationMode.c)
 *     SetInputDelegationModeImpl @ 0x1C021882C (SetInputDelegationModeImpl.c)
 * Callees:
 *     Feature_KIDV2__private_IsEnabledFallback @ 0x1C00DDF60 (Feature_KIDV2__private_IsEnabledFallback.c)
 */

__int64 Feature_KIDV2__private_IsEnabledDeviceUsage()
{
  if ( (Feature_KIDV2__private_featureState & 0x10) != 0 )
    return Feature_KIDV2__private_featureState & 1;
  else
    return Feature_KIDV2__private_IsEnabledFallback((unsigned int)Feature_KIDV2__private_featureState, 3LL);
}
