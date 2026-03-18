/*
 * XREFs of ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C00179CC
 * Callers:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0017698 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 * Callees:
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C00162A0 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00174DC (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0017528 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0017E64 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C014FF28 (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
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
  unsigned int v7; // edi
  int v10; // r8d
  int v11; // r13d
  char v12; // r12
  LONG lfHeight; // ebx
  int v14; // r15d
  __int64 *v15; // r8
  __int16 *v16; // rax
  __int64 v17; // rcx
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm7_4
  unsigned int *v21; // rbx
  int lfWidth; // eax
  __int64 *v23; // r12
  __int64 v24; // rdx
  float v25; // xmm6_4
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // r14d
  unsigned int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  int v33; // ebx
  int v34; // ecx
  __int64 v35; // rax
  int v36; // xmm1_4
  __int64 v38; // r14
  int v39; // r11d
  int v40; // r8d
  __int64 v41; // rcx
  float v42; // xmm5_4
  float v43; // xmm2_4
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // r9d
  __int64 v47; // rax
  float v48; // xmm1_4
  int v49; // eax
  int IsZero; // eax
  LONG DefaultWorldHeight; // eax
  int v52; // edx
  int v53; // eax
  __int64 v54; // rdx
  int v55; // eax
  int lfOrientation; // eax
  __m128i v57; // xmm0
  __int32 v58; // eax
  __int128 v59; // xmm1
  int v60; // eax
  __int128 v61; // xmm0
  __int64 v62; // [rsp+28h] [rbp-A9h] BYREF
  struct IFIOBJ *v63; // [rsp+30h] [rbp-A1h]
  __int64 v64; // [rsp+38h] [rbp-99h] BYREF
  struct tagLOGFONTW *v65; // [rsp+40h] [rbp-91h]
  unsigned int *v66; // [rsp+48h] [rbp-89h] BYREF
  struct MATRIX *v67; // [rsp+50h] [rbp-81h] BYREF
  int v68; // [rsp+5Ch] [rbp-75h]
  _DWORD v69[6]; // [rsp+60h] [rbp-71h] BYREF
  __int64 v70; // [rsp+78h] [rbp-59h]
  int v71; // [rsp+80h] [rbp-51h]
  _OWORD v72[2]; // [rsp+88h] [rbp-49h] BYREF
  int v73; // [rsp+A8h] [rbp-29h]

  v6 = *(_QWORD *)a4;
  v7 = 0;
  v63 = a3;
  v65 = a2;
  v10 = 1;
  if ( *(float *)(v6 + 452) == 0.0 || (IsZero = EFLOAT::bIsZero((EFLOAT *)(v6 + 456)), v11 = v10, IsZero) )
    v11 = 0;
  if ( (a5 & 2) != 0 || !v11 && (*(_DWORD *)(*(_QWORD *)(v6 + 976) + 340LL) & 0x1000) != 0 )
    v12 = 0;
  else
    v12 = v10;
  lfHeight = a2->lfHeight;
  v14 = v10;
  if ( !a2->lfHeight )
  {
    DefaultWorldHeight = lGetDefaultWorldHeight(a4);
    a2 = v65;
    lfHeight = DefaultWorldHeight;
  }
  if ( gbShellFontCompatible && !_wcsicmp(a2->lfFaceName, L"MS Shell Dlg") && !a6 )
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
LABEL_64:
        v15 = (__int64 *)v63;
        v16 = *(__int16 **)v63;
        goto LABEL_12;
      }
      if ( (unsigned int)(lfHeight + 15) <= 2 )
      {
        lfHeight = -13;
        goto LABEL_64;
      }
    }
  }
  v15 = (__int64 *)v63;
  v16 = *(__int16 **)v63;
  if ( lfHeight <= 0 )
  {
LABEL_12:
    v17 = (unsigned int)v16[28];
    lfHeight = -lfHeight;
    goto LABEL_13;
  }
  v17 = (unsigned int)(v16[30] + v16[31]);
LABEL_13:
  v18 = (float)lfHeight / (float)(int)v17;
  v19 = v18;
  *((float *)a1 + 3) = v18;
  if ( v12 )
  {
    v47 = *(_QWORD *)a4;
    if ( v11 )
    {
      v20 = *(float *)(v47 + 452);
      v48 = *(float *)(v47 + 456);
    }
    else
    {
      v17 = *(_QWORD *)(v47 + 976);
      v52 = *(_DWORD *)(v17 + 340);
      if ( (v52 & 0x1000) != 0 )
      {
        v20 = *(float *)&v62;
        v48 = *(float *)&v62;
      }
      else if ( (v52 & 2) != 0 )
      {
        v20 = *(float *)(v47 + 320) * 0.0625;
        v48 = *(float *)(v47 + 332) * 0.0625;
      }
      else
      {
        v20 = (float)*(int *)(v17 + 332) / (float)*(int *)(v17 + 316);
        v48 = (float)*(int *)(v17 + 336) / (float)*(int *)(v17 + 320);
      }
    }
    if ( v20 != 1.0 )
      v14 = 0;
    v49 = 0;
    if ( v48 != 1.0 )
      v18 = v48 * v18;
    if ( v18 < 0.0 )
      LODWORD(v18) ^= _xmm;
    LOBYTE(v49) = v48 < 0.0;
    if ( v49 )
      *((_DWORD *)a1 + 3) ^= _xmm;
  }
  else
  {
    v20 = *(float *)&v62;
  }
  v21 = *(unsigned int **)(*(_QWORD *)a4 + 48LL);
  v66 = v21;
  if ( v21 )
  {
    lfWidth = v65->lfWidth;
    if ( !lfWidth )
      goto LABEL_17;
    v38 = *v15;
    v39 = 1;
    v40 = abs32(lfWidth);
    v41 = (unsigned int)*(__int16 *)(v38 + 76);
    LODWORD(v62) = v40;
    v42 = (float)(int)v41;
    *(float *)&v64 = (float)v40;
    v43 = v18 * (float)(int)v41;
    if ( v12 )
    {
      if ( !v14 )
      {
        *(float *)&v64 = (float)v40 * v20;
        bFToL(v41, &v62, 6LL);
      }
      EFLOAT::vAbs((EFLOAT *)&v64);
      if ( v40 < 0 )
        v40 = -v40;
    }
    *(float *)&v62 = v43;
    v17 = (unsigned __int8)(SLODWORD(v43) >> 23);
    if ( (unsigned int)v17 <= 0x9E )
    {
      v44 = LODWORD(v43) & 0x7FFFFF | 0x800000LL;
      if ( (unsigned int)v17 < 0x76 )
        v45 = v44 >> (118 - (unsigned __int8)v17);
      else
        v45 = v44 << ((unsigned __int8)v17 - 118);
      v17 = (v45 + 0x80000000LL) >> 32;
      v46 = -((unsigned __int64)(v45 + 0x80000000LL) >> 32);
      if ( v43 >= 0.0 )
        v46 = (unsigned __int64)(v45 + 0x80000000LL) >> 32;
      if ( v46 > 0 )
      {
        if ( v39 )
        {
          v17 = 256LL;
          if ( v40 / 256 < v46 )
            goto LABEL_44;
        }
      }
    }
    if ( (*(_DWORD *)(v38 + 48) & 4) != 0 )
    {
LABEL_44:
      v23 = (__int64 *)v63;
      v25 = *(float *)&v64 / v42;
    }
    else
    {
LABEL_17:
      v23 = (__int64 *)v63;
      v24 = *(_QWORD *)v63;
      if ( (*(_DWORD *)(*(_QWORD *)v63 + 48LL) & 4) != 0 )
      {
        v25 = v19;
        if ( !v14 )
        {
          *(float *)&v62 = v19 * v20;
          EFLOAT::vAbs((EFLOAT *)&v62);
          v25 = *(float *)&v62;
        }
      }
      else
      {
        v25 = v18;
      }
      v63 = *(struct IFIOBJ **)(v24 + 128);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v17, v24);
      v28 = v21[10];
      if ( (v28 & 1) != 0 && (v28 = (CurrentThreadDpiAwarenessContext & 0xF) - 1, (unsigned int)v28 > 1) )
        v29 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
      else
        v29 = v21[536];
      v30 = W32GetCurrentThreadDpiAwarenessContext(v28, v27);
      if ( (v21[10] & 1) != 0 && (v30 & 0xF) - 1 > 1 )
        v32 = (v30 >> 8) & 0x1FF;
      else
        v32 = v21[537];
      if ( v29 == v32 || v11 )
      {
        v33 = HIDWORD(v63);
        v34 = (int)v63;
      }
      else
      {
        v53 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v66, v31);
        v33 = v53 * HIDWORD(v63);
        v55 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v66, v54);
        v34 = v55 * (_DWORD)v63;
      }
      if ( v34 != v33 )
        v25 = (float)((float)v33 * v25) / (float)v34;
    }
    if ( !v14 )
      v25 = v25 / v20;
    *(float *)a1 = v25;
    *((_QWORD *)a1 + 2) = 0LL;
    *(_QWORD *)((char *)a1 + 4) = 0LL;
    v35 = *v23;
    v67 = a1;
    v68 = 0;
    if ( (*(_DWORD *)(v35 + 48) & 4) == 0 )
      goto LABEL_32;
    lfOrientation = v65->lfOrientation;
    if ( !lfOrientation )
      goto LABEL_32;
    v57 = (__m128i)COERCE_UNSIGNED_INT((float)lfOrientation);
    v70 = 0LL;
    v71 = 0;
    *(float *)v57.m128i_i32 = *(float *)v57.m128i_i32 / 10.0;
    v69[0] = efCos((unsigned int)_mm_cvtsi128_si32(v57));
    v69[3] = v69[0];
    v58 = efSin((unsigned int)_mm_cvtsi128_si32(v57));
    v59 = *((_OWORD *)a1 + 1);
    v69[4] = 0;
    v69[5] = 0;
    v57.m128i_i32[0] = v58;
    v60 = *((_DWORD *)a1 + 8);
    v69[1] = v57.m128i_i32[0];
    v69[2] = v57.m128i_i32[0] ^ _xmm;
    v61 = *(_OWORD *)a1;
    v73 = v60;
    v72[1] = v59;
    v72[0] = v61;
    if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&v67, (struct MATRIX *)v72, (struct MATRIX *)v69, 0) )
    {
LABEL_32:
      v36 = *((_DWORD *)a1 + 3) ^ _xmm;
      *((_DWORD *)a1 + 1) ^= _xmm;
      *((_DWORD *)a1 + 3) = v36;
      EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v67, 8u);
      return 1;
    }
  }
  return v7;
}
