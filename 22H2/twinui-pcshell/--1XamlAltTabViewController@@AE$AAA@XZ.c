/*
 * XREFs of ??1XamlAltTabViewController@@AE$AAA@XZ @ 0x18038F3BC
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ @ 0x1803912C0 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1ShowAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18037F934 (--1ShowAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??1AltTabWindowHook@@QEAA@XZ @ 0x18038F2F0 (--1AltTabWindowHook@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlAltTabViewController::~XamlAltTabViewController(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx

  XamlSwitcherTelemetry::ShowAltTab::~ShowAltTab((XamlSwitcherTelemetry::ShowAltTab *)(a1 + 256));
  v2 = *(void **)(a1 + 248);
  if ( v2 )
  {
    AltTabWindowHook::~AltTabWindowHook(*(std::_Ref_count_base ***)(a1 + 248));
    operator delete(v2, (const struct std::nothrow_t *)0x10);
  }
  v3 = *(_QWORD *)(a1 + 240);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *(_QWORD *)(a1 + 232);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return XamlBaseViewController::~XamlBaseViewController((__int64 *)(a1 + 8));
}
