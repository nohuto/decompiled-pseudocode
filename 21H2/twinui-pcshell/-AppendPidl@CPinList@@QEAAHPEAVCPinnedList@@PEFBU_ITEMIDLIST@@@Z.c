/*
 * XREFs of ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x1801532F4
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158470 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180159B8C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x18015A700 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     memmove_0 @ 0x180091333 (memmove_0.c)
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1800995EC (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     _DSA_MaybeShrink @ 0x18014FAF0 (_DSA_MaybeShrink.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18015530C (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z @ 0x18015E238 (-_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z.c)
 *     DSA_InsertItem @ 0x1804E7B74 (DSA_InsertItem.c)
 */

__int64 __fastcall CPinList::AppendPidl(CPinList *this, struct CPinnedList *a2, const struct _ITEMIDLIST *a3)
{
  const ITEMIDLIST **PidlOrAppID; // rax
  const struct _ITEMIDLIST **v7; // rbx
  CPinList *v8; // rcx
  __int64 v9; // rbx
  int v10; // edx
  int inserted; // ebx
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  LPITEMIDLIST pitem; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v15; // [rsp+30h] [rbp-D0h]
  __int64 v16; // [rsp+40h] [rbp-C0h]
  WCHAR pszPath[264]; // [rsp+50h] [rbp-B0h] BYREF

  PidlOrAppID = (const ITEMIDLIST **)CPinList::FindPidlOrAppID(this, a3, 1, &v13);
  v7 = PidlOrAppID;
  if ( PidlOrAppID && ILFindHiddenIDOn(*PidlOrAppID, -1091633108) )
  {
    memset_0(pszPath, 0, 0x208uLL);
    CPinList::_GetBackupShortcutToDelete(v8, a2, *v7, pszPath);
    v9 = *(_QWORD *)this;
    if ( v13 >= 0 )
    {
      v10 = *(_DWORD *)v9;
      if ( v13 < *(_DWORD *)v9 )
      {
        if ( v13 < v10 - 1 )
        {
          memmove_0(
            (void *)(*(_QWORD *)(v9 + 8) + (unsigned int)(v13 * *(_DWORD *)(v9 + 20))),
            (const void *)(*(_QWORD *)(v9 + 8) + (unsigned int)(*(_DWORD *)(v9 + 20) * (v13 + 1))),
            (unsigned int)(*(_DWORD *)(v9 + 20) * (v10 - v13 - 1)));
          v10 = *(_DWORD *)v9;
        }
        *(_DWORD *)v9 = v10 - 1;
        DSA_MaybeShrink(v9);
      }
    }
    if ( pszPath[0] )
    {
      SHRemoveLocalizedName(pszPath);
      DeleteFileW(pszPath);
    }
  }
  inserted = -1;
  pitem = ILClone(a3);
  v16 = 0LL;
  v15 = 0LL;
  if ( pitem )
  {
    inserted = DSA_InsertItem(*(HDSA *)this, 0x7FFFFFFF, &pitem);
    if ( inserted < 0 )
      ILFree(pitem);
  }
  return (unsigned int)inserted;
}
