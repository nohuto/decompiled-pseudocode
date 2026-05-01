/*
 * XREFs of ?GetRuntimeClassName@ImeNotificationExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18022E360
 * Callers:
 *     ?GetRuntimeClassName@ImeNotificationExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180164760 (-GetRuntimeClassName@ImeNotificationExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ImeNotificationExperienceManager::GetRuntimeClassName(
        ImeNotificationExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.ImeStatusNotificationExperienceManager", 0x48u, a2);
}
