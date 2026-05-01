/*
 * XREFs of ??$MakeAndInitialize@VXamlAllUpViewHost@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVXamlAllUpViewHost@@@Z @ 0x180368074
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VXamlAllUpViewHost@@$$V@wil@@YA?AV?$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@XZ @ 0x18036812C (--$MakeAndInitializeOrThrow@VXamlAllUpViewHost@@$$V@wil@@YA-AV-$ComPtr@VXamlAllUpViewHost@@@WRL@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180282AB4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$CMultit.c)
 *     ??0XamlAllUpViewHost@@QEAA@XZ @ 0x18036B8DC (--0XamlAllUpViewHost@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@QEAAXPEAVXamlAllUpViewHost@@@Z @ 0x18036EFA0 (-Attach@-$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@QEAAXPEAVXamlAllUpViewHost@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x180373554 (-InternalRelease@-$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@XamlAllUpViewHost@@QEAAJXZ @ 0x180375E8C (-RuntimeClassInitialize@XamlAllUpViewHost@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlAllUpViewHost,XamlAllUpViewHost,>(
        XamlAllUpViewHost **a1)
{
  XamlAllUpViewHost *v2; // rax
  int v3; // edi
  XamlAllUpViewHost *v4; // rax
  XamlAllUpViewHost *v5; // rbx
  volatile int *v6; // rdx
  XamlAllUpViewHost *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = (XamlAllUpViewHost *)operator new(0x2C8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = XamlAllUpViewHost::XamlAllUpViewHost(v2);
    v8 = 0LL;
    Microsoft::WRL::ComPtr<XamlAllUpViewHost>::Attach(&v8, v4);
    v9 = 0LL;
    v5 = v8;
    v3 = XamlAllUpViewHost::RuntimeClassInitialize(v8);
    if ( v3 >= 0 )
    {
      if ( v5 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<ISnapAssistViewHost>,IInvocationAnimationHost,IAnimatedDismissableHost,IDismissalAnimationHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::InternalAddRef(
          (__int64)v5,
          v6);
      *a1 = v5;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
