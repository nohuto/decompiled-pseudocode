/*
 * XREFs of ?ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z @ 0x180099578
 * Callers:
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1800995CC (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180154474 (-CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z @ 0x180157DFC (-ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015AF50 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     <none>
 */

const struct _HIDDENITEMID *__fastcall ILFindFirstHiddenID(const struct _ITEMIDLIST *a1)
{
  unsigned __int64 cb; // r8
  unsigned __int16 *v2; // rdx
  __int64 v3; // r9

  cb = a1->mkid.cb;
  v2 = 0LL;
  v3 = *(unsigned __int16 *)((char *)a1 + cb - 2);
  if ( (_WORD)v3 )
  {
    if ( v3 + 8 < cb )
    {
      v2 = (USHORT *)((char *)&a1->mkid.cb + v3);
      if ( *(USHORT *)((char *)&a1->mkid.cb + v3) < 8u
        || HIWORD(*((_DWORD *)v2 + 1)) != 0xBEEF
        || (unsigned int)v3 + *v2 > (unsigned int)cb )
      {
        return 0LL;
      }
    }
  }
  return (const struct _HIDDENITEMID *)v2;
}
