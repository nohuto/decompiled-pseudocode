/*
 * XREFs of ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0285B9C
 * Callers:
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C02AA938 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C02AB188 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x1C02AB378 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 *     GreAngleArc @ 0x1C02AB948 (GreAngleArc.c)
 *     GrePolyBezierTo @ 0x1C02AC0F0 (GrePolyBezierTo.c)
 *     GrePolyPolygonInternal @ 0x1C02AC44C (GrePolyPolygonInternal.c)
 *     GrePolyPolylineInternal @ 0x1C02AC73C (GrePolyPolylineInternal.c)
 *     GrePolylineTo @ 0x1C02AC970 (GrePolylineTo.c)
 *     GreRectangle @ 0x1C02ACBA0 (GreRectangle.c)
 *     NtGdiEllipse @ 0x1C02AD420 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C02AD7B0 (NtGdiRoundRect.c)
 *     NtGdiFillPath @ 0x1C02C0DE0 (NtGdiFillPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02C1640 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02C1810 (NtGdiStrokePath.c)
 *     NtGdiArcInternal @ 0x1C02C6710 (NtGdiArcInternal.c)
 * Callees:
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001D35C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001E590 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C001E5CC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00DA0C8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00E0C40 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C124 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C015A776 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0266478 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0284F50 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEBU_LINEATTRS@@K@Z @ 0x1C02852AC (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEBU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02856AC (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C02F1580 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEBU_LINEATTRS@@@Z @ 0x1C02F44B0 (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEBU_LINEATTRS@@@Z.c)
 */

