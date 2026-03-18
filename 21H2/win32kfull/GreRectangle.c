/*
 * XREFs of GreRectangle @ 0x1C0136C70
 * Callers:
 *     NtGdiRectangle @ 0x1C0136B50 (NtGdiRectangle.c)
 * Callees:
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C008E110 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0134298 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137840 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0137C34 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C01388F0 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x1C0139280 (-vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C02AEC68 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 */

__int64 __fastcall GreRectangle(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  POINTL *v8; // r10
  unsigned int v9; // edi
  LONG v10; // r14d
  LONG v11; // r15d
  bool v12; // zf
  int v13; // ecx
  POINTL v14; // rdx
  int v15; // ebx
  __int64 v16; // rbx
  POINTL *v17; // rsi
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // r8d
  int v23; // r8d
  int v24; // eax
  unsigned int v25; // r8d
  int v26; // eax
  int v27; // eax
  unsigned int v28; // r8d
  unsigned int v29; // r8d
  unsigned int v30; // r8d
  unsigned int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  unsigned int v36; // r8d
  int v37; // r8d
  int v38; // eax
  unsigned int v39; // r8d
  LONG v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // edx
  unsigned int v44; // r8d
  int v45; // ecx
  unsigned int v46; // r8d
  int v47; // edx
  unsigned int v48; // r8d
  POINTL v49; // rax
  LONG y; // ebx
  unsigned int v51; // ecx
  POINTL v52; // rbx
  int v54; // [rsp+30h] [rbp-D0h] BYREF
  POINTL *v55[2]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v56[32]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v57[4]; // [rsp+68h] [rbp-98h] BYREF
  struct _XFORMOBJ v58[2]; // [rsp+78h] [rbp-88h] BYREF
  struct _RECTL v59; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v60[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL v61; // [rsp+A8h] [rbp-58h] BYREF
  struct _POINTL v62; // [rsp+B0h] [rbp-50h] BYREF
  PATHOBJ v63; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v64; // [rsp+F8h] [rbp-8h]
  PATHOBJ ppo; // [rsp+3B0h] [rbp+2B0h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v55, a1);
  v8 = v55[0];
  if ( !v55[0] || (v55[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v9 = 0;
    goto LABEL_63;
  }
  v9 = 1;
  v10 = a4 - 1;
  v11 = a2 - 1;
  v12 = (*(_DWORD *)(*(_QWORD *)&v55[0][122] + 108LL) & 1) == 0;
  v13 = *(_DWORD *)(*(_QWORD *)&v55[0][122] + 108LL) & 1;
  v59.top = a3;
  if ( v12 )
    v10 = a4;
  v59.bottom = a5;
  v59.right = v10;
  if ( (v13 & 1) == 0 )
    v11 = a2;
  v59.left = v11;
  v14 = v55[0][122];
  v15 = *(_DWORD *)(*(_QWORD *)&v14 + 152LL);
  if ( (v15 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v55[0], *(_QWORD *)(*(_QWORD *)&v14 + 160LL));
    v8 = v55[0];
  }
  if ( (v15 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)&v8[122] + 168LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v58, (struct XDCOBJ *)v55, 516);
  v16 = *(_QWORD *)&v58[0].ulReserved;
  v17 = v55[0];
  if ( (*(_DWORD *)(*(_QWORD *)&v58[0].ulReserved + 32LL) & 1) == 0 || (v55[0][31].x & 1) != 0 )
    goto LABEL_47;
  if ( (struct PEN *)v55[0][18] != gpPenNull )
  {
    if ( (v55[0][26].x & 1) == 0 )
    {
      v32 = *(_DWORD *)(*(_QWORD *)&v58[0].ulReserved + 32LL) & 2;
      if ( *(_DWORD *)(*(_QWORD *)&v55[0][122] + 208LL) == 2 )
      {
        if ( v32 )
        {
          v41 = (*(_DWORD *)(*(_QWORD *)&v58[0].ulReserved + 24LL) + 15) >> 4;
          v59.left += v41;
          v59.right += v41;
          v42 = (*(_DWORD *)(*(_QWORD *)&v58[0].ulReserved + 28LL) + 15) >> 4;
          v59.top += v42;
          v59.bottom += v42;
        }
        else
        {
          v54 = 0;
          bFToL((float)v59.left * **(float **)&v58[0].ulReserved, &v54, 0);
          v43 = *(_DWORD *)(v16 + 24) + v54 + 15;
          v54 &= v44;
          v59.left = v43 >> 4;
          bFToL((float)v59.right * *(float *)v16, &v54, v44);
          v45 = *(_DWORD *)(v16 + 24) + v54 + 15;
          v54 &= v46;
          v59.right = v45 >> 4;
          bFToL((float)v59.top * *(float *)(v16 + 12), &v54, v46);
          v47 = *(_DWORD *)(v16 + 28) + v54 + 15;
          v54 &= v48;
          v59.top = v47 >> 4;
          bFToL((float)v59.bottom * *(float *)(v16 + 12), &v54, v48);
          v59.bottom = (*(_DWORD *)(v16 + 28) + v54 + 15) >> 4;
        }
        ERECTL::vOrder((ERECTL *)&v59);
      }
      else
      {
        if ( v32 )
        {
          v33 = ((*(int *)(*(_QWORD *)&v58[0].ulReserved + 24LL) >> 3) + 1) >> 1;
          v59.left += v33;
          v59.right += v33;
          v34 = ((*(int *)(*(_QWORD *)&v58[0].ulReserved + 28LL) >> 3) + 1) >> 1;
          v59.top += v34;
          v59.bottom += v34;
        }
        else
        {
          v54 = 0;
          bFToL((float)v59.left * **(float **)&v58[0].ulReserved, &v54, 0);
          v35 = v54 + *(_DWORD *)(v16 + 24);
          v54 &= v36;
          v59.left = ((v35 >> 3) + 1) >> 1;
          bFToL((float)v59.right * *(float *)v16, &v54, v36);
          v37 = v54 + *(_DWORD *)(v16 + 24);
          v54 = 0;
          v59.right = ((v37 >> 3) + 1) >> 1;
          bFToL((float)v59.top * *(float *)(v16 + 12), &v54, 0);
          v38 = v54 + *(_DWORD *)(v16 + 28);
          v54 &= v39;
          v59.top = ((v38 >> 3) + 1) >> 1;
          bFToL((float)v59.bottom * *(float *)(v16 + 12), &v54, v39);
          v59.bottom = (((v54 + *(_DWORD *)(v16 + 28)) >> 3) + 1) >> 1;
        }
        ERECTL::vOrder((ERECTL *)&v59);
        v40 = v59.bottom - 1;
        --v59.right;
        --v59.bottom;
        if ( v59.left > v59.right || v59.top > v40 )
          goto LABEL_63;
      }
      RECTANGLEPATHOBJ::vInit((RECTANGLEPATHOBJ *)&ppo, &v59, v17[31].x & 4);
      if ( (struct BRUSH *)v55[0][17] == gpbrNull )
      {
        if ( (v55[0][4].y & 0x40) != 0 )
        {
          v57[3] = a5;
          v57[0] = v11;
          v57[1] = a3;
          v57[2] = v10;
          XDCOBJ::vAccumulate((XDCOBJ *)v55, (struct ERECTL *)v57);
        }
      }
      else
      {
        ++v59.left;
        ++v59.top;
        if ( !ERECTL::bWrapped((ERECTL *)&v59) && !(unsigned int)GreRectBlt((struct DCOBJ *)v55, (struct ERECTL *)&v59) )
        {
          v9 = 0;
          goto LABEL_63;
        }
      }
      v31 = EPATHOBJ::bStrokeAndOrFill(&ppo, v55, (LINEATTRS *)&v17[26], 0LL, 1u);
      goto LABEL_46;
    }
LABEL_47:
    EBOX::EBOX((EBOX *)v60, (struct DCOBJ *)v55, &v59, (struct _LINEATTRS *)&v55[0][26], 0);
    if ( v60[0] )
      goto LABEL_63;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v63, (struct XDCOBJ *)v55, 1);
    if ( v64 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)&v63, 0LL, &v61)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)&v63, 0LL, &v62, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)&v63) )
      {
        if ( (v55[0][31].x & 1) == 0 )
        {
          v49 = v55[0][18];
          if ( v60[1] )
          {
            v52 = v55[0][17];
            v55[0][17] = v49;
            v55[0][39].y |= 1u;
            v51 = EPATHOBJ::bStrokeAndOrFill(&v63, v55, 0LL, 0LL, 2u);
            v55[0][17] = v52;
            v55[0][39].y |= 1u;
          }
          else
          {
            y = v17[26].y;
            if ( (*(_DWORD *)(*(_QWORD *)&v49 + 40LL) & 0x800) != 0 )
              v17[26].y = 2;
            v51 = EPATHOBJ::bStrokeAndOrFill(&v63, v55, (LINEATTRS *)&v17[26], v58, 3u);
            v17[26].y = y;
          }
          v9 = v51;
        }
        goto LABEL_51;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v9 = 0;
LABEL_51:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v63);
    goto LABEL_63;
  }
  if ( (struct BRUSH *)v55[0][17] != gpbrNull || (v55[0][4].y & 0x40) != 0 )
  {
    v18 = *(_DWORD *)(*(_QWORD *)&v58[0].ulReserved + 32LL) & 2;
    if ( *(_DWORD *)(*(_QWORD *)&v55[0][122] + 208LL) == 2 )
    {
      if ( v18 )
      {
        v26 = (*(_DWORD *)(*(_QWORD *)&v58[0].ulReserved + 24LL) + 15) >> 4;
        v59.left += v26;
        v59.right += v26;
        v27 = (*(_DWORD *)(*(_QWORD *)&v58[0].ulReserved + 28LL) + 15) >> 4;
        v59.top += v27;
        v59.bottom += v27;
      }
      else
      {
        v54 = 0;
        bFToL((float)v59.left * **(float **)&v58[0].ulReserved, &v54, 0);
        v59.left = (*(_DWORD *)(v16 + 24) + v54 + 15) >> 4;
        v54 = 0;
        bFToL((float)v59.right * *(float *)v16, &v54, v28);
        v59.right = (*(_DWORD *)(v16 + 24) + v54 + 15) >> 4;
        v54 = 0;
        bFToL((float)v59.top * *(float *)(v16 + 12), &v54, v29);
        v59.top = (*(_DWORD *)(v16 + 28) + v54 + 15) >> 4;
        v54 = 0;
        bFToL((float)v59.bottom * *(float *)(v16 + 12), &v54, v30);
        v59.bottom = (*(_DWORD *)(v16 + 28) + v54 + 15) >> 4;
      }
      ERECTL::vOrder((ERECTL *)&v59);
    }
    else
    {
      if ( v18 )
      {
        v19 = ((*(int *)(*(_QWORD *)&v58[0].ulReserved + 24LL) >> 3) + 1) >> 1;
        v59.left += v19;
        v59.right += v19;
        v20 = ((*(int *)(*(_QWORD *)&v58[0].ulReserved + 28LL) >> 3) + 1) >> 1;
        v59.top += v20;
        v59.bottom += v20;
      }
      else
      {
        v54 = 0;
        bFToL((float)v59.left * **(float **)&v58[0].ulReserved, &v54, 0);
        v21 = ((v54 + *(_DWORD *)(v16 + 24)) >> 3) + 1;
        v54 = 0;
        v59.left = v21 >> 1;
        bFToL((float)v59.right * *(float *)v16, &v54, v22);
        v23 = ((v54 + *(_DWORD *)(v16 + 24)) >> 3) + 1;
        v54 = 0;
        v59.right = v23 >> 1;
        bFToL((float)v59.top * *(float *)(v16 + 12), &v54, 0);
        v24 = ((v54 + *(_DWORD *)(v16 + 28)) >> 3) + 1;
        v54 = 0;
        v59.top = v24 >> 1;
        bFToL((float)v59.bottom * *(float *)(v16 + 12), &v54, v25);
        v59.bottom = (((v54 + *(_DWORD *)(v16 + 28)) >> 3) + 1) >> 1;
      }
      ERECTL::vOrder((ERECTL *)&v59);
      --v59.right;
      --v59.bottom;
    }
    if ( !ERECTL::bWrapped((ERECTL *)&v59) )
    {
      v31 = GreRectBlt((struct DCOBJ *)v55, (struct ERECTL *)&v59);
LABEL_46:
      v9 = v31;
    }
  }
LABEL_63:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v55);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v56);
  return v9;
}
