/*
 * XREFs of ??$MakeAndInitialize@VTabletModePositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18046153C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTabletModePositionerManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180461B20 (-CreateInstance@-$SimpleClassFactory@VTabletModePositionerManager@@$0A@@WRL@Microsoft@@UEAAJPEAU.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180096F1C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7CC4 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0TabletModePositionerManager@@QEAA@XZ @ 0x180461798 (--0TabletModePositionerManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TabletModePositionerManager@@QEAAJXZ @ 0x1804620F0 (-RuntimeClassInitialize@TabletModePositionerManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModePositionerManager,IUnknown,>(_QWORD *a1)
{
  void *v2; // rax
  int v3; // ebx
  TabletModePositionerManager *v4; // rdi
  void *v6; // [rsp+40h] [rbp+8h] BYREF
  TabletModePositionerManager *v7; // [rsp+48h] [rbp+10h] BYREF
  void *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = (TabletModePositionerManager *)v2;
  if ( v2 )
  {
    v8 = v2;
    v4 = TabletModePositionerManager::TabletModePositionerManager((TabletModePositionerManager *)v2);
    v7 = v4;
    v6 = 0LL;
    v3 = TabletModePositionerManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(TabletModePositionerManager *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v7);
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  return (unsigned int)v3;
}
