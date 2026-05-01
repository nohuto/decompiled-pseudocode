/*
 * XREFs of ??$Make@VUwpAppStateManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VUwpAppStateManager@@@12@XZ @ 0x1804C7968
 * Callers:
 *     ??$MakeOrThrow@VUwpAppStateManager@@$$V@wil@@YA?AV?$ComPtr@VUwpAppStateManager@@@WRL@Microsoft@@XZ @ 0x1804C7A50 (--$MakeOrThrow@VUwpAppStateManager@@$$V@wil@@YA-AV-$ComPtr@VUwpAppStateManager@@@WRL@Microsoft@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802FFF90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager.c)
 *     ??0UwpAppStateManager@@QEAA@XZ @ 0x1804C8A24 (--0UwpAppStateManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Microsoft::WRL::Details::Make<UwpAppStateManager,>(__int64 *a1)
{
  UwpAppStateManager *v2; // rax
  UwpAppStateManager *v3; // rbx
  volatile int *v4; // rdx
  UwpAppStateManager *v5; // rbx

  *a1 = 0LL;
  v2 = (UwpAppStateManager *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x48uLL);
    v5 = UwpAppStateManager::UwpAppStateManager(v3);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::Release(
        *a1,
        v4);
    *a1 = (__int64)v5;
    v3 = 0LL;
  }
  if ( v3 )
    operator delete(v3, (const struct std::nothrow_t *)1);
  return a1;
}
