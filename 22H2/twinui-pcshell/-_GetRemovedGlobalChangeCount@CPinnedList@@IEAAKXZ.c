/*
 * XREFs of ?_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ @ 0x18015E3A4
 * Callers:
 *     ?RemoveFromList@CTaskbandPin@@UEAAJPEAUIShellItem@@@Z @ 0x1801504A0 (-RemoveFromList@CTaskbandPin@@UEAAJPEAUIShellItem@@@Z.c)
 *     ?UpdateForRemovedItemsAsNecessary@CPinnedList@@UEAAJXZ @ 0x18015CFF0 (-UpdateForRemovedItemsAsNecessary@CPinnedList@@UEAAJXZ.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180010180 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

__int64 __fastcall CPinnedList::_GetRemovedGlobalChangeCount(CPinnedList *this)
{
  LSTATUS DWORD; // eax
  unsigned int v2; // ecx
  unsigned int v4; // [rsp+20h] [rbp-18h] BYREF

  DWORD = SHRegGetDWORD(
            HKEY_LOCAL_MACHINE,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\StartPage",
            L"FavoritesRemovedChanges",
            &v4);
  v2 = v4;
  if ( DWORD < 0 )
    return 0;
  return v2;
}
