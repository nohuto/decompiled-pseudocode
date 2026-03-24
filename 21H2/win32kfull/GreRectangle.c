/*
 * XREFs of GreRectangle @ 0x1C01440E0
 * Callers:
 *     NtGdiRectangle @ 0x1C0143FC0 (NtGdiRectangle.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B4CCC (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B79F8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C00B7A60 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     bFToL @ 0x1C00FB538 (bFToL.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0142564 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x1C014377C (-vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0145120 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C0145E54 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0146E94 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreRectangle(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  __int64 v8; // r10
  LONG v9; // r14d
  unsigned int v10; // edi
  LONG v11; // r15d
  bool v12; // zf
  int v13; // ecx
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // rbx
  __int64 v17; // rsi
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
  __int64 v49; // rax
  int v50; // ebx
  unsigned int v51; // ecx
  __int64 v52; // rbx
  int v54; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v55[2]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v56[32]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v57[4]; // [rsp+68h] [rbp-98h] BYREF
  struct _XFORMOBJ v58[2]; // [rsp+78h] [rbp-88h] BYREF
  struct _RECTL v59; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v60[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL v61; // [rsp+A8h] [rbp-58h] BYREF
  struct _POINTL v62; // [rsp+B0h] [rbp-50h] BYREF
  PATHOBJ v63; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v64; // [rsp+F8h] [rbp-8h]
  _BYTE v65[32]; // [rsp+140h] [rbp+40h] BYREF
  int v66; // [rsp+160h] [rbp+60h]
  PATHOBJ ppo; // [rsp+3B0h] [rbp+2B0h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v55, a1);
  v8 = v55[0];
  if ( !v55[0] || (*(_DWORD *)(v55[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v10 = 0;
    goto LABEL_64;
  }
  v9 = a4 - 1;
  v10 = 1;
  v11 = a2 - 1;
  v12 = (*(_DWORD *)(*(_QWORD *)(v55[0] + 976LL) + 108LL) & 1) == 0;
  v13 = *(_DWORD *)(*(_QWORD *)(v55[0] + 976LL) + 108LL) & 1;
  v59.top = a3;
  if ( v12 )
    v9 = a4;
  v59.bottom = a5;
  v59.right = v9;
  if ( !v13 )
    v11 = a2;
  v59.left = v11;
  v14 = *(_QWORD *)(v55[0] + 976LL);
  v15 = *(_DWORD *)(v14 + 152);
  if ( (v15 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v55[0], *(_QWORD *)(v14 + 160));
    v8 = v55[0];
  }
  if ( (v15 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)(v8 + 976) + 168LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v58, (struct XDCOBJ *)v55, 516);
  v16 = *(_QWORD *)&v58[0].ulReserved;
  v17 = v55[0];
  if ( (*(_DWORD *)(*(_QWORD *)&v58[0].ulReserved + 32LL) & 1) == 0 || (*(_DWORD *)(v55[0] + 248LL) & 1) != 0 )
    goto LABEL_47;
  if ( *(struct PEN **)(v55[0] + 144LL) != gpPenNull )
  {
    if ( (*(_DWORD *)(v55[0] + 208LL) & 1) == 0 )
    {
      v32 = *(_DWORD *)(*(_QWORD *)&v58[0].ulReserved + 32LL) & 2;
      if ( *(_DWORD *)(*(_QWORD *)(v55[0] + 976LL) + 208LL) == 2 )
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
          goto LABEL_64;
      }
      RECTANGLEPATHOBJ::vInit((RECTANGLEPATHOBJ *)&ppo, &v59, *(_DWORD *)(v17 + 248) & 4);
      if ( *(struct BRUSH **)(v55[0] + 136LL) == gpbrNull )
      {
        if ( (*(_DWORD *)(v55[0] + 36LL) & 0x40) != 0 )
        {
          v57[3] = a5;
          v57[0] = v11;
          v57[1] = a3;
          v57[2] = v9;
          XDCOBJ::vAccumulate((XDCOBJ *)v55, (struct ERECTL *)v57);
        }
      }
      else
      {
        ++v59.left;
        ++v59.top;
        if ( !ERECTL::bWrapped((ERECTL *)&v59) && !(unsigned int)GreRectBlt((struct DCOBJ *)v55, (struct ERECTL *)&v59) )
        {
          v10 = 0;
          goto LABEL_64;
        }
      }
      v31 = EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v55, (LINEATTRS *)(v17 + 208), 0LL, 1u);
      goto LABEL_46;
    }
LABEL_47:
    EBOX::EBOX((EBOX *)v60, (struct DCOBJ *)v55, &v59, (struct _LINEATTRS *)(v55[0] + 208LL), 0);
    if ( v60[0] )
      goto LABEL_64;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v63, (struct XDCOBJ *)v55, 1);
    if ( v64 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)&v63, 0LL, &v61)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)&v63, 0LL, &v62, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)&v63) )
      {
        if ( (*(_DWORD *)(v55[0] + 248LL) & 1) == 0 )
        {
          v49 = *(_QWORD *)(v55[0] + 144LL);
          if ( v60[1] )
          {
            v52 = *(_QWORD *)(v55[0] + 136LL);
            *(_QWORD *)(v55[0] + 136LL) = v49;
            *(_DWORD *)(v55[0] + 316LL) |= 1u;
            v51 = EPATHOBJ::bStrokeAndOrFill(&v63, (struct XDCOBJ *)v55, 0LL, 0LL, 2u);
            *(_QWORD *)(v55[0] + 136LL) = v52;
            *(_DWORD *)(v55[0] + 316LL) |= 1u;
          }
          else
          {
            v50 = *(_DWORD *)(v17 + 212);
            if ( (*(_DWORD *)(v49 + 40) & 0x800) != 0 )
              *(_DWORD *)(v17 + 212) = 2;
            v51 = EPATHOBJ::bStrokeAndOrFill(&v63, (struct XDCOBJ *)v55, (LINEATTRS *)(v17 + 208), v58, 3u);
            *(_DWORD *)(v17 + 212) = v50;
          }
          v10 = v51;
        }
        goto LABEL_51;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v10 = 0;
LABEL_51:
    EPATHOBJ::vUnlock((EPATHOBJ *)&v63);
    if ( v66 )
    {
      PopThreadGuardedObject(v65);
      v66 = 0;
    }
    goto LABEL_64;
  }
  if ( *(struct BRUSH **)(v55[0] + 136LL) != gpbrNull || (*(_DWORD *)(v55[0] + 36LL) & 0x40) != 0 )
  {
    v18 = *(_DWORD *)(*(_QWORD *)&v58[0].ulReserved + 32LL) & 2;
    if ( *(_DWORD *)(*(_QWORD *)(v55[0] + 976LL) + 208LL) == 2 )
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
      v10 = v31;
    }
  }
LABEL_64:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v55);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v56);
  return v10;
}
