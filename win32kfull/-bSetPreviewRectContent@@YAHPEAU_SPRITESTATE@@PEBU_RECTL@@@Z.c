__int64 __fastcall bSetPreviewRectContent(struct _SPRITESTATE *a1, const struct _RECTL *a2)
{
  LONG v4; // r8d
  unsigned int updated; // r14d
  __int64 CompatibleDC; // rax
  HDC v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 top; // rcx
  void *v12; // rbx
  HDEV HDEV; // rax
  int v15; // [rsp+80h] [rbp-80h] BYREF
  struct tagSIZE v16; // [rsp+88h] [rbp-78h] BYREF
  __int64 v17; // [rsp+90h] [rbp-70h] BYREF
  char v18; // [rsp+98h] [rbp-68h]
  int v19; // [rsp+9Ch] [rbp-64h]
  struct PALETTE *v20; // [rsp+A0h] [rbp-60h] BYREF
  int v21; // [rsp+A8h] [rbp-58h]
  __int128 v22; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+D0h] [rbp-30h] BYREF
  char v25; // [rsp+D8h] [rbp-28h]
  int v26; // [rsp+DCh] [rbp-24h]
  __m128i v27; // [rsp+E0h] [rbp-20h] BYREF
  struct PALETTE *v28; // [rsp+F0h] [rbp-10h] BYREF
  int v29; // [rsp+F8h] [rbp-8h]
  _QWORD v30[2]; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL v31; // [rsp+110h] [rbp+10h] BYREF
  struct _RECTL v32; // [rsp+120h] [rbp+20h] BYREF
  __m128i si128; // [rsp+130h] [rbp+30h] BYREF
  int v34; // [rsp+140h] [rbp+40h]
  __m128i v35; // [rsp+144h] [rbp+44h]

  v4 = a2->right - a2->left;
  updated = 0;
  v16.cy = a2->bottom - a2->top;
  v22 = 0LL;
  v16.cx = v4;
  v23 = 0LL;
  CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  v7 = (HDC)CompatibleDC;
  if ( CompatibleDC )
  {
    GreSetDCOwnerEx(CompatibleDC, 0LL, 0LL, 0LL);
    DCOBJ::DCOBJ((DCOBJ *)v30, v7);
    if ( v30[0] )
    {
      v29 = 0;
      v28 = 0LL;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v28, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x300u, 1) )
      {
        v21 = 0;
        v20 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v20, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x200u, 1) )
        {
          *(struct tagSIZE *)((char *)&v22 + 4) = v16;
          v21 = 1;
          LODWORD(v22) = 6;
          HIDWORD(v22) = 0;
          *(_QWORD *)&v23 = *(_QWORD *)v20;
          DWORD2(v23) = 1;
          v17 = 0LL;
          v18 = 0;
          v19 = 0;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v17, (struct _DEVBITMAPINFO *)&v22, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
            && v17 )
          {
            LOBYTE(v8) = 5;
            HmgSetOwner(*(_QWORD *)(v17 + 32), 0LL, v8);
            *((_QWORD *)&v22 + 1) = 0x2400000003LL;
            si128 = _mm_load_si128((const __m128i *)&_xmm);
            v34 = 1174412344;
            v35 = si128;
            *(_QWORD *)&v22 = 0x300000006LL;
            *(_QWORD *)&v23 = *(_QWORD *)v20;
            DWORD2(v23) = 1;
            v24 = 0LL;
            v25 = 0;
            v26 = 0;
            if ( SURFMEM::bCreateDIB(
                   (SURFMEM *)&v24,
                   (struct _DEVBITMAPINFO *)&v22,
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
              if ( v24 )
              {
                *(struct tagSIZE *)&v31.right = v16;
                *(_QWORD *)&v31.left = 0LL;
                v32 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
                v27 = _mm_load_si128((const __m128i *)&_xmm);
                updated = EngNineGridHelper(
                            (struct XDCOBJ *)v30,
                            v20,
                            v28,
                            (struct _SURFOBJ *)(v17 + 24),
                            (struct _SURFOBJ *)(v24 + 24),
                            &v31,
                            &v32,
                            (struct _MARGINS *)&v27);
                if ( updated )
                {
                  v9 = *(_QWORD *)(v17 + 32);
                  *(_DWORD *)(v17 + 112) |= 0x4000000u;
                  v10 = GreSelectBitmap(v7, v9);
                  *(_DWORD *)(v17 + 112) &= ~0x4000000u;
                  v31.left = a2->left;
                  top = (unsigned int)a2->top;
                  v12 = (void *)*((_QWORD *)a1 + 145);
                  v31.top = top;
                  v15 = 33488896;
                  v27.m128i_i64[0] = 0LL;
                  HDEV = (HDEV)UserGetHDEV(top);
                  updated = GreUpdateSprite(
                              HDEV,
                              0LL,
                              v12,
                              0LL,
                              (struct tagPOINT *)&v31,
                              &v16,
                              v7,
                              (struct tagPOINT *)&v27,
                              0,
                              (struct _BLENDFUNCTION *)&v15,
                              2u,
                              0LL,
                              0LL,
                              1,
                              0,
                              0);
                  *(_DWORD *)(v17 + 112) |= 0x4000000u;
                  GreSelectBitmap(v7, v10);
                  *(_DWORD *)(v17 + 112) &= ~0x4000000u;
                }
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v24);
          }
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v20);
          SURFMEM::~SURFMEM((SURFMEM *)&v17);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v20);
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v28);
    }
    GreSetDCOwnerEx(v7, 2147483650LL, 0LL, 0LL);
    GreDeleteDC(v7);
    if ( v30[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v30);
  }
  return updated;
}
