/*
 * XREFs of GreWindowResizeComplete @ 0x1C026E008
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0022938 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0022A50 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00495DC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0084F94 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C0150434 (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026B550 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowResizeComplete(__int64 a1, HWND a2)
{
  unsigned int v4; // esi
  struct PDEVOBJ *v5; // rdx
  struct DWMSPRITE *v6; // rbx
  int v7; // eax
  int v8; // r15d
  SFMLOGICALSURFACE *v9; // r14
  int v10; // eax
  __int64 (__fastcall *v11)(_QWORD, _QWORD); // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _BYTE v15[32]; // [rsp+20h] [rbp-69h] BYREF
  struct DWMSPRITE *v16; // [rsp+40h] [rbp-49h]
  __int64 v17; // [rsp+48h] [rbp-41h] BYREF
  __int128 v18; // [rsp+50h] [rbp-39h] BYREF
  __int64 v19; // [rsp+60h] [rbp-29h]
  int v20; // [rsp+68h] [rbp-21h]
  _QWORD v21[2]; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v22[40]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+1Fh]
  __int64 v24; // [rsp+B0h] [rbp+27h]
  char v25; // [rsp+100h] [rbp+77h] BYREF
  __int64 v26; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = 0;
  v26 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v25, v5, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v15, a2);
    v6 = v16;
    if ( v16 )
    {
      v7 = *((_DWORD *)v16 + 29);
      v8 = 0;
      v9 = (SFMLOGICALSURFACE *)*((_QWORD *)v16 + 18);
      if ( v7 >= 1 )
      {
        if ( v7 == 2 )
        {
          if ( !(unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(*((SFMLOGICALSURFACE **)v16 + 18)) )
            goto LABEL_17;
          DLODCOBJ::DLODCOBJ((DLODCOBJ *)v21);
          v24 = 0LL;
          v23 = 0LL;
          v21[0] = 0LL;
          v10 = *(_DWORD *)(a1 + 40);
          v18 = 0LL;
          v20 = 1;
          if ( (v10 & 1) != 0 )
          {
            *(_QWORD *)&v18 = *(_QWORD *)(a1 + 48);
            v19 = a1;
            GreAcquireSemaphore(v18);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v18, 11LL);
          }
          v11 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 3488);
          if ( v11 )
          {
            if ( (*(_DWORD *)(a1 + 40) & 0x4000000) != 0 )
            {
              v12 = (_QWORD *)SFMLOGICALSURFACE::AdapterLuid(v9, &v17);
              v13 = *(_QWORD *)(a1 + 1768);
              if ( v13 )
              {
                *(_QWORD *)(v13 + 104) = *v12;
                v11 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 3488);
              }
            }
            v8 = v11(*(_QWORD *)(a1 + 1768), *(_QWORD *)v9);
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v18);
          if ( v21[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v21);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v22);
          if ( v8 )
          {
            *((_DWORD *)v6 + 29) = 3;
          }
          else
          {
LABEL_17:
            *((_DWORD *)v6 + 29) = 1;
            CheckAndProcessWindowResizeComplete(v6, 0, 0LL);
          }
          v6 = v16;
        }
        v4 = 1;
      }
      if ( v6 )
        _InterlockedDecrement((volatile signed __int32 *)v6 + 3);
    }
    v16 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v15);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v25);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v26);
  return v4;
}
