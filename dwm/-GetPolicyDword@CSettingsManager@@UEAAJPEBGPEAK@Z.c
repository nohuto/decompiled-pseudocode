/*
 * XREFs of ?GetPolicyDword@CSettingsManager@@UEAAJPEBGPEAK@Z @ 0x14000BEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSettingsManager::GetPolicyDword(CSettingsManager *this, const unsigned __int16 *a2, BYTE *a3)
{
  return CSettingsManager::GetDword((__int64)this, 1, a2, a3);
}
