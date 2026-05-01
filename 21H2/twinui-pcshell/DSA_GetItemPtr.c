/*
 * XREFs of DSA_GetItemPtr @ 0x1804E7B50
 * Callers:
 *     DSA_EnumCallback @ 0x18014FB64 (DSA_EnumCallback.c)
 *     ?FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@PEAH@Z @ 0x180155274 (-FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@PEAH@Z.c)
 *     ?FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z @ 0x180155448 (-FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158470 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180159B8C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x18015A700 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015B0C0 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?_PhysicalPositionFromLogicalPosition@CPinList@@AEAAHH@Z @ 0x18015EB3C (-_PhysicalPositionFromLogicalPosition@CPinList@@AEAAHH@Z.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall DSA_GetItemPtr(HDSA hdsa, int i)
{
  PVOID result; // rax

  result = 0LL;
  if ( hdsa && i >= 0 && i < *(_DWORD *)hdsa )
    return (PVOID)(*((_QWORD *)hdsa + 1) + (unsigned int)(i * *((_DWORD *)hdsa + 5)));
  return result;
}
