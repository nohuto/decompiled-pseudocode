/*
 * XREFs of GreMaskBlt @ 0x1C0087168
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0034690 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0042444 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C0042E10 (NtGdiPatBlt.c)
 *     NtGdiMaskBlt @ 0x1C008A180 (NtGdiMaskBlt.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BB4C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BB70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C002C648 (--1BLTRECORD@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002C6F4 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C002C7C4 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C002CF1C (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C003D428 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00408D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0088D44 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00894E4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C008A0A8 (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C008A0F0 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C008A13C (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C008C6C8 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C008CE9C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0138B80 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C02894C8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C028DAA8 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C02917A4 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 */

__int64 __fastcall GreMaskBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        LONG a7,
        LONG a8,
        HSURF a9,
        int a10,
        int a11,
        unsigned int a12,
        int a13)
{
  unsigned int v14; // ebx
  int v16; // ecx
  int v17; // edi
  unsigned int v18; // esi
  int v19; // r8d
  unsigned int v20; // eax
  __int64 v21; // r8
  ULONG v22; // ecx
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  struct SURFACE *v26; // rax
  ULONG v27; // ecx
  int v28; // edx
  __int64 v29; // rdx
  int v30; // ecx
  HDC v31; // rdx
  _QWORD v35[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v36[32]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v37[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v38[32]; // [rsp+B0h] [rbp-50h] BYREF
  HDC v39[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v40[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v41; // [rsp+100h] [rbp+0h]
  _BYTE v42[288]; // [rsp+110h] [rbp+10h] BYREF
  HDC v43; // [rsp+230h] [rbp+130h] BYREF
  int v44; // [rsp+238h] [rbp+138h]
  int v45; // [rsp+23Ch] [rbp+13Ch]
  _QWORD v46[2]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v47[2]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v48; // [rsp+260h] [rbp+160h]
  __int64 v49; // [rsp+268h] [rbp+168h]
  __int64 v50; // [rsp+270h] [rbp+170h]
  __int64 v51; // [rsp+278h] [rbp+178h]
  __int64 v52; // [rsp+280h] [rbp+180h]
  struct SURFACE *v53; // [rsp+288h] [rbp+188h]
  __int64 v54; // [rsp+290h] [rbp+190h]
  __int64 v55; // [rsp+298h] [rbp+198h] BYREF
  __int64 v56; // [rsp+2A0h] [rbp+1A0h]
  int v57; // [rsp+2F0h] [rbp+1F0h]
  int v58; // [rsp+2F4h] [rbp+1F4h]
  int v59; // [rsp+2F8h] [rbp+1F8h]
  int v60; // [rsp+2FCh] [rbp+1FCh]
  int v61; // [rsp+300h] [rbp+200h]
  int v62; // [rsp+304h] [rbp+204h]
  int v63; // [rsp+308h] [rbp+208h]
  int v64; // [rsp+30Ch] [rbp+20Ch]
  __int64 v65; // [rsp+310h] [rbp+210h]
  unsigned int v66; // [rsp+318h] [rbp+218h]
  int v67; // [rsp+31Ch] [rbp+21Ch]

  v14 = 0;
  v43 = a1;
  v39[0] = a6;
  v54 = 0LL;
  v67 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v35, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v35) )
  {
    if ( (*(_DWORD *)(v35[0] + 36LL) & 0x10000) != 0 )
    {
LABEL_9:
      EngSetLastError(0x57u);
      goto LABEL_81;
    }
    v17 = 1;
    if ( !a9 || BYTE2(a12) == HIBYTE(a12) )
    {
      v18 = (unsigned __int8)gajRop3[BYTE2(a12)];
      v66 = BYTE2(a12) | (BYTE2(a12) << 8);
    }
    else
    {
      SURFREF::SURFREF((SURFREF *)v40, a9);
      if ( !v41 || (v54 = v41, *(_WORD *)(v41 + 100)) || *(_DWORD *)(v41 + 96) != 1 )
      {
        EngSetLastError(6u);
        if ( v41 )
          DEC_SHARE_REF_CNT(v41);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v40);
        goto LABEL_81;
      }
      INC_SHARE_REF_CNT(v41);
      v67 |= 0x30000u;
      v66 = HIWORD(a12);
      v18 = (unsigned __int8)gajRop3[BYTE2(a12)] | (unsigned __int8)gajRop3[(unsigned __int64)HIWORD(a12) >> 8] | 0x10000;
      if ( v41 )
        DEC_SHARE_REF_CNT(v41);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v40);
    }
    v37[0] = 0LL;
    v37[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v38);
    v37[0] = 0LL;
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v42);
    if ( (v18 & 0xD4) != 0 && (XDCOBJ::vLock((XDCOBJ *)v37, v39[0]), v37[0]) )
    {
      bSpDwmValidateSurface((struct XDCOBJ *)v37, a7, a8, a4, a5);
      DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v42, (struct XDCOBJ *)v35, (struct XDCOBJ *)v37);
    }
    else
    {
      DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v42, (struct XDCOBJ *)v35, v19);
    }
    if ( (v42[112] & 1) == 0 )
    {
      v20 = XDCOBJ::bFullScreen((XDCOBJ *)v35);
LABEL_79:
      v14 = v20;
      goto LABEL_80;
    }
    v52 = *(_QWORD *)(v35[0] + 496LL);
    EXFORMOBJ::vInit((EXFORMOBJ *)v46, (struct XDCOBJ *)v35, 0x204u, 0);
    v21 = v35[0];
    v48 = *(_QWORD *)(v52 + 128);
    v49 = *(_QWORD *)(v35[0] + 88LL);
    if ( (v18 & 0xD4) != 0 )
    {
      if ( !v37[0] )
        goto LABEL_30;
      if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v37)
        || _bittest((const signed __int32 *)(*(_QWORD *)(v23 + 496) + 112LL), 0x1Cu) )
      {
        if ( _bittest((const signed __int32 *)XDCOBJ::pSurfaceEff((XDCOBJ *)v37) + 28, 0x1Cu)
          && *(_DWORD *)(v24 + 32) == 2
          && (*(_DWORD *)(v24 + 36) & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v39, (struct XDCOBJ *)v35, 0x204u);
          v43 = (HDC)__PAIR64__(a3, a2);
          v44 = a4 + a2;
          v45 = a3 + a5;
          if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v39, (struct ERECTL *)&v43) )
          {
            ERECTL::vOrder((ERECTL *)&v43);
            XDCOBJ::vAccumulate((XDCOBJ *)v35, (struct ERECTL *)&v43);
            XDCOBJ::vAccumulateTight((XDCOBJ *)v35, (struct ERECTL *)&v43);
          }
          goto LABEL_59;
        }
        if ( (*(_DWORD *)(v25 + 36) & 1) == 0 )
        {
LABEL_58:
          v17 = 0;
LABEL_59:
          v14 = v17;
          goto LABEL_80;
        }
      }
      v26 = XDCOBJ::pSurfaceEff((XDCOBJ *)v37);
      if ( !(unsigned int)SrcSurfaceAccessCheck(v26) )
      {
        v27 = 5;
LABEL_57:
        EngSetLastError(v27);
        goto LABEL_58;
      }
      v53 = XDCOBJ::pSurfaceEff((XDCOBJ *)v37);
      v50 = *((_QWORD *)v53 + 16);
      v51 = *(_QWORD *)(v37[0] + 88LL);
      EXFORMOBJ::vInit((EXFORMOBJ *)v47, (struct XDCOBJ *)v37, 0x204u, 0);
      if ( (*(_DWORD *)(v47[0] + 32LL) & 1) == 0 || !(unsigned int)BLTRECORD::Src((BLTRECORD *)v46, a7, a8, a4, a5) )
      {
        v27 = 87;
        goto LABEL_57;
      }
      if ( (v18 & 0x10000) != 0 )
      {
        v61 = a10;
        v63 = a10 + v59 - v57;
        v62 = a11;
        v64 = a11 + v60 - v58;
      }
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            &v55,
                            0LL,
                            *(_DWORD *)(v35[0] + 120LL),
                            v50,
                            v48,
                            v51,
                            v49,
                            *(_DWORD *)(*(_QWORD *)(v35[0] + 976LL) + 184LL),
                            *(_DWORD *)(*(_QWORD *)(v35[0] + 976LL) + 176LL),
                            a13,
                            0) )
        goto LABEL_80;
      v67 |= 2u;
    }
    else
    {
      v53 = 0LL;
      if ( (v18 & 0x10000) == 0 )
        goto LABEL_49;
      v31 = v43;
      if ( v39[0] )
        v31 = v39[0];
      XDCOBJ::vLock((XDCOBJ *)v37, v31);
      if ( !v37[0] )
      {
        v22 = 6;
        goto LABEL_31;
      }
      EXFORMOBJ::vInit((EXFORMOBJ *)v47, (struct XDCOBJ *)v37, 0x204u, 0);
      if ( (*(_DWORD *)(v47[0] + 32LL) & 1) == 0 || !(unsigned int)BLTRECORD::Msk((BLTRECORD *)v46, a10, a11, a4, a5) )
      {
LABEL_30:
        v22 = 87;
LABEL_31:
        EngSetLastError(v22);
LABEL_80:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v42);
        MDCOBJ::~MDCOBJ((MDCOBJ *)v37);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v38);
        goto LABEL_81;
      }
    }
    v21 = v35[0];
