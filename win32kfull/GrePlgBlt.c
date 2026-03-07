__int64 __fastcall GrePlgBlt(
        HDC a1,
        struct _POINTL *a2,
        HDC a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v12; // edi
  __int64 v15; // rdx
  DC *v16; // r8
  int valid; // eax
  __int64 v19; // r9
  __int64 v20; // rdx
  struct SURFACE *v21; // rax
  struct SURFACE *v22; // rax
  __int64 v23; // rdx
  struct DC *v24; // r8
  __int64 v25; // rdx
  unsigned int v26; // esi
  __int64 v27; // rax
  __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rdx
  struct DC *v33; // r8
  unsigned int v34; // ebx
  unsigned __int8 v35; // r9
  __int64 v36; // rdx
  struct DC *v37; // r8
  ULONG v38; // ecx
  DC *v39[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v40[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v41[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v42[40]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-48h]
  char v44; // [rsp+C0h] [rbp-40h]
  int v45; // [rsp+C4h] [rbp-3Ch]
  int v46; // [rsp+E8h] [rbp-18h]
  char v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  __int64 v49; // [rsp+110h] [rbp+10h]
  __int16 v50; // [rsp+118h] [rbp+18h]
  __int64 v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  __int16 v53; // [rsp+130h] [rbp+30h]
  struct _POINTL v54[2]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v55; // [rsp+180h] [rbp+80h] BYREF
  __int64 v56; // [rsp+190h] [rbp+90h]
  __int64 v57; // [rsp+198h] [rbp+98h]
  __int64 v58; // [rsp+1A0h] [rbp+A0h]
  __int64 v59; // [rsp+1A8h] [rbp+A8h]
  struct SURFACE *v60; // [rsp+1B0h] [rbp+B0h]
  struct SURFACE *v61; // [rsp+1B8h] [rbp+B8h]
  __int64 v62; // [rsp+1C0h] [rbp+C0h]
  char v63[8]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v64; // [rsp+1D0h] [rbp+D0h]
  struct _POINTFIX v65[7]; // [rsp+1E0h] [rbp+E0h] BYREF
  int v66; // [rsp+218h] [rbp+118h]
  int v67; // [rsp+21Ch] [rbp+11Ch]
  int v68; // [rsp+220h] [rbp+120h]
  int v69; // [rsp+224h] [rbp+124h]
  int v70; // [rsp+228h] [rbp+128h]
  int v71; // [rsp+22Ch] [rbp+12Ch]
  int v72; // [rsp+230h] [rbp+130h]
  int v73; // [rsp+234h] [rbp+134h]
  int v74; // [rsp+240h] [rbp+140h]
  int v75; // [rsp+244h] [rbp+144h]

  v12 = 0;
  v62 = 0LL;
  v75 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v39, a1);
  DCOBJ::DCOBJ((DCOBJ *)v40, a3);
  if ( !v39[0] || !v40[0] || (*((_DWORD *)v39[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_54;
  }
  bSpDwmValidateSurface((struct XDCOBJ *)v40, a4, a5, a6, a7);
  v43 = 0LL;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 256;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 256;
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v42, (struct XDCOBJ *)v39, (struct XDCOBJ *)v40);
  if ( (v47 & 1) == 0 )
  {
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v39) || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v40) )
      v12 = 1;
    goto LABEL_8;
  }
  valid = XDCOBJ::bValidSurf((XDCOBJ *)v39);
  v19 = v40[0];
  if ( !valid
    || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v40)
    || (*(_DWORD *)(*(_QWORD *)(v19 + 496) + 112LL) & 0x10000000) != 0 )
  {
    v16 = v39[0];
    v20 = *((_QWORD *)v39[0] + 122);
    if ( (*(_DWORD *)(v20 + 152) & 0x1000) != 0 )
    {
      GreDCSelectBrush(v39[0], *(_QWORD *)(v20 + 160));
      v16 = v39[0];
      v19 = v40[0];
    }
    v15 = *(_QWORD *)(v19 + 976);
    if ( (*(_DWORD *)(v15 + 152) & 0x1000) != 0 )
    {
      GreDCSelectBrush(v19, *(_QWORD *)(v15 + 160));
      v16 = v39[0];
      v19 = v40[0];
    }
    if ( (*((_DWORD *)v16 + 8) == 2 || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v40))
      && (*((_DWORD *)v16 + 9) & 0xE0) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)v54, (struct XDCOBJ *)v39, 0x204u, 0);
      if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v54, a2, v65, 3uLL) )
      {
LABEL_50:
        v38 = 87;
LABEL_51:
        EngSetLastError(v38);
        goto LABEL_26;
      }
      BLTRECORD::vExtrema((BLTRECORD *)v54);
      BLTRECORD::vBound((BLTRECORD *)v54, (struct ERECTL *)v41);
      XDCOBJ::vAccumulate((XDCOBJ *)v39, (struct ERECTL *)v41);
      v16 = v39[0];
      v19 = v40[0];
    }
    if ( (*(_DWORD *)(v19 + 36) & 1) == 0 )
    {
      LOBYTE(v12) = *((_QWORD *)v16 + 62) == 0LL;
LABEL_8:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v42, v15, v16);
      DCOBJ::~DCOBJ((DCOBJ *)v40);
      DCOBJ::~DCOBJ((DCOBJ *)v39);
      BLTRECORD::~BLTRECORD((BLTRECORD *)v54);
      return v12;
    }
  }
  v21 = XDCOBJ::pSurfaceEff((XDCOBJ *)v40);
  if ( !(unsigned int)SrcSurfaceAccessCheck(v21)
    || (v22 = XDCOBJ::pSurfaceEff((XDCOBJ *)v39), !(unsigned int)DestSurfaceAccessCheck(v22)) )
  {
    v38 = 5;
    goto LABEL_51;
  }
  EXFORMOBJ::vInit((EXFORMOBJ *)v54, (struct XDCOBJ *)v39, 0x204u, 0);
  v60 = XDCOBJ::pSurfaceEff((XDCOBJ *)v39);
  v56 = *((_QWORD *)v60 + 16);
  v57 = *((_QWORD *)v39[0] + 11);
  EXFORMOBJ::vInit((EXFORMOBJ *)&v55, (struct XDCOBJ *)v40, 0x204u, 0);
  v61 = XDCOBJ::pSurfaceEff((XDCOBJ *)v40);
  v58 = *((_QWORD *)v61 + 16);
  v59 = *(_QWORD *)(v40[0] + 88LL);
  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                       (Gre::Base *)v63,
                       0LL,
                       *((_DWORD *)v39[0] + 30),
                       v58,
                       v56,
                       v59,
                       v57,
                       *(_DWORD *)(*((_QWORD *)v39[0] + 122) + 184LL),
                       *(_DWORD *)(*((_QWORD *)v39[0] + 122) + 176LL),
                       a11,
                       0) )
  {
    v75 |= 2u;
    v64 = 0LL;
    if ( (*(_DWORD *)(v55 + 32) & 1) != 0 && (unsigned int)BLTRECORD::Src(v54, a4, a5, a6, a7) )
    {
      if ( a8 )
      {
        LOBYTE(v25) = 5;
        v27 = HmgShareLockCheck(a8, v25);
        v41[0] = v27;
        v28 = v27;
        if ( !v27 )
        {
          EngSetLastError(6u);
          EPALOBJ::~EPALOBJ((EPALOBJ *)v41);
          goto LABEL_26;
        }
        INC_SHARE_REF_CNT(v27);
        v75 |= 0x30000u;
        v26 = 65540;
        v62 = v28;
        v74 = 43724;
        if ( *(_WORD *)(v28 + 100) || *(_DWORD *)(v28 + 96) != 1 )
        {
          EngSetLastError(6u);
          DEC_SHARE_REF_CNT(v28);
          v34 = 0;
          goto LABEL_48;
        }
        v70 = a9;
        v72 = a9 + v68 - v66;
        v71 = a10;
        v73 = a10 + v69 - v67;
        DEC_SHARE_REF_CNT(v28);
      }
      else
      {
        v62 = 0LL;
        v26 = 4;
        v74 = 52428;
      }
      if ( EXFORMOBJ::bXform((EXFORMOBJ *)v54, a2, v65, 3uLL) )
      {
        v29 = BLTRECORD::bRotated((BLTRECORD *)v54);
        v30 = *((_QWORD *)v39[0] + 122);
        if ( v29 )
        {
          v31 = BLTRECORD::bRotate(
                  (struct _POINTFIX *)v54,
                  (struct DCOBJ *)v39,
                  (struct DCOBJ *)v40,
                  v26,
                  *(_BYTE *)(v30 + 215));
        }
        else
        {
          v35 = *(_BYTE *)(v30 + 215);
          if ( v35 != 4 && BLTRECORD::bEqualExtents((BLTRECORD *)v54) )
          {
            v34 = BLTRECORD::bBitBlt((BLTRECORD *)v54, v39, (struct DCOBJ *)v40, v26);
            DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v42, v36, v37);
            if ( v40[0] )
              XDCOBJ::vUnlockFast((XDCOBJ *)v40);
            if ( v39[0] )
              XDCOBJ::vUnlockFast((XDCOBJ *)v39);
            goto LABEL_49;
          }
          v31 = BLTRECORD::bStretch((BLTRECORD *)v54, v39, (struct DCOBJ *)v40, v26, v35);
        }
        v34 = v31;
LABEL_48:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v42, v32, v33);
        DCOBJ::~DCOBJ((DCOBJ *)v40);
        DCOBJ::~DCOBJ((DCOBJ *)v39);
LABEL_49:
        BLTRECORD::~BLTRECORD((BLTRECORD *)v54);
        return v34;
      }
    }
    goto LABEL_50;
  }
LABEL_26:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v42, v23, v24);
LABEL_54:
  DCOBJ::~DCOBJ((DCOBJ *)v40);
  DCOBJ::~DCOBJ((DCOBJ *)v39);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v54);
  return 0LL;
}
