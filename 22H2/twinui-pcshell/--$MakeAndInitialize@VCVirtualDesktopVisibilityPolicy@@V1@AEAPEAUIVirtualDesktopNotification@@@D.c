/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopVisibilityPolicy@@V1@AEAPEAUIVirtualDesktopNotification@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@@Z @ 0x1804A2DCC
 * Callers:
 *     ?CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A30AC (-CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A21F0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x1804A33C0 (-InternalRelease@-$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopVisibilityPolicy,CVirtualDesktopVisibilityPolicy,IVirtualDesktopNotification * &>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // rax
  volatile int *v6; // rdx
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+50h] [rbp+18h] BYREF
  _QWORD *v13; // [rsp+58h] [rbp+20h]

  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v5;
  v13 = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 3) = 1;
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVirtualDesktopVisibilityPolicy>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v7 = &CVirtualDesktopVisibilityPolicy::`vftable';
    v7[2] = 0LL;
    v12 = v7;
    v8 = *a2;
    v9 = v7[2];
    if ( v9 != v8 )
    {
      if ( v8 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        v9 = v7[2];
      }
      v11 = v9;
      v7[2] = v8;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
      (__int64)v7,
      v6);
    *a1 = v7;
    Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease(&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
