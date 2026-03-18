/*
 * XREFs of UserIsTtmEnabled @ 0x1C00C4DB0
 * Callers:
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C001D7F0 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall UserIsTtmEnabled(__int64 a1)
{
  return *(_BYTE *)SGDGetUserGdiSessionState(a1) != 0;
}
