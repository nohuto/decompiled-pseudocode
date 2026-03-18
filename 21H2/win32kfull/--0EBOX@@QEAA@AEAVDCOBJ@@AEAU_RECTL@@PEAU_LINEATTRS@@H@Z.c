/*
 * XREFs of ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C02AEC68
 * Callers:
 *     GreRectangle @ 0x1C0136C70 (GreRectangle.c)
 *     NtGdiEllipse @ 0x1C029F2E0 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C029F530 (NtGdiRoundRect.c)
 *     NtGdiArcInternal @ 0x1C02AFE50 (NtGdiArcInternal.c)
 * Callees:
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C0015C00 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C00162A0 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

EBOX *__fastcall EBOX::EBOX(EBOX *this, struct DCOBJ *a2, struct _RECTL *a3, struct _LINEATTRS *a4, int a5)
{
  __int128 v5; // xmm0
  ERECTL *v6; // rdi
  __int64 v8; // rdx
  int v11; // ecx
  __int64 v12; // rax
  int v13; // r8d
  int v14; // eax
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r15
  int v18; // r14d
  int v19; // ecx
  _DWORD *v20; // r15
  LONG v21; // r11d
  LONG v22; // r13d
  LONG y; // r9d
  LONG x; // r10d
  int v25; // r12d
  float v26; // xmm2_4
  int v27; // r9d
  int v28; // r11d
  __int64 v29; // rcx
  signed int v30; // r11d
  LONG v31; // ecx
  LONG v32; // r9d
  LONG v33; // r8d
  LONG v34; // r10d
  int v35; // edx
  int v36; // eax
  int v37; // edi
  int *v38; // rsi
  int v39; // r11d
  int v40; // r9d
  int v41; // r8d
  int v42; // r10d
  int v43; // ecx
  int v44; // edx
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // edx
  int v50; // ecx
  int v51; // eax
  float v53; // [rsp+20h] [rbp-40h] BYREF
  float v54; // [rsp+24h] [rbp-3Ch] BYREF
  int v55; // [rsp+28h] [rbp-38h] BYREF
  int v56; // [rsp+2Ch] [rbp-34h]
  int v57; // [rsp+30h] [rbp-30h]
  int v58; // [rsp+34h] [rbp-2Ch]
  _BYTE v59[16]; // [rsp+38h] [rbp-28h] BYREF
  struct _POINTL v60; // [rsp+48h] [rbp-18h] BYREF
  LONG v61; // [rsp+50h] [rbp-10h]
  LONG v62; // [rsp+54h] [rbp-Ch]

  v5 = (__int128)*a3;
  *(_DWORD *)this = 0;
  v6 = (EBOX *)((char *)this + 64);
  *((_DWORD *)this + 1) = 0;
  *((_OWORD *)this + 4) = v5;
  v8 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 976) + 108LL) & 1) != 0 )
  {
    --*(_DWORD *)v6;
    --*((_DWORD *)this + 18);
    v8 = *(_QWORD *)a2;
    v11 = *(_DWORD *)v6;
  }
  else
  {
    v11 = *((_DWORD *)this + 16);
  }
  v12 = *(_QWORD *)(v8 + 976);
  if ( *(_DWORD *)(v12 + 208) == 2 )
  {
    ERECTL::vOrder(v6);
    goto LABEL_16;
  }
  v13 = *(_DWORD *)(v12 + 340) & 0x100;
  if ( v13 && (v14 = *((_DWORD *)this + 18), v11 < v14) || !v13 && (v14 = *((_DWORD *)this + 18), v11 > v14) )
  {
    *(_DWORD *)v6 = v14;
    *((_DWORD *)this + 18) = v11;
    v8 = *(_QWORD *)a2;
  }
  v15 = *((_DWORD *)this + 19);
  v16 = *((_DWORD *)this + 17);
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 976) + 340LL) & 0x200) == 0 )
  {
    if ( v16 <= v15 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( v16 < v15 )
  {
LABEL_15:
    *((_DWORD *)this + 19) = v16;
    *((_DWORD *)this + 17) = v15;
  }
LABEL_16:
  v17 = *(_QWORD *)a2;
  v18 = 4;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 248LL) & 4) != 0 )
  {
    v19 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 17) = *((_DWORD *)this + 19);
    *((_DWORD *)this + 19) = v19;
    v17 = *(_QWORD *)a2;
  }
  v60 = *(struct _POINTL *)v6;
  v61 = *((_DWORD *)v6 + 2);
  v62 = *((_DWORD *)v6 + 3);
  v20 = *(_DWORD **)(v17 + 144);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v59, a2, 516);
  v21 = v62;
  v22 = v61;
  y = v60.y;
  x = v60.x;
  if ( (v20[10] & 0x10000) == 0 || (a4->fl & 1) == 0 )
    goto LABEL_25;
  v25 = 1;
  v26 = (float)(v20[42] >> 1);
  if ( (v20[42] & 1) != 0 )
    v26 = FP_0_5 + v26;
  LODWORD(v53) = efHalfDiff(v60.x, v61);
  LODWORD(v54) = efHalfDiff(v27, v28);
  EFLOAT::vAbs((EFLOAT *)&v53);
  EFLOAT::vAbs((EFLOAT *)&v54);
  if ( v26 > v53 || v26 > v54 )
  {
    *((_DWORD *)this + 1) = 1;
LABEL_25:
    v25 = 0;
  }
  v29 = *(_QWORD *)(*(_QWORD *)a2 + 976LL);
  if ( *(_DWORD *)(v29 + 208) == 2 || v25 || *((_DWORD *)this + 1) || (*(_DWORD *)(v29 + 340) & 0x20) != 0 )
  {
    v38 = (int *)((char *)this + 8);
    *((_DWORD *)this + 3) = y;
    *((_DWORD *)this + 5) = y;
    *((_DWORD *)this + 2) = v22;
    *((_DWORD *)this + 4) = x;
    *((_DWORD *)this + 6) = x;
    *((_DWORD *)this + 7) = v21;
    EXFORMOBJ::bXformRound((EXFORMOBJ *)v59, (struct _POINTL *)this + 1, (struct _POINTFIX *)this + 1, 3uLL);
    if ( a5 )
    {
      if ( v20[44] == 5 )
      {
        v39 = *v38;
        v40 = *((_DWORD *)this + 3);
        v41 = *((_DWORD *)this + 6);
        v42 = *((_DWORD *)this + 7);
        if ( (((unsigned __int8)v42 | (unsigned __int8)(v41 | v40 | *(_BYTE *)v38)) & 0xF) == 0 )
        {
          v43 = 4;
          if ( v39 <= v41 )
            v43 = -4;
          *((_DWORD *)this + 4) -= v43;
          *((_DWORD *)this + 6) = v41 - v43;
          if ( v42 <= v40 )
            v18 = -4;
          *v38 = v39 + v43;
          *((_DWORD *)this + 5) -= v18;
          *((_DWORD *)this + 3) = v40 - v18;
          *((_DWORD *)this + 7) = v18 + v42;
        }
      }
    }
    if ( v25 )
    {
      v44 = v20[42];
      v45 = v44;
      v46 = *(_DWORD *)v6;
      v57 = v44;
      if ( *((_DWORD *)this + 18) < v46 )
      {
        v45 = -v44;
        v57 = -v44;
      }
      if ( *((_DWORD *)this + 19) < *((_DWORD *)this + 17) )
        v44 = -v44;
      v55 = -v45;
      v58 = v44;
      v56 = v44;
      EXFORMOBJ::bXform((EXFORMOBJ *)v59, (struct _VECTORL *)&v55, (struct _VECTORFX *)&v55, 2uLL);
      v47 = v57;
      v48 = v56 + 1;
      v49 = (v55 + 1) >> 1;
      *v38 += v49;
      *((_DWORD *)this + 6) -= v49;
      v48 >>= 1;
      *((_DWORD *)this + 3) += v48;
      *((_DWORD *)this + 4) += (v47 + 1) >> 1;
      *((_DWORD *)this + 5) += (v58 + 1) >> 1;
      *((_DWORD *)this + 7) -= v48;
    }
    goto LABEL_63;
  }
  EXFORMOBJ::bXformRound((EXFORMOBJ *)v59, &v60, (struct _POINTFIX *)&v60, 2uLL);
  v30 = 16;
  if ( a5 && v20[44] == 5 )
  {
    v31 = v60.y;
    v32 = v62;
    v33 = v60.x;
    v34 = v61;
    if ( (((unsigned __int8)v61 | (unsigned __int8)(LOBYTE(v60.x) | v62 | LOBYTE(v60.y))) & 0xF) == 0 )
    {
      v35 = -4;
      v36 = -4;
      v30 = 32;
      if ( v61 > v60.x )
        v36 = 4;
      v34 = v36 + v61;
      v33 = v60.x - v36;
      if ( v62 > v60.y )
        v35 = 4;
      v31 = v60.y - v35;
      v32 = v35 + v62;
    }
  }
  else
  {
    v32 = v62;
    v34 = v61;
    v31 = v60.y;
    v33 = v60.x;
  }
  v37 = v32 - v31;
  if ( (int)abs32(v34 - v33) >= v30 && (int)abs32(v37) >= v30 )
  {
    if ( v34 - v33 <= 0 )
      v33 -= v30;
    else
      v34 -= v30;
    if ( v37 <= 0 )
      v31 -= v30;
    else
      v32 -= v30;
    v38 = (int *)((char *)this + 8);
    *((_DWORD *)this + 3) = v31;
    *((_DWORD *)this + 2) = v34;
    *((_DWORD *)this + 4) = v33;
    *((_DWORD *)this + 5) = v31;
    *((_DWORD *)this + 6) = v33;
    *((_DWORD *)this + 7) = v32;
LABEL_63:
    *((_QWORD *)this + 6) = *(_QWORD *)v38;
    *((_DWORD *)this + 12) -= *((_DWORD *)this + 4);
    *((_DWORD *)this + 13) -= *((_DWORD *)this + 5);
    *((_QWORD *)this + 7) = *((_QWORD *)this + 2);
    *((_DWORD *)this + 14) -= *((_DWORD *)this + 6);
    *((_DWORD *)this + 15) -= *((_DWORD *)this + 7);
    *((_QWORD *)this + 4) = *((_QWORD *)this + 3);
    *((_DWORD *)this + 8) += *((_DWORD *)this + 12);
    *((_DWORD *)this + 9) += *((_DWORD *)this + 13);
    v50 = *((_DWORD *)this + 12) + 1;
    *((_DWORD *)this + 13) = (*((_DWORD *)this + 13) + 1) >> 1;
    v51 = *((_DWORD *)this + 14) + 1;
    v50 >>= 1;
    *((_DWORD *)this + 12) = v50;
    *((_DWORD *)this + 14) = v51 >> 1;
    *((_DWORD *)this + 15) = (*((_DWORD *)this + 15) + 1) >> 1;
    *((_QWORD *)this + 5) = *((_QWORD *)this + 3);
    *((_DWORD *)this + 10) += v50;
    *((_DWORD *)this + 11) += *((_DWORD *)this + 13);
    *((_DWORD *)this + 10) += *((_DWORD *)this + 14);
    *((_DWORD *)this + 11) += *((_DWORD *)this + 15);
    return this;
  }
  *(_DWORD *)this = 1;
  return this;
}
