/*
 * XREFs of GrePlgBlt @ 0x1C028D580
 * Callers:
 *     NtGdiPlgBlt @ 0x1C028DBA0 (NtGdiPlgBlt.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084E50 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0087CC8 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C008AF30 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C00AB8BC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACA04 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00B493C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B496C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00B55C4 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C00B55F4 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C00B5E30 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00B6B38 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00B853C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0109D04 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0109D50 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z @ 0x1C028B0B8 (--0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028B248 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotated@BLTRECORD@@QEAAHXZ @ 0x1C028BDA8 (-bRotated@BLTRECORD@@QEAAHXZ.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028BE28 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C028BEA4 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 */

__int64 __fastcall GrePlgBlt(
        HDC a1,
        struct _POINTL *a2,
        HDC a3,
        LONG a4,
        LONG a5,
        int a6,
        int a7,
        HSURF a8,
        unsigned int a9,
        int a10,
        int a11)
{
  unsigned int v12; // edi
  __int64 v15; // rdx
  DC *v16; // r8
  int valid; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  ULONG v20; // ecx
  struct SURFACE *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct SURFACE *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ebx
  int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned __int8 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rdx
  DC *v37[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v38[32]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v39[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v40[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v41[32]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-20h]
  _BYTE v43[24]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v44[288]; // [rsp+100h] [rbp+0h] BYREF
  struct _POINTL v45[2]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v46; // [rsp+230h] [rbp+130h] BYREF
  __int64 v47; // [rsp+240h] [rbp+140h]
  __int64 v48; // [rsp+248h] [rbp+148h]
  __int64 v49; // [rsp+250h] [rbp+150h]
  __int64 v50; // [rsp+258h] [rbp+158h]
  struct SURFACE *v51; // [rsp+260h] [rbp+160h]
  struct SURFACE *v52; // [rsp+268h] [rbp+168h]
  __int64 v53; // [rsp+270h] [rbp+170h]
  __int64 v54[4]; // [rsp+278h] [rbp+178h] BYREF
  struct _POINTFIX v55[7]; // [rsp+298h] [rbp+198h] BYREF
  int v56; // [rsp+2D0h] [rbp+1D0h]
  int v57; // [rsp+2D4h] [rbp+1D4h]
  int v58; // [rsp+2D8h] [rbp+1D8h]
  int v59; // [rsp+2DCh] [rbp+1DCh]
  unsigned int v60; // [rsp+2E0h] [rbp+1E0h]
  int v61; // [rsp+2E4h] [rbp+1E4h]
  unsigned int v62; // [rsp+2E8h] [rbp+1E8h]
  int v63; // [rsp+2ECh] [rbp+1ECh]
  int v64; // [rsp+2F8h] [rbp+1F8h]
  int v65; // [rsp+2FCh] [rbp+1FCh]

  v12 = 0;
  v53 = 0LL;
  v65 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v37, a1);
  DCOBJ::DCOBJ((DCOBJ *)v39, a3);
  if ( !v37[0] || !v39[0] || (*((_DWORD *)v37[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_49;
  }
  bSpDwmValidateSurface((struct XDCOBJ *)v39, a4, a5, a6, a7);
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v44, (struct XDCOBJ *)v37, (struct XDCOBJ *)v39);
  if ( (v44[112] & 1) == 0 )
  {
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v37) || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v39) )
      v12 = 1;
    goto LABEL_47;
  }
  valid = XDCOBJ::bValidSurf((XDCOBJ *)v37);
  v18 = v39[0];
  if ( valid
    && (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v39)
    && (*(_DWORD *)(*(_QWORD *)(v18 + 496) + 112LL) & 0x10000000) == 0 )
  {
    goto LABEL_23;
  }
  v16 = v37[0];
  v19 = *((_QWORD *)v37[0] + 122);
  if ( (*(_DWORD *)(v19 + 152) & 0x1000) != 0 )
  {
    GreDCSelectBrush(v37[0], *(_QWORD *)(v19 + 160));
    v16 = v37[0];
    v18 = v39[0];
  }
  v15 = *(_QWORD *)(v18 + 976);
  if ( (*(_DWORD *)(v15 + 152) & 0x1000) != 0 )
  {
    GreDCSelectBrush(v18, *(_QWORD *)(v15 + 160));
    v16 = v37[0];
    v18 = v39[0];
  }
  if ( (*((_DWORD *)v16 + 8) == 2 || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v39))
    && (*((_DWORD *)v16 + 9) & 0xE0) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)v45, (struct XDCOBJ *)v37, 0x204u, 0);
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v45, a2, v55, 3uLL) )
    {
LABEL_19:
      v20 = 87;
LABEL_46:
      EngSetLastError(v20);
      goto LABEL_47;
    }
    BLTRECORD::vExtrema((BLTRECORD *)v45);
    BLTRECORD::vBound((BLTRECORD *)v45, (struct ERECTL *)v43);
    XDCOBJ::vAccumulate((XDCOBJ *)v37, (struct ERECTL *)v43);
    v16 = v37[0];
    v18 = v39[0];
  }
  if ( (*(_DWORD *)(v18 + 36) & 1) != 0 )
  {
LABEL_23:
    v21 = XDCOBJ::pSurfaceEff((XDCOBJ *)v39);
    if ( !(unsigned int)SrcSurfaceAccessCheck(v21, v22, v23, v24)
      || (v25 = XDCOBJ::pSurfaceEff((XDCOBJ *)v37), !(unsigned int)DestSurfaceAccessCheck(v25, v26, v27, v28)) )
    {
      v20 = 5;
      goto LABEL_46;
    }
    EXFORMOBJ::vInit((EXFORMOBJ *)v45, (struct XDCOBJ *)v37, 0x204u, 0);
    v51 = XDCOBJ::pSurfaceEff((XDCOBJ *)v37);
    v47 = *((_QWORD *)v51 + 16);
    v48 = *((_QWORD *)v37[0] + 11);
    EXFORMOBJ::vInit((EXFORMOBJ *)&v46, (struct XDCOBJ *)v39, 0x204u, 0);
    v52 = XDCOBJ::pSurfaceEff((XDCOBJ *)v39);
    v49 = *((_QWORD *)v52 + 16);
    v50 = *(_QWORD *)(v39[0] + 88LL);
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         v54,
                         0LL,
                         *((_DWORD *)v37[0] + 30),
                         v49,
                         v47,
                         v50,
                         v48,
                         *(_DWORD *)(*((_QWORD *)v37[0] + 122) + 184LL),
                         *(_DWORD *)(*((_QWORD *)v37[0] + 122) + 176LL),
                         a11,
                         0) )
    {
      v65 |= 2u;
      v54[1] = 0LL;
      if ( (*(_DWORD *)(v46 + 32) & 1) != 0 && (unsigned int)BLTRECORD::Src(v45, a4, a5, a6, a7) )
      {
        if ( a8 )
        {
          SURFREF::SURFREF((SURFREF *)v41, a8);
          if ( !v42
            || (INC_SHARE_REF_CNT(v42), v29 = 65540, v65 |= 0x30000u, v53 = v42, v64 = 43724, *(_WORD *)(v42 + 100))
            || *(_DWORD *)(v42 + 96) != 1 )
          {
            EngSetLastError(6u);
            if ( v42 )
              DEC_SHARE_REF_CNT(v42, v34);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v41);
            goto LABEL_47;
          }
          v60 = a9;
          v62 = a9 + v58 - v56;
          v61 = a10;
          v63 = a10 + v59 - v57;
          DEC_SHARE_REF_CNT(v42, a9);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v41);
        }
        else
        {
          v53 = 0LL;
          v29 = 4;
          v64 = 52428;
        }
        if ( EXFORMOBJ::bXform((EXFORMOBJ *)v45, a2, v55, 3uLL) )
        {
          v30 = BLTRECORD::bRotated((BLTRECORD *)v45);
          v31 = *((_QWORD *)v37[0] + 122);
          if ( v30 )
          {
            v32 = BLTRECORD::bRotate(
                    (struct _POINTFIX *)v45,
                    (struct DCOBJ *)v37,
                    (struct DCOBJ *)v39,
                    v29,
                    *(_BYTE *)(v31 + 215));
          }
          else
          {
            v33 = *(_BYTE *)(v31 + 215);
            if ( v33 == 4 || !BLTRECORD::bEqualExtents((BLTRECORD *)v45) )
              v32 = BLTRECORD::bStretch((BLTRECORD *)v45, v37, (struct DCOBJ *)v39, v29, v33);
            else
              v32 = BLTRECORD::bBitBlt((BLTRECORD *)v45, v37, (struct DCOBJ *)v39, v29);
          }
          v12 = v32;
          goto LABEL_47;
        }
      }
      goto LABEL_19;
    }
  }
  else
  {
    LOBYTE(v12) = *((_QWORD *)v16 + 62) == 0LL;
  }
LABEL_47:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v44, v15, (SURFACE **)v16);
LABEL_49:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v39);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v40);
  MDCOBJ::~MDCOBJ((MDCOBJ *)v37);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v38);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v45, v35);
  return v12;
}
