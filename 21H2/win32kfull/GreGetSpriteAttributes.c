/*
 * XREFs of GreGetSpriteAttributes @ 0x1C00EDB94
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C00BF148 (CreateOrGetRedirectionBitmap.c)
 *     _GetLayeredWindowAttributes @ 0x1C013E49C (_GetLayeredWindowAttributes.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00BDAE4 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00BDB2C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00BE4A0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z @ 0x1C00EDD08 (-GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetSpriteAttributes(
        HDEV a1,
        struct PDEVOBJ *a2,
        void *a3,
        unsigned int *a4,
        struct _BLENDFUNCTION *a5,
        unsigned int *a6,
        int a7)
{
  unsigned int v7; // ebx
  __int64 v10; // rdx
  _BYTE v12[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+50h] [rbp-28h]

  v7 = 0;
  if ( a7 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&a7, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v12, (HWND)a2, 0LL);
    v10 = v13;
    if ( v13 )
    {
      v7 = 1;
      *a4 = *(_DWORD *)(v13 + 80);
      *a5 = *(struct _BLENDFUNCTION *)(v10 + 76);
      *a6 = *(_DWORD *)(v10 + 72);
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
    }
    v13 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v12);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&a7);
  }
  else
  {
    return (unsigned int)GdiGetSpriteAttributes(a1, (HWND)a2, a3, a4, a5, a6);
  }
  return v7;
}
