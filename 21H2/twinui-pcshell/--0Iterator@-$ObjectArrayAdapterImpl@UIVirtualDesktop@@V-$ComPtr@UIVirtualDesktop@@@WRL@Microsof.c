/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1803E37C0
 * Callers:
 *     ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1803E47B0 (-Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 *     ?get_VirtualDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1803E5A20 (-get_VirtualDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU-$IVectorView@PEAUIVirtualDesktop@Mul.c)
 *     ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1803E7EDC (-CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     ?VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktopCollection@@@Z @ 0x1804A5BF0 (-VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktopCollection@@.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1803E4078 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject();
  return a1;
}
