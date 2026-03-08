/*
 * XREFs of Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage @ 0x1C00DF2DC
 * Callers:
 *     RIMResetPointerDevices @ 0x1C01A7E40 (RIMResetPointerDevices.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01B9F94 (RIMSuppressAllActiveContacts.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C01DECA4 (RIMCmRemoveContactSuppressionReasons.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01ED628 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C02120C0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledFallback @ 0x1C00DF314 (Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_featureState & 0x10) != 0 )
    return Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_featureState & 1;
  else
    return Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_featureState,
             3LL);
}
