/*
 * XREFs of GreWindowResizeComplete @ 0x1C026FE50
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C0210F44 (xxxDrawDragRectEx.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0017620 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00BD784 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00BE028 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00BE140 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C015F5A8 (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026D214 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
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
      v9 = (SFMLOGICALSURFACE *)*((_QWORD *)v16 + 21);
      if ( v7 >= 1 )
      {
        if ( v7 == 2 )
        {
          if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(*((SFMLOGICALSURFACE **)v16 + 21)) )
          {
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
            v11 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 3512);
            if ( v11 )
            {
              if ( (*(_DWORD *)(a1 + 40) & 0x4000000) != 0 )
              {
                v12 = (_QWORD *)SFMLOGICALSURFACE::AdapterLuid(v9, &v17);
                v13 = *(_QWORD *)(a1 + 1800);
                if ( v13 )
                {
                  *(_QWORD *)(v13 + 104) = *v12;
                  v11 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 3512);
                }
              }
              v8 = v11(*(_QWORD *)(a1 + 1800), *(_QWORD *)v9);
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v18);
            if ( v21[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v21);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v22);
          }
          if ( v8 )
          {
            *((_DWORD *)v6 + 29) = 3;
          }
          else
          {
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
