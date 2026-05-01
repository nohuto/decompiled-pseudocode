/*
 * XREFs of ??$MakeAndInitialize@VTabletModePositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18046245C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTabletModePositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180465EB0 (-CreateInstance@-$SimpleClassFactory@VTabletModePositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknow.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180096F1C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7CC4 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0TabletModePositioner@@QEAA@XZ @ 0x18046317C (--0TabletModePositioner@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ @ 0x18046A730 (-RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModePositioner,IUnknown,>(_QWORD *a1)
{
  void *v2; // rax
  int v3; // ebx
  IUnknown *v4; // rdi
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  IUnknown *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x210uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = (IUnknown *)TabletModePositioner::TabletModePositioner((TabletModePositioner *)v2);
    v7 = v4;
    v6 = 0LL;
    v3 = TabletModePositioner::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = ((__int64 (__fastcall *)(IUnknown *, GUID *, _QWORD *))v4->lpVtbl->QueryInterface)(
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
