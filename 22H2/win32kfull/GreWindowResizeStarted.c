/*
 * XREFs of GreWindowResizeStarted @ 0x1C02700B0
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C0210F44 (xxxDrawDragRectEx.c)
 * Callees:
 *     DwmAsyncUpdateSprite @ 0x1C0012AC0 (DwmAsyncUpdateSprite.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00BD784 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00BE028 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00BE140 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00EFE88 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     UserDCompositionCreateSynchronizationObject @ 0x1C0220308 (UserDCompositionCreateSynchronizationObject.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026D214 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowResizeStarted(__int64 a1, HWND a2, int a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  unsigned int v9; // esi
  struct PDEVOBJ *v10; // rdx
  struct DWMSPRITE *v11; // rdi
  __int64 *v12; // r14
  __int64 v13; // rcx
  SURFACE *v14; // rcx
  bool v15; // bl
  PVOID v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdi
  void *v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  PVOID Object; // [rsp+68h] [rbp-21h] BYREF
  void *v25; // [rsp+70h] [rbp-19h] BYREF
  __int64 v26; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v27[32]; // [rsp+80h] [rbp-9h] BYREF
  struct DWMSPRITE *v28; // [rsp+A0h] [rbp+17h]
  __int64 v29; // [rsp+E8h] [rbp+5Fh] BYREF
  unsigned int *v30; // [rsp+100h] [rbp+77h]

  v30 = a4;
  v29 = a1;
  v7 = 0;
  v8 = gdwDwmResizeOptimizationOptions & 1;
  v9 = gdwDwmResizeOptimizationOptions & 2;
  v26 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v29, v10, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v27, a2);
    v11 = v28;
    if ( v28 )
    {
      v12 = (__int64 *)*((_QWORD *)v28 + 21);
      if ( v12 && (v13 = v12[23]) != 0 )
        v14 = (SURFACE *)(v13 - 24);
      else
        v14 = 0LL;
      v15 = v14 && (unsigned int)SURFACE::bRedirectionBitmap(v14);
      if ( v8 && v15 || a3 && v9 )
      {
        v7 = 1;
        if ( *((int *)v11 + 29) >= 1 )
          CheckAndProcessWindowResizeComplete(v11, 1, 0LL);
        *((_DWORD *)v11 + 29) = v15 + 1;
        *((_DWORD *)v11 + 30) = 0;
        *((_QWORD *)v11 + 18) = MEMORY[0xFFFFF78000000014];
        if ( a3 && v9 )
        {
          Object = 0LL;
          if ( (unsigned int)UserDCompositionCreateSynchronizationObject(&Object) )
          {
            v16 = Object;
            v25 = 0LL;
            if ( (int)CompositionObject::OpenDwmHandle((CompositionObject *)Object, &v25) < 0 )
            {
              ObfDereferenceObject(v16);
            }
            else
            {
              *((_QWORD *)v11 + 13) = v25;
              *((_QWORD *)v11 + 12) = v16;
              *((_DWORD *)v11 + 30) = 1;
              *((_DWORD *)v11 + 31) = 1;
              v18 = *v12;
              v19 = *(_QWORD *)v11;
              v20 = (void *)UserReferenceDwmApiPort(v17);
              DwmAsyncUpdateSprite(v20, v19, v18, 512, 0LL, 0LL, 0, 0, 0, 0, 0LL);
            }
          }
          v21 = gdwDwmResizeTimeoutModern;
          v22 = gdwDwmResizeOptimizationOptions & 8;
        }
        else
        {
          v21 = gdwDwmResizeTimeoutGdi;
          v22 = gdwDwmResizeOptimizationOptions & 4;
        }
        v11 = v28;
        *v30 = v22;
        *a5 = v21;
      }
      if ( v11 )
        _InterlockedDecrement((volatile signed __int32 *)v11 + 3);
    }
    v28 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v27);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v29);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v26);
  return v7;
}
