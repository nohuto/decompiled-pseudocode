/*
 * XREFs of ?ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z @ 0x180157E1C
 * Callers:
 *     ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x1801545E4 (-CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z @ 0x180157E80 (-ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015B0C0 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z @ 0x180157F6C (-ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z.c)
 */

struct _ITEMIDLIST *__fastcall ILAppendHiddenID(LPITEMIDLIST pidl, const struct _HIDDENITEMID *a2)
{
  ITEMIDLIST *v2; // rbx
  struct _ITEMIDLIST *v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = pidl;
  v2 = pidl;
  if ( pidl && pidl->mkid.cb )
  {
    ILCloneWithHiddenID(pidl, a2, &v4);
    ILFree(v2);
    return v4;
  }
  return v2;
}
