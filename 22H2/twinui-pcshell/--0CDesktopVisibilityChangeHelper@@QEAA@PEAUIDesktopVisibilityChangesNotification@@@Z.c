/*
 * XREFs of ??0CDesktopVisibilityChangeHelper@@QEAA@PEAUIDesktopVisibilityChangesNotification@@@Z @ 0x1801C9FE8
 * Callers:
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801D0DE0 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

CDesktopVisibilityChangeHelper *__fastcall CDesktopVisibilityChangeHelper::CDesktopVisibilityChangeHelper(
        CDesktopVisibilityChangeHelper *this,
        struct IDesktopVisibilityChangesNotification *a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDesktopVisibilityChangesNotification>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CDesktopVisibilityChangeHelper::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IDesktopVisibilityChangesNotification *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  }
  return this;
}
