/*
 * XREFs of ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0134298
 * Callers:
 *     GrePolyPolylineInternal @ 0x1C0136510 (GrePolyPolylineInternal.c)
 *     NtGdiFillPath @ 0x1C0136730 (NtGdiFillPath.c)
 *     GrePolylineTo @ 0x1C0136880 (GrePolylineTo.c)
 *     GreRectangle @ 0x1C0136C70 (GreRectangle.c)
 *     GrePolyBezierTo @ 0x1C0137490 (GrePolyBezierTo.c)
 *     GrePolyPolygonInternal @ 0x1C0137A70 (GrePolyPolygonInternal.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0137FE4 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C029E444 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C029E684 (GreAngleArc.c)
 *     GrePolyDraw @ 0x1C029EE18 (GrePolyDraw.c)
 *     NtGdiEllipse @ 0x1C029F2E0 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C029F530 (NtGdiRoundRect.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02AC2B0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02AC450 (NtGdiStrokePath.c)
 *     NtGdiArcInternal @ 0x1C02AFE50 (NtGdiArcInternal.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C002C7C4 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0131254 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0133FC4 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C0134A78 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0134AA8 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C0143480 (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0282DD0 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 */

__int64 __fastcall EPATHOBJ::bStrokeAndOrFill(
        PATHOBJ *ppo,
        POINTL **this,
        LINEATTRS *a3,
        struct _XFORMOBJ *a4,
        unsigned int a5)
{
  LINEATTRS *v6; // r14
  unsigned int v10; // esi
  unsigned int v11; // r9d
  unsigned int v12; // r12d
  int *v13; // rcx
  int v14; // ebx
  int v15; // edi
  int v16; // eax
  unsigned int v17; // eax
  POINTL *v18; // r8
  __int64 v19; // rdx
  struct REGION *v20; // rax
  POINTL *v21; // r9
  BRUSHOBJ *v22; // r10
  struct SURFACE *v23; // r8
  POINTL v24; // rax
  POINTL v25; // rdi
  __int64 v26; // rbx
  ULONG iSolidColor; // edx
  POINTL *v28; // rdx
  POINTL *v29; // rcx
  POINTL v30; // r11
  int v31; // r9d
  POINTL *v32; // r9
  POINTL *v33; // rdx
  POINTL v34; // rcx
  BRUSHOBJ *v35; // r11
  int v36; // eax
  POINTL v37; // r10
  int v38; // ecx
  unsigned int v39; // eax
  POINTL v40; // rdx
  POINTL *v41; // r10
  int v42; // ecx
  POINTL v43; // r9
  EBRUSHOBJ *v44; // rdi
  MIX v45; // ebx
  POINTL *v46; // r10
  BOOL v47; // eax
  struct ECLIPOBJ *v48; // rdx
  int v49; // r10d
  BRUSHOBJ *v50; // rdi
  BRUSHOBJ *pbo; // r9
  unsigned int v52; // r12d
  unsigned int v53; // r12d
  bool v54; // zf
  XFORMOBJ *v55; // r12
  struct SURFACE *v56; // rdi
  int v57; // eax
  BRUSHOBJ *v58; // [rsp+30h] [rbp-D0h]
  BRUSHOBJ *v59; // [rsp+30h] [rbp-D0h]
  MIX v60; // [rsp+60h] [rbp-A0h]
  MIX v61; // [rsp+60h] [rbp-A0h]
  BRUSHOBJ *v62; // [rsp+68h] [rbp-98h]
  struct SURFACE *v63; // [rsp+70h] [rbp-90h]
  int v64; // [rsp+7Ch] [rbp-84h]
  FLOAT_LONG v65; // [rsp+80h] [rbp-80h]
  POINTL v67; // [rsp+90h] [rbp-70h] BYREF
  BRUSHOBJ *v68; // [rsp+98h] [rbp-68h] BYREF
  int v69; // [rsp+A0h] [rbp-60h]
  int v70; // [rsp+A4h] [rbp-5Ch]
  unsigned int v71; // [rsp+A8h] [rbp-58h]
  BRUSHOBJ *v72[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v73[32]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v74[2]; // [rsp+E0h] [rbp-20h] BYREF
  char v75[64]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v76[4]; // [rsp+130h] [rbp+30h] BYREF
  CLIPOBJ pco; // [rsp+140h] [rbp+40h] BYREF
  __int64 v78; // [rsp+190h] [rbp+90h]
  int v79; // [rsp+198h] [rbp+98h]
  int v80; // [rsp+1C0h] [rbp+C0h]
  __int64 v81; // [rsp+1D0h] [rbp+D0h]

  v6 = a3;
  v71 = 0;
  v64 = 0;
  v65.l = 0;
  v60 = 0;
  if ( !ppo->cCurves )
    return 1LL;
  v10 = 1;
  v11 = a5 & 0xFFFFFFFE;
  if ( (struct PEN *)(*this)[18] != gpPenNull )
    v11 = a5;
  v12 = v11 & 0xFFFFFFFD;
  if ( (struct BRUSH *)(*this)[17] != gpbrNull )
    v12 = v11;
  if ( (v12 & 1) != 0 && (a3->fl & 1) != 0 )
  {
    if ( !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)ppo, (struct EPATHOBJ *)ppo, a4, a3) )
    {
      EngSetLastError(0x216u);
      return 0LL;
    }
    if ( v6->pstyle )
      v6->elStyleState.l = 0;
  }
  v13 = (int *)ppo[1];
  v14 = v13[12] >> 4;
  v15 = v13[13] >> 4;
  v16 = ((v13[15] + 15) >> 4) + 1;
  v68 = (BRUSHOBJ *)__PAIR64__(v15, v14);
  v70 = v16;
  v69 = ((v13[14] + 15) >> 4) + 1;
  if ( ((*this)[4].y & 0xE0) != 0 )
    XDCOBJ::vAccumulate((XDCOBJ *)this, (struct ERECTL *)&v68);
  if ( !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)this) )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v74);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v73, (struct XDCOBJ *)this, 0);
    if ( (v73[24] & 1) == 0 )
    {
      v17 = XDCOBJ::bFullScreen((XDCOBJ *)this);
LABEL_20:
      v10 = v17;
LABEL_82:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v73);
      if ( v74[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v74);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v75);
      return v10;
    }
    if ( !(unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)&(*this)[62]) )
    {
      EngSetLastError(5u);
      v17 = 0;
      goto LABEL_20;
    }
    v18 = *this;
    v19 = (*this)[5].x & 1LL;
    v76[0] = v14 + (*this)[v19 + 127].x;
    v76[2] = v18[v19 + 127].x + v69;
    v76[1] = v15 + v18[v19 + 127].y;
    v76[3] = v18[v19 + 127].y + v70;
    EPATHOBJ::vOffset((EPATHOBJ *)ppo, (struct EPOINTL *)&v18[(v18[5].x & 1LL) + 127]);
    v20 = XDCOBJ::prgnEffRao((DC **)this);
    v78 = 0LL;
    v79 = 0;
    v81 = 0LL;
    v80 = 1;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v20, (struct ERECTL *)v76, 0);
    v21 = *this;
    if ( (*this)[4].x == 2 || ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
    {
      if ( (v12 & 1) != 0 && (v6->pstyle && (v6->fl & 1) == 0 || (v6->fl & 2) != 0) )
        EPATHOBJ::vUpdateCosmeticStyleState((EPATHOBJ *)ppo, *(struct SURFACE **)&v21[62], v6);
      goto LABEL_82;
    }
    v22 = (BRUSHOBJ *)&v21[167];
    v23 = (struct SURFACE *)v21[62];
    v24 = v21[6];
    v67 = v24;
    v25 = v21[11];
    v26 = *((_QWORD *)v23 + 16);
    v63 = v23;
    v68 = (BRUSHOBJ *)&v21[167];
    v62 = (BRUSHOBJ *)&v21[150];
    v72[0] = (BRUSHOBJ *)&v21[167];
    if ( (v12 & 1) == 0 )
    {
LABEL_45:
      if ( (v12 & 2) != 0 )
      {
        v40 = v21[122];
        v41 = v21;
        v42 = *(_DWORD *)(*(_QWORD *)&v40 + 152LL);
        if ( (((unsigned __int8)v42 | LOBYTE(v21[39].y)) & 1) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)&v40 + 152LL) = v42 & 0xFFFFFFFE;
          (*this)[39].y &= ~1u;
          v43 = v25;
          v44 = (EBRUSHOBJ *)v62;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
            v62,
            *this,
            *(_QWORD *)&(*this)[17],
            v43,
            v26,
            v23,
            1);
          v41 = *this;
        }
        else
        {
          v44 = (EBRUSHOBJ *)v62;
        }
        if ( (v12 & 1) == 0 || (v45 = v60, v21 = v41, v60 >> 8 == (unsigned __int8)v60) )
        {
          v45 = EBRUSHOBJ::mixBest(
                  v44,
                  *(_BYTE *)(*(_QWORD *)&v41[122] + 212LL),
                  *(_BYTE *)(*(_QWORD *)&v41[122] + 213LL));
          v21 = v46;
        }
      }
      else
      {
        v45 = v60;
      }
      if ( (v21[4].y & 0xE0) != 0 )
      {
        v47 = ERECTL::bEmpty((ERECTL *)&pco.rclBounds);
        v50 = v72[0];
        if ( !v47 )
        {
          if ( !(_DWORD)v48 || _bittest((const signed __int32 *)&v72[0][5], 8u) )
          {
            pbo = v62;
            if ( !v49 || _bittest((const signed __int32 *)&v62[5], 8u) )
            {
LABEL_62:
              *(_QWORD *)(*(_QWORD *)&ppo[1] + 72LL) = 0LL;
              if ( v12
                || *(_DWORD *)(*(_QWORD *)&v67 + 2108LL) != 1
                && (v12 = a5, v6 = (LINEATTRS *)&glaSimpleStroke, v45 = 2827, a5) )
              {
                v52 = v12 - 1;
                if ( !v52 )
                {
                  v55 = a4;
                  v59 = v50;
                  v56 = v63;
                  v57 = EPATHOBJ::bSimpleStroke(
                          ppo,
                          (*this)[9].x,
                          (struct PDEVOBJ *)&v67,
                          v63,
                          &pco,
                          a4,
                          v59,
                          *this + 149,
                          v6,
                          v45);
                  goto LABEL_71;
                }
                v53 = v52 - 1;
                if ( !v53 )
                {
                  v56 = v63;
                  v55 = a4;
                  v10 = EPATHOBJ::bSimpleFill(
                          ppo,
                          (*this)[9].x,
                          (struct PDEVOBJ *)&v67,
                          v63,
                          &pco,
                          pbo,
                          *this + 149,
                          v45,
                          *(unsigned __int8 *)(*(_QWORD *)&(*this)[122] + 214LL));
                  goto LABEL_75;
                }
                v54 = v53 == 1;
                v55 = a4;
                if ( v54 )
                {
                  v58 = v50;
                  v56 = v63;
                  v57 = EPATHOBJ::bSimpleStrokeAndFill(
                          ppo,
                          (*this)[9].x,
                          (struct PDEVOBJ *)&v67,
                          v63,
                          &pco,
                          a4,
                          v58,
                          v6,
                          pbo,
                          *this + 149,
                          v45,
                          *(unsigned __int8 *)(*(_QWORD *)&(*this)[122] + 214LL));
LABEL_71:
                  v10 = v57;
                  goto LABEL_75;
                }
                v10 = v71;
              }
              else
              {
                v55 = a4;
              }
              v56 = v63;
LABEL_75:
              if ( v64 )
              {
                v6->fl ^= 4u;
                v6->elStyleState = v65;
                *(_QWORD *)(*(_QWORD *)&ppo[1] + 72LL) = 0LL;
                v10 &= EPATHOBJ::bSimpleStroke(
                         ppo,
                         (*this)[9].x,
                         (struct PDEVOBJ *)&v67,
                         v56,
                         &pco,
                         v55,
                         v68,
                         *this + 149,
                         v6,
                         v45);
              }
              goto LABEL_82;
            }
          }
          *(RECTL *)v72 = pco.rclBounds;
          XDCOBJ::vAccumulateTight((XDCOBJ *)this, v48, (__m128i *)v72);
        }
      }
      else
      {
        v50 = v72[0];
      }
      pbo = v62;
      goto LABEL_62;
    }
    iSolidColor = v22->iSolidColor;
    if ( (v6->fl & 1) != 0 )
    {
      v61 = 1;
      if ( iSolidColor == -1 || (v21[182].x & 0x10000) == 0 && (*(_DWORD *)(*(_QWORD *)&v24 + 1792LL) & 0x800000) == 0 )
        goto LABEL_31;
    }
    else
    {
      v61 = 0;
      if ( iSolidColor != -1 )
      {
LABEL_31:
        v28 = *this;
        v29 = *this;
        v30 = (*this)[122];
        v31 = *(_DWORD *)(*(_QWORD *)&v30 + 152LL);
        if ( (((unsigned __int8)v31 | LOBYTE((*this)[39].y)) & 2) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)&v30 + 152LL) = v31 & 0xFFFFFFFD;
          (*this)[39].y &= ~2u;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
            v22,
            *this,
            *(_QWORD *)&(*this)[18],
            v25,
            v26,
            v23,
            v61);
          v28 = *this;
          v23 = v63;
          v29 = *this;
          v22 = v68;
        }
        v32 = v29;
        if ( v6->pstyle
          && (v22[5].iSolidColor & 0x800) != 0
          && *(_BYTE *)(*(_QWORD *)&v28[122] + 213LL) == 2
          && (v6->fl & 1) == 0 )
        {
          v64 = 1;
          v6->fl ^= 4u;
          v32 = *this;
          v33 = *this;
          LODWORD(v65.e) = v6->elStyleState;
          v34 = (*this)[122];
          v35 = (BRUSHOBJ *)&(*this)[201];
          v72[0] = v35;
          v36 = *(_DWORD *)(*(_QWORD *)&v34 + 152LL);
          if ( (v36 & 8) == 0 && v35->iSolidColor == -1 )
          {
            *(_DWORD *)(*(_QWORD *)&v34 + 152LL) = v36 | 8;
            v32 = *this;
            v33 = *this;
          }
          v37 = v33[122];
          v38 = *(_DWORD *)(*(_QWORD *)&v37 + 152LL);
          if ( (((unsigned __int8)v38 | LOBYTE(v33[39].y)) & 8) != 0 )
          {
            if ( (v33[9].x & 0x8000) == 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v37 + 152LL) = v38 & 0xFFFFFFF7;
              (*this)[39].y &= ~8u;
              v33 = *this;
            }
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
              v35,
              v33,
              gpbrBackground,
              v25,
              v26,
              v23,
              0);
            v32 = *this;
          }
        }
        v39 = EBRUSHOBJ::mixBest(
                (EBRUSHOBJ *)v68,
                *(_BYTE *)(*(_QWORD *)&v32[122] + 212LL),
                *(_BYTE *)(*(_QWORD *)&v32[122] + 213LL));
        v23 = v63;
        v60 = v39;
        goto LABEL_45;
      }
    }
    *(_DWORD *)(*(_QWORD *)&v21[122] + 152LL) |= 2u;
    goto LABEL_31;
  }
  return v10;
}
