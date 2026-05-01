/*
 * XREFs of ??$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x1800E4010
 * Callers:
 *     ?subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800EF8D0 (-subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$__func@V_lambda_9b3b8efadeae9b80f07c6789ded69a07_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_lambda_9b3b8efadeae9b80f07c6789ded69a07_@@@Z @ 0x1800E72B0 (--0-$__func@V_lambda_9b3b8efadeae9b80f07c6789ded69a07_@@$$A6AJK@Z@__function@wistd@@QEAA@$$QEAV_.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x180161010 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x1801AFC54 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

__int64 SmartCookie::Register<IVirtualDesktopNotificationService,long (IVirtualDesktopNotificationService::*)(IVirtualDesktopNotification *,unsigned long *),long (IVirtualDesktopNotificationService::*)(unsigned long),winrt::Windows::Internal::Shell::implementation::WindowTabHost *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  unsigned __int64 v12; // [rsp+60h] [rbp+28h]
  va_list va1; // [rsp+68h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  v12 = va_arg(va1, _QWORD);
  if ( *(_DWORD *)(a1 + 120) )
  {
    v5 = -2147019873;
    v6 = 41LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 =  IVirtualDesktopNotification::`vcall'{24,{flat}}(a2, (v12 + 16) & ((unsigned __int128)-(__int128)v12 >> 64));
  if ( v5 < 0 )
  {
    v6 = 42LL;
    goto LABEL_3;
  }
  v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
  v8[0] = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
  v8[1] = (__int64) IBamThrottleSettings::`vcall'{32,{flat}};
  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
  *(_QWORD *)(a1 + 112) = wistd::__function::__func<_lambda_9b3b8efadeae9b80f07c6789ded69a07_,long (unsigned long)>::__func<_lambda_9b3b8efadeae9b80f07c6789ded69a07_,long (unsigned long)>(
                            a1 + 8,
                            v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va);
  return 0LL;
}
