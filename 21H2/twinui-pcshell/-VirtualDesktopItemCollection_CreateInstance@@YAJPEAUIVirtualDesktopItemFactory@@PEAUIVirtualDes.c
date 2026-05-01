/*
 * XREFs of ?VirtualDesktopItemCollection_CreateInstance@@YAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x180402544
 * Callers:
 *     ?_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1803FB9F0 (-_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUIVirtualDesktopManagerInternal@@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18036F9B8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00V-$VirtualDesktopNotifi.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x180373824 (-InternalRelease@-$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemCollection@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x180401CF8 (--$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEA.c)
 */

__int64 __fastcall VirtualDesktopItemCollection_CreateInstance(
        struct IVirtualDesktopItemFactory *a1,
        struct IVirtualDesktopManagerInternal *a2,
        struct IVirtualDesktopNotificationService *a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v5; // rdi
  int v6; // eax
  int CanCastTo; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  _DWORD *v11; // r9
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IVirtualDesktopItemFactory *v16; // [rsp+40h] [rbp+20h] BYREF
  struct IVirtualDesktopManagerInternal *v17; // [rsp+48h] [rbp+28h] BYREF
  struct IVirtualDesktopNotificationService *v18; // [rsp+50h] [rbp+30h] BYREF
  void *v19; // [rsp+58h] [rbp+38h] BYREF

  v18 = a3;
  v17 = a2;
  v16 = a1;
  v5 = a5;
  v19 = 0LL;
  *a5 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease((__int64 *)&v19);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItemCollection,VirtualDesktopItemCollection,IVirtualDesktopItemFactory * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopNotificationService * &>(
         (__int64 *)&v19,
         &v16,
         &v17,
         &v18);
  CanCastTo = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 163LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)v8);
    goto LABEL_13;
  }
  *v5 = 0LL;
  if ( InlineIsEqualGUID(&GUID_e75e99cc_8d45_406e_9a90_c6f3656ea2fd, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v13 = (__int64)v19;
    *v5 = v19;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    CanCastTo = 0;
    goto LABEL_13;
  }
  if ( InlineIsEqualGUID(v10, v11) )
  {
    CanCastTo = 0;
    *v5 = v19;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::CanCastTo(
                  (__int64)v19 + 144,
                  v12);
  }
  if ( CanCastTo < 0 )
  {
    v8 = (unsigned int)CanCastTo;
    v9 = 164LL;
    goto LABEL_12;
  }
  (*(void (__fastcall **)(void *))(*(_QWORD *)*v5 + 8LL))(*v5);
LABEL_13:
  Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease((__int64 *)&v19);
  return (unsigned int)CanCastTo;
}
