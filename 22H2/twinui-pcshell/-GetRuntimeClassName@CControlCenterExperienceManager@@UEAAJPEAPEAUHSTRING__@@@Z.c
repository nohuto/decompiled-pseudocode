/*
 * XREFs of ?GetRuntimeClassName@CControlCenterExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180222F60
 * Callers:
 *     ?GetRuntimeClassName@CControlCenterExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180164340 (-GetRuntimeClassName@CControlCenterExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CControlCenterExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180164350 (-GetRuntimeClassName@CControlCenterExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CControlCenterExperienceManager@@WEA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180164360 (-GetRuntimeClassName@CControlCenterExperienceManager@@WEA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CControlCenterExperienceManager::GetRuntimeClassName(
        CControlCenterExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.ControlCenterExperienceManager", 0x40u, a2);
}
