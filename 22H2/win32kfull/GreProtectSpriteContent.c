/*
 * XREFs of GreProtectSpriteContent @ 0x1C026F888
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z @ 0x1C0247A74 (-ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0012A28 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncUpdateSprite @ 0x1C0012AC0 (DwmAsyncUpdateSprite.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00BD784 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00BE028 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00BE140 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreProtectSpriteContent(__int64 a1, struct PDEVOBJ *a2, int a3, char a4)
{
  int v4; // ebx
  int v6; // edi
  unsigned int v7; // r13d
  __int64 v8; // r14
  unsigned int v9; // ecx
  SFMLOGICALSURFACE *v10; // r15
  int v11; // eax
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rsi
  int v15; // ebx
  __int64 v16; // r12
  __int64 v17; // r15
  int v18; // ebx
  BOOL v19; // edi
  void *v20; // rax
  _BYTE v22[8]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v23[32]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v24; // [rsp+88h] [rbp+1Fh]
  int v25; // [rsp+D0h] [rbp+67h] BYREF
  int v26; // [rsp+D4h] [rbp+6Bh]
  unsigned int v27; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int v28; // [rsp+E8h] [rbp+7Fh] BYREF

  v26 = HIDWORD(a1);
  v4 = a4 & 1;
  v25 = 0;
  v28 = 0;
  v27 = 0;
  v6 = (a4 & 0x11) == 17;
  v7 = 0;
  if ( a3 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v22, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v23, (HWND)a2);
    v8 = v24;
    if ( v24 )
    {
      v9 = *(_DWORD *)(v24 + 164);
      v10 = *(SFMLOGICALSURFACE **)(v24 + 168);
      v7 = 1;
      if ( ((v9 >> 3) & 1) != v4 || ((v9 >> 6) & 1) != v6 )
      {
        *(_DWORD *)(v24 + 164) = (v6 << 6) | v9 & 0xFFFFFFB7 | (8 * v4) & 0xFFFFFFBF;
        SFMLOGICALSURFACE::GetRedirectionInfo(v10, (enum _HLSURF_REDIRECTIONSTYLE *)&v25, &v28, &v27, 0LL, 0LL);
        v11 = *(_DWORD *)(v8 + 164) & 1;
        v12 = *((_DWORD *)v10 + 63) & 0xC;
        v13 = *((_DWORD *)v10 + 63) & 1;
        v14 = *(_QWORD *)(v8 + 104);
        v15 = *((_DWORD *)v10 + 63) & 1 | *(_DWORD *)(v8 + 164) & 0x40 | (4 * (*(_DWORD *)(v8 + 164) & 0xE));
        *(_QWORD *)(v8 + 104) = 0LL;
        v16 = *(_QWORD *)v8;
        v17 = *(_QWORD *)v10;
        v18 = v12 | v11 | (2 * v15);
        v19 = *(_DWORD *)(v8 + 116) >= 1;
        v20 = (void *)UserReferenceDwmApiPort(v13);
        DwmAsyncUpdateSprite(v20, v16, v17, v18, v8 + 72, 0LL, v25, v28, v27, v19, v14);
        v8 = v24;
      }
      if ( v8 )
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
    }
    v24 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v23);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v22);
  }
  return v7;
}
