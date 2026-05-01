/*
 * XREFs of SetPinSourceForPinnedItem @ 0x18015BD4C
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x180155EAC (GetPidlsFromTaskbarLayout.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158300 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x18015A590 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015AF50 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z @ 0x18015E73C (-_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18015FA60 (-v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1800995CC (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     ILExpungeRemovedHiddenIDs @ 0x180099688 (ILExpungeRemovedHiddenIDs.c)
 *     ?ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z @ 0x180157D10 (-ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z.c)
 */

__int64 __fastcall SetPinSourceForPinnedItem(ITEMIDLIST *a1, struct _ITEMIDLIST **a2, int a3)
{
  unsigned int v3; // edi
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  WCHAR *v10; // rbx
  const struct _HIDDENITEMID *v11; // rax

  v3 = 0;
  *a2 = 0LL;
  if ( a3 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 1 )
              return (unsigned int)-2147024809;
            v10 = (WCHAR *)L"SCOOBEPinned";
          }
          else
          {
            v10 = (WCHAR *)L"OOBEPinned";
          }
        }
        else
        {
          v10 = (WCHAR *)L"EnterprisePinned";
        }
      }
      else
      {
        v10 = (WCHAR *)L"OEMPinned";
      }
    }
    else
    {
      v10 = (WCHAR *)L"SystemPinned";
    }
  }
  else
  {
    v10 = (WCHAR *)L"UserPinned";
  }
  v11 = ILFindHiddenIDOn(a1, -1091633122);
  if ( v11 )
  {
    *((_DWORD *)v11 + 1) = -1091633152;
    ILExpungeRemovedHiddenIDs(a1);
  }
  *a2 = ILAppendHiddenStringW(a1, -1091633122, v10);
  return v3;
}
