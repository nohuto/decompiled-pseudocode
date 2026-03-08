/*
 * XREFs of GreDwmEnableSoftwareCursorRendering @ 0x1C007F458
 * Callers:
 *     zzzEnableDwmPointerSupport @ 0x1C007F1FC (zzzEnableDwmPointerSupport.c)
 * Callees:
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0028198 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C002D7C8 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 */

void __fastcall GreDwmEnableSoftwareCursorRendering(Gre::Base *a1, int a2)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  struct PDEVOBJ *v4; // rdx
  Gre::Base *v5; // rcx
  Gre::Base *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v3 = Gre::Base::Globals(a1);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v6, v4, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v3 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v3 + 9), 7LL);
  if ( IsDwmActive(v5) )
    *(_DWORD *)(*((_QWORD *)v3 + 38) + 100LL) = a2;
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v3 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v6);
}
