/*
 * XREFs of ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C01468E4
 * Callers:
 *     NtGdiRoundRect @ 0x1C0142270 (NtGdiRoundRect.c)
 *     GrePolyPolylineInternal @ 0x1C0142620 (GrePolyPolylineInternal.c)
 *     NtGdiFillPath @ 0x1C01435D0 (NtGdiFillPath.c)
 *     GrePolylineTo @ 0x1C0143720 (GrePolylineTo.c)
 *     GreRectangle @ 0x1C0143B30 (GreRectangle.c)
 *     GrePolyBezierTo @ 0x1C0144380 (GrePolyBezierTo.c)
 *     GrePolyPolygonInternal @ 0x1C0144990 (GrePolyPolygonInternal.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0144F14 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C029F4DC (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C029F740 (GreAngleArc.c)
 *     GrePolyDraw @ 0x1C029FF08 (GrePolyDraw.c)
 *     NtGdiEllipse @ 0x1C02A03D0 (NtGdiEllipse.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02AD510 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02AD6B0 (NtGdiStrokePath.c)
 *     NtGdiArcInternal @ 0x1C02B0BC0 (NtGdiArcInternal.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACA04 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B2D5C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00B493C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B496C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B5E80 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0140D50 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0145D8C (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C01470E0 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0147110 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C014B958 (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C015D7CC (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
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
  int v14; // edi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // eax
  POINTL *v20; // r8
  __int64 v21; // rdx
  struct REGION *v22; // rax
  POINTL *v23; // r9
  BRUSHOBJ *v24; // r10
  struct SURFACE *v25; // r8
  POINTL v26; // rax
  POINTL v27; // rdi
  __int64 v28; // rbx
  ULONG iSolidColor; // edx
  POINTL *v30; // rdx
  POINTL *v31; // rcx
  POINTL v32; // r11
  int v33; // r9d
  POINTL *v34; // r9
  POINTL *v35; // rdx
  POINTL v36; // rcx
  BRUSHOBJ *v37; // r11
  int v38; // eax
  POINTL v39; // r10
  int v40; // ecx
  unsigned int v41; // eax
  POINTL v42; // rdx
  POINTL *v43; // r10
  int v44; // ecx
  POINTL v45; // r9
  EBRUSHOBJ *v46; // rdi
  MIX v47; // ebx
  POINTL *v48; // r10
  BOOL v49; // eax
  struct ECLIPOBJ *v50; // rdx
  int v51; // r10d
  BRUSHOBJ *v52; // rdi
  BRUSHOBJ *pbo; // r9
  unsigned int v54; // r12d
  unsigned int v55; // r12d
  bool v56; // zf
  XFORMOBJ *v57; // r12
  struct SURFACE *v58; // rdi
  int v59; // eax
  BRUSHOBJ *v60; // [rsp+30h] [rbp-D0h]
  BRUSHOBJ *v61; // [rsp+30h] [rbp-D0h]
  MIX v62; // [rsp+60h] [rbp-A0h]
  MIX v63; // [rsp+60h] [rbp-A0h]
  int v64; // [rsp+68h] [rbp-98h]
  BRUSHOBJ *v65; // [rsp+70h] [rbp-90h]
  struct SURFACE *v66; // [rsp+78h] [rbp-88h]
  int v67; // [rsp+80h] [rbp-80h]
  FLOAT_LONG v68; // [rsp+84h] [rbp-7Ch]
  POINTL v70; // [rsp+90h] [rbp-70h] BYREF
  BRUSHOBJ *v71; // [rsp+98h] [rbp-68h] BYREF
  int v72; // [rsp+A0h] [rbp-60h]
  int v73; // [rsp+A4h] [rbp-5Ch]
  unsigned int v74; // [rsp+A8h] [rbp-58h]
  BRUSHOBJ *v75[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v76[32]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v77[2]; // [rsp+E0h] [rbp-20h] BYREF
  char v78[64]; // [rsp+F0h] [rbp-10h] BYREF
  int v79; // [rsp+130h] [rbp+30h] BYREF
  int v80; // [rsp+134h] [rbp+34h]
  int v81; // [rsp+138h] [rbp+38h]
  int v82; // [rsp+13Ch] [rbp+3Ch]
  CLIPOBJ pco; // [rsp+140h] [rbp+40h] BYREF
  __int64 v84; // [rsp+178h] [rbp+78h]
  __int64 v85; // [rsp+190h] [rbp+90h]
  int v86; // [rsp+198h] [rbp+98h]
  int v87; // [rsp+1C0h] [rbp+C0h]
  __int64 v88; // [rsp+1D0h] [rbp+D0h]

  v6 = a3;
  v74 = 0;
  v67 = 0;
  v68.l = 0;
  v62 = 0;
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
  v64 = v13[13] >> 4;
  v14 = v13[12] >> 4;
  v15 = ((v13[15] + 15) >> 4) + 1;
  v71 = (BRUSHOBJ *)__PAIR64__(v64, v14);
  v73 = v15;
  v72 = ((v13[14] + 15) >> 4) + 1;
  if ( ((*this)[4].y & 0xE0) != 0 )
    XDCOBJ::vAccumulate((XDCOBJ *)this, (struct ERECTL *)&v71);
  if ( !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)this) )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v77);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v76, (struct XDCOBJ *)this, 0);
    if ( (v76[24] & 1) == 0 )
    {
      v19 = XDCOBJ::bFullScreen((XDCOBJ *)this);
LABEL_20:
      v10 = v19;
LABEL_83:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v76);
      if ( v77[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v77);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v78);
      return v10;
    }
    if ( !(unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)&(*this)[62], v16, v17, v18) )
    {
      EngSetLastError(5u);
      v19 = 0;
      goto LABEL_20;
    }
    v20 = *this;
    v79 = v14;
    v80 = v64;
    v81 = v72;
    v82 = v73;
    v21 = v20[5].x & 1LL;
    v79 = v14 + v20[v21 + 127].x;
    v81 = v72 + v20[v21 + 127].x;
    v80 = v64 + v20[v21 + 127].y;
    v82 = v73 + v20[v21 + 127].y;
    EPATHOBJ::vOffset((EPATHOBJ *)ppo, (struct EPOINTL *)&v20[(v20[5].x & 1LL) + 127]);
    v22 = XDCOBJ::prgnEffRao((DC **)this);
    v84 = 0LL;
    v85 = 0LL;
    v86 = 0;
    v88 = 0LL;
    v87 = 1;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v22, (struct ERECTL *)&v79, 0);
    v23 = *this;
    if ( (*this)[4].x == 2 || ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
    {
      if ( (v12 & 1) != 0 && (v6->pstyle && (v6->fl & 1) == 0 || (v6->fl & 2) != 0) )
        EPATHOBJ::vUpdateCosmeticStyleState((EPATHOBJ *)ppo, *(struct SURFACE **)&v23[62], v6);
      goto LABEL_83;
    }
    v24 = (BRUSHOBJ *)&v23[168];
    v25 = (struct SURFACE *)v23[62];
    v26 = v23[6];
    v70 = v26;
    v27 = v23[11];
    v28 = *((_QWORD *)v25 + 16);
    v66 = v25;
    v71 = (BRUSHOBJ *)&v23[168];
    v65 = (BRUSHOBJ *)&v23[151];
    v75[0] = (BRUSHOBJ *)&v23[168];
    if ( (v12 & 1) == 0 )
    {
LABEL_45:
      if ( (v12 & 2) != 0 )
      {
        v42 = v23[122];
        v43 = v23;
        v44 = *(_DWORD *)(*(_QWORD *)&v42 + 152LL);
        if ( (((unsigned __int8)v44 | LOBYTE(v23[39].y)) & 1) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)&v42 + 152LL) = v44 & 0xFFFFFFFE;
          (*this)[39].y &= ~1u;
          v45 = v27;
          v46 = (EBRUSHOBJ *)v65;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
            v65,
            *this,
            *(_QWORD *)&(*this)[17],
            v45,
            v28,
            v25,
            1);
          v43 = *this;
        }
        else
        {
          v46 = (EBRUSHOBJ *)v65;
        }
        if ( (v12 & 1) == 0 || (v47 = v62, v23 = v43, v62 >> 8 == (unsigned __int8)v62) )
        {
          v47 = EBRUSHOBJ::mixBest(
                  v46,
                  *(_BYTE *)(*(_QWORD *)&v43[122] + 212LL),
                  *(_BYTE *)(*(_QWORD *)&v43[122] + 213LL));
          v23 = v48;
        }
      }
      else
      {
        v47 = v62;
      }
      if ( (v23[4].y & 0xE0) != 0 )
      {
        v49 = ERECTL::bEmpty((ERECTL *)&pco.rclBounds);
        v52 = v75[0];
        if ( !v49 )
        {
          if ( !(_DWORD)v50 || (v75[0][5].iSolidColor & 0x100) != 0 )
          {
            pbo = v65;
            if ( !v51 || (v65[5].iSolidColor & 0x100) != 0 )
              goto LABEL_62;
          }
          *(RECTL *)v75 = pco.rclBounds;
          XDCOBJ::vAccumulateTight((XDCOBJ *)this, v50, (__m128i *)v75);
        }
      }
      else
      {
        v52 = v75[0];
      }
      pbo = v65;
LABEL_62:
      *(_QWORD *)(*(_QWORD *)&ppo[1] + 72LL) = 0LL;
      if ( v12 )
        goto LABEL_66;
      if ( *(_DWORD *)(*(_QWORD *)&v70 + 2140LL) != 1 )
      {
        v12 = a5;
        v6 = (LINEATTRS *)&glaSimpleStroke;
        v47 = 2827;
      }
      if ( v12 )
      {
LABEL_66:
        v54 = v12 - 1;
        if ( !v54 )
        {
          v57 = a4;
          v61 = v52;
          v58 = v66;
          v59 = EPATHOBJ::bSimpleStroke(
                  ppo,
                  (*this)[9].x,
                  (struct PDEVOBJ *)&v70,
                  v66,
                  &pco,
                  a4,
                  v61,
                  *this + 150,
                  v6,
                  v47);
          goto LABEL_72;
        }
        v55 = v54 - 1;
        if ( !v55 )
        {
          v58 = v66;
          v57 = a4;
          v10 = EPATHOBJ::bSimpleFill(
                  ppo,
                  (*this)[9].x,
                  (struct PDEVOBJ *)&v70,
                  v66,
                  &pco,
                  pbo,
                  *this + 150,
                  v47,
                  *(unsigned __int8 *)(*(_QWORD *)&(*this)[122] + 214LL));
          goto LABEL_76;
        }
        v56 = v55 == 1;
        v57 = a4;
        if ( v56 )
        {
          v60 = v52;
          v58 = v66;
          v59 = EPATHOBJ::bSimpleStrokeAndFill(
                  ppo,
                  (*this)[9].x,
                  (struct PDEVOBJ *)&v70,
                  v66,
                  &pco,
                  a4,
                  v60,
                  v6,
                  pbo,
                  *this + 150,
                  v47,
                  *(unsigned __int8 *)(*(_QWORD *)&(*this)[122] + 214LL));
LABEL_72:
          v10 = v59;
          goto LABEL_76;
        }
        v10 = v74;
      }
      else
      {
        v57 = a4;
      }
      v58 = v66;
LABEL_76:
      if ( v67 )
      {
        v6->fl ^= 4u;
        v6->elStyleState = v68;
        *(_QWORD *)(*(_QWORD *)&ppo[1] + 72LL) = 0LL;
        v10 &= EPATHOBJ::bSimpleStroke(
                 ppo,
                 (*this)[9].x,
                 (struct PDEVOBJ *)&v70,
                 v58,
                 &pco,
                 v57,
                 v71,
                 *this + 150,
                 v6,
                 v47);
      }
      goto LABEL_83;
    }
    iSolidColor = v24->iSolidColor;
    if ( (v6->fl & 1) != 0 )
    {
      v63 = 1;
      if ( iSolidColor == -1 || (v23[183].x & 0x10000) == 0 && (*(_DWORD *)(*(_QWORD *)&v26 + 1824LL) & 0x800000) == 0 )
        goto LABEL_31;
    }
    else
    {
      v63 = 0;
      if ( iSolidColor != -1 )
      {
LABEL_31:
        v30 = *this;
        v31 = *this;
        v32 = (*this)[122];
        v33 = *(_DWORD *)(*(_QWORD *)&v32 + 152LL);
        if ( (((unsigned __int8)v33 | LOBYTE((*this)[39].y)) & 2) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)&v32 + 152LL) = v33 & 0xFFFFFFFD;
          (*this)[39].y &= ~2u;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
            v24,
            *this,
            *(_QWORD *)&(*this)[18],
            v27,
            v28,
            v25,
            v63);
          v30 = *this;
          v25 = v66;
          v31 = *this;
          v24 = v71;
        }
        v34 = v31;
        if ( v6->pstyle
          && (v24[5].iSolidColor & 0x800) != 0
          && *(_BYTE *)(*(_QWORD *)&v30[122] + 213LL) == 2
          && (v6->fl & 1) == 0 )
        {
          v67 = 1;
          v6->fl ^= 4u;
          v34 = *this;
          v35 = *this;
          LODWORD(v68.e) = v6->elStyleState;
          v36 = (*this)[122];
          v37 = (BRUSHOBJ *)&(*this)[202];
          v75[0] = v37;
          v38 = *(_DWORD *)(*(_QWORD *)&v36 + 152LL);
          if ( (v38 & 8) == 0 && v37->iSolidColor == -1 )
          {
            *(_DWORD *)(*(_QWORD *)&v36 + 152LL) = v38 | 8;
            v34 = *this;
            v35 = *this;
          }
          v39 = v35[122];
          v40 = *(_DWORD *)(*(_QWORD *)&v39 + 152LL);
          if ( (((unsigned __int8)v40 | LOBYTE(v35[39].y)) & 8) != 0 )
          {
            if ( (v35[9].x & 0x8000) == 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v39 + 152LL) = v40 & 0xFFFFFFF7;
              (*this)[39].y &= ~8u;
              v35 = *this;
            }
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
              v37,
              v35,
              gpbrBackground,
              v27,
              v28,
              v25,
              0);
            v34 = *this;
          }
        }
        v41 = EBRUSHOBJ::mixBest(
                (EBRUSHOBJ *)v71,
                *(_BYTE *)(*(_QWORD *)&v34[122] + 212LL),
                *(_BYTE *)(*(_QWORD *)&v34[122] + 213LL));
        v25 = v66;
        v62 = v41;
        goto LABEL_45;
      }
    }
    *(_DWORD *)(*(_QWORD *)&v23[122] + 152LL) |= 2u;
    goto LABEL_31;
  }
  return v10;
}
