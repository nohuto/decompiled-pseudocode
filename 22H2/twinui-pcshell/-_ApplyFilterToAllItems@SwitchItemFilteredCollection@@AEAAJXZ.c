/*
 * XREFs of ?_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ @ 0x1804041D8
 * Callers:
 *     ?SetActiveTabFilter@SwitchItemFilteredCollection@@UEAAJXZ @ 0x1800D53E0 (-SetActiveTabFilter@SwitchItemFilteredCollection@@UEAAJXZ.c)
 *     ?SetWindowTabFilter@SwitchItemFilteredCollection@@UEAAJXZ @ 0x1800D5430 (-SetWindowTabFilter@SwitchItemFilteredCollection@@UEAAJXZ.c)
 *     ?SetMonitorFilter@SwitchItemFilteredCollection@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@@Z @ 0x180403C50 (-SetMonitorFilter@SwitchItemFilteredCollection@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiv.c)
 *     ?SetTitleFilter@SwitchItemFilteredCollection@@UEAAJPEBG@Z @ 0x180403CE0 (-SetTitleFilter@SwitchItemFilteredCollection@@UEAAJPEBG@Z.c)
 *     ?SetVirtualDesktopFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktop@@@Z @ 0x180403E20 (-SetVirtualDesktopFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationServi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x180404330 (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 *     ?GetAt@ObservableObjectArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18040E3A0 (-GetAt@ObservableObjectArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall SwitchItemFilteredCollection::_ApplyFilterToAllItems(SwitchItemFilteredCollection *this)
{
  unsigned int v1; // esi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v8; // esi
  __int64 v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v11; // [rsp+50h] [rbp+20h] BYREF
  struct IObservableItem *v12; // [rsp+58h] [rbp+28h] BYREF

  v1 = *((_DWORD *)this + 6);
  while ( (--v1 & 0x80000000) == 0 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    v3 = ObservableObjectArray::GetAt(this, v1, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27, (void **)&v12);
    v4 = v3;
    if ( v3 < 0 )
    {
      v6 = 357LL;
      goto LABEL_10;
    }
    v3 = SwitchItemFilteredCollection::_ApplyFilterToItem(this, v12, 1);
    v4 = v3;
    if ( v3 < 0 )
    {
      v6 = 358LL;
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         &v11);
  v4 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16D,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v5);
    return v4;
  }
  v8 = 0;
  if ( v11 )
  {
    while ( 1 )
    {
      v12 = 0LL;
      v9 = *((_QWORD *)this + 23);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IObservableItem **))(*(_QWORD *)v9 + 32LL))(
             v9,
             v8,
             &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27,
             &v12);
      v4 = v3;
      if ( v3 < 0 )
        break;
      v3 = SwitchItemFilteredCollection::_ApplyFilterToItem(this, v12, 1);
      v4 = v3;
      if ( v3 < 0 )
      {
        v6 = 370LL;
        goto LABEL_10;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      if ( ++v8 >= v11 )
        return 0LL;
    }
    v6 = 369LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    return v4;
  }
  return 0LL;
}
