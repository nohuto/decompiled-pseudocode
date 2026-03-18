/*
 * XREFs of ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C027DD98
 * Callers:
 *     bMoveDevPreviewRect @ 0x1C02826A4 (bMoveDevPreviewRect.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C0020E98 (GreUpdateSprite.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C027BCA0 (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
 */

__int64 __fastcall bSetPreviewRectContent(struct _SPRITESTATE *a1, const struct _RECTL *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  unsigned int updated; // r14d
  __int64 CompatibleDC; // rax
  HDC v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdi
  LONG top; // ecx
  void *v14; // rbx
  HDEV HDEV; // rax
  int v17; // [rsp+80h] [rbp-80h] BYREF
  struct tagSIZE v18; // [rsp+88h] [rbp-78h] BYREF
  __int64 v19; // [rsp+90h] [rbp-70h] BYREF
  char v20; // [rsp+98h] [rbp-68h]
  int v21; // [rsp+9Ch] [rbp-64h]
  struct PALETTE *v22; // [rsp+A0h] [rbp-60h] BYREF
  int v23; // [rsp+A8h] [rbp-58h]
  __int128 v24; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+D0h] [rbp-30h] BYREF
  char v27; // [rsp+D8h] [rbp-28h]
  int v28; // [rsp+DCh] [rbp-24h]
  __m128i v29; // [rsp+E0h] [rbp-20h] BYREF
  struct PALETTE *v30; // [rsp+F0h] [rbp-10h] BYREF
  int v31; // [rsp+F8h] [rbp-8h]
  _QWORD v32[6]; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL v33; // [rsp+130h] [rbp+30h] BYREF
  struct _RECTL v34; // [rsp+140h] [rbp+40h] BYREF
  __m128i si128; // [rsp+150h] [rbp+50h] BYREF
  int v36; // [rsp+160h] [rbp+60h]
  __m128i v37; // [rsp+164h] [rbp+64h]

  v6 = (unsigned int)(a2->right - a2->left);
  updated = 0;
  v18.cy = a2->bottom - a2->top;
  v24 = 0LL;
  v18.cx = v6;
  v25 = 0LL;
  CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL), a2, v6, a4);
  v9 = (HDC)CompatibleDC;
  if ( CompatibleDC )
  {
    GreSetDCOwnerEx(CompatibleDC, 0LL, 0LL, 0LL);
    DCOBJ::DCOBJ((DCOBJ *)v32, v9);
    if ( v32[0] )
    {
      v31 = 0;
      v30 = 0LL;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v30, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x300u, 1) )
      {
        v23 = 0;
        v22 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v22, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x200u, 1) )
        {
          *(struct tagSIZE *)((char *)&v24 + 4) = v18;
          v23 = 1;
          LODWORD(v24) = 6;
          HIDWORD(v24) = 0;
          *(_QWORD *)&v25 = *(_QWORD *)v22;
          DWORD2(v25) = 1;
          v19 = 0LL;
          v20 = 0;
          v21 = 0;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v19, (struct _DEVBITMAPINFO *)&v24, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
            && v19 )
          {
            LOBYTE(v10) = 5;
            HmgSetOwner(*(_QWORD *)(v19 + 32), 0LL, v10);
            *((_QWORD *)&v24 + 1) = 0x2400000003LL;
            si128 = _mm_load_si128((const __m128i *)&_xmm);
            v36 = 1174412344;
            v37 = si128;
            *(_QWORD *)&v24 = 0x300000006LL;
            *(_QWORD *)&v25 = *(_QWORD *)v22;
            DWORD2(v25) = 1;
            v26 = 0LL;
            v27 = 0;
            v28 = 0;
            if ( SURFMEM::bCreateDIB(
                   (SURFMEM *)&v26,
                   (struct _DEVBITMAPINFO *)&v24,
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
              if ( v26 )
              {
                *(struct tagSIZE *)&v33.right = v18;
                *(_QWORD *)&v33.left = 0LL;
                v34 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
                v29 = _mm_load_si128((const __m128i *)&_xmm);
                updated = EngNineGridHelper(
                            (struct XDCOBJ *)v32,
                            v22,
                            v30,
                            (struct _SURFOBJ *)(v19 + 24),
                            (struct _SURFOBJ *)(v26 + 24),
                            &v33,
                            &v34,
                            (struct _MARGINS *)&v29);
                if ( updated )
                {
                  v11 = *(_QWORD *)(v19 + 32);
                  *(_DWORD *)(v19 + 112) |= 0x4000000u;
                  v12 = GreSelectBitmap(v9, v11);
                  *(_DWORD *)(v19 + 112) &= ~0x4000000u;
                  v33.left = a2->left;
                  top = a2->top;
                  v14 = (void *)*((_QWORD *)a1 + 145);
                  v33.top = top;
                  v17 = 33488896;
                  v29.m128i_i64[0] = 0LL;
                  HDEV = (HDEV)UserGetHDEV();
                  updated = GreUpdateSprite(
                              HDEV,
                              0LL,
                              v14,
                              0LL,
                              (struct tagPOINT *)&v33,
                              &v18,
                              v9,
                              (struct tagPOINT *)&v29,
                              0,
                              (struct _BLENDFUNCTION *)&v17,
                              2u,
                              0LL,
                              0LL,
                              1,
                              0);
                  *(_DWORD *)(v19 + 112) |= 0x4000000u;
                  GreSelectBitmap(v9, v12);
                  *(_DWORD *)(v19 + 112) &= ~0x4000000u;
                }
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v26);
          }
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v22);
          SURFMEM::~SURFMEM((SURFMEM *)&v19);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v22);
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v30);
    }
    GreSetDCOwnerEx(v9, 2147483650LL, 0LL, 0LL);
    GreDeleteDC(v9);
    DCOBJ::~DCOBJ((DCOBJ *)v32);
  }
  return updated;
}
