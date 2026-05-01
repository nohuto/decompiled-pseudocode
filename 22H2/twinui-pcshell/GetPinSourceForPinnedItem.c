/*
 * XREFs of GetPinSourceForPinnedItem @ 0x180156BE4
 * Callers:
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x180153310 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x1801539D0 (-ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158300 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015AF50 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z @ 0x18015E73C (-_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18015FA60 (-v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     ?ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z @ 0x180157F58 (-ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z.c)
 */

__int64 __fastcall GetPinSourceForPinnedItem(__int64 a1, _DWORD *a2)
{
  PCWSTR psz1; // [rsp+38h] [rbp+10h] BYREF

  psz1 = 0LL;
  *a2 = 6;
  if ( !(unsigned int)ILGetHiddenStringAllocW(a1, 3203334174LL, &psz1) )
    return 0LL;
  if ( !StrCmpW(psz1, L"UserPinned") )
  {
    *a2 = 0;
    return 0LL;
  }
  if ( !StrCmpW(psz1, L"OEMPinned") )
  {
    *a2 = 2;
    return 0LL;
  }
  if ( !StrCmpW(psz1, L"SystemPinned") )
  {
    *a2 = 1;
    return 0LL;
  }
  if ( !StrCmpW(psz1, L"EnterprisePinned") )
  {
    *a2 = 3;
    return 0LL;
  }
  if ( !StrCmpW(psz1, L"OOBEPinned") )
  {
    *a2 = 4;
    return 0LL;
  }
  if ( !StrCmpW(psz1, L"SCOOBEPinned") )
  {
    *a2 = 5;
    return 0LL;
  }
  return 2147549183LL;
}
