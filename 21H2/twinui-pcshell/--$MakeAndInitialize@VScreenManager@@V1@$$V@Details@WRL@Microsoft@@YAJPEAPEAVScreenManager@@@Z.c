/*
 * XREFs of ??$MakeAndInitialize@VScreenManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVScreenManager@@@Z @ 0x180473B0C
 * Callers:
 *     ?ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180474F74 (-ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180096F1C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDesktopOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801A9870 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDeskto.c)
 *     ??0ScreenManager@@QEAA@XZ @ 0x180473EC0 (--0ScreenManager@@QEAA@XZ.c)
 *     ??1?$ComPtr@VScreenManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180473FB4 (--1-$ComPtr@VScreenManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ScreenManager,ScreenManager,>(ScreenManager **a1)
{
  unsigned int v2; // ebx
  void *v3; // rax
  ScreenManager *v4; // rax
  ScreenManager *v5; // rdi
  void *v7; // [rsp+30h] [rbp+8h] BYREF
  ScreenManager *v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  if ( v3 )
  {
    v4 = ScreenManager::ScreenManager((ScreenManager *)v3);
    v8 = v4;
    v5 = v4;
    v7 = 0LL;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedDesktopOperations,Microsoft::WRL::FtmBase>::AddRef((__int64)v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<ScreenManager>::~ComPtr<ScreenManager>(&v8);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return v2;
}
