/*
 * XREFs of ?v_SetPinStreamVersion@CTaskbandPin@@UEAAJK@Z @ 0x180152100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTaskbandPin::v_SetPinStreamVersion(CTaskbandPin *this, unsigned int a2)
{
  return SHRegSetDWORD(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
           L"FavoritesVersion",
           a2);
}
