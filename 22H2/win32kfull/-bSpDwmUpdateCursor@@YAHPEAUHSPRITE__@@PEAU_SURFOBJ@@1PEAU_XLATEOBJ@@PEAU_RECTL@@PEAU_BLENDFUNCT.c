/*
 * XREFs of ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C00EC064
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00EB5DC (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0016490 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0017464 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C001755C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00BCDE8 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00BCE1C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00BDE38 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     GreUpdateSprite @ 0x1C00BE800 (GreUpdateSprite.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C00BEA2C (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C026E190 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 */

__int64 __fastcall bSpDwmUpdateCursor(
        HSPRITE a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _BLENDFUNCTION *a6)
{
  __int64 v7; // rdi
  unsigned int v9; // esi
  struct DWMSPRITE *v10; // rbx
  __int64 v11; // rsi
  int updated; // eax
  struct SFMLOGICALSURFACE *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  struct DWMSPRITE *v17; // [rsp+88h] [rbp-29h] BYREF
  struct SFMLOGICALSURFACE *v18; // [rsp+90h] [rbp-21h] BYREF
  _BYTE v19[8]; // [rsp+98h] [rbp-19h] BYREF
  _BYTE v20[8]; // [rsp+A0h] [rbp-11h] BYREF
  _BYTE v21[48]; // [rsp+A8h] [rbp-9h] BYREF
  struct _BLENDFUNCTION v22; // [rsp+120h] [rbp+6Fh] BYREF
  int v23; // [rsp+124h] [rbp+73h]

  v23 = HIDWORD(a4);
  v22 = (struct _BLENDFUNCTION)33488896;
  v7 = 0LL;
  v17 = 0LL;
  v9 = 0;
  DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v17, a1);
  v10 = v17;
  if ( v17 )
  {
    v11 = *((_QWORD *)v17 + 21);
    LODWORD(v17) = 0;
    v18 = (struct SFMLOGICALSURFACE *)v11;
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v21, (HLSURF *)v11);
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v20, (struct DWMSPRITE *)((char *)v10 + 88));
    if ( !a3 || a2 )
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v19, (struct _EX_PUSH_LOCK *)(v11 + 256));
      updated = bSpDwmUpdateMaskCursor(
                  *((HDEV *)g_pDwmState + 22),
                  v10,
                  (struct SFMLOGICALSURFACE *)v11,
                  a2,
                  a3,
                  a5,
                  (unsigned int *)&v17,
                  &v18);
    }
    else
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v19, (struct _EX_PUSH_LOCK *)(v11 + 256));
      *((_DWORD *)v10 + 41) &= ~4u;
      updated = bSpDwmUpdateSpriteShape(
                  *((HDEV *)g_pDwmState + 22),
                  v10,
                  (struct SFMLOGICALSURFACE *)v11,
                  a3,
                  a5,
                  (struct PALETTE *)a3[1].hdev,
                  (unsigned int *)&v17,
                  0LL,
                  &v18);
    }
    v9 = updated;
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v19);
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v20);
    if ( v9 )
    {
      if ( a6 )
        v22 = *a6;
      v9 = GreUpdateSprite(
             *((HDEV *)g_pDwmState + 22),
             0LL,
             *(void **)v10,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL,
             0,
             &v22,
             0x21200002u,
             0LL,
             0LL,
             1,
             0);
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v20, (struct DWMSPRITE *)((char *)v10 + 88));
      v13 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v10 + 21);
      v14 = *((_QWORD *)v13 + 23);
      if ( v14 )
        v7 = *(_QWORD *)(v14 + 8);
      bSpDwmNotifyDirty(*(HSPRITE *)v10, v13, (unsigned int)v17, v7);
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v20);
    }
    SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v21);
    DEC_SHARE_REF_CNT(v10, v15);
  }
  return v9;
}
