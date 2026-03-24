/*
 * XREFs of ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C0280EE4
 * Callers:
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027E8B0 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     EngCopyBits @ 0x1C007EAA0 (EngCopyBits.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C00ED7D0 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C0164D78 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall bSpUpdateCursor(
        struct SPRITE *a1,
        SURFOBJ *psoSrc,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5)
{
  __int64 *v5; // r12
  unsigned int v6; // edi
  struct _RECTL v9; // xmm0
  __int64 v10; // rbx
  SURFOBJ *v11; // r14
  LONG cy; // eax
  __int64 v13; // r8
  __int64 v15; // [rsp+60h] [rbp-41h] BYREF
  char v16; // [rsp+68h] [rbp-39h]
  int v17; // [rsp+6Ch] [rbp-35h]
  struct _RECTL *v18; // [rsp+70h] [rbp-31h]
  struct _SURFOBJ *v19; // [rsp+78h] [rbp-29h]
  struct _XLATEOBJ *v20; // [rsp+80h] [rbp-21h]
  __int128 v21; // [rsp+88h] [rbp-19h] BYREF
  __int128 v22; // [rsp+98h] [rbp-9h]
  RECTL prclDest; // [rsp+A8h] [rbp+7h] BYREF

  v5 = (__int64 *)*((_QWORD *)a1 + 2);
  v6 = 0;
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  v20 = a4;
  v19 = a3;
  v18 = a5;
  prclDest = 0LL;
  v9 = *a5;
  v21 = 0LL;
  v22 = 0LL;
  v10 = *v5;
  *((struct _RECTL *)a1 + 6) = v9;
  if ( psoSrc )
  {
    v11 = (SURFOBJ *)*((_QWORD *)a1 + 15);
    if ( !v11 )
      goto LABEL_8;
    if ( v11->sizlBitmap.cx != psoSrc->sizlBitmap.cx || v11->sizlBitmap.cy != psoSrc->sizlBitmap.cy )
    {
      bDeleteSurface(v11->hsurf);
      v11 = 0LL;
    }
    if ( !v11 )
    {
LABEL_8:
      DWORD1(v21) = psoSrc->sizlBitmap.cx;
      cy = psoSrc->sizlBitmap.cy;
      LODWORD(v21) = 1;
      DWORD2(v21) = cy;
      DWORD2(v22) = 1;
      *(_QWORD *)&v22 = 0LL;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v15, (struct _DEVBITMAPINFO *)&v21, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        LOBYTE(v13) = 5;
        v16 |= 1u;
        v11 = (SURFOBJ *)((v15 + 24) & -(__int64)(v15 != 0));
        HmgSetOwner(*(_QWORD *)(v15 + 32), 0LL, v13);
      }
    }
    *((_QWORD *)a1 + 15) = v11;
    if ( v11 )
    {
      prclDest = *v18;
      prclDest.bottom = (v11->sizlBitmap.cy >> 1) + _mm_srli_si128(*(__m128i *)&prclDest, 8).m128i_i32[1];
      EngCopyBits(v11, psoSrc, 0LL, 0LL, &prclDest, (POINTL *)&prclDest);
    }
    if ( v19 )
    {
      bSpCreateShape(a1, &gptlZero, v19, v20, v18, *(struct PALETTE **)(v10 + 1808), 0, 0, 0LL);
      LOBYTE(v6) = *((_QWORD *)a1 + 16) != 0LL;
    }
    else
    {
      vSpDeleteShape(a1);
      v6 = 1;
    }
    *((_DWORD *)a1 + 1) = 0x1000000;
    *((_DWORD *)a1 + 39) = *((_DWORD *)v5 + 28);
    *((_DWORD *)a1 + 38) = *((_DWORD *)v5 + 27);
  }
  else
  {
    *((_DWORD *)a1 + 1) = 2;
    *((_DWORD *)a1 + 50) = 33488896;
    bSpCreateShape(a1, &gptlZero, a3, 0LL, a5, gppalRGB, 6u, 1u, 0LL);
    LOBYTE(v6) = *((_QWORD *)a1 + 16) != 0LL;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v15);
  return v6;
}
