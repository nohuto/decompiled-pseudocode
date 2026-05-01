/*
 * XREFs of ?SetPeopleBarCoreWindow@PeoplePaneViewManager@@UEAAJPEAUHWND__@@@Z @ 0x18008D960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PeoplePaneViewManager::SetPeopleBarCoreWindow(PeoplePaneViewManager *this, HWND a2)
{
  *((_QWORD *)this + 61) = a2;
  return 0LL;
}
