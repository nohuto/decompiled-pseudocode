/*
 * XREFs of ?GetEnabledSystemMenuItems@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_SYSTEM_MENU_ITEMS@@@Z @ 0x180083190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::GetEnabledSystemMenuItems(
        ApplicationViewTitlebarConfiguration *this,
        enum TITLE_BAR_SYSTEM_MENU_ITEMS *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 19);
  return *((_DWORD *)this + 19) == 0 ? 0x80070490 : 0;
}
