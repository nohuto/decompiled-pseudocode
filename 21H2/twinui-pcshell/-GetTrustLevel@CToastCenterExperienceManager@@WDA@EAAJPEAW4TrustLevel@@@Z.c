/*
 * XREFs of ?GetTrustLevel@CToastCenterExperienceManager@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x180164A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CToastCenterExperienceManager::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CInsightsExperienceManager::GetTrustLevel((CInsightsExperienceManager *)(a1 - 48), a2);
}
