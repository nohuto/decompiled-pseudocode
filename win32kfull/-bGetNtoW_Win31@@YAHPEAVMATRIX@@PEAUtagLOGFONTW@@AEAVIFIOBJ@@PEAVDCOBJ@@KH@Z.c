/*
 * XREFs of ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C01110FC
 * Callers:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0110DC8 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0016964 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0110B94 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0110BD8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bIs1@EFLOAT@@QEBAHXZ @ 0x1C0152432 (-bIs1@EFLOAT@@QEBAHXZ.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C03057FC (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 */

__int64 __fastcall bGetNtoW_Win31(
        struct MATRIX *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct DCOBJ *a4,
        char a5,
        int a6)
{
  __int64 v6; // r10
  struct IFIOBJ *v7; // r13
  int v9; // r8d
  int v11; // r14d
  char v12; // r12
  LONG lfHeight; // ebx
  int v14; // r15d
  __int16 *v15; // rax
  int v16; // ecx
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm7_4
  unsigned int *v20; // rbx
  int v21; // r14d
  int lfWidth; // eax
  __int16 *v23; // rcx
  float v24; // xmm6_4
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v26; // rcx
  int v27; // esi
  unsigned int v28; // eax
  int v29; // eax
  int v30; // ebx
  int v31; // ecx
  __int16 *v32; // rax
  int v33; // xmm1_4
  __int64 v35; // rax
  float v36; // xmm1_4
  int *v37; // rcx
  int v38; // edx
  float v39; // xmm2_4
  float v40; // xmm0_4
  float v41; // xmm4_4
  int v42; // edx
  float v43; // xmm4_4
  __int16 *v44; // r13
  int v45; // r14d
  int v46; // esi
  int v47; // ecx
  unsigned int v48; // r8d
  float v49; // xmm1_4
  float v50; // xmm4_4
  int v51; // eax
  float v52; // xmm5_4
  float v53; // xmm1_4
  float v54; // xmm3_4
  int v55; // eax
  int v56; // eax
  int lfOrientation; // eax
  __m128i v58; // xmm0
  __int32 v59; // eax
  __int128 v60; // xmm1
  int v61; // eax
  __int128 v62; // xmm0
  __int64 v63; // [rsp+28h] [rbp-C9h] BYREF
  __int64 v64; // [rsp+30h] [rbp-C1h] BYREF
  __int64 v65; // [rsp+38h] [rbp-B9h]
  struct tagLOGFONTW *v66; // [rsp+40h] [rbp-B1h]
  struct IFIOBJ *v67; // [rsp+48h] [rbp-A9h]
  unsigned int *v68; // [rsp+50h] [rbp-A1h] BYREF
  struct MATRIX *v69; // [rsp+58h] [rbp-99h] BYREF
  int v70; // [rsp+64h] [rbp-8Dh]
  _DWORD v71[6]; // [rsp+68h] [rbp-89h] BYREF
  __int64 v72; // [rsp+80h] [rbp-71h]
  int v73; // [rsp+88h] [rbp-69h]
  __int128 v74; // [rsp+90h] [rbp-61h] BYREF
  __int128 v75; // [rsp+A0h] [rbp-51h]
  int v76; // [rsp+B0h] [rbp-41h]

  v6 = *(_QWORD *)a4;
  v67 = a3;
  v7 = a3;
  v66 = a2;
  LODWORD(v65) = 0;
  v9 = 1;
  if ( *(float *)(v6 + 452) == 0.0 || EFLOAT::bIsZero((EFLOAT *)(v6 + 456)) )
    v11 = 0;
  else
    v11 = v9;
  LODWORD(v65) = v11;
  if ( (a5 & 2) != 0 || !v11 && (*(_DWORD *)(*(_QWORD *)(v6 + 976) + 340LL) & 0x1000) != 0 )
    v12 = 0;
  else
    v12 = v9;
  lfHeight = a2->lfHeight;
  v14 = v9;
  if ( !a2->lfHeight )
    lfHeight = lGetDefaultWorldHeight(a4);
  if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 19500LL)
    && !_wcsicmp(v66->lfFaceName, L"MS Shell Dlg")
    && !a6 )
  {
    if ( lfHeight > 0 )
    {
      if ( lfHeight >= 12 )
      {
        if ( lfHeight > 15 )
        {
          if ( lfHeight <= 19 )
            lfHeight = 16;
        }
        else
        {
          lfHeight = 14;
        }
      }
    }
    else
    {
      if ( (unsigned int)(lfHeight + 12) <= 3 )
      {
        lfHeight = -11;
LABEL_36:
        v15 = *(__int16 **)v7;
        goto LABEL_37;
      }
      if ( (unsigned int)(lfHeight + 15) <= 2 )
      {
        lfHeight = -13;
        goto LABEL_36;
      }
    }
  }
  v15 = *(__int16 **)v7;
  if ( lfHeight > 0 )
  {
    v16 = v15[30] + v15[31];
    goto LABEL_13;
  }
LABEL_37:
  v16 = v15[28];
  lfHeight = -lfHeight;
LABEL_13:
  v17 = (float)lfHeight / (float)v16;
  v18 = v17;
  *((float *)a1 + 3) = v17;
  if ( !v12 )
  {
    v19 = *(float *)&v63;
    goto LABEL_15;
  }
  v35 = *(_QWORD *)a4;
  if ( v11 )
  {
    v19 = *(float *)(v35 + 452);
    v36 = *(float *)(v35 + 456);
  }
  else
  {
    v37 = *(int **)(v35 + 976);
    v38 = v37[85];
    if ( (v38 & 0x1000) != 0 )
    {
      v19 = *(float *)&v63;
      v36 = *(float *)&v64;
      goto LABEL_59;
    }
    if ( (v38 & 2) == 0 )
    {
      v39 = (float)v37[84];
      v40 = (float)v37[80];
      v19 = (float)v37[83] / (float)v37[79];
      *(float *)&v63 = v19;
      v36 = v39 / v40;
      *(float *)&v64 = v39 / v40;
      goto LABEL_59;
    }
    v19 = *(float *)(v35 + 320) * 0.0625;
    v36 = *(float *)(v35 + 332) * 0.0625;
  }
  *(float *)&v63 = v19;
  *(float *)&v64 = v36;
