/*
 * XREFs of GreProtectSpriteContent @ 0x1C0267E68
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z @ 0x1C022CD44 (-ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00B0400 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00C89F8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00CD064 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00D544C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     DwmAsyncUpdateSprite @ 0x1C00D5BA0 (DwmAsyncUpdateSprite.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreProtectSpriteContent(Gre::Base *a1, HWND a2, int a3, char a4)
{
  int v4; // edi
  int v6; // esi
  unsigned int v8; // r14d
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // r13
  struct PDEVOBJ *v11; // rdx
  Gre::Base *v12; // rcx
  __int64 v13; // r12
  __int64 *v14; // rbx
  unsigned int v15; // ecx
  int v16; // edx
  int v17; // eax
  __int64 v18; // r15
  int v19; // r14d
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rcx
  int v23; // ebx
  void *v24; // rax
  _BYTE v26[4]; // [rsp+64h] [rbp-15h] BYREF
  __int64 *v27; // [rsp+68h] [rbp-11h]
  _BYTE v28[32]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v29; // [rsp+90h] [rbp+17h]
  int v30; // [rsp+E0h] [rbp+67h] BYREF
  int v31; // [rsp+E4h] [rbp+6Bh]
  unsigned int v32; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v33; // [rsp+F8h] [rbp+7Fh] BYREF

  v31 = HIDWORD(a1);
  v30 = 0;
  v4 = a4 & 1;
  v33 = 0;
  v32 = 0;
  v6 = (a4 & 0x11) == 17;
  v8 = 0;
  v10 = Gre::Base::Globals(a1);
  if ( a3 && IsDwmActive(v9) )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v26, v11, 0, 0);
    GreAcquireSemaphore(*((_QWORD *)v10 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v10 + 9), 7LL);
    if ( IsDwmActive(v12) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v28, a2);
      v13 = v29;
      if ( v29 )
      {
        v14 = *(__int64 **)(v29 + 144);
        v27 = v14;
        if ( v14 )
        {
          v15 = *(_DWORD *)(v29 + 140);
          v8 = 1;
          if ( ((v15 >> 3) & 1) != v4 || ((v15 >> 6) & 1) != v6 )
          {
            *(_DWORD *)(v29 + 140) = (v6 << 6) | v15 & 0xFFFFFFB7 | (8 * v4) & 0xFFFFFFBF;
            SFMLOGICALSURFACE::GetRedirectionInfo(
              (SFMLOGICALSURFACE *)v14,
              (enum _HLSURF_REDIRECTIONSTYLE *)&v30,
              &v33,
              &v32,
              0LL,
              0LL);
            v16 = *((_DWORD *)v14 + 63);
            v17 = *(_DWORD *)(v13 + 140);
            v18 = *(_QWORD *)(v13 + 104);
            *(_QWORD *)(v13 + 104) = 0LL;
            v19 = *(_DWORD *)(v13 + 116);
            v20 = *(_QWORD *)v13;
            v21 = *v27;
            v22 = v16 & 1;
            v23 = v17 & 1 | v16 & 0xC | (2 * (v22 | v17 & 0x40 | (4 * (v17 & 0xE))));
            v24 = (void *)UserReferenceDwmApiPort(v22);
            DwmAsyncUpdateSprite(v24, v20, v21, v23, v13 + 72, 0LL, v30, v33, v32, v19 >= 1, v18);
            v13 = v29;
            v8 = 1;
          }
        }
        if ( v13 )
          _InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
      }
      v29 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v28);
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 9));
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v26);
  }
  return v8;
}
