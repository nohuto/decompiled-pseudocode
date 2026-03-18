/*
 * XREFs of GreMaskBlt @ 0x1C001C9BC
 * Callers:
 *     NtGdiMaskBlt @ 0x1C001C940 (NtGdiMaskBlt.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C002C4E0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C00DBEF0 (NtGdiPatBlt.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0106B60 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0002200 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C001D278 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C001D2A8 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001D35C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C001D390 (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001DF10 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001E590 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C001EE80 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C001EECC (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C001EF1C (--1BLTRECORD@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0087EAC (--1SURFREF@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00DC2A8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00DC33C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C00E0B4C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00E0C40 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00F8B40 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FA390 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00FE090 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0101D80 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C01026C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C011CD7C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C02704B0 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028EBA0 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C029334C (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C029A530 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C02C0950 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 */

__int64 __fastcall GreMaskBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        HSURF a9,
        int a10,
        int a11,
        unsigned int a12,
        int a13)
{
  unsigned int v14; // ebx
  int v16; // ecx
  unsigned int v17; // esi
  unsigned int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  struct SURFACE *v23; // rax
  HDC v24; // rdx
  ULONG v25; // ecx
  int v26; // edx
  __int64 v27; // rdx
  int v28; // ecx
  unsigned int v29; // edi
  _QWORD v33[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v34[32]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v35[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v36[32]; // [rsp+B0h] [rbp-50h] BYREF
  HDC v37[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v38[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v39; // [rsp+100h] [rbp+0h]
  _BYTE v40[288]; // [rsp+110h] [rbp+10h] BYREF
  HDC v41; // [rsp+230h] [rbp+130h] BYREF
  int v42; // [rsp+238h] [rbp+138h]
  int v43; // [rsp+23Ch] [rbp+13Ch]
  _QWORD v44[2]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v45[2]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v46; // [rsp+260h] [rbp+160h]
  __int64 v47; // [rsp+268h] [rbp+168h]
  __int64 v48; // [rsp+270h] [rbp+170h]
  __int64 v49; // [rsp+278h] [rbp+178h]
  __int64 v50; // [rsp+280h] [rbp+180h]
  struct SURFACE *v51; // [rsp+288h] [rbp+188h]
  __int64 v52; // [rsp+290h] [rbp+190h]
  _BYTE v53[8]; // [rsp+298h] [rbp+198h] BYREF
  __int64 v54; // [rsp+2A0h] [rbp+1A0h]
  int v55; // [rsp+2E8h] [rbp+1E8h]
  int v56; // [rsp+2ECh] [rbp+1ECh]
  int v57; // [rsp+2F0h] [rbp+1F0h]
  int v58; // [rsp+2F4h] [rbp+1F4h]
  int v59; // [rsp+2F8h] [rbp+1F8h]
  int v60; // [rsp+2FCh] [rbp+1FCh]
  int v61; // [rsp+300h] [rbp+200h]
  int v62; // [rsp+304h] [rbp+204h]
  __int64 v63; // [rsp+308h] [rbp+208h]
  unsigned int v64; // [rsp+310h] [rbp+210h]
  int v65; // [rsp+314h] [rbp+214h]

  v14 = 0;
  v41 = a1;
  v37[0] = a6;
  v52 = 0LL;
  v65 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v35, a1);
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v35) )
  {
    if ( v35[0] )
    {
      v16 = *(_DWORD *)(v35[0] + 36LL);
      if ( (v16 & 0x10000) == 0 )
      {
        if ( (v16 & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v37, (struct XDCOBJ *)v35, 0x204u);
          v42 = a2 + a4;
          v41 = (HDC)__PAIR64__(a3, a2);
          v43 = a3 + a5;
          if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v37, (struct ERECTL *)&v41) )
          {
LABEL_76:
            DCOBJ::~DCOBJ((DCOBJ *)v35);
            goto LABEL_82;
          }
          ERECTL::vOrder((ERECTL *)&v41);
          XDCOBJ::vAccumulate((XDCOBJ *)v35, (struct ERECTL *)&v41);
        }
        v14 = 1;
        goto LABEL_76;
      }
    }
LABEL_9:
    EngSetLastError(0x57u);
    goto LABEL_76;
  }
  if ( (*(_DWORD *)(v35[0] + 36LL) & 0x10000) != 0 )
    goto LABEL_9;
  if ( !a9 || BYTE2(a12) == HIBYTE(a12) )
  {
    v17 = gajRop3[BYTE2(a12)];
    v64 = BYTE2(a12) | (BYTE2(a12) << 8);
  }
  else
  {
    SURFREF::SURFREF((SURFREF *)v38, a9);
    if ( !v39 )
    {
      EngSetLastError(6u);
      SURFREF::~SURFREF((SURFREF *)v38);
      goto LABEL_76;
    }
    v52 = v39;
    if ( *(_WORD *)(v39 + 100) || *(_DWORD *)(v39 + 96) != 1 )
    {
      EngSetLastError(6u);
      if ( v39 )
        DEC_SHARE_REF_CNT(v39);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v38);
      goto LABEL_76;
    }
    INC_SHARE_REF_CNT(v39);
    v65 |= 0x30000u;
    v64 = HIWORD(a12);
    v17 = gajRop3[BYTE2(a12)] | gajRop3[(unsigned __int64)HIWORD(a12) >> 8] | 0x10000;
    if ( v39 )
      DEC_SHARE_REF_CNT(v39);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v38);
  }
  v33[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v34);
  v33[0] = 0LL;
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v40);
  if ( (v17 & 0xD4) != 0 && (XDCOBJ::vLock((XDCOBJ *)v33, v37[0]), v33[0]) )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v33, a7, a8, a4, a5);
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v40, (struct XDCOBJ *)v35, (struct XDCOBJ *)v33, 0);
  }
  else
  {
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v40, (struct XDCOBJ *)v35);
  }
  if ( (v40[112] & 1) == 0 )
  {
    v18 = XDCOBJ::bFullScreen((XDCOBJ *)v35);
LABEL_74:
    v14 = v18;
    goto LABEL_75;
  }
  v50 = *(_QWORD *)(v35[0] + 496LL);
  EXFORMOBJ::vInit((EXFORMOBJ *)v44, (struct XDCOBJ *)v35, 0x204u, 0);
  v19 = v35[0];
  v46 = *(_QWORD *)(v50 + 128);
  v47 = *(_QWORD *)(v35[0] + 88LL);
  if ( (v17 & 0xD4) != 0 )
  {
    if ( !v33[0] )
      goto LABEL_70;
    if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v33)
      || _bittest((const signed __int32 *)(*(_QWORD *)(v20 + 496) + 112LL), 0x1Cu) )
    {
      if ( _bittest((const signed __int32 *)XDCOBJ::pSurfaceEff((XDCOBJ *)v33) + 28, 0x1Cu)
        && *(_DWORD *)(v21 + 32) == 2
        && (*(_DWORD *)(v21 + 36) & 0xE0) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v37, (struct XDCOBJ *)v35, 0x204u);
        v41 = (HDC)__PAIR64__(a3, a2);
        v42 = a2 + a4;
        v43 = a3 + a5;
        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v37, (struct ERECTL *)&v41) )
        {
          ERECTL::vOrder((ERECTL *)&v41);
          XDCOBJ::vAccumulate((XDCOBJ *)v35, (struct ERECTL *)&v41);
          XDCOBJ::vAccumulateTight((XDCOBJ *)v35, (struct ERECTL *)&v41);
        }
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v40);
        DCOBJ::~DCOBJ((DCOBJ *)v33);
        v14 = 1;
        goto LABEL_76;
      }
      if ( (*(_DWORD *)(v22 + 36) & 1) == 0 )
        goto LABEL_75;
    }
    v23 = XDCOBJ::pSurfaceEff((XDCOBJ *)v33);
    if ( !(unsigned int)SrcSurfaceAccessCheck(v23) )
      goto LABEL_65;
    v51 = XDCOBJ::pSurfaceEff((XDCOBJ *)v33);
    v48 = *((_QWORD *)v51 + 16);
    v49 = *(_QWORD *)(v33[0] + 88LL);
    EXFORMOBJ::vInit((EXFORMOBJ *)v45, (struct XDCOBJ *)v33, 0x204u, 0);
    if ( (*(_DWORD *)(v45[0] + 32LL) & 1) == 0 || !(unsigned int)BLTRECORD::Src((BLTRECORD *)v44, a7, a8, a4, a5) )
      goto LABEL_70;
    if ( (v17 & 0x10000) != 0 )
    {
      v59 = a10;
      v61 = a10 + v57 - v55;
      v60 = a11;
      v62 = a11 + v58 - v56;
    }
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          v53,
                          0LL,
                          *(unsigned int *)(v35[0] + 120LL),
                          v48,
                          v46,
                          v49,
                          v47,
                          *(_DWORD *)(*(_QWORD *)(v35[0] + 976LL) + 184LL),
                          *(_DWORD *)(*(_QWORD *)(v35[0] + 976LL) + 176LL),
                          a13,
                          0) )
      goto LABEL_75;
    v65 |= 2u;
  }
  else
  {
    v51 = 0LL;
    if ( (v17 & 0x10000) == 0 )
      goto LABEL_56;
    v24 = v41;
    if ( v37[0] )
      v24 = v37[0];
    XDCOBJ::vLock((XDCOBJ *)v33, v24);
    if ( !v33[0] )
    {
      v25 = 6;
LABEL_52:
      EngSetLastError(v25);
LABEL_75:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v40);
      DCOBJ::~DCOBJ((DCOBJ *)v33);
      goto LABEL_76;
    }
    EXFORMOBJ::vInit((EXFORMOBJ *)v45, (struct XDCOBJ *)v33, 0x204u, 0);
    if ( (*(_DWORD *)(v45[0] + 32LL) & 1) == 0 || !(unsigned int)BLTRECORD::Msk((BLTRECORD *)v44, a10, a11, a4, a5) )
      goto LABEL_70;
  }
  v19 = v35[0];
