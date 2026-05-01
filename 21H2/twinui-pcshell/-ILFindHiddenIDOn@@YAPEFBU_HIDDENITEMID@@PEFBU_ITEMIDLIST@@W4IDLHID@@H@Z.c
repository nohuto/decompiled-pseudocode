/*
 * XREFs of ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1800995EC
 * Callers:
 *     ILExpungeRemovedHiddenIDs @ 0x1800996A8 (ILExpungeRemovedHiddenIDs.c)
 *     ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x1801532F4 (-AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18015530C (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z @ 0x180155448 (-FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z.c)
 *     ?GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z @ 0x180157C30 (-GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z.c)
 *     ?ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z @ 0x1801580C8 (-ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015B0C0 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     SetPinSourceForPinnedItem @ 0x18015BEBC (SetPinSourceForPinnedItem.c)
 *     ?SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z @ 0x18015BF8C (-SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z.c)
 *     ?v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18015FBD0 (-v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     ?ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z @ 0x180099598 (-ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?ILNextHidden@@YAPEFBU_HIDDENITEMID@@PEFBU1@PEFBU_ITEMIDLIST@@@Z @ 0x180099650 (-ILNextHidden@@YAPEFBU_HIDDENITEMID@@PEFBU1@PEFBU_ITEMIDLIST@@@Z.c)
 */

const struct _HIDDENITEMID *__fastcall ILFindHiddenIDOn(const ITEMIDLIST *a1, int a2)
{
  const struct _HIDDENITEMID *result; // rax
  const struct _ITEMIDLIST *ID; // rax
  unsigned __int16 *v5; // r10
  const struct _ITEMIDLIST *v6; // r10

  result = 0LL;
  if ( a1 && a1->mkid.cb )
  {
    ID = ILFindLastID(a1);
    result = ILFindFirstHiddenID(ID);
    v6 = (const struct _ITEMIDLIST *)((char *)v5 + *v5);
    while ( result && *((_DWORD *)result + 1) != a2 )
      result = ILNextHidden(result, v6);
  }
  return result;
}
