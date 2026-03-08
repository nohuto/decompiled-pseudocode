/*
 * XREFs of ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C0269B54
 * Callers:
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x1C026B2F0 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 * Callees:
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C002822C (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002968C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00D4090 (DwmAsyncUpdateSprite.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00D7CC4 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00E61D0 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00E8FC0 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 */

void __fastcall vSpDwmMigrateSpriteLSurfReference(
        HDEV a1,
        struct SFMLOGICALSURFACE *this,
        struct SURFACE *a3,
        struct SFMLOGICALSURFACE *a4)
{
  HSPRITE v4; // r13
  struct _SURFOBJ *v5; // r14
  Gre::Base *v9; // rcx
  HDEV v10; // rdx
  DWMSPRITE *v11; // rdi
  HDEV v12; // rdx
  Gre::Base *v13; // rcx
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  int v15; // eax
  int v16; // edx
  __int64 v17; // r15
  int v18; // r14d
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // ebx
  __int64 v23; // r8
  void *v24; // rax
  int v25; // [rsp+60h] [rbp-20h] BYREF
  DWMSPRITE *v26; // [rsp+68h] [rbp-18h] BYREF
  __int64 v27; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v28; // [rsp+C8h] [rbp+48h] BYREF
  unsigned int v29; // [rsp+D0h] [rbp+50h] BYREF

  v4 = (HSPRITE)*((_QWORD *)this + 37);
  v5 = (struct _SURFOBJ *)((char *)a3 + 24);
  v29 = 0;
  v28 = 0;
  v25 = 0;
  v26 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v26, v4);
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
      v27 = *((_QWORD *)a4 + 16);
      RGNOBJ::vSet((RGNOBJ *)&v27);
      *((_DWORD *)a4 + 63) &= ~2u;
    }
    *((_DWORD *)a4 + 63) |= 8u;
    v14 = Gre::Base::Globals(v13);
    SFMLOGICALSURFACE::StartSfmStateTracking(a4, a1, *((struct SfmState **)v14 + 809));
    SFMLOGICALSURFACE::GetRedirectionInfo(a4, (enum _HLSURF_REDIRECTIONSTYLE *)&v25, &v29, &v28, 0LL, 0LL);
    v15 = *((_DWORD *)v11 + 35);
    v16 = *((_DWORD *)a4 + 63);
    v17 = *((_QWORD *)v11 + 13);
    *((_QWORD *)v11 + 13) = 0LL;
    v18 = *((_DWORD *)v11 + 29);
    v19 = *(_QWORD *)a4;
    v20 = v16 & 1;
    v21 = v16 & 0xC;
    v22 = v15 & 1 | v21 | (2 * (v20 | v15 & 0x40 | (4 * (v15 & 0xE))));
    v24 = (void *)UserReferenceDwmApiPort(v20, v21, v23);
    DwmAsyncUpdateSprite(v24, (__int64)v4, v19, v22, (__int64)v11 + 72, 0LL, v25, v29, v28, v18 >= 1, v17);
    *((_DWORD *)a4 + 63) &= ~8u;
    if ( v11 )
      _InterlockedDecrement((volatile signed __int32 *)v11 + 3);
  }
}
