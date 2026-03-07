__int64 __fastcall GreMaskBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        unsigned int a12,
        int a13)
{
  unsigned int v14; // edi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // r14d
  DC *v20; // r8
  __int64 v21; // r9
  struct SURFACE *v22; // rax
  __int64 v23; // rdx
  struct DC *v24; // r8
  unsigned int v25; // ebx
  __int64 v26; // rdx
  struct DC *v27; // r8
  int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // r9
  __int64 v32; // rdx
  struct DC *v33; // r8
  HDC v34; // rdx
  ULONG v35; // ecx
  int v36; // edx
  __int64 v37; // rdx
  int v38; // ecx
  _QWORD v39[2]; // [rsp+60h] [rbp-A0h] BYREF
  DC *v40[2]; // [rsp+70h] [rbp-90h] BYREF
  int v41; // [rsp+80h] [rbp-80h]
  int v42; // [rsp+84h] [rbp-7Ch]
  __int64 v43; // [rsp+88h] [rbp-78h] BYREF
  HDC v44[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v45[224]; // [rsp+A0h] [rbp-60h] BYREF
  HDC v46; // [rsp+180h] [rbp+80h] BYREF
  int v47; // [rsp+188h] [rbp+88h]
  int v48; // [rsp+18Ch] [rbp+8Ch]
  struct _POINTL v49[2]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v50[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v51; // [rsp+1B0h] [rbp+B0h]
  __int64 v52; // [rsp+1B8h] [rbp+B8h]
  __int64 v53; // [rsp+1C0h] [rbp+C0h]
  __int64 v54; // [rsp+1C8h] [rbp+C8h]
  __int64 v55; // [rsp+1D0h] [rbp+D0h]
  struct SURFACE *v56; // [rsp+1D8h] [rbp+D8h]
  __int64 v57; // [rsp+1E0h] [rbp+E0h]
  _BYTE v58[8]; // [rsp+1E8h] [rbp+E8h] BYREF
  char *v59; // [rsp+1F0h] [rbp+F0h]
  int v60; // [rsp+238h] [rbp+138h]
  int v61; // [rsp+23Ch] [rbp+13Ch]
  int v62; // [rsp+240h] [rbp+140h]
  int v63; // [rsp+244h] [rbp+144h]
  int v64; // [rsp+248h] [rbp+148h]
  int v65; // [rsp+24Ch] [rbp+14Ch]
  int v66; // [rsp+250h] [rbp+150h]
  int v67; // [rsp+254h] [rbp+154h]
  __int64 v68; // [rsp+258h] [rbp+158h]
  unsigned int v69; // [rsp+260h] [rbp+160h]
  int v70; // [rsp+264h] [rbp+164h]

  v14 = 0;
  v42 = a2;
  v46 = a1;
  v41 = a3;
  v44[0] = a6;
  v57 = 0LL;
  v70 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v40, a1);
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v40) )
  {
    if ( !v40[0] )
      goto LABEL_44;
    v29 = *((_DWORD *)v40[0] + 9);
    if ( (v29 & 0x10000) != 0 )
      goto LABEL_44;
    if ( (v29 & 0xE0) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v44, (struct XDCOBJ *)v40, 0x204u);
      v47 = a4 + a2;
      v46 = (HDC)__PAIR64__(v41, a2);
      v48 = v41 + a5;
      if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v44, (struct ERECTL *)&v46) )
      {
LABEL_80:
        DCOBJ::~DCOBJ((DCOBJ *)v40);
        goto LABEL_37;
      }
      ERECTL::vOrder((ERECTL *)&v46);
      XDCOBJ::vAccumulate((XDCOBJ *)v40, (struct ERECTL *)&v46);
    }
    v14 = 1;
    goto LABEL_80;
  }
  if ( (*((_DWORD *)v40[0] + 9) & 0x10000) != 0 )
  {
LABEL_44:
    EngSetLastError(0x57u);
    goto LABEL_80;
  }
  v16 = BYTE2(a12);
  if ( !a9 || BYTE2(a12) == HIBYTE(a12) )
  {
    v19 = (unsigned __int8)gajRop3[BYTE2(a12)];
    v69 = BYTE2(a12) | (BYTE2(a12) << 8);
    goto LABEL_9;
  }
  LOBYTE(v16) = 5;
  v17 = HmgShareLockCheck(a9, v16);
  v43 = v17;
  v18 = v17;
  if ( !v17 )
  {
    EngSetLastError(6u);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v43);
    goto LABEL_80;
  }
  v57 = v17;
  if ( *(_WORD *)(v17 + 100) || *(_DWORD *)(v17 + 96) != 1 )
  {
    EngSetLastError(6u);
    DEC_SHARE_REF_CNT(v18);
    goto LABEL_80;
  }
  INC_SHARE_REF_CNT(v17);
  v70 |= 0x30000u;
  v69 = HIWORD(a12);
  v19 = (unsigned __int8)gajRop3[BYTE2(a12)] | (unsigned __int8)gajRop3[(unsigned __int64)HIWORD(a12) >> 8] | 0x10000;
  DEC_SHARE_REF_CNT(v18);
