/*
 * XREFs of ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C00147EC
 * Callers:
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x1C0012980 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 * Callees:
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0012998 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0012A28 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncUpdateSprite @ 0x1C0012AC0 (DwmAsyncUpdateSprite.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C0015C80 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0016104 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00BE06C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0169E84 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall vSpDwmMigrateSpriteLSurfReference(
        HDEV a1,
        struct SFMLOGICALSURFACE *a2,
        struct SURFACE *a3,
        struct SFMLOGICALSURFACE *a4)
{
  HSPRITE v4; // r13
  struct _SURFOBJ *v5; // rsi
  HDEV v9; // rdx
  DWMSPRITE *v10; // r14
  HDEV v11; // rdx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // edx
  __int64 v15; // rsi
  __int64 v16; // r15
  int v17; // ebx
  BOOL v18; // edi
  void *v19; // rax
  DWMSPRITE *v20; // rax
  int v21; // [rsp+60h] [rbp-19h] BYREF
  __int64 v22; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v23[32]; // [rsp+70h] [rbp-9h] BYREF
  DWMSPRITE *v24; // [rsp+90h] [rbp+17h]
  unsigned int v25; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v26; // [rsp+F0h] [rbp+77h] BYREF

  v4 = (HSPRITE)*((_QWORD *)a2 + 37);
  v5 = (struct _SURFOBJ *)((char *)a3 + 24);
  v26 = 0;
  v25 = 0;
  v21 = 0;
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v23);
  v24 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v23, v4);
  v10 = v24;
  if ( v24 )
  {
    DWMSPRITE::SetLogicalSurface(v24, v9, 0LL);
    DWMSPRITE::SetLogicalSurface(v10, v11, a4);
    SFMLOGICALSURFACE::SetShape(a2, a1, 0LL);
    SFMLOGICALSURFACE::SetShape(a4, a1, v5);
    if ( *((_QWORD *)a4 + 16) )
    {
      v22 = *((_QWORD *)a4 + 16);
      RGNOBJ::vSet((RGNOBJ *)&v22);
      v12 = *((_DWORD *)a4 + 63) & 0xFFFFFFFD;
    }
    else
    {
      v12 = *((_DWORD *)a4 + 63);
    }
    *((_DWORD *)a4 + 63) = v12 | 8;
    SFMLOGICALSURFACE::StartSfmStateTracking(a4, a1, gpSfmState);
    SFMLOGICALSURFACE::GetRedirectionInfo(a4, (enum _HLSURF_REDIRECTIONSTYLE *)&v21, &v26, &v25, 0LL, 0LL);
    v13 = *((_DWORD *)v10 + 41);
    v14 = *((_DWORD *)a4 + 63);
    v15 = *((_QWORD *)v10 + 13);
    *((_QWORD *)v10 + 13) = 0LL;
    v16 = *(_QWORD *)a4;
    v17 = v13 & 1 | v14 & 0xC | (2 * (v14 & 1 | v13 & 0x40 | (4 * (v13 & 0xE))));
    v18 = *((_DWORD *)v10 + 29) >= 1;
    v19 = (void *)UserReferenceDwmApiPort();
    DwmAsyncUpdateSprite(v19, (__int64)v4, v16, v17, (__int64)v10 + 72, 0LL, v21, v26, v25, v18, v15);
    v20 = v24;
    *((_DWORD *)a4 + 63) &= ~8u;
    if ( v20 )
      _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
  }
  v24 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v23);
}
