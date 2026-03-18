/*
 * XREFs of ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C00B604C
 * Callers:
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00B5F68 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C027C114 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C027F464 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C027F62C (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1C027F970 (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C027FA4C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C027FE40 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0085EEC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0085FE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0086C6C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C00B58D8 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z @ 0x1C00B6F90 (-vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall pSpHintSpriteShape(struct SPRITE *a1, HSURF hsurf, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // r9
  __int64 v9; // rsi
  SURFOBJ *v10; // rax
  SURFOBJ *v11; // rdx
  int v12; // eax
  HDEV hdev; // rsi
  __int64 *v14; // rax
  int v15; // eax
  struct _SPRITESTATE *v16[24]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+100h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 )
    return v3;
  v7 = *((_QWORD *)a1 + 16);
  if ( !v7 || (v9 = v7 - 24, !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v7 - 24))) )
  {
LABEL_3:
    if ( hsurf )
    {
      if ( !v7 || (*(_DWORD *)a1 & 0x40) == 0 && (vSpDeleteShape(a1), !*((_QWORD *)a1 + 16)) )
      {
        if ( (*(_DWORD *)a1 & 0x40) == 0 )
        {
          v10 = EngLockSurface(hsurf);
          v11 = v10;
          if ( v10 )
          {
            if ( v10->iType == 3 && (HIDWORD(v10[1].hsurf) & 1) != 0 )
            {
              EngUnlockSurface(v10);
            }
            else
            {
              v12 = *(_DWORD *)a1 | 0x40;
              *((_QWORD *)a1 + 16) = v11;
              *(_DWORD *)a1 = v12;
              if ( a3 )
                *(_DWORD *)a1 = v12 | 0x80;
              *((_QWORD *)a1 + 30) = hsurf;
              *((_QWORD *)a1 + 12) = 0LL;
              *((_DWORD *)a1 + 26) = v11->sizlBitmap.cx;
              *((_DWORD *)a1 + 27) = v11->sizlBitmap.cy;
              *((POINTL *)a1 + 17) = gptlZero;
              hdev = v11[1].hdev;
              if ( hdev )
                INC_SHARE_REF_CNT(v11[1].hdev);
              v14 = (__int64 *)*((_QWORD *)a1 + 2);
              *((_QWORD *)a1 + 18) = hdev;
              v17 = *v14;
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
  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v9 + 272));
  if ( !*(_DWORD *)(v9 + 324) )
  {
    if ( _bittest((const signed __int32 *)a1, 9u) )
    {
      vSpRemoveShapeHint(a1, 0);
      *(_DWORD *)a1 &= ~0x200u;
    }
    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v9 + 272));
    v7 = *((_QWORD *)a1 + 16);
    goto LABEL_3;
  }
  *(_QWORD *)(v9 + 328) = UserGetHDEV();
  *(_QWORD *)(v9 + 336) = *((_QWORD *)a1 + 9);
  *(_QWORD *)(v9 + 344) = hsurf;
  memset((void *)(v9 + 352), 0, 0x88uLL);
  v15 = *(_DWORD *)(v9 + 112);
  *(_QWORD *)(v9 + 488) = 0LL;
  if ( (v15 & 0x2000000) == 0 )
    *(_DWORD *)(v9 + 112) = v15 | 0x2000000;
  if ( (*(_DWORD *)a1 & 0x200) == 0 )
    *(_DWORD *)a1 |= 0x200u;
  W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v9 + 272));
  return 1LL;
}
