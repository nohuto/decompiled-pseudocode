/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180401F68
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemCollection@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x180401A28 (--$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEA.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1 @ 0x1803FDB78 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_1803FDB78.c)
 *     ?_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z @ 0x18040237C (-_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z.c)
 */

__int64 __fastcall VirtualDesktopItemCollection::RuntimeClassInitialize(
        VirtualDesktopItemCollection *this,
        struct IVirtualDesktopItemFactory *a2,
        struct IVirtualDesktopManagerInternal *a3,
        struct IVirtualDesktopNotificationService *a4)
{
  struct IVirtualDesktop *v4; // rax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // edi
  __int64 v14; // rbx
  int v15; // eax
  __int64 v17; // rdx
  __int64 v18[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v20; // [rsp+60h] [rbp+20h] BYREF
  struct IVirtualDesktop *v21; // [rsp+68h] [rbp+28h] BYREF

  v4 = (struct IVirtualDesktop *)*((_QWORD *)this + 20);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IVirtualDesktopItemFactory *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = (struct IVirtualDesktop *)*((_QWORD *)this + 20);
    }
    v21 = v4;
    *((_QWORD *)this + 20) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 21, (__int64)a3);
  v9 = EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1(
         (_QWORD *)this + 22,
         (__int64)a4);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v18[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
    v11 = (*(__int64 (__fastcall **)(struct IVirtualDesktopManagerInternal *, __int64 *))(*(_QWORD *)a3 + 56LL))(
            a3,
            v18);
    v10 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18[0] + 24LL))(v18[0], &v20);
      v10 = v11;
      if ( v11 >= 0 )
      {
        v13 = 0;
        if ( v20 )
        {
          while ( 1 )
          {
            v21 = 0LL;
            v14 = v18[0];
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
            v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IVirtualDesktop **))(*(_QWORD *)v14 + 32LL))(
                    v14,
                    v13,
                    &GUID_ff72ffdd_be7e_43fc_9c03_ad81681e88e4,
                    &v21);
            v10 = v15;
            if ( v15 < 0 )
              break;
            v15 = VirtualDesktopItemCollection::_AddDesktopItem(this, v21, v13, 1);
            v10 = v15;
            if ( v15 < 0 )
            {
              v17 = 70LL;
              goto LABEL_21;
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
            if ( ++v13 >= v20 )
              goto LABEL_16;
          }
          v17 = 69LL;
LABEL_21:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v17,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
            (const char *)(unsigned int)v15);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
        }
        else
        {
LABEL_16:
          v10 = 0;
        }
        goto LABEL_17;
      }
      v12 = 65LL;
    }
    else
    {
      v12 = 62LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)(unsigned int)v11);
LABEL_17:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
    return v10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
