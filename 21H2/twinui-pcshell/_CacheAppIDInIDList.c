/*
 * XREFs of _CacheAppIDInIDList @ 0x18015D3BC
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158470 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180159900 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x18015A700 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015B0C0 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x18015B5C0 (-Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z.c)
 *     ?v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18015FBD0 (-v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z @ 0x180157E80 (-ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z.c)
 *     ?_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z @ 0x18015DF88 (-_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CacheAppIDInIDList(struct _ITEMIDLIST *a1, struct _ITEMIDLIST **a2)
{
  HRESULT Instance; // ebx
  struct _ITEMIDLIST *v5; // rax
  void *v6; // rcx
  struct _ITEMIDLIST *v7; // rbx
  LPVOID pv; // [rsp+30h] [rbp-28h] BYREF
  struct IApplicationResolver *v10; // [rsp+38h] [rbp-20h] BYREF

  *a2 = 0LL;
  Instance = CoCreateInstance(
               &CLSID_StartMenuCacheAndAppResolver,
               0LL,
               3u,
               &GUID_de25675a_72de_44b4_9373_05170450c140,
               (LPVOID *)&v10);
  if ( Instance >= 0 )
  {
    if ( _GetAppIDFromIDList(v10, a1, (unsigned __int16 **)&pv, 0LL) < 0 )
    {
      *a2 = a1;
    }
    else
    {
      v5 = ILAppendHiddenStringW(a1, -1091633123, (WCHAR *)pv);
      v6 = pv;
      v7 = v5;
      *a2 = v5;
      CoTaskMemFree(v6);
      Instance = v7 == 0LL ? 0x8007000E : 0;
    }
    (*(void (__fastcall **)(struct IApplicationResolver *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)Instance;
}
