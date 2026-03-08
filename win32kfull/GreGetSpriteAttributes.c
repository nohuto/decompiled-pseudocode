/*
 * XREFs of GreGetSpriteAttributes @ 0x1C010CF4C
 * Callers:
 *     _GetLayeredWindowAttributes @ 0x1C000F978 (_GetLayeredWindowAttributes.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C002B8C8 (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0027A0C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0028198 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C002D7C8 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z @ 0x1C010D0B0 (-GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z.c)
 */

__int64 __fastcall GreGetSpriteAttributes(
        Gre::Base *a1,
        HWND a2,
        __int64 a3,
        unsigned int *a4,
        struct _BLENDFUNCTION *a5,
        unsigned int *a6,
        int a7)
{
  unsigned int v7; // ebx
  int v11; // r12d
  Gre::Base *v12; // rcx
  struct Gre::Base::SESSION_GLOBALS *v13; // rdi
  void *v14; // r8
  unsigned int *v15; // r14
  struct _BLENDFUNCTION *v16; // r15
  struct PDEVOBJ *v17; // rdx
  Gre::Base *v18; // rcx
  __int64 v19; // rax
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF

  v21 = a3;
  v7 = 0;
  v11 = 1;
  v13 = Gre::Base::Globals(a1);
  v15 = a6;
  v16 = a5;
  if ( !a7 || !IsDwmActive(v12) )
    return (unsigned int)GdiGetSpriteAttributes((HDEV)a1, a2, v14, a4, v16, v15);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&a7, v17, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v13 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v13 + 9), 7LL);
  if ( IsDwmActive(v18) )
  {
    v11 = 0;
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v21, a2, 0LL);
    v19 = v21;
    if ( v21 )
    {
      v7 = 1;
      *a4 = *(_DWORD *)(v21 + 80);
      *v16 = *(struct _BLENDFUNCTION *)(v19 + 76);
      *v15 = *(_DWORD *)(v19 + 72);
      _InterlockedDecrement((volatile signed __int32 *)(v19 + 12));
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v13 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&a7);
  if ( v11 )
    return (unsigned int)GdiGetSpriteAttributes((HDEV)a1, a2, v14, a4, v16, v15);
  return v7;
}
