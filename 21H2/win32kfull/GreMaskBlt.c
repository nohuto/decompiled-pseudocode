/*
 * XREFs of GreMaskBlt @ 0x1C010979C
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C008EFE0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C00B3410 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C00B42B0 (NtGdiPatBlt.c)
 *     NtGdiMaskBlt @ 0x1C0109720 (NtGdiMaskBlt.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C008393C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0087D58 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C008AFC0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C008C890 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C00ABABC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACD0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00B4C9C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B4CCC (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00B5924 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C00B5954 (--1BLTRECORD@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00B5A00 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C00B6190 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00B6E98 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B79F8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00B7A24 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00B7CA8 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00B889C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C010A03C (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C010A084 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C010A0D0 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C01460E4 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C016A60C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A898 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028B878 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C028FDB0 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0293D34 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
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
  unsigned int v13; // ebx
  HDC v14; // r12
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  DC *v24; // r8
  ULONG v25; // ecx
  __int64 v26; // r9
  struct SURFACE *v27; // rax
  __int64 v28; // r9
  struct SURFACE *v29; // rax
  ULONG v30; // ecx
  int v31; // r14d
  int v32; // edx
  int v33; // ecx
  __int64 v34; // rdx
  DC *v38[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v39[32]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v40[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v41[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v42[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v43[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v44; // [rsp+100h] [rbp+0h]
  _BYTE v45[288]; // [rsp+110h] [rbp+10h] BYREF
  HDC v46; // [rsp+230h] [rbp+130h] BYREF
  int v47; // [rsp+238h] [rbp+138h]
  int v48; // [rsp+23Ch] [rbp+13Ch]
  _QWORD v49[2]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v50[2]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v51; // [rsp+260h] [rbp+160h]
  __int64 v52; // [rsp+268h] [rbp+168h]
  __int64 v53; // [rsp+270h] [rbp+170h]
  __int64 v54; // [rsp+278h] [rbp+178h]
  __int64 v55; // [rsp+280h] [rbp+180h]
  struct SURFACE *v56; // [rsp+288h] [rbp+188h]
  __int64 v57; // [rsp+290h] [rbp+190h]
  __int64 v58; // [rsp+298h] [rbp+198h] BYREF
  char *v59; // [rsp+2A0h] [rbp+1A0h]
  int v60; // [rsp+2F0h] [rbp+1F0h]
  int v61; // [rsp+2F4h] [rbp+1F4h]
  int v62; // [rsp+2F8h] [rbp+1F8h]
  int v63; // [rsp+2FCh] [rbp+1FCh]
  int v64; // [rsp+300h] [rbp+200h]
  int v65; // [rsp+304h] [rbp+204h]
  int v66; // [rsp+308h] [rbp+208h]
  int v67; // [rsp+30Ch] [rbp+20Ch]
  __int64 v68; // [rsp+310h] [rbp+210h]
  unsigned int v69; // [rsp+318h] [rbp+218h]
  int v70; // [rsp+31Ch] [rbp+21Ch]

  v13 = 0;
  v14 = a6;
  v46 = a1;
  v57 = 0LL;
  v70 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v38, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v38) )
  {
    if ( (*((_DWORD *)v38[0] + 9) & 0x10000) != 0 )
    {
LABEL_9:
      EngSetLastError(0x57u);
      goto LABEL_81;
    }
    v17 = 1;
    if ( !a9 || BYTE2(a12) == HIBYTE(a12) )
    {
      v18 = (unsigned __int8)gajRop3[BYTE2(a12)];
      v69 = BYTE2(a12) | (BYTE2(a12) << 8);
    }
    else
    {
      SURFREF::SURFREF((SURFREF *)v43, a9);
      if ( !v44 || (v57 = v44, *(_WORD *)(v44 + 100)) || *(_DWORD *)(v44 + 96) != 1 )
      {
        EngSetLastError(6u);
        if ( v44 )
          DEC_SHARE_REF_CNT(v44, v19);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v43);
        goto LABEL_81;
      }
      INC_SHARE_REF_CNT(v44);
      v70 |= 0x30000u;
      v69 = HIWORD(a12);
      v18 = (unsigned __int8)gajRop3[BYTE2(a12)] | (unsigned __int8)gajRop3[(unsigned __int64)HIWORD(a12) >> 8] | 0x10000;
      if ( v44 )
        DEC_SHARE_REF_CNT(v44, gajRop3);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v43);
    }
    v40[0] = 0LL;
    v40[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v41);
    v40[0] = 0LL;
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v45);
    if ( (v18 & 0xD4) != 0 && (XDCOBJ::vLock((XDCOBJ *)v40, a6), v40[0]) )
    {
      bSpDwmValidateSurface((struct XDCOBJ *)v40, a7, a8, a4, a5);
      DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v45, (struct XDCOBJ *)v38, (struct XDCOBJ *)v40);
    }
    else
    {
      DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v45, v38);
    }
    if ( (v45[112] & 1) == 0 )
    {
      v20 = XDCOBJ::bFullScreen((XDCOBJ *)v38);
LABEL_79:
      v13 = v20;
      goto LABEL_80;
    }
    v55 = *((_QWORD *)v38[0] + 62);
    EXFORMOBJ::vInit((EXFORMOBJ *)v49, (struct XDCOBJ *)v38, 0x204u, 0);
    v24 = v38[0];
    v51 = *(_QWORD *)(v55 + 128);
    v52 = *((_QWORD *)v38[0] + 11);
    if ( (v18 & 0xD4) != 0 )
    {
      if ( !v40[0] )
        goto LABEL_30;
      if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v40)
        || (*(_DWORD *)(*(_QWORD *)(v26 + 496) + 112LL) & 0x10000000) != 0 )
      {
        v27 = XDCOBJ::pSurfaceEff((XDCOBJ *)v40);
        if ( ((unsigned int)v21 & *((_DWORD *)v27 + 28)) != 0
          && *(_DWORD *)(v22 + 32) == 2
          && (*(_DWORD *)(v22 + 36) & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v42, (struct XDCOBJ *)v38, 516);
          v46 = (HDC)__PAIR64__(a3, a2);
          v47 = a4 + a2;
          v48 = a3 + a5;
          if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v42, (struct _POINTL *)&v46) )
          {
            ERECTL::vOrder((ERECTL *)&v46);
            XDCOBJ::vAccumulate((XDCOBJ *)v38, (struct ERECTL *)&v46);
            XDCOBJ::vAccumulateTight((XDCOBJ *)v38, (struct ERECTL *)&v46);
          }
          goto LABEL_59;
        }
        if ( (*(_DWORD *)(v28 + 36) & 1) == 0 )
        {
LABEL_58:
          v17 = 0;
LABEL_59:
          v13 = v17;
          goto LABEL_80;
        }
      }
      v29 = XDCOBJ::pSurfaceEff((XDCOBJ *)v40);
      if ( !(unsigned int)SrcSurfaceAccessCheck(v29) )
      {
        v30 = 5;
LABEL_57:
        EngSetLastError(v30);
        goto LABEL_58;
      }
      v56 = XDCOBJ::pSurfaceEff((XDCOBJ *)v40);
      v53 = *((_QWORD *)v56 + 16);
      v54 = *(_QWORD *)(v40[0] + 88LL);
      EXFORMOBJ::vInit((EXFORMOBJ *)v50, (struct XDCOBJ *)v40, 0x204u, 0);
      if ( (*(_DWORD *)(v50[0] + 32LL) & 1) == 0 || !(unsigned int)BLTRECORD::Src((BLTRECORD *)v49, a7, a8, a4, a5) )
      {
        v30 = 87;
        goto LABEL_57;
      }
      if ( (v18 & 0x10000) != 0 )
      {
        v64 = a10;
        v66 = a10 + v62 - v60;
        v65 = a11;
        v67 = a11 + v63 - v61;
      }
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            &v58,
                            0LL,
                            *((_DWORD *)v38[0] + 30),
                            v53,
                            v51,
                            v54,
                            v52,
                            *(_DWORD *)(*((_QWORD *)v38[0] + 122) + 184LL),
                            *(_DWORD *)(*((_QWORD *)v38[0] + 122) + 176LL),
                            a13,
                            0) )
        goto LABEL_80;
      v70 |= 2u;
      v24 = v38[0];
    }
    else
    {
      v56 = 0LL;
      if ( (v18 & 0x10000) != 0 )
      {
        if ( !a6 )
          v14 = v46;
        XDCOBJ::vLock((XDCOBJ *)v40, v14);
        if ( !v40[0] )
        {
          v25 = 6;
          goto LABEL_31;
        }
        EXFORMOBJ::vInit((EXFORMOBJ *)v50, (struct XDCOBJ *)v40, 0x204u, 0);
        if ( (*(_DWORD *)(v50[0] + 32LL) & 1) == 0
          || (v31 = a5, !(unsigned int)BLTRECORD::Msk((BLTRECORD *)v49, a10, a11, a4, a5)) )
        {
LABEL_30:
          v25 = 87;
LABEL_31:
          EngSetLastError(v25);
LABEL_80:
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v45, v21, (SURFACE **)v22);
          MDCOBJ::~MDCOBJ((MDCOBJ *)v40);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v41);
          goto LABEL_81;
        }
        v24 = v38[0];
LABEL_49:
        if ( (v18 & 0xE8) != 0 )
        {
          v32 = *(_DWORD *)(*((_QWORD *)v24 + 122) + 152LL);
          v59 = (char *)v24 + 1208;
          if ( (v32 & 0x1000) != 0 )
          {
            GreDCSelectBrush(v24, *(_QWORD *)(*((_QWORD *)v24 + 122) + 160LL));
            v24 = v38[0];
          }
          v21 = *((_QWORD *)v24 + 122);
          v33 = *(_DWORD *)(v21 + 152);
          if ( (v33 & 1) != 0 || (*((_DWORD *)v24 + 79) & 1) != 0 )
          {
            *(_DWORD *)(v21 + 152) = v33 & 0xFFFFFFFE;
            *((_DWORD *)v38[0] + 79) &= ~1u;
            EBRUSHOBJ::vInitBrush(v59, v38[0], *((_QWORD *)v38[0] + 17), v52, v51, v55, 1);
            v24 = v38[0];
          }
          v68 = *((_QWORD *)v24 + 150);
        }
        else
        {
          v59 = 0LL;
        }
        if ( !(unsigned int)DestSurfaceAccessCheck(*((struct SURFACE **)v24 + 62), v21, (__int64)v24, v23) )
        {
          v25 = 5;
          goto LABEL_31;
        }
        if ( (*(_DWORD *)(v49[0] + 32LL) & 1) != 0 )
        {
          if ( (unsigned int)BLTRECORD::Trg((BLTRECORD *)v49, a2, a3, a4, v31) )
          {
            if ( (v18 & 0xD4) == 0 || BLTRECORD::bEqualExtents((BLTRECORD *)v49) )
              v20 = BLTRECORD::bBitBlt((BLTRECORD *)v49, v38, (struct DCOBJ *)v40, v18);
            else
              v20 = BLTRECORD::bStretch(
                      (BLTRECORD *)v49,
                      v38,
                      (struct DCOBJ *)v40,
                      v18,
                      *(_BYTE *)(*((_QWORD *)v38[0] + 122) + 215LL));
            goto LABEL_79;
          }
        }
        else if ( (unsigned int)BLTRECORD::TrgPlg((BLTRECORD *)v49, a2, a3, a4, v31) )
        {
          v20 = BLTRECORD::bRotate(
                  (BLTRECORD *)v49,
                  (struct DCOBJ *)v38,
                  (struct DCOBJ *)v40,
                  v18,
                  *(_BYTE *)(*((_QWORD *)v38[0] + 122) + 215LL));
          goto LABEL_79;
        }
        goto LABEL_30;
      }
    }
    v31 = a5;
    goto LABEL_49;
  }
  if ( !v38[0] )
    goto LABEL_9;
  v16 = *((_DWORD *)v38[0] + 9);
  if ( (v16 & 0x10000) != 0 )
    goto LABEL_9;
  if ( (v16 & 0xE0) == 0 )
  {
LABEL_7:
    v13 = 1;
    goto LABEL_81;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v42, (struct XDCOBJ *)v38, 516);
  v46 = (HDC)__PAIR64__(a3, a2);
  v47 = a4 + a2;
  v48 = a3 + a5;
  if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v42, (struct _POINTL *)&v46) )
  {
    ERECTL::vOrder((ERECTL *)&v46);
    XDCOBJ::vAccumulate((XDCOBJ *)v38, (struct ERECTL *)&v46);
    goto LABEL_7;
  }
LABEL_81:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v38);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v39);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v49, v34);
  return v13;
}
