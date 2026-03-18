/*
 * XREFs of ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C01547D8
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0153D4C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0020C2C (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     GreUpdateSprite @ 0x1C0020E98 (GreUpdateSprite.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0022038 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00228A4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00228D8 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C00840D8 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0084ED0 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00EDC30 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C026C464 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 */

__int64 __fastcall bSpDwmUpdateCursor(
        HSPRITE a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _BLENDFUNCTION *a6)
{
  UINT_PTR v7; // rdi
  unsigned int v9; // esi
  struct DWMSPRITE *v10; // rbx
  __int64 v11; // rsi
  int updated; // eax
  struct SFMLOGICALSURFACE *v13; // rdx
  __int64 v14; // rax
  struct DWMSPRITE *v16; // [rsp+88h] [rbp-29h] BYREF
  struct SFMLOGICALSURFACE *v17; // [rsp+90h] [rbp-21h] BYREF
  _BYTE v18[8]; // [rsp+98h] [rbp-19h] BYREF
  _BYTE v19[8]; // [rsp+A0h] [rbp-11h] BYREF
  _BYTE v20[48]; // [rsp+A8h] [rbp-9h] BYREF
  int v21; // [rsp+120h] [rbp+6Fh] BYREF
  int v22; // [rsp+124h] [rbp+73h]

  v22 = HIDWORD(a4);
  v21 = 33488896;
  v7 = 0LL;
  v16 = 0LL;
  v9 = 0;
  DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v16, a1);
  v10 = v16;
  if ( v16 )
  {
    v11 = *((_QWORD *)v16 + 18);
    LODWORD(v16) = 0;
    v17 = (struct SFMLOGICALSURFACE *)v11;
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v20, (HLSURF *)v11);
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v19, (struct DWMSPRITE *)((char *)v10 + 88));
    if ( !a3 || a2 )
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v18, (struct _EX_PUSH_LOCK *)(v11 + 256));
      updated = bSpDwmUpdateMaskCursor(
                  *((HDEV *)g_pDwmState + 22),
                  v10,
                  (struct SFMLOGICALSURFACE *)v11,
                  a2,
                  a3,
                  a5,
                  (unsigned int *)&v16,
                  &v17);
    }
    else
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v18, (struct _EX_PUSH_LOCK *)(v11 + 256));
      *((_DWORD *)v10 + 35) &= ~4u;
      updated = bSpDwmUpdateSpriteShape(
                  *((HDEV *)g_pDwmState + 22),
                  v10,
                  (struct SFMLOGICALSURFACE *)v11,
                  a3,
                  a5,
                  (struct PALETTE *)a3[1].hdev,
                  (unsigned int *)&v16,
                  0LL,
                  &v17);
    }
    v9 = updated;
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v18);
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v19);
    if ( v9 )
    {
      if ( a6 )
        v21 = (int)*a6;
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
             (struct _BLENDFUNCTION *)&v21,
             0x21200002u,
             0LL,
             0LL,
             1,
             0);
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v19, (struct DWMSPRITE *)((char *)v10 + 88));
      v13 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v10 + 18);
      v14 = *((_QWORD *)v13 + 23);
      if ( v14 )
        v7 = *(_QWORD *)(v14 + 8);
      bSpDwmNotifyDirty(*(HSPRITE *)v10, v13, (unsigned int)v16, v7);
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v19);
    }
    SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v20);
    DEC_SHARE_REF_CNT(v10);
  }
  return v9;
}
