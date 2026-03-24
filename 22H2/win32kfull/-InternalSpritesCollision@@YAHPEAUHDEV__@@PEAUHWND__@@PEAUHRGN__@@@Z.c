/*
 * XREFs of ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0275DA4
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1C02770F0 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00172B0 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C007C220 (GreDeleteSpriteOverlapPresent.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00B2D1C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00F05E4 (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00F0C8C (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C015695C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C027E06C (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C027EAD4 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall InternalSpritesCollision(HDEV a1, HWND a2, HRGN a3)
{
  unsigned int v4; // ebx
  HRGN RectRgn; // rsi
  HRGN v6; // r14
  HRGN v7; // rax
  HRGN v8; // r13
  HRGN v9; // r12
  int v10; // edi
  HRGN v11; // rax
  HRGN hrgn; // [rsp+30h] [rbp-89h]
  unsigned int v14; // [rsp+38h] [rbp-81h]
  unsigned int v15; // [rsp+3Ch] [rbp-7Dh]
  _QWORD v18[7]; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v19[7]; // [rsp+88h] [rbp-31h] BYREF
  struct tagRECT prcl; // [rsp+C0h] [rbp+7h] BYREF

  v4 = 0;
  v15 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, a3, 0, 0);
  if ( !v18[0]
    || (prcl = (struct tagRECT)*((_OWORD *)a1 + 8),
        ERECTL::bOffsetAdd((ERECTL *)&prcl, (const struct _POINTL *)a1 + 323, 0),
        RGNOBJ::bInside((RGNOBJ *)v18, (struct _RECTL *)&prcl) == 2) )
  {
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
    if ( *((_DWORD *)a1 + 36) )
    {
      RectRgn = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
      if ( RectRgn )
      {
        hrgn = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
        v6 = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
        v7 = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
        v8 = hrgn;
        v9 = v7;
        if ( hrgn )
        {
          if ( v6 )
          {
            if ( v7 )
            {
              v14 = 0;
              if ( EngSetRectRgn(
                     hrgn,
                     *((_DWORD *)a1 + 32),
                     *((_DWORD *)a1 + 33),
                     *((_DWORD *)a1 + 34),
                     *((_DWORD *)a1 + 35)) )
              {
                SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 52));
                if ( *((_QWORD *)a1 + 141) )
                  vSpComputeUncoveredRegion((struct _SPRITESTATE *)(a1 + 22), 0);
                SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(a1 + 52));
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, RectRgn, 0, 0);
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, hrgn, 1, 0);
                *(_QWORD *)&prcl.left = *((_QWORD *)a1 + 98);
                if ( v19[0] && v18[0] )
                  v14 = RGNOBJAPI::iCombine((RGNOBJAPI *)v19, (struct RGNOBJ *)v18, (struct RGNOBJ *)&prcl, 4);
                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
                if ( v14 > 1 )
                {
                  v10 = 0;
                  EngSetRectRgn(v6, 0, 0, 0, 0);
                  if ( !g_pDwmState )
                    GdiGetSpriteClipRgns(a1, v6);
                  EngGetRgnBox(v6, &prcl);
                  if ( !ERECTL::bEmpty((ERECTL *)&prcl) && (unsigned int)EngCombineRgn(v9, RectRgn, v6, 1) > 1 )
                  {
                    v11 = RectRgn;
                    v10 = 1;
                    RectRgn = v9;
                    v9 = v11;
                  }
                  if ( (unsigned int)EngOffsetRgn(RectRgn, *((_DWORD *)a1 + 646), *((_DWORD *)a1 + 647)) > 1 )
                  {
                    if ( (unsigned int)EngCombineRgn(hrgn, RectRgn, a3, 1) <= 1 )
                    {
                      if ( v10 )
                        GreAddSpriteOverlapPresent(a1, a2);
                    }
                    else
                    {
                      v15 = 1;
                      GreDeleteSpriteOverlapPresent(a1, a2);
                    }
                  }
                }
                v8 = hrgn;
              }
            }
          }
          EngDeleteRgn(v8);
        }
        if ( v6 )
          EngDeleteRgn(v6);
        if ( v9 )
          EngDeleteRgn(v9);
        EngDeleteRgn(RectRgn);
      }
    }
    return v15;
  }
  else
  {
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
  }
  return v4;
}
