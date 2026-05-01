/*
 * XREFs of ??$MakeAndInitialize@VCBaseTrayFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@AEAPEBGAEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@AEAPEBG2@Z @ 0x1800BA52C
 * Callers:
 *     BaseTrayFlyoutExperienceManager_CreateInstanceWithTest @ 0x1800BE9CC (BaseTrayFlyoutExperienceManager_CreateInstanceWithTest.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180096F1C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0CBaseTrayFlyoutExperienceManager@@QEAA@HH@Z @ 0x1800BA9B4 (--0CBaseTrayFlyoutExperienceManager@@QEAA@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBaseTrayFlyoutExperienceManager,IInspectable,IServiceProvider * &,unsigned short const * &,unsigned short const * &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  void *v8; // rax
  int v9; // edx
  int v10; // r8d
  int v11; // ebx
  CBaseTrayFlyoutExperienceManager *v12; // rdi
  CBaseTrayFlyoutExperienceManager *v14; // [rsp+30h] [rbp-28h] BYREF
  void *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x1E8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v8;
  if ( v8 )
  {
    v12 = CBaseTrayFlyoutExperienceManager::CBaseTrayFlyoutExperienceManager(
            (CBaseTrayFlyoutExperienceManager *)v8,
            v9,
            v10);
    v14 = v12;
    v15 = 0LL;
    v11 = (*(__int64 (__fastcall **)(CBaseTrayFlyoutExperienceManager *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v12 + 64LL))(
            v12,
            *a2,
            *a3,
            *a4);
    if ( v11 >= 0 )
      v11 = (**(__int64 (__fastcall ***)(CBaseTrayFlyoutExperienceManager *, GUID *, _QWORD *))v12)(
              v12,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              a1);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v15);
  return (unsigned int)v11;
}
