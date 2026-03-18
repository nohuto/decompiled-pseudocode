/*
 * XREFs of NtGdiFastPolyPolyline @ 0x1C0139380
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003FD30 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0041930 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C010B4E4 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C0139AE4 (-bMakePathRecords@@YAHPEAU_PATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015DC78 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
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
  int v14; // r9d
  unsigned int *v15; // r8
  int v16; // eax
  __int64 v17; // rax
  struct _PATHRECORD *v19; // r14
  __int64 v20; // rdi
  char *v21; // rcx
  int v22; // r13d
  int v23; // r8d
  int v24; // edx
  struct _VECTORFX *v25; // rdi
  unsigned int *v26; // r10
  int v27; // r13d
  int v28; // edx
  int v29; // ecx
  struct ECLIPOBJ *v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r9
  char *v34; // r13
  __int64 v35; // r10
  int v36; // r8d
  int v37; // r15d
  struct REGION *v38; // rax
  struct ECLIPOBJ *v39; // rdx
  unsigned int v40; // eax
  int v41; // eax
  int v42; // [rsp+54h] [rbp-414h]
  int v43; // [rsp+64h] [rbp-404h]
  int v45; // [rsp+88h] [rbp-3E0h]
  int v46; // [rsp+8Ch] [rbp-3DCh]
  struct ECLIPOBJ *v47[6]; // [rsp+98h] [rbp-3D0h] BYREF
  unsigned int *v48; // [rsp+C8h] [rbp-3A0h]
  unsigned int *v49; // [rsp+D0h] [rbp-398h]
  char *v50; // [rsp+D8h] [rbp-390h]
  __m128i v51; // [rsp+E0h] [rbp-388h] BYREF
  _QWORD v52[2]; // [rsp+F0h] [rbp-378h] BYREF
  _DWORD v53[2]; // [rsp+100h] [rbp-368h] BYREF
  char *v54; // [rsp+108h] [rbp-360h]
  __int128 v55; // [rsp+110h] [rbp-358h]
  __int128 v56; // [rsp+120h] [rbp-348h]
  __int64 v57; // [rsp+130h] [rbp-338h]
  int v58; // [rsp+138h] [rbp-330h]
  int v59; // [rsp+13Ch] [rbp-32Ch]
  __int64 v60; // [rsp+140h] [rbp-328h]
  __int64 v61; // [rsp+148h] [rbp-320h]
  _BYTE v62[112]; // [rsp+150h] [rbp-318h] BYREF
  char v63; // [rsp+1C0h] [rbp-2A8h] BYREF
  struct _PATHRECORD *v64; // [rsp+1E0h] [rbp-288h]
  struct _PATHRECORD *v65; // [rsp+1E8h] [rbp-280h] BYREF
  __m128i plResult; // [rsp+1F0h] [rbp-278h] BYREF
  __int64 v67; // [rsp+208h] [rbp-260h]
  int v68; // [rsp+210h] [rbp-258h]
  __m128i v69; // [rsp+300h] [rbp-168h] BYREF
  _BYTE v70[112]; // [rsp+310h] [rbp-158h] BYREF
  _BYTE v71[4]; // [rsp+380h] [rbp-E8h] BYREF
  __m128i v72[9]; // [rsp+384h] [rbp-E4h] BYREF

  v4 = a4;
  v48 = a3;
  v51.m128i_i64[0] = (__int64)a3;
  v7 = 0;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v47, a1);
  if ( !v47[0] || (*((_DWORD *)v47[0] + 9) & 0x10000) != 0 )
    goto LABEL_26;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v52, (struct XDCOBJ *)v47, 516);
  v9 = v47[0];
  v50 = (char *)v47[0] + 208;
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
LABEL_26:
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
      v16 = *v15++;
      v49 = v15;
      v13 += v16;
      --v14;
    }
    while ( v14 );
    if ( v13 <= 0x1FFFFFFF )
    {
      v17 = 8LL * v13;
      if ( v17 && ((unsigned __int64)a2 + v17 > MmUserProbeAddress || (struct _VECTORL *)((char *)a2 + v17) < a2) )
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
    || (*(_DWORD *)v50 & 3) != 0
    || *((_QWORD *)v50 + 3) )
  {
    goto LABEL_26;
  }
  v61 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v59 = 0;
  v58 = 0;
  v60 = 0LL;
  v57 = 0LL;
  v19 = 0LL;
  memset(v70, 0, 0x68uLL);
  v20 = 8 * ((unsigned int)v4 + v7 + 2 * (_DWORD)v4);
  if ( (unsigned int)v20 <= 0x64 )
  {
    v19 = (struct _PATHRECORD *)v70;
  }
  else
  {
    if ( (unsigned int)v20 <= 0x2710000 )
      v19 = (struct _PATHRECORD *)AllocFreeTmpBuffer((unsigned int)v20);
    if ( !v19 )
      goto LABEL_66;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v62, (struct XDCOBJ *)v47, 0);
  if ( (v62[24] & 1) == 0 )
  {
    v40 = XDCOBJ::bFullScreen((XDCOBJ *)v47);
    goto LABEL_60;
  }
  v21 = (char *)v47[0] + 1024;
  if ( (*((_DWORD *)v47[0] + 10) & 1) == 0 )
    v21 = (char *)v47[0] + 1016;
  v45 = *(_DWORD *)v21;
  v46 = *((_DWORD *)v47[0] + 2 * (*((_DWORD *)v47[0] + 10) & 1) + 255);
  v22 = 1;
  v43 = 1;
  v42 = 0;
  if ( (*(_DWORD *)(v52[0] + 32LL) & 2) != 0
    && (*(_DWORD *)(*((_QWORD *)v47[0] + 122) + 208LL) == 1
     || ((*(_BYTE *)(v52[0] + 24LL) | *(_BYTE *)(v52[0] + 28LL)) & 0xF) == 0) )
  {
    v23 = (*(int *)(v52[0] + 24LL) >> 4) + *(_DWORD *)v21;
    v24 = (*(int *)(v52[0] + 28LL) >> 4) + *((_DWORD *)v47[0] + 2 * (*((_DWORD *)v47[0] + 10) & 1) + 255);
    v25 = a2;
    v26 = v48;
  }
  else
  {
    v25 = (struct _PATHRECORD *)((char *)v19 + v20 - 8LL * v7);
    if ( *(_DWORD *)(*((_QWORD *)v47[0] + 122) + 208LL) == 2 )
    {
      v43 = 0;
      v41 = EXFORMOBJ::bXform((EXFORMOBJ *)v52, a2, v25, v7);
      v23 = *(_DWORD *)(v52[0] + 24LL) + 16 * v45;
      v24 = *(_DWORD *)(v52[0] + 28LL) + 16 * v46;
    }
    else
    {
      v43 = 1;
      v41 = EXFORMOBJ::bXform((EXFORMOBJ *)v52, (struct _POINTL *)a2, (struct _POINTL *)v25, v7);
      v23 = v45;
      v24 = v46;
    }
    v22 = v41;
    v26 = v48;
  }
  v53[0] = v43 != 0 ? 4 : 0;
  v27 = bMakePathRecords(v19, v26, v7, (struct _POINTL *)v25, v4, v23, v24, plResult.m128i_i32, &v65) & v22;
  if ( v43 )
  {
    v69 = plResult;
    v28 = plResult.m128i_i32[2];
    v29 = plResult.m128i_i32[3];
    if ( (plResult.m128i_i32[0] & 0xF8000000) != 0
      || (plResult.m128i_i32[2] & 0xF8000000) != 0
      || (plResult.m128i_i32[1] & 0xF8000000) != 0
      || (plResult.m128i_i32[3] & 0xF8000000) != 0 )
    {
      v42 = 1;
    }
    plResult.m128i_i32[0] *= 16;
    plResult.m128i_i32[2] *= 16;
    plResult.m128i_i32[1] *= 16;
    plResult.m128i_i32[3] *= 16;
  }
  else
  {
    v69.m128i_i32[0] = plResult.m128i_i32[0] >> 4;
    v69.m128i_i32[1] = plResult.m128i_i32[1] >> 4;
    v28 = (plResult.m128i_i32[2] + 15) >> 4;
    v69.m128i_i32[2] = v28;
    v29 = (plResult.m128i_i32[3] + 15) >> 4;
    v69.m128i_i32[3] = v29;
    if ( (v28 ^ plResult.m128i_i32[2]) < 0 || (v29 ^ plResult.m128i_i32[3]) < 0 )
      v42 = 1;
  }
  if ( v29 == 0x7FFFFFFF || v28 == 0x7FFFFFFF )
  {
    v42 = 1;
  }
  else
  {
    v69.m128i_i32[3] = v29 + 1;
    v69.m128i_i32[2] = v28 + 1;
  }
  if ( v27 )
  {
    v64 = v19;
    v68 = 0;
    v67 = 0LL;
    v53[1] = v7 - v4;
    v54 = &v63;
    v30 = v47[0];
    if ( (*((_DWORD *)v47[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v47, v47[0], &v69);
      v30 = v47[0];
    }
    if ( *((struct PEN **)v30 + 18) == gpPenNull )
      goto LABEL_82;
    v31 = *((_QWORD *)v30 + 62);
    if ( !v31 )
      goto LABEL_82;
    v32 = *(_QWORD *)(v31 + 128);
    v33 = *((_QWORD *)v30 + 11);
    v34 = (char *)v30 + 1336;
    if ( *((_DWORD *)v30 + 334) == -1 )
    {
      *(_DWORD *)(*((_QWORD *)v30 + 122) + 152LL) |= 2u;
      v30 = v47[0];
    }
    v35 = *((_QWORD *)v30 + 122);
    v36 = *(_DWORD *)(v35 + 152);
    if ( (((unsigned __int8)v36 | *((_BYTE *)v30 + 316)) & 2) != 0 )
    {
      *(_DWORD *)(v35 + 152) = v36 & 0xFFFFFFFD;
      *((_DWORD *)v47[0] + 79) &= ~2u;
      EBRUSHOBJ::vInitBrush(v34, v47[0], *((_QWORD *)v47[0] + 18), v33, v32, v31, 0);
      v30 = v47[0];
    }
    v37 = ((((*(_BYTE *)(*((_QWORD *)v30 + 122) + 212LL) - 1) & 0xF) + 1) << 8) | (((*(_BYTE *)(*((_QWORD *)v30 + 122)
                                                                                              + 212LL)
                                                                                   - 1) & 0xF)
                                                                                 + 1);
    v38 = XDCOBJ::prgnEffRao(v47);
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v71, v38, (struct ERECTL *)&v69, v42);
    if ( ERECTL::bEmpty((ERECTL *)v72) )
    {
LABEL_82:
      v8 = 1;
      goto LABEL_61;
    }
    if ( (*((_DWORD *)v47[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v34 + 30) & 0x100) == 0 )
    {
      v51 = v72[0];
      XDCOBJ::vAccumulateTight((XDCOBJ *)v47, v39, &v51);
    }
    ++*(_DWORD *)(v31 + 92);
    if ( (*(_DWORD *)(v31 + 112) & 0x20) != 0 )
      v40 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _BYTE *, _QWORD, char *, _QWORD, char *, int))(*(_QWORD *)(v31 + 48) + 2776LL))(
              v31 + 24,
              v53,
              v71,
              0LL,
              v34,
              0LL,
              v50,
              v37);
    else
      v40 = ((__int64 (__fastcall *)(__int64, _DWORD *, _BYTE *, _QWORD, char *, _QWORD, char *, int))EngStrokePath)(
              v31 + 24,
              v53,
              v71,
              0LL,
              v34,
              0LL,
              v50,
              v37);
LABEL_60:
    v8 = v40;
LABEL_61:
    if ( v19 != (struct _PATHRECORD *)v70 )
      FreeTmpBuffer(v19);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v62);
    goto LABEL_26;
  }
  if ( v19 != (struct _PATHRECORD *)v70 )
    FreeTmpBuffer(v19);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v62);
LABEL_66:
  DCOBJ::~DCOBJ((DCOBJ *)v47);
  return 0LL;
}
