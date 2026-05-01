/*
 * XREFs of ?IsRunning@StubImmersiveApplication@@UEAAJPEAH@Z @ 0x18008D330
 * Callers:
 *     wil_details_StagingConfig_EnumerateFeatures @ 0x180095BD8 (wil_details_StagingConfig_EnumerateFeatures.c)
 *     ?GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180164590 (-GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ShellFeedsExperienceManagerImpl@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x180165560 (-GetTrustLevel@ShellFeedsExperienceManagerImpl@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StubImmersiveApplication::IsRunning(StubImmersiveApplication *this, int *a2)
{
  *a2 = 1;
  return 0LL;
}
