/*
 * XREFs of ?VirtualDesktopAddAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@HAEBU_GUID@@PEAPEAX@Z @ 0x180433448
 * Callers:
 *     ?ItemAdded@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x18042F820 (-ItemAdded@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ @ 0x18042947C (-InternalRelease@-$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VVirtualDesktopAddAnimationCoordinator@@V1@AEAHAEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAddAnimationCoordinator@@AEAHAEAPEAUISwitchThumbnailFactory@@@Z @ 0x180432DA0 (--$MakeAndInitialize@VVirtualDesktopAddAnimationCoordinator@@V1@AEAHAEAPEAUISwitchThumbnailFacto.c)
 */

__int64 __fastcall VirtualDesktopAddAnimationCoordinator_CreateInstance(
        struct ISwitchThumbnailFactory *a1,
        int a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  ItemAnimationCoordinatorBase *v10; // rcx
  ItemAnimationCoordinatorBase *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ISwitchThumbnailFactory *v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+38h] [rbp+10h] BYREF
  ItemAnimationCoordinatorBase *v16; // [rsp+40h] [rbp+18h] BYREF

  v15 = a2;
  v14 = a1;
  *a4 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease((__int64 *)&v16);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopAddAnimationCoordinator,VirtualDesktopAddAnimationCoordinator,int &,ISwitchThumbnailFactory * &>(
         &v16,
         &v15,
         &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 149LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopaddanimationcoordinator.cpp",
      (const char *)v7);
    goto LABEL_13;
  }
  *a4 = 0LL;
  if ( InlineIsEqualGUID(&GUID_ea7f7ba6_4c6a_4191_9c06_24520bc6be9e, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v11 = v16;
    *a4 = v16;
    (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)v11 + 8LL))(v11);
    v6 = 0;
    goto LABEL_13;
  }
  if ( InlineIsEqualGUID(v9, v9) )
  {
    v10 = v16;
    v6 = 0;
    *a4 = v16;
  }
  else
  {
    v10 = 0LL;
    v6 = -2147467262;
  }
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v8 = 150LL;
    goto LABEL_12;
  }
  (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)v10 + 8LL))(v10);
LABEL_13:
  Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease((__int64 *)&v16);
  return (unsigned int)v6;
}
