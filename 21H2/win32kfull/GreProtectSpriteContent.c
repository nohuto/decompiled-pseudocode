/*
 * XREFs of GreProtectSpriteContent @ 0x1C026D910
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@KPEBUtagPROCESSINFO@@@Z @ 0x1C02438F4 (-ProtectWindowBitmap@@YAHPEAUtagWND@@KPEBUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0022938 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0022A50 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00495DC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     DwmAsyncUpdateSprite @ 0x1C00ED5E8 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00ED78C (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreProtectSpriteContent(__int64 a1, struct PDEVOBJ *a2, int a3, char a4)
{
  unsigned int v5; // r13d
  int v6; // ebx
  int v7; // edi
  __int64 v8; // r12
  unsigned int v9; // ecx
  SFMLOGICALSURFACE *v10; // rsi
  int v11; // edx
  int v12; // eax
  __int64 v13; // r15
  __int64 v14; // rdi
  int v15; // r14d
  __int64 v16; // rsi
  __int64 v17; // rcx
  int v18; // ebx
  void *v19; // rax
  _BYTE v21[8]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v22[32]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+D0h] [rbp+67h] BYREF
  int v25; // [rsp+D4h] [rbp+6Bh]
  unsigned int v26; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int v27; // [rsp+E8h] [rbp+7Fh] BYREF

  v25 = HIDWORD(a1);
  v24 = 0;
  v27 = 0;
  v26 = 0;
  v5 = 0;
  v6 = a4 & 1;
  v7 = (a4 & 0x11) == 17;
  if ( a3 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v21, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v22, (HWND)a2);
    v8 = v23;
    if ( v23 )
    {
      v9 = *(_DWORD *)(v23 + 140);
      v5 = 1;
      v10 = *(SFMLOGICALSURFACE **)(v23 + 144);
      if ( ((v9 >> 3) & 1) != v6 || ((v9 >> 6) & 1) != v7 )
      {
        *(_DWORD *)(v23 + 140) = (v7 << 6) | v9 & 0xFFFFFFB7 | (8 * v6) & 0xFFFFFFBF;
        SFMLOGICALSURFACE::GetRedirectionInfo(v10, (enum _HLSURF_REDIRECTIONSTYLE *)&v24, &v27, &v26, 0LL, 0LL);
        v11 = *((_DWORD *)v10 + 63);
        v12 = *(_DWORD *)(v8 + 140);
        v13 = *(_QWORD *)(v8 + 104);
        *(_QWORD *)(v8 + 104) = 0LL;
        v14 = *(_QWORD *)v10;
        v15 = *(_DWORD *)(v8 + 116);
        v16 = *(_QWORD *)v8;
        v17 = v11 & 1;
        v18 = v12 & 1 | v11 & 0xC | (2 * (v17 | v12 & 0x40 | (4 * (v12 & 0xE))));
        v19 = (void *)UserReferenceDwmApiPort(v17);
        DwmAsyncUpdateSprite(v19, v16, v14, v18, v8 + 72, 0LL, v24, v27, v26, v15 >= 1, v13);
        v8 = v23;
      }
      if ( v8 )
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
    }
    v23 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v22);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v21);
  }
  return v5;
}
