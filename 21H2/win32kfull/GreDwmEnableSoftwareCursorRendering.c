/*
 * XREFs of GreDwmEnableSoftwareCursorRendering @ 0x1C00981F8
 * Callers:
 *     zzzEnableDwmPointerSupport @ 0x1C0097F94 (zzzEnableDwmPointerSupport.c)
 * Callees:
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0022A50 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00495DC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 */

void __fastcall GreDwmEnableSoftwareCursorRendering(__int64 a1, struct PDEVOBJ *a2)
{
  int v2; // ebx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  v2 = (int)a2;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v3, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( g_pDwmState )
    *((_DWORD *)g_pDwmState + 25) = v2;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v3);
}
