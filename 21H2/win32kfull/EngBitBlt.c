/*
 * XREFs of EngBitBlt @ 0x1C0005C00
 * Callers:
 *     EngHTBlt @ 0x1C009247C (EngHTBlt.c)
 *     NtGdiEngBitBlt @ 0x1C01281A0 (NtGdiEngBitBlt.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C01524D0 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C016F090 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     SimBitBlt @ 0x1C0275CB8 (SimBitBlt.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C028DCD8 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0292720 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029A2C0 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 * Callees:
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C000710C (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0007458 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C0008B10 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0009148 (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0009AF4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     EngCopyBits @ 0x1C0028BB0 (EngCopyBits.c)
 *     EngTransparentBlt @ 0x1C0111310 (EngTransparentBlt.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     SimBitBlt @ 0x1C0275CB8 (SimBitBlt.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02C4920 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02C4C24 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 */

BOOL __stdcall EngBitBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMask,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *pbo,
        POINTL *pptlBrush,
        ROP4 rop4)
{
  POINTL *v11; // rbx
  PVOID *p_pvScan0; // r15
  __int64 *ThreadWin32Thread; // rax
  int v15; // edi
  __int64 v16; // rax
  _QWORD *v17; // rax
  _DWORD *v18; // rdx
  signed __int32 v19; // ett
  ULONG iSolidColor; // r9d
  unsigned int v22; // eax
  __int64 v23; // rcx
  char v24; // r8
  char v25; // r8
  __int64 (__fastcall *v26)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  ULONG iTransColor; // eax
  LONG x; // edx
  int v29; // ecx
  LONG y; // edx
  void (*v31)(struct _PATBLTFRAME *, int); // rax
  _DWORD *pvRbrush; // rax
  int v33; // ecx
  int v34; // edx
  int v35; // ecx
  __int64 v36; // rbx
  int v37; // eax
  void (__fastcall *v38)(unsigned __int64, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *); // rax
  void (*v39)(struct _PATBLTFRAME *, int); // [rsp+28h] [rbp-D8h]
  struct _POINTL *v40; // [rsp+60h] [rbp-A0h]
  struct SURFACE *v41; // [rsp+68h] [rbp-98h]
  XLATEOBJ *v42; // [rsp+70h] [rbp-90h]
  _DWORD *v45; // [rsp+88h] [rbp-78h] BYREF
  struct SURFACE *v46; // [rsp+90h] [rbp-70h] BYREF
  char v47; // [rsp+98h] [rbp-68h]
  int v48; // [rsp+9Ch] [rbp-64h]
  POINTL *v49; // [rsp+A0h] [rbp-60h]
  SURFOBJ *v50; // [rsp+A8h] [rbp-58h]
  POINTL *v51; // [rsp+B0h] [rbp-50h]
  struct SURFACE *v52; // [rsp+B8h] [rbp-48h]
  _DWORD v53[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-30h]
  int v55; // [rsp+D8h] [rbp-28h]
  int v56; // [rsp+DCh] [rbp-24h]
  RECTL prclSrc; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v58; // [rsp+F0h] [rbp-10h] BYREF
  int v59; // [rsp+F8h] [rbp-8h]
  int v60; // [rsp+FCh] [rbp-4h]

  v11 = pptlBrush;
  p_pvScan0 = &psoTrg[-1].pvScan0;
  v42 = pxlo;
  v40 = pptlSrc;
  v49 = pptlMask;
  v50 = psoMask;
  v41 = (struct SURFACE *)((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL));
  v51 = pptlBrush;
  v52 = (struct SURFACE *)((unsigned __int64)&psoMask[-1].pvScan0 & -(__int64)(psoMask != 0LL));
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  v15 = 0;
  if ( ThreadWin32Thread )
  {
    v16 = *ThreadWin32Thread;
    if ( v16 )
    {
      v17 = (_QWORD *)(v16 + 40);
      if ( (_QWORD *)*v17 != v17 )
      {
        v23 = *v17 - 40LL;
        if ( *v17 != 40LL && (*(_DWORD *)(v23 + 412) & 0x100) != 0 && *(_DWORD *)(v23 + 420) )
        {
          v24 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
          if ( (v24 & 0xE8) != 0 && (!pbo || pbo->iSolidColor == -1 && !pptlBrush) )
          {
            if ( gfUMPDDebug )
              DbgPrint(
                "clientcore\\windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDPAT && (!pbo || (pbo->iSo"
                "lidColor == -1 && !pptlBrush))\n",
                67LL);
            return 0;
          }
          v25 = v24 & 0xD4;
          if ( v25 && (!psoSrc || !pptlSrc) )
          {
            if ( gfUMPDDebug )
              DbgPrint(
                "clientcore\\windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDSRC && (!psoSrc || !pptlSrc)\n",
                74LL);
            return 0;
          }
          if ( (unsigned int)(*((_DWORD *)p_pvScan0 + 24) - 9) <= 1 )
          {
            if ( gfUMPDDebug )
              DbgPrint(
                "clientcore\\windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfDst is BMF_JPEG/BMF_PNG\n",
                84LL);
            return 1;
          }
          if ( v25 && (unsigned int)(*((_DWORD *)v41 + 24) - 9) <= 1 )
          {
            if ( gfUMPDDebug )
              DbgPrint(
                "clientcore\\windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfSrc is BMF_JPEG/BMF_PNG\n",
                90LL);
            return 1;
          }
        }
      }
    }
  }
  if ( psoTrg->iType )
    return SimBitBlt(psoTrg, psoSrc, pxlo, prclTrg, pptlSrc, v49, (__int64)pbo, pptlBrush, rop4, 0LL);
  v18 = p_pvScan0[6];
  if ( v18 )
  {
    _m_prefetchw(v18 + 10);
    do
      v19 = v18[10];
    while ( v19 != _InterlockedCompareExchange(v18 + 10, v19 | 0x40000, v19) );
    v18 = p_pvScan0[6];
  }
  v45 = v18;
  PDEVOBJ::vSync((PDEVOBJ *)&v45, psoTrg, 0LL, 0);
  ++*((_DWORD *)p_pvScan0 + 23);
  switch ( rop4 )
  {
    case 0u:
      goto LABEL_31;
    case 0xF0Fu:
LABEL_16:
      if ( pbo->iSolidColor != -1 )
      {
        iSolidColor = ~pbo->iSolidColor;
        if ( (rop4 & 1) == 0 )
          iSolidColor = pbo->iSolidColor;
        goto LABEL_19;
      }
      if ( *((_DWORD *)p_pvScan0 + 24) == 3
        && rop4 == 61680
        && pvGetEngRbrush(pbo)
        && *(_QWORD *)((char *)pbo[1].pvRbrush + 20) == 0x800000008LL )
      {
        v31 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect8_8x8;
LABEL_80:
        vDIBPatBltSrccopy8x8((struct SURFACE *)p_pvScan0, pco, prclTrg, pbo, pptlBrush, v31);
        return 1;
      }
      v22 = *((_DWORD *)p_pvScan0 + 24);
      if ( v22 < 3 )
      {
        if ( v22 == 2 )
        {
          if ( rop4 == 61680 && pvGetEngRbrush(pbo) && *(_QWORD *)((char *)pbo[1].pvRbrush + 20) == 0x800000008LL )
          {
            v31 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect4_8x8;
            goto LABEL_80;
          }
        }
        else if ( v22 == 1 && rop4 == 61680 && pvGetEngRbrush(pbo) )
        {
          pvRbrush = pbo[1].pvRbrush;
          v33 = pvRbrush[5];
          if ( v33 == 8 )
          {
            if ( pvRbrush[6] == 8 )
            {
              v31 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect1_8x8;
              goto LABEL_80;
            }
          }
          else if ( v33 == 6 && pvRbrush[6] == 6 )
          {
            vDIBnPatBltSrccopy6x6((struct SURFACE *)p_pvScan0, pco, prclTrg, pbo, pptlBrush, v39);
            return 1;
          }
        }
      }
      else if ( pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
      {
        LOBYTE(v15) = rop4 != 61680;
        vDIBPatBlt((struct SURFACE *)p_pvScan0, pco, prclTrg, pbo, pptlBrush, v15);
        return 1;
      }
LABEL_22:
      if ( psoSrc )
      {
        v45 = (_DWORD *)*((_QWORD *)v41 + 6);
        PDEVOBJ::vSync((PDEVOBJ *)&v45, psoSrc, 0LL, 0);
      }
      v46 = 0LL;
      v47 = 0;
      v48 = 0;
      if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) != 0 && *((_WORD *)v41 + 50) )
      {
        v34 = prclTrg->right - prclTrg->left;
        v35 = prclTrg->bottom - prclTrg->top;
        v36 = *((_QWORD *)v41 + 6);
        v53[0] = *((_DWORD *)p_pvScan0 + 24);
        v37 = *((_DWORD *)v41 + 28);
        v59 = v34;
        v60 = v35;
        v53[1] = v34;
        v53[2] = v35;
        v55 = v37 & 0x40000;
        v58 = 0LL;
        v53[3] = 0;
        v56 = 0;
        v54 = 0LL;
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v46, (struct _DEVBITMAPINFO *)v53, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
          || (v38 = *(void (__fastcall **)(unsigned __int64, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *))(v36 + 2816)) == 0LL )
        {
LABEL_71:
          SURFMEM::~SURFMEM((SURFMEM *)&v46);
          return v15;
        }
        v38(((unsigned __int64)v46 + 24) & -(__int64)(v46 != 0LL), psoSrc, 0LL, pxlo, &v58, pptlSrc);
        v11 = v51;
        v40 = &gptl00;
        v41 = v46;
        v42 = xloIdent;
      }
      if ( *((_DWORD *)p_pvScan0 + 24) <= 6u || !(unsigned int)bUMPDSecurityGateEx() )
      {
        BltLnk(
          (struct SURFACE *)p_pvScan0,
          v41,
          v52,
          (struct ECLIPOBJ *)pco,
          (struct XLATE *)v42,
          prclTrg,
          v40,
          v49,
          pbo,
          v11,
          rop4);
        SURFMEM::~SURFMEM((SURFMEM *)&v46);
        return 1;
      }
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:Invalid pSurfDst->iFormat()\n",
          492);
      v15 = 1;
      goto LABEL_71;
    case 0x5555u:
      vDIBSolidBlt((struct SURFACE *)p_pvScan0, prclTrg, pco, 0xFFFFFFFF, 1);
      return 1;
    case 0x5A5Au:
      if ( pbo->iSolidColor != -1 )
      {
        vDIBSolidBlt((struct SURFACE *)p_pvScan0, prclTrg, pco, pbo->iSolidColor, 1);
        return 1;
      }
      if ( *((_DWORD *)p_pvScan0 + 24) >= 3u && pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
      {
        vDIBPatBlt((struct SURFACE *)p_pvScan0, pco, prclTrg, pbo, pptlBrush, 2u);
        return 1;
      }
      goto LABEL_22;
  }
  if ( rop4 != 52394 )
  {
    if ( rop4 == 52428 )
    {
      if ( !*((_WORD *)v41 + 50) )
        return EngCopyBits(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
      v26 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v41 + 6) + 2816LL);
      if ( v26 )
        return v26(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
      return v15;
    }
    if ( rop4 == 61680 )
      goto LABEL_16;
    if ( rop4 != 0xFFFF )
      goto LABEL_22;
LABEL_31:
    iSolidColor = -(rop4 != 0);
LABEL_19:
    vDIBSolidBlt((struct SURFACE *)p_pvScan0, prclTrg, pco, iSolidColor, 0);
    return 1;
  }
  if ( v50 )
    goto LABEL_22;
  if ( pbo->pvRbrush )
    return 1;
  iTransColor = pbo->iSolidColor;
  x = pptlSrc->x;
  prclSrc.right = pptlSrc->x + prclTrg->right - prclTrg->left;
  v29 = prclTrg->bottom - prclTrg->top;
  prclSrc.left = x;
  y = pptlSrc->y;
  prclSrc.bottom = y + v29;
  prclSrc.top = y;
  return EngTransparentBlt(psoTrg, psoSrc, pco, pxlo, prclTrg, &prclSrc, iTransColor, 1u);
}
