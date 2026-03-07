__int64 __fastcall NtGdiFastPolyPolyline(HDC a1, struct _POINTL *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // r12
  unsigned int v7; // r15d
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // esi
  ULONG64 v12; // rdx
  unsigned int v13; // edx
  int v14; // r9d
  unsigned int *v15; // r8
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rax
  struct _PATHRECORD *v19; // r14
  __int64 v20; // rdi
  int *v21; // rcx
  __int64 v22; // rdx
  int v23; // r8d
  int v24; // edx
  int v25; // r13d
  struct _POINTL *v26; // r11
  int v27; // r8d
  int v28; // edx
  struct _POINTL *v29; // rdi
  unsigned int *v30; // r10
  int v31; // r13d
  unsigned __int64 v32; // rdx
  __int64 v33; // r8
  Gre::Base *v34; // rcx
  struct Gre::Base::SESSION_GLOBALS *v35; // rax
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // r13
  __int64 v42; // r10
  int v43; // r15d
  struct REGION *v44; // rax
  unsigned int v45; // eax
  int v47; // eax
  BOOL v48; // [rsp+54h] [rbp-3D4h]
  _QWORD v49[2]; // [rsp+58h] [rbp-3D0h] BYREF
  int v50; // [rsp+68h] [rbp-3C0h]
  int v51; // [rsp+6Ch] [rbp-3BCh]
  unsigned int v52; // [rsp+70h] [rbp-3B8h]
  int v53; // [rsp+74h] [rbp-3B4h]
  unsigned int v54; // [rsp+78h] [rbp-3B0h]
  _BYTE *v55; // [rsp+80h] [rbp-3A8h]
  struct _POINTL *v56; // [rsp+88h] [rbp-3A0h]
  unsigned int v57; // [rsp+90h] [rbp-398h]
  int v58; // [rsp+94h] [rbp-394h]
  int v59; // [rsp+98h] [rbp-390h]
  int v60; // [rsp+9Ch] [rbp-38Ch]
  unsigned int *v61; // [rsp+A8h] [rbp-380h]
  unsigned int *v62; // [rsp+B0h] [rbp-378h]
  __int64 v63; // [rsp+B8h] [rbp-370h]
  __int128 v64; // [rsp+C0h] [rbp-368h] BYREF
  _QWORD v65[2]; // [rsp+D0h] [rbp-358h] BYREF
  _DWORD v66[2]; // [rsp+E0h] [rbp-348h] BYREF
  char *v67; // [rsp+E8h] [rbp-340h]
  __int128 v68; // [rsp+F0h] [rbp-338h]
  __int128 v69; // [rsp+100h] [rbp-328h]
  __int64 v70; // [rsp+110h] [rbp-318h]
  int v71; // [rsp+118h] [rbp-310h]
  int v72; // [rsp+11Ch] [rbp-30Ch]
  __int64 v73; // [rsp+120h] [rbp-308h]
  __int64 v74; // [rsp+128h] [rbp-300h]
  _BYTE v75[80]; // [rsp+130h] [rbp-2F8h] BYREF
  char v76; // [rsp+180h] [rbp-2A8h] BYREF
  struct _PATHRECORD *v77; // [rsp+1A0h] [rbp-288h]
  struct _PATHRECORD *v78; // [rsp+1A8h] [rbp-280h] BYREF
  __int64 plResult; // [rsp+1B0h] [rbp-278h] BYREF
  unsigned int v80; // [rsp+1B8h] [rbp-270h]
  unsigned int v81; // [rsp+1BCh] [rbp-26Ch]
  __int64 v82; // [rsp+1C8h] [rbp-260h]
  int v83; // [rsp+1D0h] [rbp-258h]
  __int64 v84; // [rsp+2C0h] [rbp-168h] BYREF
  int v85; // [rsp+2C8h] [rbp-160h]
  int v86; // [rsp+2CCh] [rbp-15Ch]
  _BYTE v87[112]; // [rsp+2D0h] [rbp-158h] BYREF
  _BYTE v88[4]; // [rsp+340h] [rbp-E8h] BYREF
  __int128 v89[9]; // [rsp+344h] [rbp-E4h] BYREF

  v4 = a4;
  v61 = a3;
  v56 = a2;
  v55 = a2;
  *(_QWORD *)&v64 = a3;
  v54 = a4;
  v7 = 0;
  v52 = 0;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v49, a1);
  if ( !v49[0] || (*(_DWORD *)(v49[0] + 36LL) & 0x10000) != 0 )
    goto LABEL_61;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v65, (struct XDCOBJ *)v49, 0x204u);
  v9 = v49[0];
  v63 = v49[0] + 208LL;
  v10 = *(_QWORD *)(v49[0] + 976LL);
  v11 = *(_DWORD *)(v10 + 152);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v49[0], *(_QWORD *)(v10 + 160));
    v9 = v49[0];
  }
  if ( (v11 & 0x2000) != 0 )
  {
    GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)(v9 + 976) + 168LL));
    v9 = v49[0];
  }
  if ( !(_DWORD)v4 )
  {
    v8 = 1;
LABEL_61:
    DCOBJ::~DCOBJ((DCOBJ *)v49);
    return v8;
  }
  v58 = 0;
  v62 = 0LL;
  v57 = 0;
  if ( (unsigned int)v4 <= 0x3FFFFFFF )
  {
    if ( 4 * v4 )
    {
      v12 = (ULONG64)&a3[v4];
      if ( v12 > MmUserProbeAddress || v12 < (unsigned __int64)a3 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v9 = v49[0];
      }
    }
    v13 = 0;
    v57 = 0;
    v14 = v4;
    v58 = v4;
    v15 = a3;
    v62 = a3;
    do
    {
      v16 = *v15++;
      v62 = v15;
      v13 += v16;
      v57 = v13;
      v17 = v14-- == 1;
      v58 = v14;
    }
    while ( !v17 );
    if ( v13 <= 0x1FFFFFFF )
    {
      v18 = v13;
      if ( v18 * 8 && ((unsigned __int64)&a2[v18] > MmUserProbeAddress || &a2[v18] < a2) )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v9 = v49[0];
      }
      v7 = v13;
      v52 = v13;
    }
  }
  if ( !v7
    || (unsigned int)v4 >= 0x8000000
    || v7 >= 0x8000000
    || (*(_DWORD *)(v9 + 248) & 1) != 0
    || (*(_DWORD *)v63 & 3) != 0
    || *(_QWORD *)(v63 + 24) )
  {
    goto LABEL_61;
  }
  v50 = 0;
  v51 = 0;
  v74 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v72 = 0;
  v71 = 0;
  v73 = 0LL;
  v70 = 0LL;
  v19 = 0LL;
  v55 = 0LL;
  memset_0(v87, 0, 0x68uLL);
  v20 = 8 * ((unsigned int)v4 + v7 + 2 * (_DWORD)v4);
  if ( (unsigned int)v20 > 0x64 )
  {
    if ( (unsigned int)v20 <= 0x2710000 )
    {
      v19 = (struct _PATHRECORD *)AllocFreeTmpBuffer((unsigned int)v20);
      v55 = v19;
    }
    if ( !v19 )
      goto LABEL_67;
  }
  else
  {
    v19 = (struct _PATHRECORD *)v87;
    v55 = v87;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v75, (struct XDCOBJ *)v49, 0);
  if ( (v75[24] & 1) == 0 )
  {
    v45 = XDCOBJ::bFullScreen((XDCOBJ *)v49);
    goto LABEL_57;
  }
  v21 = (int *)(v49[0] + 1024LL);
  v22 = *(_DWORD *)(v49[0] + 40LL) & 1;
  if ( (*(_DWORD *)(v49[0] + 40LL) & 1) == 0 )
    v21 = (int *)(v49[0] + 1016LL);
  v23 = *v21;
  v59 = v23;
  v50 = v23;
  v24 = *(_DWORD *)(v49[0] + 8 * v22 + 1020);
  v60 = v24;
  v51 = v24;
  v25 = 1;
  v53 = 1;
  v48 = 0;
  v26 = v56;
  if ( (*(_DWORD *)(v65[0] + 32LL) & 2) != 0
    && (*(_DWORD *)(*(_QWORD *)(v49[0] + 976LL) + 208LL) == 1
     || ((*(_BYTE *)(v65[0] + 24LL) | *(_BYTE *)(v65[0] + 28LL)) & 0xF) == 0) )
  {
    v27 = (*(int *)(v65[0] + 24LL) >> 4) + v23;
    v50 = v27;
    v28 = (*(int *)(v65[0] + 28LL) >> 4) + v24;
    v51 = v28;
    v29 = v56;
    v30 = v61;
  }
  else
  {
    v29 = (struct _POINTL *)((char *)v19 + v20 - 8LL * v7);
    v56 = v29;
    if ( *(_DWORD *)(*(_QWORD *)(v49[0] + 976LL) + 208LL) == 2 )
    {
      v53 = 0;
      v47 = EXFORMOBJ::bXform((EXFORMOBJ *)v65, (struct _VECTORL *)v26, (struct _VECTORFX *)v29, v7);
      v27 = *(_DWORD *)(v65[0] + 24LL) + 16 * v59;
      v50 = v27;
      v28 = *(_DWORD *)(v65[0] + 28LL) + 16 * v60;
      v51 = v28;
    }
    else
    {
      v53 = 1;
      v47 = EXFORMOBJ::bXform((EXFORMOBJ *)v65, v26, v29, v7);
      v27 = v59;
      v28 = v60;
    }
    v25 = v47;
    v30 = v61;
  }
  v66[0] = v53 != 0 ? 4 : 0;
  v31 = bMakePathRecords(v19, v30, v7, v29, v4, v27, v28, (LONG *)&plResult, &v78) & v25;
  if ( v53 )
  {
    v84 = plResult;
    v32 = v80;
    v85 = v80;
    v33 = v81;
    v86 = v81;
    if ( (plResult & 0xF8000000) != 0
      || (v80 & 0xF8000000) != 0
      || (plResult & 0xF800000000000000uLL) != 0
      || (v81 & 0xF8000000) != 0 )
    {
      v48 = 1;
    }
    LODWORD(plResult) = 16 * plResult;
    v80 *= 16;
    HIDWORD(plResult) *= 16;
    v81 *= 16;
  }
  else
  {
    LODWORD(v84) = (int)plResult >> 4;
    HIDWORD(v84) = SHIDWORD(plResult) >> 4;
    v32 = (unsigned int)((int)(v80 + 15) >> 4);
    v85 = (int)(v80 + 15) >> 4;
    v33 = (unsigned int)((int)(v81 + 15) >> 4);
    v86 = (int)(v81 + 15) >> 4;
    v48 = ((v32 ^ v80 | v33 ^ v81) & 0x80000000) != 0LL;
  }
  if ( (_DWORD)v33 == 0x7FFFFFFF || (_DWORD)v32 == 0x7FFFFFFF )
  {
    v48 = 1;
  }
  else
  {
    v33 = (unsigned int)(v33 + 1);
    v86 = v33;
    v32 = (unsigned int)(v32 + 1);
    v85 = v32;
  }
  if ( v31 )
  {
    v77 = v19;
    v83 = 0;
    v82 = 0LL;
    v66[1] = v7 - v4;
    v67 = &v76;
    v34 = (Gre::Base *)*(unsigned int *)(v49[0] + 36LL);
    if ( ((unsigned __int8)v34 & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v49, (struct ECLIPOBJ *)v32, (struct ERECTL *)&v84);
    v35 = Gre::Base::Globals(v34);
    v37 = v49[0];
    if ( *(_QWORD *)(v49[0] + 144LL) == *((_QWORD *)v35 + 32) )
      goto LABEL_81;
    v38 = *(_QWORD *)(v49[0] + 496LL);
    if ( !v38 )
      goto LABEL_81;
    v39 = *(_QWORD *)(v38 + 128);
    v40 = *(_QWORD *)(v49[0] + 88LL);
    v41 = v49[0] + 1336LL;
    if ( *(_DWORD *)(v49[0] + 1336LL) == -1 )
    {
      *(_DWORD *)(*(_QWORD *)(v49[0] + 976LL) + 152LL) |= 2u;
      v37 = v49[0];
    }
    v42 = *(_QWORD *)(v37 + 976);
    if ( ((*(_BYTE *)(v37 + 316) | *(_BYTE *)(v42 + 152)) & 2) != 0 )
    {
      *(_DWORD *)(v42 + 152) &= ~2u;
      *(_DWORD *)(v49[0] + 316LL) &= ~2u;
      EBRUSHOBJ::vInitBrush(v41, v49[0], *(_QWORD *)(v49[0] + 144LL), v40, v39, v38, 0);
      v37 = v49[0];
    }
    v43 = ((((*(_BYTE *)(*(_QWORD *)(v37 + 976) + 212LL) - 1) & 0xF) + 1) << 8) | (((*(_BYTE *)(*(_QWORD *)(v37 + 976)
                                                                                              + 212LL)
                                                                                   - 1) & 0xF)
                                                                                 + 1);
    v44 = XDCOBJ::prgnEffRao((XDCOBJ *)v49);
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v88, v44, (struct ERECTL *)&v84, v48);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v89) )
    {
LABEL_81:
      v8 = 1;
      goto LABEL_58;
    }
    if ( (*(_DWORD *)(v49[0] + 36LL) & 0xE0) != 0 && (*(_DWORD *)(v41 + 120) & 0x100) == 0 )
    {
      v64 = v89[0];
      XDCOBJ::vAccumulateTight((XDCOBJ *)v49, (struct ECLIPOBJ *)v37, (struct ERECTL *)&v64);
    }
    ++*(_DWORD *)(v38 + 92);
    if ( (*(_DWORD *)(v38 + 112) & 0x20) != 0 )
      v45 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _BYTE *, _QWORD, __int64, _QWORD, __int64, int))(*(_QWORD *)(v38 + 48) + 2776LL))(
              v38 + 24,
              v66,
              v88,
              0LL,
              v41,
              0LL,
              v63,
              v43);
    else
      v45 = ((__int64 (__fastcall *)(__int64, _DWORD *, _BYTE *, _QWORD, __int64, _QWORD, __int64, int))EngStrokePath)(
              v38 + 24,
              v66,
              v88,
              0LL,
              v41,
              0LL,
              v63,
              v43);
LABEL_57:
    v8 = v45;
LABEL_58:
    if ( v19 != (struct _PATHRECORD *)v87 )
      FreeTmpBuffer(v19, v37, v36);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v75);
    goto LABEL_61;
  }
  if ( v19 != (struct _PATHRECORD *)v87 )
    FreeTmpBuffer(v19, v32, v33);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v75);
LABEL_67:
  DCOBJ::~DCOBJ((DCOBJ *)v49);
  return 0LL;
}