__int64 __fastcall EPATHOBJ::bStrokeAndOrFill(
        PATHOBJ *ppo,
        POINTL **this,
        LINEATTRS *a3,
        struct _XFORMOBJ *a4,
        unsigned int a5)
{
  MIX v6; // r12d
  struct Gre::Base::SESSION_GLOBALS *v10; // rax
  unsigned int v11; // r8d
  unsigned int v12; // r15d
  int *v14; // rcx
  int v15; // ebx
  int v16; // edi
  int v17; // eax
  unsigned int v18; // ebx
  POINTL *v19; // rbx
  struct REGION *v20; // rax
  POINTL *v21; // r9
  __int64 v22; // r8
  POINTL v23; // rdx
  POINTL v24; // rdi
  CLIPOBJ *v25; // rbx
  LONG x; // ecx
  int v27; // r10d
  POINTL *v28; // rcx
  POINTL v29; // r9
  FLONG fl; // eax
  POINTL v31; // rcx
  BRUSHOBJ *v32; // r11
  int v33; // eax
  POINTL v34; // r8
  Gre::Base *v35; // rcx
  struct Gre::Base::SESSION_GLOBALS *v36; // rax
  MIX v37; // eax
  POINTL v38; // rdx
  POINTL *v39; // r10
  EBRUSHOBJ *v40; // rbx
  __int64 v41; // rdx
  MIX v42; // eax
  POINTL *v43; // r10
  int v44; // r10d
  BRUSHOBJ *pbo; // r9
  struct SURFACE *v46; // rdi
  unsigned int v47; // r15d
  unsigned int v48; // r15d
  bool v49; // zf
  XFORMOBJ *v50; // r15
  BOOL v51; // eax
  CLIPOBJ *pco; // [rsp+20h] [rbp-E0h]
  BRUSHOBJ *v53; // [rsp+68h] [rbp-98h]
  struct SURFACE *v54; // [rsp+70h] [rbp-90h]
  BRUSHOBJ *v55; // [rsp+78h] [rbp-88h]
  BRUSHOBJ *v56; // [rsp+80h] [rbp-80h] BYREF
  int v57; // [rsp+88h] [rbp-78h]
  int v58; // [rsp+8Ch] [rbp-74h]
  int v59; // [rsp+90h] [rbp-70h]
  int v60; // [rsp+94h] [rbp-6Ch]
  FLOAT_LONG v61; // [rsp+98h] [rbp-68h]
  XFORMOBJ *pxo; // [rsp+A0h] [rbp-60h]
  POINTL v63; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v64; // [rsp+B0h] [rbp-50h]
  __m128i rclBounds; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v66[32]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v67[2]; // [rsp+F0h] [rbp-10h] BYREF
  char v68[64]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v69[4]; // [rsp+140h] [rbp+40h] BYREF
  CLIPOBJ v70; // [rsp+150h] [rbp+50h] BYREF
  __int64 v71; // [rsp+188h] [rbp+88h]
  __int64 v72; // [rsp+1A0h] [rbp+A0h]
  int v73; // [rsp+1A8h] [rbp+A8h]
  int v74; // [rsp+1D0h] [rbp+D0h]
  __int64 v75; // [rsp+1E0h] [rbp+E0h]

  pxo = a4;
  v6 = 0;
  v64 = 0;
  v60 = 0;
  v61.l = 0;
  v10 = Gre::Base::Globals((Gre::Base *)ppo);
  if ( ppo->cCurves )
  {
    v11 = a5 & 0xFFFFFFFE;
    if ( *(_QWORD *)&(*this)[18] != *((_QWORD *)v10 + 32) )
      v11 = a5;
    v12 = v11 & 0xFFFFFFFD;
    if ( *(_QWORD *)&(*this)[17] != *((_QWORD *)v10 + 30) )
      v12 = v11;
    if ( (v12 & 1) != 0 && (a3->fl & 1) != 0 )
    {
      if ( !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)ppo, (struct EPATHOBJ *)ppo, a4, a3) )
      {
        EngSetLastError(0x216u);
        return 0LL;
      }
      if ( a3->pstyle )
        a3->elStyleState.l = 0;
    }
    v14 = (int *)ppo[1];
    v15 = v14[12] >> 4;
    v16 = v14[13] >> 4;
    v17 = ((v14[15] + 15) >> 4) + 1;
    v56 = (BRUSHOBJ *)__PAIR64__(v16, v15);
    v58 = v17;
    v57 = ((v14[14] + 15) >> 4) + 1;
    if ( ((*this)[4].y & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)this, (struct ERECTL *)&v56);
    if ( !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)this) )
    {
      DLODCOBJ::DLODCOBJ((DLODCOBJ *)v67);
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v66, (struct XDCOBJ *)this, 0);
      if ( (v66[24] & 1) == 0 )
      {
        v18 = XDCOBJ::bFullScreen((XDCOBJ *)this);
LABEL_19:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v66);
        return v18;
      }
      if ( !(unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)&(*this)[62]) )
      {
        EngSetLastError(5u);
        v18 = 0;
        goto LABEL_19;
      }
      v69[2] = v57;
      v69[3] = v58;
      v69[0] = v15;
      v19 = *this;
      v69[1] = v16;
      ERECTL::bOffsetAdd((ERECTL *)v69, &v19[(v19[5].x & 1) + 127], 0);
      EPATHOBJ::vOffset((EPATHOBJ *)ppo, (struct EPOINTL *)&v19[(v19[5].x & 1) + 127]);
      v20 = XDCOBJ::prgnEffRao((DC **)this);
      v74 = 1;
      v71 = 0LL;
      v72 = 0LL;
      v73 = 0;
      v75 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&v70, v20, (struct ERECTL *)v69, 0);
      v21 = *this;
      if ( (*this)[4].x != 2 && !ERECTL::bEmpty((ERECTL *)&v70.rclBounds) )
      {
        v22 = (__int64)v21[62];
        v23 = v21[6];
        v63 = v23;
        v24 = v21[11];
        v25 = *(CLIPOBJ **)(v22 + 128);
        v54 = (struct SURFACE *)v22;
        v55 = (BRUSHOBJ *)&v21[167];
        v53 = (BRUSHOBJ *)&v21[150];
        v56 = (BRUSHOBJ *)&v21[167];
        if ( (v12 & 1) == 0 )
          goto LABEL_45;
        x = v21[167].x;
        if ( (a3->fl & 1) != 0 )
        {
          v27 = 1;
          if ( x == -1 || (v21[182].x & 0x10000) == 0 && (*(_DWORD *)(*(_QWORD *)&v23 + 1792LL) & 0x800000) == 0 )
            goto LABEL_31;
        }
        else
        {
          v27 = 0;
          if ( x != -1 )
          {
LABEL_31:
            v28 = *this;
            v29 = (*this)[122];
            if ( ((LOBYTE((*this)[39].y) | *(_BYTE *)(*(_QWORD *)&v29 + 152LL)) & 2) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v29 + 152LL) &= ~2u;
              (*this)[39].y &= ~2u;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                v55,
                *this,
                *(_QWORD *)&(*this)[18],
                v24,
                v25,
                v22,
                v27);
              v28 = *this;
            }
            if ( a3->pstyle )
            {
              if ( (v55[5].iSolidColor & 0x800) != 0 && *(_BYTE *)(*(_QWORD *)&v28[122] + 213LL) == 2 )
              {
                fl = a3->fl;
                if ( (a3->fl & 1) == 0 )
                {
                  v60 = 1;
                  a3->fl = fl ^ 4;
                  LODWORD(v61.e) = a3->elStyleState;
                  v31 = (*this)[122];
                  v32 = (BRUSHOBJ *)&(*this)[201];
                  v56 = v32;
                  v33 = *(_DWORD *)(*(_QWORD *)&v31 + 152LL);
                  if ( (v33 & 8) == 0 && v32->iSolidColor == -1 )
                    *(_DWORD *)(*(_QWORD *)&v31 + 152LL) = v33 | 8;
                  v34 = (*this)[122];
                  v35 = (Gre::Base *)*(unsigned int *)(*(_QWORD *)&v34 + 152LL);
                  if ( ((LOBYTE((*this)[39].y) | *(_BYTE *)(*(_QWORD *)&v34 + 152LL)) & 8) != 0 )
                  {
                    if ( ((*this)[9].x & 0x8000) == 0 )
                    {
                      v35 = (Gre::Base *)((unsigned int)v35 & 0xFFFFFFF7);
                      *(_DWORD *)(*(_QWORD *)&v34 + 152LL) = (_DWORD)v35;
                      (*this)[39].y &= ~8u;
                    }
                    v36 = Gre::Base::Globals(v35);
                    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                      v56,
                      *this,
                      *((_QWORD *)v36 + 31),
                      v24,
                      v25,
                      v54,
                      0);
                  }
                }
              }
            }
            v37 = EBRUSHOBJ::mixBest(
                    (EBRUSHOBJ *)v55,
                    *(_BYTE *)(*(_QWORD *)&(*this)[122] + 212LL),
                    *(_BYTE *)(*(_QWORD *)&(*this)[122] + 213LL));
            v22 = (__int64)v54;
            v6 = v37;
