/*
 * XREFs of ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C02670B0
 * Callers:
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x1C02689D0 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 * Callees:
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C007B180 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C007C700 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00AD880 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00B0400 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00C8A3C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00D5BA0 (DwmAsyncUpdateSprite.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013E508 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall vSpDwmMigrateSpriteLSurfReference(
        HDEV a1,
        struct SFMLOGICALSURFACE *this,
        struct SURFACE *a3,
        struct SFMLOGICALSURFACE *a4)
{
  HSPRITE v4; // r13
  struct _SURFOBJ *v5; // rsi
  Gre::Base *v9; // rcx
  HDEV v10; // rdx
  DWMSPRITE *v11; // r15
  HDEV v12; // rdx
  Gre::Base *v13; // rcx
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  int v15; // eax
  int v16; // edx
  __int64 v17; // r14
  int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // rcx
  int v21; // ebx
  void *v22; // rax
  int v23; // [rsp+60h] [rbp-19h] BYREF
  __int64 v24; // [rsp+68h] [rbp-11h] BYREF
  _OWORD v25[2]; // [rsp+70h] [rbp-9h] BYREF
  DWMSPRITE *v26; // [rsp+90h] [rbp+17h]
  unsigned int v27; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v28; // [rsp+F0h] [rbp+77h] BYREF

  v4 = (HSPRITE)*((_QWORD *)this + 37);
  v5 = (struct _SURFOBJ *)((char *)a3 + 24);
  v28 = 0;
  v27 = 0;
  v23 = 0;
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v25);
  v26 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v25, v4);
  Gre::Base::Globals(v9);
  v11 = v26;
  if ( v26 )
  {
    DWMSPRITE::SetLogicalSurface(v26, v10, 0LL);
    DWMSPRITE::SetLogicalSurface(v11, v12, a4);
    SFMLOGICALSURFACE::SetShape(this, a1, 0LL);
    SFMLOGICALSURFACE::SetShape(a4, a1, v5);
    if ( *((_QWORD *)a4 + 16) )
    {
      v24 = *((_QWORD *)a4 + 16);
      RGNOBJ::vSet((RGNOBJ *)&v24);
      *((_DWORD *)a4 + 63) &= ~2u;
    }
    *((_DWORD *)a4 + 63) |= 8u;
    v14 = Gre::Base::Globals(v13);
    SFMLOGICALSURFACE::StartSfmStateTracking(a4, a1, *((struct SfmState **)v14 + 809));
    SFMLOGICALSURFACE::GetRedirectionInfo(a4, (enum _HLSURF_REDIRECTIONSTYLE *)&v23, &v28, &v27, 0LL, 0LL);
    v15 = *((_DWORD *)v11 + 35);
    v16 = *((_DWORD *)a4 + 63);
    v17 = *((_QWORD *)v11 + 13);
    *((_QWORD *)v11 + 13) = 0LL;
    v18 = *((_DWORD *)v11 + 29);
    v19 = *(_QWORD *)a4;
    v20 = v16 & 1;
    v21 = v15 & 1 | v16 & 0xC | (2 * (v20 | v15 & 0x40 | (4 * (v15 & 0xE))));
    v22 = (void *)UserReferenceDwmApiPort(v20);
    DwmAsyncUpdateSprite(v22, (__int64)v4, v19, v21, (__int64)v11 + 72, 0LL, v23, v28, v27, v18 >= 1, v17);
    *((_DWORD *)a4 + 63) &= ~8u;
    if ( v26 )
      _InterlockedDecrement((volatile signed __int32 *)v26 + 3);
  }
  v26 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v25);
}
