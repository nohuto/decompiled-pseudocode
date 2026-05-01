/*
 * XREFs of ?RemoveFromList@CTaskbandPin@@UEAAJPEAUIShellItem@@@Z @ 0x1801504A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?MarkAsTombstone@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x180159D20 (-MarkAsTombstone@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z.c)
 *     ?_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ @ 0x18015E3A4 (-_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ.c)
 *     ?s_GetDarwinLinkInfo@CPinnedList@@KAHPEAUIShellLinkW@@PEAHPEAGI@Z @ 0x18015F28C (-s_GetDarwinLinkInfo@CPinnedList@@KAHPEAUIShellLinkW@@PEAHPEAGI@Z.c)
 *     ?s_RemoveDarwinShortcut@CPinnedList@@KAJPEAUIPinnedList3@@PEBGW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18015F3C4 (-s_RemoveDarwinShortcut@CPinnedList@@KAJPEAUIPinnedList3@@PEBGW4PINNEDLISTMODIFYCALLER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x18020ED4C (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 */

__int64 __fastcall CTaskbandPin::RemoveFromList(CTaskbandPin *this, IUnknown *a2)
{
  HRESULT v4; // ebx
  CPinnedList *v5; // rcx
  unsigned int v6; // eax
  LPVOID v8; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-C0h] BYREF
  LPITEMIDLIST ppidl; // [rsp+48h] [rbp-B8h] BYREF
  struct IShellLinkW *v12; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID dwItem1; // [rsp+58h] [rbp-A8h] BYREF
  int v14; // [rsp+60h] [rbp-A0h]
  unsigned __int16 v15[264]; // [rsp+70h] [rbp-90h] BYREF

  if ( CoCreateInstance(&CLSID_StartMenuCacheAndAppResolver, 0LL, 1u, &GUID_de25675a_72de_44b4_9373_05170450c140, &ppv) >= 0 )
  {
    if ( (*(int (__fastcall **)(LPVOID, IUnknown *, LPVOID *))(*(_QWORD *)ppv + 24LL))(ppv, a2, &pv) >= 0 )
    {
      if ( CoCreateInstance(&CLSID_DestinationList, 0LL, 1u, &GUID_6332debf_87b5_4670_90c0_5e57b408a49e, &dwItem1) >= 0 )
      {
        (*(void (__fastcall **)(LPVOID, LPVOID))(*(_QWORD *)dwItem1 + 80LL))(dwItem1, pv);
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)dwItem1 + 16LL))(dwItem1);
      }
      if ( CoCreateInstance(&CLSID_AutomaticDestinationList, 0LL, 1u, &GUID_e9c5ef8d_fd41_4f72_ba87_eb03bad5817c, &v8) >= 0 )
      {
        if ( (*(int (__fastcall **)(LPVOID, LPVOID, _QWORD, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, pv, 0LL, 0LL) >= 0 )
          (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v8 + 104LL))(v8, 1LL);
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v8 + 16LL))(v8);
      }
      CoTaskMemFree(pv);
    }
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
  v4 = SHGetIDListFromObject(a2, &ppidl);
  if ( v4 >= 0 )
  {
    v4 = CPinnedList::MarkAsTombstone((char *)this - 80, ppidl, 25LL);
    if ( v4 == -2147023728 )
      v4 = 1;
    ILFree(ppidl);
  }
  if ( ((int (__fastcall *)(IUnknown *, _QWORD, const GUID *, GUID *, struct IShellLinkW **))a2->lpVtbl[1].QueryInterface)(
         a2,
         0LL,
         &BHID_SFUIObject,
         &GUID_000214f9_0000_0000_c000_000000000046,
         &v12) >= 0 )
  {
    if ( CPinnedList::s_GetDarwinLinkInfo(v12, 0LL, v15, 0x104u) )
    {
      v4 = CPinnedList::s_RemoveDarwinShortcut(
             ((unsigned __int64)this - 88) & -(__int64)(this != (CTaskbandPin *)112),
             v15);
      if ( v4 == -2147023728 )
        v4 = 1;
    }
    ((void (__fastcall *)(struct IShellLinkW *))v12->lpVtbl->Release)(v12);
  }
  v6 = CPinnedList::_GetRemovedGlobalChangeCount(v5);
  if ( (int)SHRegSetDWORD(
              HKEY_LOCAL_MACHINE,
              L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\StartPage",
              L"FavoritesRemovedChanges",
              v6 + 1) >= 0 )
  {
    HIWORD(dwItem1) = 0;
    v14 = 0;
    *(_DWORD *)((char *)&dwItem1 + 2) = 14;
    LOWORD(dwItem1) = 10;
    SHChangeNotify(0x4000000, 0x3000u, &dwItem1, 0LL);
  }
  return (unsigned int)v4;
}
