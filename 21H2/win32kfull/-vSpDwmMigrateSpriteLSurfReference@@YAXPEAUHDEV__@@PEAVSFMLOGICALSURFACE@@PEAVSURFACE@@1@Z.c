/*
 * XREFs of ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C00ED408
 * Callers:
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x1C00ED3F0 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002297C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00807CC (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0083D4C (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00ED5E8 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00ED78C (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00ED824 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015D684 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall vSpDwmMigrateSpriteLSurfReference(
        HDEV a1,
        struct SFMLOGICALSURFACE *this,
        struct SURFACE *a3,
        struct SFMLOGICALSURFACE *a4)
{
  HSPRITE v4; // r12
  struct _SURFOBJ *v5; // rsi
  HDEV v9; // rdx
  DWMSPRITE *v10; // r13
  HDEV v11; // rdx
  int v12; // r9d
  unsigned int v13; // eax
  int v14; // edx
  __int64 v15; // r14
  int v16; // esi
  void *v17; // rax
  DWMSPRITE *v18; // rax
  int v19; // [rsp+60h] [rbp-19h] BYREF
  __int64 v20; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v21[32]; // [rsp+70h] [rbp-9h] BYREF
  DWMSPRITE *v22; // [rsp+90h] [rbp+17h]
  unsigned int v23; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v24; // [rsp+F0h] [rbp+77h] BYREF

  v4 = (HSPRITE)*((_QWORD *)this + 37);
  v5 = (struct _SURFOBJ *)((char *)a3 + 24);
  v24 = 0;
  v23 = 0;
  v19 = 0;
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v21);
  v22 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v21, v4);
  v10 = v22;
  if ( v22 )
  {
    DWMSPRITE::SetLogicalSurface(v22, v9, 0LL);
    DWMSPRITE::SetLogicalSurface(v10, v11, a4);
    SFMLOGICALSURFACE::SetShape(this, a1, 0LL);
    SFMLOGICALSURFACE::SetShape(a4, a1, v5);
    if ( *((_QWORD *)a4 + 16) )
    {
      v20 = *((_QWORD *)a4 + 16);
      RGNOBJ::vSet((RGNOBJ *)&v20);
      v13 = *((_DWORD *)a4 + 63) & 0xFFFFFFFD;
    }
    else
    {
      v13 = *((_DWORD *)a4 + 63);
    }
    *((_DWORD *)a4 + 63) = v13 | 8;
    SFMLOGICALSURFACE::StartSfmStateTracking(a4, a1, gpSfmState, v12);
    SFMLOGICALSURFACE::GetRedirectionInfo(a4, (enum _HLSURF_REDIRECTIONSTYLE *)&v19, &v24, &v23, 0LL, 0LL);
    v14 = *((_DWORD *)a4 + 63);
    v15 = *((_QWORD *)v10 + 13);
    *((_QWORD *)v10 + 13) = 0LL;
    v16 = *((_DWORD *)v10 + 29);
    v17 = (void *)UserReferenceDwmApiPort(v14 & 1);
    DwmAsyncUpdateSprite(v17, (__int64)v10 + 72, 0LL, v19, v24, v23, v16 >= 1, v15);
    v18 = v22;
    *((_DWORD *)a4 + 63) &= ~8u;
    if ( v18 )
      _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
  }
  v22 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v21);
}