LABEL_9:
  v39[1] = 0LL;
  v39[0] = 0LL;
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v45);
  LODWORD(v43) = v19 & 0xD4;
  if ( (v19 & 0xD4) != 0 && (XDCOBJ::vLock((XDCOBJ *)v39, v44[0]), v39[0]) )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v39, a7, a8, a4, a5);
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v45, (struct XDCOBJ *)v40, (struct XDCOBJ *)v39);
  }
  else
  {
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v45, (struct XDCOBJ *)v40);
  }
  if ( (v45[112] & 1) == 0 )
  {
    v30 = XDCOBJ::bFullScreen((XDCOBJ *)v40);
    goto LABEL_78;
  }
  v55 = *((_QWORD *)v40[0] + 62);
  EXFORMOBJ::vInit((EXFORMOBJ *)v49, (struct XDCOBJ *)v40, 0x204u, 0);
  v20 = v40[0];
  v51 = *(_QWORD *)(v55 + 128);
  v52 = *((_QWORD *)v40[0] + 11);
  if ( (_DWORD)v43 )
  {
    if ( v39[0] )
    {
      if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v39)
        || _bittest((const signed __int32 *)(*(_QWORD *)(v21 + 496) + 112LL), 0x1Cu) )
      {
        if ( _bittest((const signed __int32 *)XDCOBJ::pSurfaceEff((XDCOBJ *)v39) + 28, 0x1Cu)
          && *((_DWORD *)v24 + 8) == 2
          && (*((_DWORD *)v24 + 9) & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v44, (struct XDCOBJ *)v40, 0x204u);
          v46 = (HDC)__PAIR64__(v41, v42);
          v47 = a4 + v42;
          v48 = v41 + a5;
          if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v44, (struct ERECTL *)&v46) )
          {
            ERECTL::vOrder((ERECTL *)&v46);
            XDCOBJ::vAccumulate((XDCOBJ *)v40, (struct ERECTL *)&v46);
            XDCOBJ::vAccumulateTight((XDCOBJ *)v40, (struct ERECTL *)&v46);
          }
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v45, v32, v33);
          DCOBJ::~DCOBJ((DCOBJ *)v39);
          v14 = 1;
          goto LABEL_80;
        }
        if ( (*(_DWORD *)(v31 + 36) & 1) == 0 )
          goto LABEL_79;
      }
      v22 = XDCOBJ::pSurfaceEff((XDCOBJ *)v39);
      if ( !(unsigned int)SrcSurfaceAccessCheck(v22) )
        goto LABEL_74;
      v56 = XDCOBJ::pSurfaceEff((XDCOBJ *)v39);
      v53 = *((_QWORD *)v56 + 16);
      v54 = *(_QWORD *)(v39[0] + 88LL);
      EXFORMOBJ::vInit((EXFORMOBJ *)v50, (struct XDCOBJ *)v39, 0x204u, 0);
      if ( (*(_DWORD *)(v50[0] + 32LL) & 1) == 0 || !(unsigned int)BLTRECORD::Src(v49, a7, a8, a4, a5) )
        goto LABEL_63;
      if ( (v19 & 0x10000) != 0 )
      {
        v64 = a10;
        v66 = a10 + v62 - v60;
        v65 = a11;
        v67 = a11 + v63 - v61;
      }
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            v58,
                            0LL,
                            *((unsigned int *)v40[0] + 30),
                            v53,
                            v51,
                            v54,
                            v52,
                            *(_DWORD *)(*((_QWORD *)v40[0] + 122) + 184LL),
                            *(_DWORD *)(*((_QWORD *)v40[0] + 122) + 176LL),
                            a13,
                            0) )
        goto LABEL_79;
      v70 |= 2u;
      goto LABEL_24;
    }
    goto LABEL_63;
  }
  v56 = 0LL;
  if ( (v19 & 0x10000) != 0 )
  {
    v34 = v46;
    if ( v44[0] )
      v34 = v44[0];
    XDCOBJ::vLock((XDCOBJ *)v39, v34);
    if ( !v39[0] )
    {
      v35 = 6;
LABEL_64:
      EngSetLastError(v35);
LABEL_79:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v45, v23, v24);
      DCOBJ::~DCOBJ((DCOBJ *)v39);
      goto LABEL_80;
    }
    EXFORMOBJ::vInit((EXFORMOBJ *)v50, (struct XDCOBJ *)v39, 0x204u, 0);
    if ( (*(_DWORD *)(v50[0] + 32LL) & 1) != 0 && (unsigned int)BLTRECORD::Msk((BLTRECORD *)v49, a10, a11, a4, a5) )
    {
LABEL_24:
      v20 = v40[0];
      goto LABEL_25;
    }
