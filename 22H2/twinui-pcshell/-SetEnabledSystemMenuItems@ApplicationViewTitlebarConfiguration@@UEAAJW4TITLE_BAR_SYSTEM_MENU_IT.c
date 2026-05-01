/*
 * XREFs of ?SetEnabledSystemMenuItems@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_SYSTEM_MENU_ITEMS@@@Z @ 0x18008D160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::SetEnabledSystemMenuItems(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 76) = a2;
  return 0LL;
}
