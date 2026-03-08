/*
 * XREFs of ?ClearPreference@CSettingsManager@@UEAAXK@Z @ 0x140003030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSettingsManager::ClearPreference(CSettingsManager *this, int a2)
{
  *((_DWORD *)this + 16) &= ~a2;
}