LABEL_49:
    if ( (v18 & 0xE8) != 0 )
    {
      v28 = *(_DWORD *)(*(_QWORD *)(v21 + 976) + 152LL);
      v56 = v21 + 1200;
      if ( (v28 & 0x1000) != 0 )
      {
        GreDCSelectBrush(v21, *(_QWORD *)(*(_QWORD *)(v21 + 976) + 160LL));
        v21 = v35[0];
      }
      v29 = *(_QWORD *)(v21 + 976);
      v30 = *(_DWORD *)(v29 + 152);
      if ( (v30 & 1) != 0 || (*(_DWORD *)(v21 + 316) & 1) != 0 )
      {
        *(_DWORD *)(v29 + 152) = v30 & 0xFFFFFFFE;
        *(_DWORD *)(v35[0] + 316LL) &= ~1u;
        EBRUSHOBJ::vInitBrush(v56, v35[0], *(_QWORD *)(v35[0] + 136LL), v49, v48, v52, 1);
        v21 = v35[0];
      }
      v65 = *(_QWORD *)(v21 + 1192);
    }
    else
    {
      v56 = 0LL;
    }
    if ( !(unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)(v21 + 496)) )
    {
      v22 = 5;
      goto LABEL_31;
    }
    if ( (*(_DWORD *)(v46[0] + 32LL) & 1) != 0 )
    {
      if ( (unsigned int)BLTRECORD::Trg((BLTRECORD *)v46, a2, a3, a4, a5) )
      {
        if ( (v18 & 0xD4) == 0 || BLTRECORD::bEqualExtents((BLTRECORD *)v46) )
          v20 = BLTRECORD::bBitBlt((BLTRECORD *)v46, (struct DCOBJ *)v35, (struct DCOBJ *)v37, v18);
        else
          v20 = BLTRECORD::bStretch(
                  (BLTRECORD *)v46,
                  (struct DCOBJ *)v35,
                  (struct DCOBJ *)v37,
                  v18,
                  *(_BYTE *)(*(_QWORD *)(v35[0] + 976LL) + 215LL));
        goto LABEL_79;
      }
    }
    else if ( (unsigned int)BLTRECORD::TrgPlg((BLTRECORD *)v46, a2, a3, a4, a5) )
    {
      v20 = BLTRECORD::bRotate(
              (BLTRECORD *)v46,
              (struct DCOBJ *)v35,
              (struct DCOBJ *)v37,
              v18,
              *(_BYTE *)(*(_QWORD *)(v35[0] + 976LL) + 215LL));
      goto LABEL_79;
    }
    goto LABEL_30;
  }
  if ( !v35[0] )
    goto LABEL_9;
  v16 = *(_DWORD *)(v35[0] + 36LL);
  if ( (v16 & 0x10000) != 0 )
    goto LABEL_9;
  if ( (v16 & 0xE0) == 0 )
  {
LABEL_7:
    v14 = 1;
    goto LABEL_81;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v39, (struct XDCOBJ *)v35, 0x204u);
  v44 = a4 + a2;
  v43 = (HDC)__PAIR64__(a3, a2);
  v45 = a3 + a5;
  if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v39, (struct ERECTL *)&v43) )
  {
    ERECTL::vOrder((ERECTL *)&v43);
    XDCOBJ::vAccumulate((XDCOBJ *)v35, (struct ERECTL *)&v43);
    goto LABEL_7;
  }
LABEL_81:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v35);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v36);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v46);
  return v14;
}
