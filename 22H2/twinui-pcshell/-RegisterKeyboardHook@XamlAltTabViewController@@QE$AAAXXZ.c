/*
 * XREFs of ?RegisterKeyboardHook@XamlAltTabViewController@@QE$AAAXXZ @ 0x180381BD8
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180381D50 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     ??0AltTabWindowHook@@QEAA@PE$AAVXamlAltTabViewController@@@Z @ 0x18038EBB4 (--0AltTabWindowHook@@QEAA@PE$AAVXamlAltTabViewController@@@Z.c)
 *     ??1AltTabWindowHook@@QEAA@XZ @ 0x18038F2F0 (--1AltTabWindowHook@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlAltTabViewController::RegisterKeyboardHook(__int64 a1)
{
  __int64 v2; // rax
  AltTabWindowHook *v3; // rbx
  AltTabWindowHook **v4; // rcx
  AltTabWindowHook *v5; // rdi
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = operator new(0x10uLL);
  v2 = AltTabWindowHook::AltTabWindowHook(v6, a1);
  v3 = (AltTabWindowHook *)v2;
  v4 = (AltTabWindowHook **)(a1 + 248);
  if ( (void **)(a1 + 248) != &v6 )
  {
    v3 = 0LL;
    v5 = *v4;
    *v4 = (AltTabWindowHook *)v2;
    if ( !v5 )
      return;
    AltTabWindowHook::~AltTabWindowHook(v5);
    operator delete(v5, (const struct std::nothrow_t *)0x10);
    v2 = 0LL;
  }
  if ( v2 )
  {
    AltTabWindowHook::~AltTabWindowHook(v3);
    operator delete(v3, (const struct std::nothrow_t *)0x10);
  }
}
