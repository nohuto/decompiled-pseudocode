/*
 * XREFs of ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C027FAF8
 * Callers:
 *     bMoveDevPreviewRect @ 0x1C028594C (bMoveDevPreviewRect.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreUpdateSprite @ 0x1C00BE800 (GreUpdateSprite.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C027DB00 (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
 */

__int64 __fastcall bSetPreviewRectContent(void **a1, const struct _RECTL *a2)
{
  unsigned int updated; // r14d
  __int64 CompatibleDC; // rax
  HDC v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rbx
  HDEV HDEV; // rax
  struct _BLENDFUNCTION v12; // [rsp+80h] [rbp-80h] BYREF
  struct tagSIZE v13; // [rsp+88h] [rbp-78h] BYREF
  __int64 v14; // [rsp+90h] [rbp-70h] BYREF
  char v15; // [rsp+98h] [rbp-68h]
  int v16; // [rsp+9Ch] [rbp-64h]
  struct PALETTE *v17; // [rsp+A0h] [rbp-60h] BYREF
  int v18; // [rsp+A8h] [rbp-58h]
  __int128 v19; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+D0h] [rbp-30h] BYREF
  char v22; // [rsp+D8h] [rbp-28h]
  int v23; // [rsp+DCh] [rbp-24h]
  struct tagPOINT v24[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct PALETTE *v25; // [rsp+F0h] [rbp-10h] BYREF
  int v26; // [rsp+F8h] [rbp-8h]
  _QWORD v27[6]; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL v28; // [rsp+130h] [rbp+30h] BYREF
  struct _RECTL v29; // [rsp+140h] [rbp+40h] BYREF
  __m128i si128; // [rsp+150h] [rbp+50h] BYREF
  int v31; // [rsp+160h] [rbp+60h]
  __m128i v32; // [rsp+164h] [rbp+64h]

  v13.cx = a2->right - a2->left;
  updated = 0;
  v13.cy = a2->bottom - a2->top;
  v19 = 0LL;
  v20 = 0LL;
  CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  v6 = (HDC)CompatibleDC;
  if ( CompatibleDC )
  {
    GreSetDCOwnerEx(CompatibleDC, 0LL, 0LL, 0LL);
    DCOBJ::DCOBJ((DCOBJ *)v27, v6);
    if ( v27[0] )
    {
      v26 = 0;
      v25 = 0LL;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v25, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x300u, 1) )
      {
        v18 = 0;
        v17 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v17, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x200u, 1) )
        {
          *(struct tagSIZE *)((char *)&v19 + 4) = v13;
          v18 = 1;
          LODWORD(v19) = 6;
          HIDWORD(v19) = 0;
          *(_QWORD *)&v20 = *(_QWORD *)v17;
          DWORD2(v20) = 1;
          v14 = 0LL;
          v15 = 0;
          v16 = 0;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v14, (struct _DEVBITMAPINFO *)&v19, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
            && v14 )
          {
            LOBYTE(v7) = 5;
            HmgSetOwner(*(_QWORD *)(v14 + 32), 0LL, v7);
            *((_QWORD *)&v19 + 1) = 0x2400000003LL;
            si128 = _mm_load_si128((const __m128i *)&_xmm);
            v31 = 1174412344;
            v32 = si128;
            *(_QWORD *)&v19 = 0x300000006LL;
            *(_QWORD *)&v20 = *(_QWORD *)v17;
            DWORD2(v20) = 1;
            v21 = 0LL;
            v22 = 0;
            v23 = 0;
            if ( SURFMEM::bCreateDIB(
                   (SURFMEM *)&v21,
                   (struct _DEVBITMAPINFO *)&v19,
                   &si128,
                   0LL,
                   0,
                   0LL,
                   0LL,
                   0,
                   1,
                   0,
                   0) )
            {
              if ( v21 )
              {
                *(struct tagSIZE *)&v28.right = v13;
                *(_QWORD *)&v28.left = 0LL;
                v29 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
                *(__m128i *)&v24[0].x = _mm_load_si128((const __m128i *)&_xmm);
                updated = EngNineGridHelper(
                            (struct XDCOBJ *)v27,
                            v17,
                            v25,
                            (struct _SURFOBJ *)(v14 + 24),
                            (struct _SURFOBJ *)(v21 + 24),
                            &v28,
                            &v29,
                            (struct _MARGINS *)v24);
                if ( updated )
                {
                  v8 = *(_QWORD *)(v14 + 32);
                  *(_DWORD *)(v14 + 112) |= 0x4000000u;
                  v9 = GreSelectBitmap(v6, v8);
                  *(_DWORD *)(v14 + 112) &= ~0x4000000u;
                  v28.left = a2->left;
                  v28.top = a2->top;
                  v12 = (struct _BLENDFUNCTION)33488896;
                  v24[0] = 0LL;
                  HDEV = (HDEV)UserGetHDEV();
                  updated = GreUpdateSprite(
                              HDEV,
                              0LL,
                              a1[145],
                              0LL,
                              (struct tagPOINT *)&v28,
                              &v13,
                              v6,
                              v24,
                              0,
                              &v12,
                              2u,
                              0LL,
                              0LL,
                              1,
                              0);
                  *(_DWORD *)(v14 + 112) |= 0x4000000u;
                  GreSelectBitmap(v6, v9);
                  *(_DWORD *)(v14 + 112) &= ~0x4000000u;
                }
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v21);
          }
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v17);
          SURFMEM::~SURFMEM((SURFMEM *)&v14);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v17);
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v25);
    }
    GreSetDCOwnerEx(v6, 2147483650LL, 0LL, 0LL);
    GreDeleteDC(v6);
    DCOBJ::~DCOBJ((DCOBJ *)v27);
  }
  return updated;
}
