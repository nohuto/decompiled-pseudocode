/*
 * XREFs of ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C027F188
 * Callers:
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027C8A0 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     EngCopyBits @ 0x1C0028BB0 (EngCopyBits.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C00B58D8 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C01571DC (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
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
  RECTL *v8; // rdx
  struct _RECTL v10; // xmm0
  __int64 v11; // rbx
  SURFOBJ *v12; // r14
  LONG cy; // eax
  __int64 v14; // r8
  __int64 v16; // [rsp+68h] [rbp-39h] BYREF
  char v17; // [rsp+70h] [rbp-31h]
  int v18; // [rsp+74h] [rbp-2Dh]
  struct _SURFOBJ *v19; // [rsp+78h] [rbp-29h]
  struct _XLATEOBJ *v20; // [rsp+80h] [rbp-21h]
  __int128 v21; // [rsp+88h] [rbp-19h] BYREF
  __int128 v22; // [rsp+98h] [rbp-9h]
  RECTL prclDest; // [rsp+A8h] [rbp+7h] BYREF

  v5 = (__int64 *)*((_QWORD *)a1 + 2);
  v6 = 0;
  v16 = 0LL;
  v8 = a5;
  v17 = 0;
  v18 = 0;
  v20 = a4;
  v19 = a3;
  prclDest = 0LL;
  v10 = *a5;
  v21 = 0LL;
  v22 = 0LL;
  v11 = *v5;
  *((struct _RECTL *)a1 + 6) = v10;
  if ( !psoSrc )
  {
    *((_DWORD *)a1 + 1) = 2;
    *((_DWORD *)a1 + 50) = 33488896;
    bSpCreateShape(a1, &gptlZero, a3, 0LL, a5, gppalRGB, 6u, 1u, 0LL);
    LOBYTE(v6) = *((_QWORD *)a1 + 16) != 0LL;
    goto LABEL_16;
  }
  v12 = (SURFOBJ *)*((_QWORD *)a1 + 15);
  if ( !v12 )
    goto LABEL_7;
  if ( v12->sizlBitmap.cx != psoSrc->sizlBitmap.cx || v12->sizlBitmap.cy != psoSrc->sizlBitmap.cy )
  {
    bDeleteSurface(v12->hsurf);
    v12 = 0LL;
LABEL_7:
    DWORD1(v21) = psoSrc->sizlBitmap.cx;
    cy = psoSrc->sizlBitmap.cy;
    LODWORD(v21) = 1;
    DWORD2(v21) = cy;
    DWORD2(v22) = 1;
    *(_QWORD *)&v22 = 0LL;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v16, (struct _DEVBITMAPINFO *)&v21, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      LOBYTE(v14) = 5;
      v17 |= 1u;
      v12 = (SURFOBJ *)((v16 + 24) & -(__int64)(v16 != 0));
      HmgSetOwner(*(_QWORD *)(v16 + 32), 0LL, v14);
    }
    v8 = a5;
  }
  *((_QWORD *)a1 + 15) = v12;
  if ( v12 )
  {
    prclDest = *v8;
    prclDest.bottom = (v12->sizlBitmap.cy >> 1) + _mm_srli_si128(*(__m128i *)&prclDest, 8).m128i_i32[1];
    EngCopyBits(v12, psoSrc, 0LL, 0LL, &prclDest, (POINTL *)&prclDest);
  }
  if ( v19 )
  {
    bSpCreateShape(a1, &gptlZero, v19, v20, a5, *(struct PALETTE **)(v11 + 1776), 0, 0, 0LL);
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
LABEL_16:
  SURFMEM::~SURFMEM((SURFMEM *)&v16);
  return v6;
}
