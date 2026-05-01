/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800DADE4
 * Callers:
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800DAF50 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualDesktopDataSource@Multitaski.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$ChainInterfaces@UIViewGroupManagerInternal@@UIViewGroupManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x1801E9724 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$ChainInterfaces@UIViewGroupManagerI.c)
 *     ??_EAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x1802A8910 (--_EAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??1ViewGroupManager@@UEAA@XZ @ 0x1802FB19C (--1ViewGroupManager@@UEAA@XZ.c)
 *     ??1VirtualDesktopDataSource@@UEAA@XZ @ 0x1803E3B28 (--1VirtualDesktopDataSource@@UEAA@XZ.c)
 *     ??_ECVirtualDesktopManager@@UEAAPEAXI@Z @ 0x1804A9070 (--_ECVirtualDesktopManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007A3F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
      2 * v3,
      a2);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 64));
}
