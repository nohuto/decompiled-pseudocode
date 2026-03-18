/*
 * XREFs of GreDwmHasSoftwareCursor @ 0x1C005B2AC
 * Callers:
 *     zzzEnableDwmPointerSupport @ 0x1C005B13C (zzzEnableDwmPointerSupport.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C00BC9E0 (DwmDestroyDeviceSpecificResources.c)
 * Callees:
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00CD064 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00D544C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreDwmHasSoftwareCursor(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  struct Gre::Base::SESSION_GLOBALS *v5; // rdi
  struct PDEVOBJ *v6; // rdx
  __int64 v7; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v5 = Gre::Base::Globals((Gre::Base *)a1);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v9, v6, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v5 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v5 + 9), 7LL);
  if ( (unsigned int)IsDwmActive() )
  {
    v7 = *((_QWORD *)v5 + 38);
    if ( (*(_DWORD *)(v7 + 100) || a2)
      && *(_DWORD *)(v7 + 160)
      && (*(_QWORD *)(a1 + 3504) != a1 + 3504 || (*(_DWORD *)(a1 + 40) & 0x20000) != 0) )
    {
      v4 = 1;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v5 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v9);
  return v4;
}