LABEL_56:
  if ( (v17 & 0xE8) != 0 )
  {
    v26 = *(_DWORD *)(*(_QWORD *)(v19 + 976) + 152LL);
    v54 = v19 + 1200;
    if ( (v26 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v19, *(_QWORD *)(*(_QWORD *)(v19 + 976) + 160LL));
      v19 = v35[0];
    }
    v27 = *(_QWORD *)(v19 + 976);
    v28 = *(_DWORD *)(v27 + 152);
    if ( (v28 & 1) != 0 || (*(_DWORD *)(v19 + 316) & 1) != 0 )
    {
      *(_DWORD *)(v27 + 152) = v28 & 0xFFFFFFFE;
      *(_DWORD *)(v35[0] + 316LL) &= ~1u;
      EBRUSHOBJ::vInitBrush(v54, v35[0], *(_QWORD *)(v35[0] + 136LL), v47, v46, v50, 1);
      v19 = v35[0];
    }
    v63 = *(_QWORD *)(v19 + 1192);
  }
  else
  {
    v54 = 0LL;
  }
  if ( !(unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)(v19 + 496)) )
  {
LABEL_65:
    v25 = 5;
    goto LABEL_52;
  }
  if ( (*(_DWORD *)(v44[0] + 32LL) & 1) == 0 )
  {
    if ( (unsigned int)BLTRECORD::TrgPlg((BLTRECORD *)v44, a2, a3, a4, a5) )
    {
      v18 = BLTRECORD::bRotate(
              (BLTRECORD *)v44,
              (struct DCOBJ *)v35,
              (struct DCOBJ *)v33,
              v17,
              *(_BYTE *)(*(_QWORD *)(v35[0] + 976LL) + 215LL));
      goto LABEL_74;
    }
    goto LABEL_70;
  }
  if ( !(unsigned int)BLTRECORD::Trg((BLTRECORD *)v44, a2, a3, a4, a5) )
  {
LABEL_70:
    v25 = 87;
    goto LABEL_52;
  }
  if ( (v17 & 0xD4) != 0 && !(unsigned int)BLTRECORD::bEqualExtents((BLTRECORD *)v44) )
  {
    v18 = BLTRECORD::bStretch(
            (BLTRECORD *)v44,
            (struct DCOBJ *)v35,
            (struct DCOBJ *)v33,
            v17,
            *(_BYTE *)(*(_QWORD *)(v35[0] + 976LL) + 215LL));
    goto LABEL_74;
  }
  v29 = BLTRECORD::bBitBlt((BLTRECORD *)v44, (struct DCOBJ *)v35, (struct DCOBJ *)v33, v17);
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v40);
  if ( v33[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v33);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v34);
  if ( v35[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v35);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v36);
  v14 = v29;
LABEL_82:
  BLTRECORD::~BLTRECORD((BLTRECORD *)v44);
  return v14;
}
