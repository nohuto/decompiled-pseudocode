/*
 * XREFs of ?GetRuntimeClassName@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180037850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::GetRuntimeClassName(
        Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Gaming.Preview.GamesEnumeration.GameConfigAppDisplayInfoServer", 0x46u, a2);
}
