/*
 * XREFs of GreWindowResizeStarted @ 0x1C026E268
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0022938 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0022A50 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00495DC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0086C6C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     DwmAsyncUpdateSprite @ 0x1C00ED5E8 (DwmAsyncUpdateSprite.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     UserDCompositionCreateSynchronizationObject @ 0x1C021AD98 (UserDCompositionCreateSynchronizationObject.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026B550 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowResizeStarted(__int64 a1, HWND a2, int a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  unsigned int v9; // esi
  struct PDEVOBJ *v10; // rdx
  struct DWMSPRITE *v11; // rdi
  __int64 *v12; // r14
  __int64 v13; // rax
  bool v14; // bl
  PVOID v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdi
  void *v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // eax
  PVOID Object; // [rsp+68h] [rbp-21h] BYREF
  void *v24; // [rsp+70h] [rbp-19h] BYREF
  __int64 v25; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v26[32]; // [rsp+80h] [rbp-9h] BYREF
  struct DWMSPRITE *v27; // [rsp+A0h] [rbp+17h]
  __int64 v28; // [rsp+E8h] [rbp+5Fh] BYREF
  unsigned int *v29; // [rsp+100h] [rbp+77h]

  v29 = a4;
  v28 = a1;
  v7 = 0;
  v8 = gdwDwmResizeOptimizationOptions & 1;
  v9 = gdwDwmResizeOptimizationOptions & 2;
  v25 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v28, v10, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v26, a2);
    v11 = v27;
    if ( v27 )
    {
      v12 = (__int64 *)*((_QWORD *)v27 + 18);
      v14 = 0;
      if ( v12 )
      {
        v13 = v12[23];
        if ( v13 )
        {
          if ( v13 != 24 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v13 - 24)) )
            v14 = 1;
        }
      }
      if ( v8 && v14 || a3 && v9 )
      {
        v7 = 1;
        if ( *((int *)v11 + 29) >= 1 )
          CheckAndProcessWindowResizeComplete(v11, 1, 0LL);
        *(_QWORD *)((char *)v11 + 116) = (unsigned int)v14 + 1;
        if ( a3 && v9 )
        {
          Object = 0LL;
          if ( (unsigned int)UserDCompositionCreateSynchronizationObject(&Object) )
          {
            v15 = Object;
            v24 = 0LL;
            if ( (int)CompositionObject::OpenDwmHandle((CompositionObject *)Object, &v24) < 0 )
            {
              ObfDereferenceObject(v15);
            }
            else
            {
              *((_QWORD *)v11 + 13) = v24;
              *((_QWORD *)v11 + 12) = v15;
              *((_DWORD *)v11 + 30) = 1;
              *((_DWORD *)v11 + 31) = 1;
              v17 = *v12;
              v18 = *(_QWORD *)v11;
              v19 = (void *)UserReferenceDwmApiPort(v16);
              DwmAsyncUpdateSprite(v19, v18, v17, 512, 0LL, 0LL, 0, 0, 0, 0, 0LL);
            }
          }
          v20 = gdwDwmResizeTimeoutModern;
          v21 = gdwDwmResizeOptimizationOptions & 8;
        }
        else
        {
          v20 = gdwDwmResizeTimeoutGdi;
          v21 = gdwDwmResizeOptimizationOptions & 4;
        }
        v11 = v27;
        *v29 = v21;
        *a5 = v20;
      }
      if ( v11 )
        _InterlockedDecrement((volatile signed __int32 *)v11 + 3);
    }
    v27 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v26);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v28);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  return v7;
}
