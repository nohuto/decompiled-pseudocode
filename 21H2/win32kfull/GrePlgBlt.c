/*
 * XREFs of GrePlgBlt @ 0x1C028B85C
 * Callers:
 *     NtGdiPlgBlt @ 0x1C028BE70 (NtGdiPlgBlt.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BB4C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BB70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C002C648 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C002C7C4 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C002CF1C (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C003D428 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C008A0F0 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C008A13C (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C008C6C8 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C008CE9C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z @ 0x1C0289338 (--0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C02894C8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotated@BLTRECORD@@QEAAHXZ @ 0x1C028A080 (-bRotated@BLTRECORD@@QEAAHXZ.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028A100 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C028A17C (-vExtrema@BLTRECORD@@QEAAXXZ.c)
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
        int a9,
        int a10,
        int a11)
{
  unsigned int v12; // edi
  int valid; // eax
  __int64 v16; // r9
  DC *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  ULONG v20; // ecx
  struct SURFACE *v21; // rax
  struct SURFACE *v22; // rax
  unsigned int v23; // ebx
  int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // eax
  unsigned __int8 v27; // r9
  DC *v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v30[32]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v31[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v32[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v33[32]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+E0h] [rbp-20h]
  _BYTE v35[24]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v36[288]; // [rsp+100h] [rbp+0h] BYREF
  struct _POINTL v37[2]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v38; // [rsp+230h] [rbp+130h] BYREF
  __int64 v39; // [rsp+240h] [rbp+140h]
  __int64 v40; // [rsp+248h] [rbp+148h]
  __int64 v41; // [rsp+250h] [rbp+150h]
  __int64 v42; // [rsp+258h] [rbp+158h]
  struct SURFACE *v43; // [rsp+260h] [rbp+160h]
  struct SURFACE *v44; // [rsp+268h] [rbp+168h]
  __int64 v45; // [rsp+270h] [rbp+170h]
  __int64 v46[4]; // [rsp+278h] [rbp+178h] BYREF
  struct _POINTFIX v47[7]; // [rsp+298h] [rbp+198h] BYREF
  int v48; // [rsp+2D0h] [rbp+1D0h]
  int v49; // [rsp+2D4h] [rbp+1D4h]
  int v50; // [rsp+2D8h] [rbp+1D8h]
  int v51; // [rsp+2DCh] [rbp+1DCh]
  int v52; // [rsp+2E0h] [rbp+1E0h]
  int v53; // [rsp+2E4h] [rbp+1E4h]
  int v54; // [rsp+2E8h] [rbp+1E8h]
  int v55; // [rsp+2ECh] [rbp+1ECh]
  int v56; // [rsp+2F8h] [rbp+1F8h]
  int v57; // [rsp+2FCh] [rbp+1FCh]

  v12 = 0;
  v45 = 0LL;
  v57 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v29, a1);
  DCOBJ::DCOBJ((DCOBJ *)v31, a3);
  if ( !v29[0] || !v31[0] || (*((_DWORD *)v29[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_49;
  }
  bSpDwmValidateSurface((struct XDCOBJ *)v31, a4, a5, a6, a7);
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v36, (struct XDCOBJ *)v29, (struct XDCOBJ *)v31);
  if ( (v36[112] & 1) == 0 )
  {
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v29) || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v31) )
      v12 = 1;
    goto LABEL_47;
  }
  valid = XDCOBJ::bValidSurf((XDCOBJ *)v29);
  v16 = v31[0];
  if ( valid
    && (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v31)
    && (*(_DWORD *)(*(_QWORD *)(v16 + 496) + 112LL) & 0x10000000) == 0 )
  {
    goto LABEL_23;
  }
  v17 = v29[0];
  v18 = *((_QWORD *)v29[0] + 122);
  if ( (*(_DWORD *)(v18 + 152) & 0x1000) != 0 )
  {
    GreDCSelectBrush(v29[0], *(_QWORD *)(v18 + 160));
    v17 = v29[0];
    v16 = v31[0];
  }
  v19 = *(_QWORD *)(v16 + 976);
  if ( (*(_DWORD *)(v19 + 152) & 0x1000) != 0 )
  {
    GreDCSelectBrush(v16, *(_QWORD *)(v19 + 160));
    v17 = v29[0];
    v16 = v31[0];
  }
  if ( (*((_DWORD *)v17 + 8) == 2 || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v31))
    && (*((_DWORD *)v17 + 9) & 0xE0) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)v37, (struct XDCOBJ *)v29, 0x204u, 0);
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v37, a2, v47, 3uLL) )
    {
LABEL_19:
      v20 = 87;
LABEL_46:
      EngSetLastError(v20);
      goto LABEL_47;
    }
    BLTRECORD::vExtrema((BLTRECORD *)v37);
    BLTRECORD::vBound((BLTRECORD *)v37, (struct ERECTL *)v35);
    XDCOBJ::vAccumulate((XDCOBJ *)v29, (struct ERECTL *)v35);
    v17 = v29[0];
    v16 = v31[0];
  }
  if ( (*(_DWORD *)(v16 + 36) & 1) != 0 )
  {
LABEL_23:
    v21 = XDCOBJ::pSurfaceEff((XDCOBJ *)v31);
    if ( !(unsigned int)SrcSurfaceAccessCheck(v21)
      || (v22 = XDCOBJ::pSurfaceEff((XDCOBJ *)v29), !(unsigned int)DestSurfaceAccessCheck(v22)) )
    {
      v20 = 5;
      goto LABEL_46;
    }
    EXFORMOBJ::vInit((EXFORMOBJ *)v37, (struct XDCOBJ *)v29, 0x204u, 0);
    v43 = XDCOBJ::pSurfaceEff((XDCOBJ *)v29);
    v39 = *((_QWORD *)v43 + 16);
    v40 = *((_QWORD *)v29[0] + 11);
    EXFORMOBJ::vInit((EXFORMOBJ *)&v38, (struct XDCOBJ *)v31, 0x204u, 0);
    v44 = XDCOBJ::pSurfaceEff((XDCOBJ *)v31);
    v41 = *((_QWORD *)v44 + 16);
    v42 = *(_QWORD *)(v31[0] + 88LL);
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         v46,
                         0LL,
                         *((_DWORD *)v29[0] + 30),
                         v41,
                         v39,
                         v42,
                         v40,
                         *(_DWORD *)(*((_QWORD *)v29[0] + 122) + 184LL),
                         *(_DWORD *)(*((_QWORD *)v29[0] + 122) + 176LL),
                         a11,
                         0) )
    {
      v57 |= 2u;
      v46[1] = 0LL;
      if ( (*(_DWORD *)(v38 + 32) & 1) != 0 && (unsigned int)BLTRECORD::Src(v37, a4, a5, a6, a7) )
      {
        if ( a8 )
        {
          SURFREF::SURFREF((SURFREF *)v33, a8);
          if ( !v34
            || (INC_SHARE_REF_CNT(v34), v23 = 65540, v57 |= 0x30000u, v45 = v34, v56 = 43724, *(_WORD *)(v34 + 100))
            || *(_DWORD *)(v34 + 96) != 1 )
          {
            EngSetLastError(6u);
            if ( v34 )
              DEC_SHARE_REF_CNT(v34);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v33);
            goto LABEL_47;
          }
          v52 = a9;
          v54 = a9 + v50 - v48;
          v53 = a10;
          v55 = a10 + v51 - v49;
          DEC_SHARE_REF_CNT(v34);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v33);
        }
        else
        {
          v45 = 0LL;
          v23 = 4;
          v56 = 52428;
        }
        if ( EXFORMOBJ::bXform((EXFORMOBJ *)v37, a2, v47, 3uLL) )
        {
          v24 = BLTRECORD::bRotated((BLTRECORD *)v37);
          v25 = *((_QWORD *)v29[0] + 122);
          if ( v24 )
          {
            v26 = BLTRECORD::bRotate(
                    (struct _POINTFIX *)v37,
                    (struct DCOBJ *)v29,
                    (struct DCOBJ *)v31,
                    v23,
                    *(_BYTE *)(v25 + 215));
          }
          else
          {
            v27 = *(_BYTE *)(v25 + 215);
            if ( v27 == 4 || !BLTRECORD::bEqualExtents((BLTRECORD *)v37) )
              v26 = BLTRECORD::bStretch((BLTRECORD *)v37, (struct DCOBJ *)v29, (struct DCOBJ *)v31, v23, v27);
            else
              v26 = BLTRECORD::bBitBlt((BLTRECORD *)v37, v29, (struct DCOBJ *)v31, v23);
          }
          v12 = v26;
          goto LABEL_47;
        }
      }
      goto LABEL_19;
    }
  }
  else
  {
    LOBYTE(v12) = *((_QWORD *)v17 + 62) == 0LL;
  }
LABEL_47:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v36);
LABEL_49:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v31);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v32);
  MDCOBJ::~MDCOBJ((MDCOBJ *)v29);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v30);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v37);
  return v12;
}
