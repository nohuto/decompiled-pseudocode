/*
 * XREFs of ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18015530C
 * Callers:
 *     ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x1801532F4 (-AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x180153480 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     ?GetPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180156F60 (-GetPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z @ 0x1801595A0 (-IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015B0C0 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x18015B5C0 (-Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1800995EC (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     ?FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@PEAH@Z @ 0x180155274 (-FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@PEAH@Z.c)
 *     ?FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z @ 0x180155448 (-FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z.c)
 *     ?ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z @ 0x1801580C8 (-ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z.c)
 *     ?_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z @ 0x18015DF88 (-_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

const ITEMIDLIST **__fastcall CPinList::FindPidlOrAppID(HDSA *this, const struct _ITEMIDLIST *a2, bool a3, int *a4)
{
  const ITEMIDLIST **Pidl; // rbx
  void *v9; // rcx
  struct PINENTRY *PinEntryFromAppId; // rax
  struct IApplicationResolver *v11; // rdx
  LPVOID pv; // [rsp+30h] [rbp-48h] BYREF
  struct IApplicationResolver *ppv; // [rsp+38h] [rbp-40h] BYREF

  Pidl = CPinList::FindPidl(this, a2, a4);
  if ( !Pidl )
  {
    pv = 0LL;
    ppv = 0LL;
    if ( !(unsigned int)ILGetHiddenStringAllocW(a2, 3203334173LL, &pv)
      && CoCreateInstance(
           &CLSID_StartMenuCacheAndAppResolver,
           0LL,
           3u,
           &GUID_de25675a_72de_44b4_9373_05170450c140,
           (LPVOID *)&ppv) >= 0 )
    {
      _GetAppIDFromIDList(ppv, a2, (unsigned __int16 **)&pv, 0LL);
    }
    v9 = pv;
    if ( pv )
    {
      PinEntryFromAppId = CPinList::FindPinEntryFromAppId((CPinList *)this, (const unsigned __int16 *)pv, a3, a4);
      v9 = pv;
      Pidl = (const ITEMIDLIST **)PinEntryFromAppId;
    }
    v11 = ppv;
    ppv = 0LL;
    if ( v11 )
    {
      (*(void (__fastcall **)(struct IApplicationResolver *))(*(_QWORD *)v11 + 16LL))(v11);
      v9 = pv;
    }
    CoTaskMemFree(v9);
  }
  if ( !a3 )
  {
    if ( Pidl )
    {
      if ( ILFindHiddenIDOn(*Pidl, -1091633108) )
      {
        Pidl = 0LL;
        if ( a4 )
          *a4 = -1;
      }
    }
  }
  return Pidl;
}
