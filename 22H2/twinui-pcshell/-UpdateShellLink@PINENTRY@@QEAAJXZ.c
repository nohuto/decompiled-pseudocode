/*
 * XREFs of ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x18015D1B8
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158300 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180159790 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x18015A590 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015AF50 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?SetLinkFlags@CPinnedList@@SAKPEAUIShellLinkW@@KK@Z @ 0x18015BCB4 (-SetLinkFlags@CPinnedList@@SAKPEAUIShellLinkW@@KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PINENTRY::UpdateShellLink(PINENTRY *this)
{
  LPVOID *ppv; // rbx
  HRESULT Instance; // edi

  *((_DWORD *)this + 6) = 0;
  ppv = (LPVOID *)((char *)this + 8);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 1);
  Instance = CoCreateInstance(&CLSID_ShellLink, 0LL, 3u, &GUID_000214f9_0000_0000_c000_000000000046, ppv);
  if ( Instance >= 0 )
  {
    CPinnedList::SetLinkFlags((struct IShellLinkW *)*ppv);
    Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)*ppv + 40LL))(*ppv, *(_QWORD *)this);
    if ( Instance < 0 )
    {
      *((_DWORD *)this + 6) = 0;
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)ppv);
    }
  }
  return (unsigned int)Instance;
}
