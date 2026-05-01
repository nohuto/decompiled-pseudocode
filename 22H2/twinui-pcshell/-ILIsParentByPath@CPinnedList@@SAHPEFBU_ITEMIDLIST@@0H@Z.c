/*
 * XREFs of ?ILIsParentByPath@CPinnedList@@SAHPEFBU_ITEMIDLIST@@0H@Z @ 0x180157FF0
 * Callers:
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180154124 (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?IsBackupLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z @ 0x180159134 (-IsBackupLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z.c)
 *     ?IsTombstoneLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z @ 0x180159530 (-IsTombstoneLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

__int64 __fastcall CPinnedList::ILIsParentByPath(
        const struct _ITEMIDLIST *a1,
        const struct _ITEMIDLIST *a2,
        unsigned int a3)
{
  unsigned int v5; // ebx
  char v6; // al
  WCHAR v8[264]; // [rsp+20h] [rbp-438h] BYREF
  WCHAR pszPath[264]; // [rsp+230h] [rbp-228h] BYREF

  v5 = 0;
  if ( SHGetPathFromIDListEx(a1, pszPath, 0x104u, 16777218) && SHGetPathFromIDListEx(a2, v8, 0x104u, 16777218) )
  {
    v6 = PathComparePaths(pszPath, v8);
    if ( (v6 & 4) != 0 )
    {
      return a3;
    }
    else if ( (v6 & 8) != 0 )
    {
      LOBYTE(v5) = a3 == 0;
    }
  }
  return v5;
}
