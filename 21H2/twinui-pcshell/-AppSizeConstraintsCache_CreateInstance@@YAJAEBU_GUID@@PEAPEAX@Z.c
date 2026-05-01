/*
 * XREFs of ?AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18005666C
 * Callers:
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x180056580 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x180087A9C (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180096F1C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A2210 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppSizeConstraintsCache_CreateInstance(const struct _GUID *a1, void **a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  int v6; // ebx
  _DWORD *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v13; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp+10h] BYREF
  _QWORD *v15; // [rsp+40h] [rbp+18h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v13);
  v13 = 0LL;
  v3 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v3;
  v4 = v3;
  if ( !v3 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v14);
    v5 = 110LL;
    v6 = -2147024882;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appsizeconstraintscache.cpp",
      (const char *)(unsigned int)v6,
      v11);
    goto LABEL_13;
  }
  *((_DWORD *)v3 + 3) = 1;
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAppSizeConstraintsCache>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v15 = v4;
  *v4 = &AppSizeConstraintsCache::`vftable';
  v4[2] = 0LL;
  v4[3] = 0LL;
  v4[4] = 0LL;
  v4[5] = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(v4);
  v13 = v4;
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v15);
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_0ef8c099_d96f_4be1_94ed_cd8beb90775b, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v9 = v13;
    *a2 = v13;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 8LL))(v9);
    v6 = 0;
  }
  else if ( InlineIsEqualGUID(v7, v7) )
  {
    v8 = v13;
    v6 = 0;
    *a2 = v13;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    v6 = -2147467262;
  }
  if ( v6 < 0 )
  {
    v5 = 111LL;
    goto LABEL_12;
  }
LABEL_13:
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v13);
  return (unsigned int)v6;
}
