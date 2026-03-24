/*
 * XREFs of ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C00EE6F4
 * Callers:
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00EE608 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C027E738 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C0281908 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C0281AD0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1C0281E3C (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0281F18 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C0282300 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C008BED0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008C4D8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C00EDB20 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00F01D8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00F0D0C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z @ 0x1C00F0E64 (-vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall pSpHintSpriteShape(struct SPRITE *a1, HSURF hsurf, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // r9
  SURFOBJ *v8; // rax
  SURFOBJ *v9; // rdx
  int v10; // eax
  HDEV hdev; // rsi
  __int64 *v12; // rax
  __int64 v14; // rsi
  int v15; // eax
  __int64 *v16[24]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+100h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 )
    return v3;
  v7 = *((_QWORD *)a1 + 16);
  if ( !v7 || (v14 = v7 - 24, !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v7 - 24))) )
  {
LABEL_3:
    if ( hsurf )
    {
      if ( !v7 )
        goto LABEL_36;
      if ( (*(_DWORD *)a1 & 0x40) == 0 )
      {
        vSpDeleteShape(a1);
        v7 = *((_QWORD *)a1 + 16);
      }
      if ( !v7 )
      {
LABEL_36:
        if ( (*(_DWORD *)a1 & 0x40) == 0 )
        {
          v8 = EngLockSurface(hsurf);
          v9 = v8;
          if ( v8 )
          {
            if ( v8->iType == 3 && (HIDWORD(v8[1].hsurf) & 1) != 0 )
            {
              EngUnlockSurface(v8);
              v9 = 0LL;
            }
            if ( v9 )
            {
              v10 = *(_DWORD *)a1 | 0x40;
              *((_QWORD *)a1 + 16) = v9;
              *(_DWORD *)a1 = v10;
              if ( a3 )
                *(_DWORD *)a1 = v10 | 0x80;
              *((_QWORD *)a1 + 30) = hsurf;
              *((_QWORD *)a1 + 12) = 0LL;
              *((_DWORD *)a1 + 26) = v9->sizlBitmap.cx;
              *((_DWORD *)a1 + 27) = v9->sizlBitmap.cy;
              *((POINTL *)a1 + 17) = gptlZero;
              hdev = v9[1].hdev;
              if ( hdev )
                INC_SHARE_REF_CNT(v9[1].hdev);
              v12 = (__int64 *)*((_QWORD *)a1 + 2);
              *((_QWORD *)a1 + 18) = hdev;
              v17 = *v12;
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v16, (struct PDEVOBJ *)&v17);
              bSpUpdatePosition(a1, (struct _POINTL *)a1 + 14, 0, 0);
              SPRITEDDIACCESS::~SPRITEDDIACCESS(v16);
            }
          }
        }
      }
    }
    else if ( v7 )
    {
      vSpRemoveShapeHint(a1, a3);
    }
    return 1;
  }
  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v14 + 272));
  if ( !*(_DWORD *)(v14 + 324) )
  {
    if ( (*(_DWORD *)a1 & 0x200) != 0 )
    {
      vSpRemoveShapeHint(a1, 0);
      *(_DWORD *)a1 &= ~0x200u;
    }
    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v14 + 272));
    v7 = *((_QWORD *)a1 + 16);
    goto LABEL_3;
  }
  *(_QWORD *)(v14 + 328) = UserGetHDEV();
  *(_QWORD *)(v14 + 336) = *((_QWORD *)a1 + 9);
  *(_QWORD *)(v14 + 344) = hsurf;
  memset((void *)(v14 + 352), 0, 0x88uLL);
  v15 = *(_DWORD *)(v14 + 112);
  *(_QWORD *)(v14 + 488) = 0LL;
  if ( (v15 & 0x2000000) == 0 )
    *(_DWORD *)(v14 + 112) = v15 | 0x2000000;
  if ( (*(_DWORD *)a1 & 0x200) == 0 )
    *(_DWORD *)a1 |= 0x200u;
  W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v14 + 272));
  return 1LL;
}
