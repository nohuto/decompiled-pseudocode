/*
 * XREFs of ?v_GetRemovedChangeCount@CTaskbandPin@@MEAAKXZ @ 0x180151390
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180010180 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

__int64 __fastcall CTaskbandPin::v_GetRemovedChangeCount(CTaskbandPin *this)
{
  LSTATUS DWORD; // eax
  unsigned int v2; // ecx
  unsigned int v4; // [rsp+20h] [rbp-18h] BYREF

  DWORD = SHRegGetDWORD(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
            L"FavoritesRemovedChanges",
            &v4);
  v2 = v4;
  if ( DWORD < 0 )
    return 0;
  return v2;
}
