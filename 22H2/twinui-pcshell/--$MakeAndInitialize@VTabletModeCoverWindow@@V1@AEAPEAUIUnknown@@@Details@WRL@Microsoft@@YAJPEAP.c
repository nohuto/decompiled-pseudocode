/*
 * XREFs of ??$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeCoverWindow@@AEAPEAUIUnknown@@@Z @ 0x1804841B4
 * Callers:
 *     ?CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1804846C8 (-CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180096EFC (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@U?$ChainInterfaces@UIApplicationFrameServiceTestability@@UIApplicationFrameService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameEventHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D4070 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRL_ea_1801D4070.c)
 *     ??0TabletModeCoverWindow@@QEAA@XZ @ 0x180484270 (--0TabletModeCoverWindow@@QEAA@XZ.c)
 *     ??1?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1804843B4 (--1-$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z @ 0x180485538 (-RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModeCoverWindow,TabletModeCoverWindow,IUnknown * &>(
        TabletModeCoverWindow **a1,
        IUnknown **a2)
{
  void *v4; // rax
  int v5; // edi
  TabletModeCoverWindow *v6; // rbx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  TabletModeCoverWindow *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( v4 )
  {
    v6 = TabletModeCoverWindow::TabletModeCoverWindow((TabletModeCoverWindow *)v4);
    v9 = v6;
    v8 = 0LL;
    v5 = TabletModeCoverWindow::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithGITSite,Microsoft::WRL::ChainInterfaces<IApplicationFrameServiceTestability,IApplicationFrameService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationFrameEventHandler,Microsoft::WRL::FtmBase>::AddRef((__int64)v6);
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<TabletModeCoverWindow>::~ComPtr<TabletModeCoverWindow>(&v9);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return (unsigned int)v5;
}