LABEL_45:
            v59 = v12 & 2;
            if ( (v12 & 2) != 0 )
            {
              v38 = v21[122];
              v39 = v21;
              if ( ((LOBYTE(v21[39].y) | *(_BYTE *)(*(_QWORD *)&v38 + 152LL)) & 1) != 0 )
              {
                *(_DWORD *)(*(_QWORD *)&v38 + 152LL) &= ~1u;
                pco = v25;
                v40 = (EBRUSHOBJ *)v53;
                (*this)[39].y &= ~1u;
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                  v53,
                  *this,
                  *(_QWORD *)&(*this)[17],
                  v24,
                  pco,
                  v22,
                  1);
                v39 = *this;
              }
              else
              {
                v40 = (EBRUSHOBJ *)v53;
              }
              v41 = v12 & 1;
              if ( (v12 & 1) != 0 )
              {
                v21 = v39;
                if ( v6 >> 8 != (unsigned __int8)v6 )
                {
LABEL_53:
                  if ( (v21[4].y & 0xE0) != 0 && !ERECTL::bEmpty((ERECTL *)&v70.rclBounds) )
                  {
                    if ( !(_DWORD)v41 || _bittest((const signed __int32 *)&v56[5], 8u) )
                    {
                      pbo = v53;
                      if ( !v44 || _bittest((const signed __int32 *)&v53[5], 8u) )
                      {
LABEL_61:
                        *(_QWORD *)(*(_QWORD *)&ppo[1] + 72LL) = 0LL;
                        if ( v12
                          || *(_DWORD *)(*(_QWORD *)&v63 + 2108LL) != 1
                          && (v12 = a5, a3 = (LINEATTRS *)&glaSimpleStroke, v6 = 2827, a5) )
                        {
                          v46 = v54;
                          v47 = v12 - 1;
                          if ( !v47 )
                          {
                            v50 = pxo;
                            v51 = EPATHOBJ::bSimpleStroke(
                                    ppo,
                                    (*this)[9].x,
                                    (struct PDEVOBJ *)&v63,
                                    v54,
                                    &v70,
                                    pxo,
                                    v56,
                                    *this + 149,
                                    a3,
                                    v6);
LABEL_72:
                            v18 = v51;
                            goto LABEL_75;
                          }
                          v48 = v47 - 1;
                          if ( v48 )
                          {
                            v49 = v48 == 1;
                            v50 = pxo;
                            if ( !v49 )
                            {
                              v18 = v64;
                              goto LABEL_75;
                            }
                            v51 = EPATHOBJ::bSimpleStrokeAndFill(
                                    ppo,
                                    (*this)[9].x,
                                    (struct PDEVOBJ *)&v63,
                                    v54,
                                    &v70,
                                    pxo,
                                    v56,
                                    a3,
                                    pbo,
                                    *this + 149,
                                    v6,
                                    *(unsigned __int8 *)(*(_QWORD *)&(*this)[122] + 214LL));
                            goto LABEL_72;
                          }
                          v18 = EPATHOBJ::bSimpleFill(
                                  ppo,
                                  (*this)[9].x,
                                  (struct PDEVOBJ *)&v63,
                                  v54,
                                  &v70,
                                  pbo,
                                  *this + 149,
                                  v6,
                                  *(unsigned __int8 *)(*(_QWORD *)&(*this)[122] + 214LL));
                        }
                        else
                        {
                          v46 = v54;
                          v18 = 1;
                        }
                        v50 = pxo;
LABEL_75:
                        if ( v60 )
                        {
                          a3->fl ^= 4u;
                          a3->elStyleState = v61;
                          *(_QWORD *)(*(_QWORD *)&ppo[1] + 72LL) = 0LL;
                          v18 &= EPATHOBJ::bSimpleStroke(
                                   ppo,
                                   (*this)[9].x,
                                   (struct PDEVOBJ *)&v63,
                                   v46,
                                   &v70,
                                   v50,
                                   v55,
                                   *this + 149,
                                   a3,
                                   v6);
                        }
                        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v66, v41, v22, (__int64)pbo);
                        if ( v67[0] )
                          DLODCOBJ::vUnlock((DLODCOBJ *)v67);
                        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v68);
                        return v18;
                      }
                    }
                    rclBounds = (__m128i)v70.rclBounds;
                    XDCOBJ::vAccumulateTight((XDCOBJ *)this, (struct ECLIPOBJ *)v41, &rclBounds);
                  }
                  pbo = v53;
                  goto LABEL_61;
                }
              }
              v42 = EBRUSHOBJ::mixBest(
                      v40,
                      *(_BYTE *)(*(_QWORD *)&v39[122] + 212LL),
                      *(_BYTE *)(*(_QWORD *)&v39[122] + 213LL));
              v21 = v43;
              v6 = v42;
            }
            v41 = v12 & 1;
            goto LABEL_53;
          }
        }
        *(_DWORD *)(*(_QWORD *)&v21[122] + 152LL) |= 2u;
        goto LABEL_31;
      }
      if ( (v12 & 1) != 0 && (a3->pstyle && (a3->fl & 1) == 0 || (a3->fl & 2) != 0) )
        EPATHOBJ::vUpdateCosmeticStyleState((EPATHOBJ *)ppo, *(struct SURFACE **)&v21[62], a3);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v66);
    }
  }
  return 1LL;
}
