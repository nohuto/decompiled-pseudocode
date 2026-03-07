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
  PVOID *p_pvScan0; // r13
  PVOID *v14; // rdi
  struct SURFACE *v16; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  POINTL *v20; // r9
  POINTL *v21; // rdx
  BRUSHOBJ *v22; // rcx
  _DWORD *v23; // rcx
  signed __int32 v24; // ett
  BRUSHOBJ *v25; // rbx
  unsigned int iSolidColor; // r9d
  struct SURFACE *v28; // rbx
  XLATEOBJ *v29; // r13
  POINTL *v30; // r12
  unsigned int v31; // eax
  __int64 v32; // rcx
  char v33; // r8
  char v34; // r8
  __int64 (__fastcall *v35)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  ULONG iTransColor; // eax
  LONG x; // edx
  int v38; // ecx
  LONG y; // edx
  char *pvRbrush; // rax
  int v41; // edx
  int v42; // ecx
  _QWORD *v43; // rbx
  int v44; // eax
  void (__fastcall *v45)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *); // rax
  char *v46; // rcx
  Gre::Base *v47; // rcx
  void (*v48)(struct _PATBLTFRAME *, int); // [rsp+28h] [rbp-D8h]
  unsigned int v49; // [rsp+28h] [rbp-D8h]
  struct SURFACE *v50; // [rsp+80h] [rbp-80h] BYREF
  char v51; // [rsp+88h] [rbp-78h]
  int v52; // [rsp+8Ch] [rbp-74h]
  PVOID v53; // [rsp+90h] [rbp-70h] BYREF
  POINTL *v54; // [rsp+98h] [rbp-68h]
  SURFOBJ *v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h] BYREF
  struct SURFACE *v57; // [rsp+B0h] [rbp-50h]
  _DWORD v58[4]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-38h]
  int v60; // [rsp+D0h] [rbp-30h]
  int v61; // [rsp+D4h] [rbp-2Ch]
  RECTL prclSrc; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v63; // [rsp+E8h] [rbp-18h] BYREF
  int v64; // [rsp+F0h] [rbp-10h]
  int v65; // [rsp+F4h] [rbp-Ch]

  p_pvScan0 = &psoSrc[-1].pvScan0;
  v14 = &psoTrg[-1].pvScan0;
  if ( !psoSrc )
    p_pvScan0 = 0LL;
  v54 = pptlMask;
  v16 = (struct SURFACE *)&psoMask[-1].pvScan0;
  if ( !psoMask )
    v16 = 0LL;
  v55 = psoMask;
  v57 = v16;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread
    && (v18 = *ThreadWin32Thread) != 0
    && (v19 = *(_QWORD *)(v18 + 40), v19 != v18 + 40)
    && (v32 = v19 - 40) != 0
    && (*(_DWORD *)(v32 + 412) & 0x100) != 0
    && *(_DWORD *)(v32 + 420) )
  {
    v33 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
    v22 = pbo;
    if ( (v33 & 0xE8) != 0 )
    {
      if ( !pbo )
        return 0;
      v20 = pptlBrush;
      if ( pbo->iSolidColor == -1 && !pptlBrush )
        return 0;
    }
    else
    {
      v20 = pptlBrush;
    }
    v34 = v33 & 0xD4;
    if ( v34 )
    {
      if ( !psoSrc )
        return 0;
      v21 = pptlSrc;
      if ( !pptlSrc )
        return 0;
    }
    else
    {
      v21 = pptlSrc;
    }
    if ( (unsigned int)(*((_DWORD *)v14 + 24) - 9) <= 1 || v34 && (unsigned int)(*((_DWORD *)p_pvScan0 + 24) - 9) <= 1 )
      return 1;
  }
  else
  {
    v20 = pptlBrush;
    v21 = pptlSrc;
    v22 = pbo;
  }
  if ( !psoTrg->iType )
  {
    v23 = v14[6];
    if ( v23 )
    {
      _m_prefetchw(v23 + 10);
      do
        v24 = v23[10];
      while ( v24 != _InterlockedCompareExchange(v23 + 10, v24 | 0x40000, v24) );
    }
    v53 = v14[6];
    PDEVOBJ::vSync((PDEVOBJ *)&v53, psoTrg, 0LL, 0);
    ++*((_DWORD *)v14 + 23);
    if ( rop4 == 61680 )
    {
LABEL_14:
      v25 = pbo;
      iSolidColor = pbo->iSolidColor;
      if ( pbo->iSolidColor != -1 )
      {
        if ( (rop4 & 1) != 0 )
          iSolidColor = ~iSolidColor;
        goto LABEL_17;
      }
      if ( *((_DWORD *)v14 + 24) == 3
        && rop4 == 61680
        && pvGetEngRbrush(pbo)
        && *(_QWORD *)((char *)pbo[1].pvRbrush + 20) == 0x800000008LL )
      {
        vDIBPatBltSrccopy8x8(
          (struct SURFACE *)v14,
          pco,
          prclTrg,
          pbo,
          pptlBrush,
          (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect8_8x8);
        return 1;
      }
      v31 = *((_DWORD *)v14 + 24);
      if ( v31 < 3 )
      {
        if ( v31 == 2 )
        {
          if ( rop4 == 61680 && pvGetEngRbrush(pbo) && *(_QWORD *)((char *)pbo[1].pvRbrush + 20) == 0x800000008LL )
          {
            vDIBPatBltSrccopy8x8(
              (struct SURFACE *)v14,
              pco,
              prclTrg,
              pbo,
              pptlBrush,
              (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect4_8x8);
            return 1;
          }
        }
        else if ( v31 == 1 && rop4 == 61680 && pvGetEngRbrush(pbo) )
        {
          pvRbrush = (char *)pbo[1].pvRbrush;
          if ( *(_QWORD *)(pvRbrush + 20) == 0x800000008LL )
          {
            vDIBPatBltSrccopy8x8(
              (struct SURFACE *)v14,
              pco,
              prclTrg,
              pbo,
              pptlBrush,
              (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect1_8x8);
            return 1;
          }
          if ( *((_DWORD *)pvRbrush + 5) == 6 && *((_DWORD *)pvRbrush + 6) == 6 )
          {
            vDIBnPatBltSrccopy6x6((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, v48);
            return 1;
          }
        }
      }
      else if ( pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
      {
        v49 = rop4 != 61680;
LABEL_46:
        vDIBPatBlt((struct SURFACE *)v14, pco, prclTrg, v25, pptlBrush, v49);
        return 1;
      }
      goto LABEL_30;
    }
    if ( rop4 <= 0x5A5A )
    {
      if ( rop4 == 23130 )
      {
        v25 = pbo;
        if ( pbo->iSolidColor != -1 )
        {
          vDIBSolidBlt((struct SURFACE *)v14, prclTrg, pco, pbo->iSolidColor, 1);
          return 1;
        }
        if ( *((_DWORD *)v14 + 24) >= 3u && pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
        {
          v49 = 2;
          goto LABEL_46;
        }
        goto LABEL_30;
      }
      if ( rop4 )
      {
        if ( rop4 == 3855 )
          goto LABEL_14;
        if ( rop4 == 21845 )
        {
          vDIBSolidBlt((struct SURFACE *)v14, prclTrg, pco, 0xFFFFFFFF, 1);
          return 1;
        }
LABEL_30:
        if ( psoSrc )
        {
          v53 = p_pvScan0[6];
          PDEVOBJ::vSync((PDEVOBJ *)&v53, psoSrc, 0LL, 0);
        }
        v50 = 0LL;
        v28 = (struct SURFACE *)p_pvScan0;
        v51 = 0;
        v52 = 0;
        if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) != 0 && *((_WORD *)p_pvScan0 + 50) )
        {
          v41 = prclTrg->right - prclTrg->left;
          v42 = prclTrg->bottom - prclTrg->top;
          v43 = p_pvScan0[6];
          v58[0] = *((_DWORD *)v14 + 24);
          v44 = (_DWORD)p_pvScan0[14] & 0x40000;
          v64 = v41;
          v65 = v42;
          v58[1] = v41;
          v58[2] = v42;
          v60 = v44;
          v63 = 0LL;
          v58[3] = 0;
          v61 = 0;
          v59 = 0LL;
          if ( !SURFMEM::bCreateDIB((SURFMEM *)&v50, (struct _DEVBITMAPINFO *)v58, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
            || (v45 = (void (__fastcall *)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *))v43[352]) == 0LL )
          {
            SURFMEM::~SURFMEM((SURFMEM *)&v50);
            return 0;
          }
          v46 = (char *)v50 + 24;
          if ( !v50 )
            v46 = 0LL;
          v45(v46, psoSrc, 0LL, pxlo, &v63, pptlSrc);
          v56 = 0LL;
          v30 = (POINTL *)&v56;
          v28 = v50;
          v29 = (XLATEOBJ *)((char *)Gre::Base::Globals(v47) + 6896);
        }
        else
        {
          v29 = pxlo;
          v30 = pptlSrc;
        }
        if ( *((_DWORD *)v14 + 24) <= 6u || !(unsigned int)bUMPDSecurityGateEx() )
          BltLnk(
            (struct SURFACE *)v14,
            v28,
            v57,
            (struct ECLIPOBJ *)pco,
            (struct XLATE *)v29,
            prclTrg,
            v30,
            v54,
            pbo,
            pptlBrush,
            rop4);
        SURFMEM::~SURFMEM((SURFMEM *)&v50);
        return 1;
      }
    }
    else
    {
      if ( rop4 == 52394 )
      {
        if ( !v55 )
        {
          if ( !pbo->pvRbrush )
          {
            iTransColor = pbo->iSolidColor;
            x = pptlSrc->x;
            prclSrc.right = pptlSrc->x + prclTrg->right - prclTrg->left;
            v38 = prclTrg->bottom - prclTrg->top;
            prclSrc.left = x;
            y = pptlSrc->y;
            prclSrc.bottom = y + v38;
            prclSrc.top = y;
            return EngTransparentBlt(psoTrg, psoSrc, pco, pxlo, prclTrg, &prclSrc, iTransColor, 1u);
          }
          return 1;
        }
        goto LABEL_30;
      }
      if ( rop4 == 52428 )
      {
        if ( !*((_WORD *)p_pvScan0 + 50) )
          return EngCopyBits(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
        v35 = (__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)p_pvScan0[6] + 352);
        if ( v35 )
          return v35(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
        return 0;
      }
      if ( rop4 != 0xFFFF )
        goto LABEL_30;
    }
    iSolidColor = -(rop4 != 0);
LABEL_17:
    vDIBSolidBlt((struct SURFACE *)v14, prclTrg, pco, iSolidColor, 0);
    return 1;
  }
  return SimBitBlt(psoTrg, psoSrc, pxlo, prclTrg, v21, v54, (__int64)v22, v20, rop4, 0LL);
}