LABEL_59:
  v14 = EFLOAT::bIs1((EFLOAT *)&v63);
  v18 = v41;
  if ( !(unsigned int)EFLOAT::bIs1((EFLOAT *)&v64) )
    v18 = v36 * v43;
  if ( v18 < 0.0 )
    LODWORD(v18) ^= _xmm;
  if ( v42 )
    *((_DWORD *)a1 + 3) ^= _xmm;
LABEL_15:
  v20 = *(unsigned int **)(*(_QWORD *)a4 + 48LL);
  v68 = v20;
  if ( !v20 )
    return 0LL;
  v21 = v14;
  lfWidth = v66->lfWidth;
  if ( lfWidth )
  {
    v44 = *(__int16 **)v7;
    LODWORD(v63) = 0;
    v45 = 1;
    v46 = abs32(lfWidth);
    v47 = v44[38];
    LODWORD(v64) = v46;
    v48 = 6;
    v49 = (float)v46;
    v50 = (float)v47 * v18;
    if ( v12 )
    {
      if ( !v14 )
      {
        v49 = v49 * v19;
        v51 = bFToL(v49, (int *)&v64, 6u);
        v46 = v64;
        v45 = v51;
      }
      if ( v49 < 0.0 )
        LODWORD(v49) ^= _xmm;
      if ( v46 < 0 )
        v46 = -v46;
    }
    if ( (unsigned int)bFToL(v50, (int *)&v63, v48) && (int)v63 > 0 && v45 && v46 / 256 < (int)v63
      || (v21 = v14, (*((_DWORD *)v44 + 12) & 4) != 0) )
    {
      v7 = v67;
      v21 = v14;
      v53 = v49 / v52;
LABEL_85:
      v24 = v53;
      goto LABEL_28;
    }
    v7 = v67;
  }
  v23 = *(__int16 **)v7;
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 48LL) & 4) != 0 )
  {
    v24 = v17;
    if ( !v21 )
    {
      v54 = v17 * v19;
      v24 = v54;
      if ( v54 < 0.0 )
        LODWORD(v24) = LODWORD(v54) ^ _xmm;
    }
  }
  else
  {
    v24 = v18;
  }
  v64 = *((_QWORD *)v23 + 16);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v23);
  v26 = v20[10];
  if ( (v26 & 1) != 0 && (v26 = (CurrentThreadDpiAwarenessContext & 0xF) - 1, (unsigned int)v26 > 1) )
    v27 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  else
    v27 = v20[536];
  v28 = W32GetCurrentThreadDpiAwarenessContext(v26);
  if ( (v20[10] & 1) != 0 && (v28 & 0xF) - 1 > 1 )
    v29 = (v28 >> 8) & 0x1FF;
  else
    v29 = v20[537];
  if ( v27 == v29 || (_DWORD)v65 )
  {
    v30 = HIDWORD(v64);
    v31 = v64;
  }
  else
  {
    v55 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v68);
    v30 = v55 * HIDWORD(v64);
    v56 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v68);
    v31 = v56 * v64;
  }
  if ( v31 != v30 )
  {
    v53 = (float)((float)v30 * v24) / (float)v31;
    goto LABEL_85;
  }
LABEL_28:
  if ( !v21 )
    v24 = v24 / v19;
  *(float *)a1 = v24;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 5) = 0;
  *((_DWORD *)a1 + 1) = 0;
  *((_DWORD *)a1 + 2) = 0;
  v70 = 0;
  v32 = *(__int16 **)v7;
  v69 = a1;
  if ( (*((_DWORD *)v32 + 12) & 4) == 0 )
    goto LABEL_31;
  lfOrientation = v66->lfOrientation;
  if ( !lfOrientation )
    goto LABEL_31;
  v72 = 0LL;
  v73 = 0;
  v58 = (__m128i)COERCE_UNSIGNED_INT((float)lfOrientation);
  v76 = 0;
  *(float *)v58.m128i_i32 = *(float *)v58.m128i_i32 / 10.0;
  v74 = 0LL;
  v75 = 0LL;
  v71[0] = efCos((unsigned int)_mm_cvtsi128_si32(v58));
  v71[3] = v71[0];
  v59 = efSin((unsigned int)_mm_cvtsi128_si32(v58));
  v60 = *((_OWORD *)a1 + 1);
  v71[4] = 0;
  v71[5] = 0;
  v58.m128i_i32[0] = v59;
  v61 = *((_DWORD *)a1 + 8);
  v71[1] = v58.m128i_i32[0];
  v71[2] = v58.m128i_i32[0] ^ _xmm;
  v62 = *(_OWORD *)a1;
  v76 = v61;
  v75 = v60;
  v74 = v62;
  if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&v69, (struct MATRIX *)&v74, (struct MATRIX *)v71, 0) )
  {
LABEL_31:
    v33 = *((_DWORD *)a1 + 3) ^ _xmm;
    *((_DWORD *)a1 + 1) ^= _xmm;
    *((_DWORD *)a1 + 3) = v33;
    EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v69, 8u);
    return 1LL;
  }
  return 0LL;
}
