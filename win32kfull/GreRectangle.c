/*
 * XREFs of GreRectangle @ 0x1C02AF0B0
 * Callers:
 *     NtGdiRectangle @ 0x1C02AFBE0 (NtGdiRectangle.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008219C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0088198 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00E42C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014D87C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C014D8B8 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C014DA72 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C028711C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028848C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x1C02898EC (-vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C029CA5C (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C02C7828 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 */

__int64 __fastcall GreRectangle(Gre::Base *a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  struct Gre::Base::SESSION_GLOBALS *v9; // rsi
  POINTL *v10; // r8
  LONG v11; // r15d
  LONG v12; // r14d
  int v13; // eax
  POINTL v14; // rdx
  int v15; // ebx
  __int64 v16; // rbx
  POINTL *v17; // rdi
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // edx
  unsigned int v22; // r8d
  int v23; // ecx
  unsigned int v24; // r8d
  int v25; // edx
  unsigned int v26; // r8d
  int v27; // eax
  int v28; // eax
  unsigned int v29; // r8d
  unsigned int v30; // r8d
  unsigned int v31; // r8d
  unsigned int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  int v36; // edx
  unsigned int v37; // r8d
  int v38; // ecx
  unsigned int v39; // r8d
  int v40; // edx
  unsigned int v41; // r8d
  LONG v42; // eax
  unsigned int v43; // ebx
  int v44; // eax
  int v45; // eax
  int v46; // edx
  unsigned int v47; // r8d
  int v48; // ecx
  unsigned int v49; // r8d
  int v50; // edx
  unsigned int v51; // r8d
  POINTL v53; // rax
  LONG y; // ebx
  unsigned int v55; // esi
  POINTL v56; // rbx
  int v57; // [rsp+30h] [rbp-D0h] BYREF
  POINTL *v58[2]; // [rsp+38h] [rbp-C8h] BYREF
  LONG v59; // [rsp+48h] [rbp-B8h]
  _DWORD v60[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _XFORMOBJ v61[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v62; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v63[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v64; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v65; // [rsp+90h] [rbp-70h] BYREF
  PATHOBJ v66; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v67; // [rsp+D8h] [rbp-28h]
  PATHOBJ ppo; // [rsp+390h] [rbp+290h] BYREF

  v59 = a3;
  v9 = Gre::Base::Globals(a1);
  DCOBJ::DCOBJ((DCOBJ *)v58, (HDC)a1);
  v10 = v58[0];
  if ( !v58[0] || (v58[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v58);
    return 0LL;
  }
  else
  {
    v11 = a2 - 1;
    v12 = a4 - 1;
    v13 = *(_DWORD *)(*(_QWORD *)&v58[0][122] + 108LL);
    v62.top = a3;
    if ( (v13 & 1) == 0 )
    {
      v11 = a2;
      v12 = a4;
    }
    v62.left = v11;
    v62.right = v12;
    v62.bottom = a5;
    v14 = v58[0][122];
    v15 = *(_DWORD *)(*(_QWORD *)&v14 + 152LL);
    if ( (v15 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v58[0], *(_QWORD *)(*(_QWORD *)&v14 + 160LL));
      v10 = v58[0];
    }
    if ( (v15 & 0x2000) != 0 )
      GreDCSelectPen(v10, *(_QWORD *)(*(_QWORD *)&v10[122] + 168LL));
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v61, (struct XDCOBJ *)v58, 516);
    v16 = *(_QWORD *)&v61[0].ulReserved;
    v17 = v58[0];
    if ( (*(_DWORD *)(*(_QWORD *)&v61[0].ulReserved + 32LL) & 1) != 0 && (v58[0][31].x & 1) == 0 )
    {
      if ( *(_QWORD *)&v58[0][18] == *((_QWORD *)v9 + 32) )
      {
        if ( *(_QWORD *)&v58[0][17] != *((_QWORD *)v9 + 30) || (v58[0][4].y & 0x40) != 0 )
        {
          v18 = *(_DWORD *)(*(_QWORD *)&v61[0].ulReserved + 32LL) & 2;
          if ( *(_DWORD *)(*(_QWORD *)&v58[0][122] + 208LL) == 2 )
          {
            if ( v18 )
            {
              v27 = (*(_DWORD *)(*(_QWORD *)&v61[0].ulReserved + 24LL) + 15) >> 4;
              v62.left += v27;
              v62.right += v27;
              v28 = (*(_DWORD *)(*(_QWORD *)&v61[0].ulReserved + 28LL) + 15) >> 4;
              v62.top += v28;
              v62.bottom += v28;
            }
            else
            {
              v57 = 0;
              bFToL((float)v62.left * **(float **)&v61[0].ulReserved, &v57, 0);
              v62.left = (v57 + 15 + *(_DWORD *)(v16 + 24)) >> 4;
              v57 = 0;
              bFToL((float)v62.right * *(float *)v16, &v57, v29);
              v62.right = (v57 + 15 + *(_DWORD *)(v16 + 24)) >> 4;
              v57 = 0;
              bFToL((float)v62.top * *(float *)(v16 + 12), &v57, v30);
              v62.top = (v57 + 15 + *(_DWORD *)(v16 + 28)) >> 4;
              v57 = 0;
              bFToL((float)v62.bottom * *(float *)(v16 + 12), &v57, v31);
              v62.bottom = (v57 + 15 + *(_DWORD *)(v16 + 28)) >> 4;
            }
            ERECTL::vOrder((ERECTL *)&v62);
          }
          else
          {
            if ( v18 )
            {
              v19 = ((*(int *)(*(_QWORD *)&v61[0].ulReserved + 24LL) >> 3) + 1) >> 1;
              v62.left += v19;
              v62.right += v19;
              v20 = ((*(int *)(*(_QWORD *)&v61[0].ulReserved + 28LL) >> 3) + 1) >> 1;
              v62.top += v20;
              v62.bottom += v20;
            }
            else
            {
              v57 = 0;
              bFToL((float)v62.left * **(float **)&v61[0].ulReserved, &v57, 0);
              v21 = ((*(_DWORD *)(v16 + 24) + v57) >> 3) + 1;
              v57 = 0;
              v62.left = v21 >> 1;
              bFToL((float)v62.right * *(float *)v16, &v57, v22);
              v23 = ((*(_DWORD *)(v16 + 24) + v57) >> 3) + 1;
              v57 = 0;
              v62.right = v23 >> 1;
              bFToL((float)v62.top * *(float *)(v16 + 12), &v57, v24);
              v25 = ((*(_DWORD *)(v16 + 28) + v57) >> 3) + 1;
              v57 = 0;
              v62.top = v25 >> 1;
              bFToL((float)v62.bottom * *(float *)(v16 + 12), &v57, v26);
              v62.bottom = (((*(_DWORD *)(v16 + 28) + v57) >> 3) + 1) >> 1;
            }
            ERECTL::vOrder((ERECTL *)&v62);
            --v62.right;
            --v62.bottom;
          }
          if ( !IsRectEmptyInl(&v62) )
          {
            v32 = GreRectBlt((struct DCOBJ *)v58, (struct ERECTL *)&v62);
LABEL_44:
            v43 = v32;
            goto LABEL_50;
          }
        }
LABEL_46:
        v43 = 1;
        goto LABEL_50;
      }
      if ( (v58[0][26].x & 1) == 0 )
      {
        v33 = *(_DWORD *)(*(_QWORD *)&v61[0].ulReserved + 32LL) & 2;
        if ( *(_DWORD *)(*(_QWORD *)&v58[0][122] + 208LL) == 2 )
        {
          if ( v33 )
          {
            v44 = (*(_DWORD *)(*(_QWORD *)&v61[0].ulReserved + 24LL) + 15) >> 4;
            v62.left += v44;
            v62.right += v44;
            v45 = (*(_DWORD *)(*(_QWORD *)&v61[0].ulReserved + 28LL) + 15) >> 4;
            v62.top += v45;
            v62.bottom += v45;
          }
          else
          {
            v57 = 0;
            bFToL((float)v62.left * **(float **)&v61[0].ulReserved, &v57, 0);
            v46 = v57 + 15 + *(_DWORD *)(v16 + 24);
            v57 &= v47;
            v62.left = v46 >> 4;
            bFToL((float)v62.right * *(float *)v16, &v57, v47);
            v48 = v57 + 15 + *(_DWORD *)(v16 + 24);
            v57 &= v49;
            v62.right = v48 >> 4;
            bFToL((float)v62.top * *(float *)(v16 + 12), &v57, v49);
            v50 = v57 + 15 + *(_DWORD *)(v16 + 28);
            v57 &= v51;
            v62.top = v50 >> 4;
            bFToL((float)v62.bottom * *(float *)(v16 + 12), &v57, v51);
            v62.bottom = (v57 + 15 + *(_DWORD *)(v16 + 28)) >> 4;
          }
          ERECTL::vOrder((ERECTL *)&v62);
        }
        else
        {
          if ( v33 )
          {
            v34 = ((*(int *)(*(_QWORD *)&v61[0].ulReserved + 24LL) >> 3) + 1) >> 1;
            v62.left += v34;
            v62.right += v34;
            v35 = ((*(int *)(*(_QWORD *)&v61[0].ulReserved + 28LL) >> 3) + 1) >> 1;
            v62.top += v35;
            v62.bottom += v35;
          }
          else
          {
            v57 = 0;
            bFToL((float)v62.left * **(float **)&v61[0].ulReserved, &v57, 0);
            v36 = *(_DWORD *)(v16 + 24) + v57;
            v57 &= v37;
            v62.left = ((v36 >> 3) + 1) >> 1;
            bFToL((float)v62.right * *(float *)v16, &v57, v37);
            v38 = *(_DWORD *)(v16 + 24) + v57;
            v57 &= v39;
            v62.right = ((v38 >> 3) + 1) >> 1;
            bFToL((float)v62.top * *(float *)(v16 + 12), &v57, v39);
            v40 = *(_DWORD *)(v16 + 28) + v57;
            v57 &= v41;
            v62.top = ((v40 >> 3) + 1) >> 1;
            bFToL((float)v62.bottom * *(float *)(v16 + 12), &v57, v41);
            v62.bottom = (((*(_DWORD *)(v16 + 28) + v57) >> 3) + 1) >> 1;
          }
          ERECTL::vOrder((ERECTL *)&v62);
          v42 = v62.bottom - 1;
          --v62.right;
          --v62.bottom;
          if ( v62.left > v62.right || v62.top > v42 )
          {
            v43 = 1;
LABEL_50:
            DCOBJ::~DCOBJ((DCOBJ *)v58);
            return v43;
          }
        }
        RECTANGLEPATHOBJ::vInit((RECTANGLEPATHOBJ *)&ppo, (struct _RECTL *)&v62, v17[31].x & 4);
        if ( *(_QWORD *)&v58[0][17] == *((_QWORD *)v9 + 30) )
        {
          if ( (v58[0][4].y & 0x40) != 0 )
          {
            v60[1] = v59;
            v60[0] = v11;
            v60[2] = v12;
            v60[3] = a5;
            XDCOBJ::vAccumulate((XDCOBJ *)v58, (struct ERECTL *)v60);
          }
        }
        else
        {
          ++v62.left;
          ++v62.top;
          if ( !IsRectEmptyInl(&v62) && !(unsigned int)GreRectBlt((struct DCOBJ *)v58, (struct ERECTL *)&v62) )
          {
            v43 = 0;
            goto LABEL_50;
          }
        }
        v32 = EPATHOBJ::bStrokeAndOrFill(&ppo, v58, (LINEATTRS *)&v17[26], 0LL, 1u);
        goto LABEL_44;
      }
    }
    EBOX::EBOX((EBOX *)v63, (struct DCOBJ *)v58, (struct _RECTL *)&v62, (struct _LINEATTRS *)&v58[0][26], 0);
    if ( v63[0] )
      goto LABEL_46;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v66, (DC **)v58, 1);
    if ( !v67 )
    {
      EngSetLastError(8u);
LABEL_49:
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v66);
      v43 = 0;
      goto LABEL_50;
    }
    if ( !(unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)&v66, 0LL, &v64)
      || !(unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)&v66, 0LL, &v65, 3u)
      || !EPATHOBJ::bCloseFigure((EPATHOBJ *)&v66) )
    {
      goto LABEL_49;
    }
    if ( (v58[0][31].x & 1) != 0 )
    {
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v66);
      goto LABEL_46;
    }
    v53 = v58[0][18];
    if ( v63[1] )
    {
      v56 = v58[0][17];
      v58[0][17] = v53;
      v58[0][39].y |= 1u;
      v55 = EPATHOBJ::bStrokeAndOrFill(&v66, v58, 0LL, 0LL, 2u);
      v58[0][17] = v56;
      v58[0][39].y |= 1u;
    }
    else
    {
      y = v17[26].y;
      if ( (*(_DWORD *)(*(_QWORD *)&v53 + 40LL) & 0x800) != 0 )
        v17[26].y = 2;
      v55 = EPATHOBJ::bStrokeAndOrFill(&v66, v58, (LINEATTRS *)&v17[26], v61, 3u);
      v17[26].y = y;
    }
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v66);
    if ( v58[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v58);
    return v55;
  }
}
