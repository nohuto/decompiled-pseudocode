/*
 * XREFs of Feature_CcImprovementsForReFS__private_IsEnabledFallback @ 0x140409E30
 * Callers:
 *     Feature_CcImprovementsForReFS__private_IsEnabledDeviceUsage @ 0x140409DF8 (Feature_CcImprovementsForReFS__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140409AE0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_CcImprovementsForReFS__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_CcImprovementsForReFS__private_descriptor);
}