LABEL_63:
    v35 = 87;
    goto LABEL_64;
  }
LABEL_25:
  if ( (v19 & 0xE8) != 0 )
  {
    v36 = *(_DWORD *)(*((_QWORD *)v20 + 122) + 152LL);
    v59 = (char *)v20 + 1200;
    if ( (v36 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v20, *(_QWORD *)(*((_QWORD *)v20 + 122) + 160LL));
      v20 = v40[0];
    }
    v37 = *((_QWORD *)v20 + 122);
    v38 = *(_DWORD *)(v37 + 152);
    if ( (v38 & 1) != 0 || (*((_DWORD *)v20 + 79) & 1) != 0 )
    {
      *(_DWORD *)(v37 + 152) = v38 & 0xFFFFFFFE;
      *((_DWORD *)v40[0] + 79) &= ~1u;
      EBRUSHOBJ::vInitBrush(v59, v40[0], *((_QWORD *)v40[0] + 17), v52, v51, v55, 1);
      v20 = v40[0];
    }
    v68 = *((_QWORD *)v20 + 149);
  }
  else
  {
    v59 = 0LL;
  }
  if ( !(unsigned int)DestSurfaceAccessCheck(*((struct SURFACE **)v20 + 62)) )
  {
LABEL_74:
    v35 = 5;
    goto LABEL_64;
  }
  if ( (*(_DWORD *)(*(_QWORD *)v49 + 32LL) & 1) == 0 )
  {
    if ( !(unsigned int)BLTRECORD::TrgPlg((BLTRECORD *)v49, v42, v41, a4, a5) )
      goto LABEL_63;
    v30 = BLTRECORD::bRotate(
            (BLTRECORD *)v49,
            (struct DCOBJ *)v40,
            (struct DCOBJ *)v39,
            v19,
            *(_BYTE *)(*((_QWORD *)v40[0] + 122) + 215LL));
LABEL_78:
    v14 = v30;
    goto LABEL_79;
  }
  if ( !(unsigned int)BLTRECORD::Trg((BLTRECORD *)v49, v42, v41, a4, a5) )
    goto LABEL_63;
  if ( (_DWORD)v43 && !BLTRECORD::bEqualExtents((BLTRECORD *)v49) )
  {
    v30 = BLTRECORD::bStretch(
            (BLTRECORD *)v49,
            (struct DCOBJ *)v40,
            (struct DCOBJ *)v39,
            v19,
            *(_BYTE *)(*((_QWORD *)v40[0] + 122) + 215LL));
    goto LABEL_78;
  }
  v25 = BLTRECORD::bBitBlt((BLTRECORD *)v49, v40, (struct DCOBJ *)v39, v19);
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v45, v26, v27);
  if ( v39[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v39);
  if ( v40[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v40);
  v14 = v25;
LABEL_37:
  BLTRECORD::~BLTRECORD((BLTRECORD *)v49);
  return v14;
}
