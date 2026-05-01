/*
 * XREFs of ??$MakeAndInitialize@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@V123@PEAV23@@Details@WRL@Microsoft@@YAJPEAPEAVNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@$$QEAPEAV45@@Z @ 0x1800BA6B0
 * Callers:
 *     ?BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ @ 0x1800BB3A8 (-BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180096F1C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAJPEAV23@@Z @ 0x1800BDB04 (-RuntimeClassInitialize@Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAJPE.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveRawInputMouseNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x180239C2C (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveRawInputMouseNotification@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification,CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification,CBaseTrayFlyoutExperienceManager::DebounceDetection *>(
        __int64 *a1,
        struct CBaseTrayFlyoutExperienceManager::DebounceDetection **a2)
{
  void *v4; // rax
  __int64 v5; // rbx
  int v6; // edi
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = (__int64)v4;
  v8 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveRawInputMouseNotification>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveRawInputMouseNotification>(v4);
    *(_QWORD *)v5 = &CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification::`vftable';
    *(_QWORD *)(v5 + 8) = &CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification::`vftable'{for `IImmersiveRawInputMouseNotification'};
    *(_QWORD *)(v5 + 16) = &CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_DWORD *)(v5 + 56) = 0;
    v9 = v5;
    v8 = 0LL;
    v6 = CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification::RuntimeClassInitialize(
           (CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification *)v5,
           *a2);
    if ( v6 >= 0 )
    {
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *a1 = v5;
      v6 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return (unsigned int)v6;
}
