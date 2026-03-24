/*
 * XREFs of NtGdiFastPolyPolyline @ 0x1C0142FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008E970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACD0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00B2C14 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B30BC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B61E0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C0142E2C (-bMakePathRecords@@YAHPEAU_PATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0145DBC (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C016B2A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall NtGdiFastPolyPolyline(HDC a1, struct _VECTORL *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // r12
  unsigned int v7; // r15d
  unsigned int v8; // edi
  struct ECLIPOBJ *v9; // rcx
  __int64 v10; // rdx
  int v11; // esi
  ULONG64 v12; // rdx
  unsigned int v13; // edx
  int v14; // r8d
  unsigned int *v15; // rax
  __int64 v16; // rax
  struct _PATHRECORD *v17; // r14
  __int64 v18; // rdi
  char *v19; // rcx
  int v20; // r13d
  int v21; // r8d
  int v22; // edx
  struct _VECTORFX *v23; // rdi
  unsigned int *v24; // r10
  int v25; // r13d
  int v26; // edx
  int v27; // ecx
  struct ECLIPOBJ *v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r9
  char *v32; // r13
  __int64 v33; // r10
  int v34; // r8d
  int v35; // r15d
  struct REGION *v36; // rax
  struct ECLIPOBJ *v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // eax
  int v41; // eax
  int v42; // [rsp+54h] [rbp-424h]
  int v43; // [rsp+64h] [rbp-414h]
  int v45; // [rsp+88h] [rbp-3F0h]
  int v46; // [rsp+8Ch] [rbp-3ECh]
  struct ECLIPOBJ *v47[6]; // [rsp+98h] [rbp-3E0h] BYREF
  unsigned int *v48; // [rsp+C8h] [rbp-3B0h]
  unsigned int *v49; // [rsp+D0h] [rbp-3A8h]
  unsigned int *v50; // [rsp+D8h] [rbp-3A0h]
  char *v51; // [rsp+E0h] [rbp-398h]
  _QWORD v52[3]; // [rsp+E8h] [rbp-390h] BYREF
  _DWORD v53[2]; // [rsp+100h] [rbp-378h] BYREF
  char *v54; // [rsp+108h] [rbp-370h]
  __int128 v55; // [rsp+110h] [rbp-368h]
  __int128 v56; // [rsp+120h] [rbp-358h]
  __int64 v57; // [rsp+130h] [rbp-348h]
  __int64 v58; // [rsp+138h] [rbp-340h]
  __int64 v59; // [rsp+140h] [rbp-338h]
  __int64 v60; // [rsp+148h] [rbp-330h]
  __m128i v61; // [rsp+150h] [rbp-328h] BYREF
  _BYTE v62[112]; // [rsp+160h] [rbp-318h] BYREF
  char v63; // [rsp+1D0h] [rbp-2A8h] BYREF
  struct _PATHRECORD *v64; // [rsp+1F0h] [rbp-288h]
  struct _PATHRECORD *v65; // [rsp+1F8h] [rbp-280h] BYREF
  __int64 plResult; // [rsp+200h] [rbp-278h] BYREF
  int v67; // [rsp+208h] [rbp-270h]
  int v68; // [rsp+20Ch] [rbp-26Ch]
  __int64 v69; // [rsp+218h] [rbp-260h]
  int v70; // [rsp+220h] [rbp-258h]
  __int64 v71; // [rsp+310h] [rbp-168h] BYREF
  int v72; // [rsp+318h] [rbp-160h]
  int v73; // [rsp+31Ch] [rbp-15Ch]
  _BYTE v74[112]; // [rsp+320h] [rbp-158h] BYREF
  _BYTE v75[4]; // [rsp+390h] [rbp-E8h] BYREF
  __m128i v76[9]; // [rsp+394h] [rbp-E4h] BYREF

  v4 = a4;
  v48 = a3;
  v50 = a3;
  v7 = 0;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v47, a1);
  if ( !v47[0] || (*((_DWORD *)v47[0] + 9) & 0x10000) != 0 )
    goto LABEL_63;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v52, (struct XDCOBJ *)v47, 516);
  v9 = v47[0];
  v51 = (char *)v47[0] + 208;
  v10 = *((_QWORD *)v47[0] + 122);
  v11 = *(_DWORD *)(v10 + 152);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v47[0], *(_QWORD *)(v10 + 160));
    v9 = v47[0];
  }
  if ( (v11 & 0x2000) != 0 )
  {
    GreDCSelectPen(v9, *(_QWORD *)(*((_QWORD *)v9 + 122) + 168LL));
    v9 = v47[0];
  }
  if ( !(_DWORD)v4 )
  {
    v8 = 1;
LABEL_63:
    DCOBJ::~DCOBJ((DCOBJ *)v47);
    return v8;
  }
  v49 = 0LL;
  if ( (unsigned int)v4 <= 0x3FFFFFFF )
  {
    if ( 4 * v4 )
    {
      v12 = (ULONG64)&a3[v4];
      if ( v12 > MmUserProbeAddress || v12 < (unsigned __int64)a3 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v9 = v47[0];
      }
    }
    v13 = 0;
    v14 = v4;
    v15 = a3;
    v49 = a3;
    do
    {
      v13 += *v15++;
      v49 = v15;
      --v14;
    }
    while ( v14 );
    if ( v13 <= 0x1FFFFFFF )
    {
      v16 = 8LL * v13;
      if ( v16 && ((unsigned __int64)a2 + v16 > MmUserProbeAddress || (struct _VECTORL *)((char *)a2 + v16) < a2) )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v9 = v47[0];
      }
      v7 = v13;
    }
  }
  if ( !v7
    || (unsigned int)v4 >= 0x8000000
    || v7 >= 0x8000000
    || (*((_DWORD *)v9 + 62) & 1) != 0
    || (*(_DWORD *)v51 & 3) != 0
    || *((_QWORD *)v51 + 3) )
  {
    goto LABEL_63;
  }
  v60 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v57 = 0LL;
  v17 = 0LL;
  memset(v74, 0, 0x68uLL);
  v18 = 8 * ((unsigned int)v4 + v7 + 2 * (_DWORD)v4);
  if ( (unsigned int)v18 > 0x64 )
  {
    if ( (unsigned int)v18 <= 0x2710000 )
      v17 = (struct _PATHRECORD *)AllocFreeTmpBuffer((unsigned int)v18);
    if ( !v17 )
      goto LABEL_71;
  }
  else
  {
    v17 = (struct _PATHRECORD *)v74;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v62, (struct XDCOBJ *)v47, 0);
  if ( (v62[24] & 1) == 0 )
  {
    v39 = XDCOBJ::bFullScreen((XDCOBJ *)v47);
    goto LABEL_59;
  }
  v19 = (char *)v47[0] + 1024;
  if ( (*((_DWORD *)v47[0] + 10) & 1) == 0 )
    v19 = (char *)v47[0] + 1016;
  v45 = *(_DWORD *)v19;
  v46 = *((_DWORD *)v47[0] + 2 * (*((_DWORD *)v47[0] + 10) & 1) + 255);
  v20 = 1;
  v43 = 1;
  v42 = 0;
  if ( (*(_DWORD *)(v52[0] + 32LL) & 2) != 0
    && (*(_DWORD *)(*((_QWORD *)v47[0] + 122) + 208LL) == 1
     || ((*(_BYTE *)(v52[0] + 24LL) | *(_BYTE *)(v52[0] + 28LL)) & 0xF) == 0) )
  {
    v21 = (*(int *)(v52[0] + 24LL) >> 4) + *(_DWORD *)v19;
    v22 = (*(int *)(v52[0] + 28LL) >> 4) + *((_DWORD *)v47[0] + 2 * (*((_DWORD *)v47[0] + 10) & 1) + 255);
    v23 = a2;
    v24 = v48;
  }
  else
  {
    v23 = (struct _PATHRECORD *)((char *)v17 + v18 - 8LL * v7);
    if ( *(_DWORD *)(*((_QWORD *)v47[0] + 122) + 208LL) == 2 )
    {
      v43 = 0;
      v41 = EXFORMOBJ::bXform((EXFORMOBJ *)v52, a2, v23, v7, 0);
      v21 = *(_DWORD *)(v52[0] + 24LL) + 16 * v45;
      v22 = *(_DWORD *)(v52[0] + 28LL) + 16 * v46;
    }
    else
    {
      v43 = 1;
      v41 = EXFORMOBJ::bXform((EXFORMOBJ *)v52, (struct _POINTL *)a2, (struct _POINTL *)v23, v7);
      v21 = v45;
      v22 = v46;
    }
    v20 = v41;
    v24 = v48;
  }
  v53[0] = v43 != 0 ? 4 : 0;
  v25 = bMakePathRecords(v17, v24, v7, (struct _POINTL *)v23, v4, v21, v22, (LONG *)&plResult, &v65) & v20;
  if ( v43 )
  {
    v71 = plResult;
    v26 = v67;
    v72 = v67;
    v27 = v68;
    v73 = v68;
    if ( (plResult & 0xF8000000) != 0
      || (v67 & 0xF8000000) != 0
      || (plResult & 0xF800000000000000uLL) != 0
      || (v68 & 0xF8000000) != 0 )
    {
      v42 = 1;
    }
    LODWORD(plResult) = 16 * plResult;
    v67 *= 16;
    HIDWORD(plResult) *= 16;
    v68 *= 16;
  }
  else
  {
    LODWORD(v71) = (int)plResult >> 4;
    HIDWORD(v71) = SHIDWORD(plResult) >> 4;
    v26 = (v67 + 15) >> 4;
    v72 = v26;
    v27 = (v68 + 15) >> 4;
    v73 = v27;
    if ( (v26 ^ v67) < 0 || (v27 ^ v68) < 0 )
      v42 = 1;
  }
  if ( v27 == 0x7FFFFFFF || v26 == 0x7FFFFFFF )
  {
    v42 = 1;
  }
  else
  {
    v73 = v27 + 1;
    v72 = v26 + 1;
  }
  if ( v25 )
  {
    v64 = v17;
    v70 = 0;
    v69 = 0LL;
    v53[1] = v7 - v4;
    v54 = &v63;
    v28 = v47[0];
    if ( (*((_DWORD *)v47[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v47, v47[0], (struct ERECTL *)&v71);
      v28 = v47[0];
    }
    if ( *((struct PEN **)v28 + 18) == gpPenNull )
      goto LABEL_69;
    v29 = *((_QWORD *)v28 + 62);
    if ( !v29 )
      goto LABEL_69;
    v30 = *(_QWORD *)(v29 + 128);
    v31 = *((_QWORD *)v28 + 11);
    v32 = (char *)v28 + 1344;
    if ( *((_DWORD *)v28 + 336) == -1 )
    {
      *(_DWORD *)(*((_QWORD *)v28 + 122) + 152LL) |= 2u;
      v28 = v47[0];
    }
    v33 = *((_QWORD *)v28 + 122);
    v34 = *(_DWORD *)(v33 + 152);
    if ( (((unsigned __int8)v34 | *((_BYTE *)v28 + 316)) & 2) != 0 )
    {
      *(_DWORD *)(v33 + 152) = v34 & 0xFFFFFFFD;
      *((_DWORD *)v47[0] + 79) &= ~2u;
      EBRUSHOBJ::vInitBrush(v32, v47[0], *((_QWORD *)v47[0] + 18), v31, v30, v29, 0);
      v28 = v47[0];
    }
    v35 = ((((*(_BYTE *)(*((_QWORD *)v28 + 122) + 212LL) - 1) & 0xF) + 1) << 8) | (((*(_BYTE *)(*((_QWORD *)v28 + 122)
                                                                                              + 212LL)
                                                                                   - 1) & 0xF)
                                                                                 + 1);
    v36 = XDCOBJ::prgnEffRao(v47);
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v75, v36, (struct ERECTL *)&v71, v42);
    if ( ERECTL::bEmpty((ERECTL *)v76) )
    {
LABEL_69:
      v8 = 1;
      goto LABEL_60;
    }
    if ( (*((_DWORD *)v47[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v32 + 30) & 0x100) == 0 )
    {
      v61 = v76[0];
      XDCOBJ::vAccumulateTight((XDCOBJ *)v47, v37, &v61);
    }
    v38 = *(_QWORD *)(v29 + 48);
    ++*(_DWORD *)(v29 + 92);
    if ( (*(_DWORD *)(v29 + 112) & 0x20) != 0 )
      v39 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _BYTE *, _QWORD, char *, _QWORD, char *, int))(v38 + 2800))(
              v29 + 24,
              v53,
              v75,
              0LL,
              v32,
              0LL,
              v51,
              v35);
    else
      v39 = ((__int64 (__fastcall *)(__int64, _DWORD *, _BYTE *, _QWORD, char *, _QWORD, char *, int))EngStrokePath)(
              v29 + 24,
              v53,
              v75,
              0LL,
              v32,
              0LL,
              v51,
              v35);
LABEL_59:
    v8 = v39;
LABEL_60:
    if ( v17 != (struct _PATHRECORD *)v74 )
      FreeTmpBuffer(v17);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v62);
    goto LABEL_63;
  }
  if ( v17 != (struct _PATHRECORD *)v74 )
    FreeTmpBuffer(v17);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v62);
LABEL_71:
  DCOBJ::~DCOBJ((DCOBJ *)v47);
  return 0LL;
}
