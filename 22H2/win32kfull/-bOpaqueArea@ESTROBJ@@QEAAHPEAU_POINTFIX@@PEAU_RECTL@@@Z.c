/*
 * XREFs of ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C010CADC
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C010BA70 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0017678 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C009BB20 (bFToL.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00DC2A8 (-vOrder@ERECTL@@QEAAXXZ.c)
 */

__int64 __fastcall ESTROBJ::bOpaqueArea(ESTROBJ *this, struct _POINTFIX *a2, struct _RECTL *a3)
{
  int v6; // edx
  LONG v7; // r8d
  __int64 v8; // rax
  int v9; // edx
  _QWORD *v11; // rax
  EFLOAT *v12; // r12
  __int64 v13; // r14
  EFLOAT *v14; // r8
  __int64 v15; // rsi
  int v16; // edx
  LONG v17; // edx
  int v18; // r8d
  LONG v19; // r8d
  float *v20; // r8
  int v21; // edx
  LONG v22; // edx
  int v23; // edx
  int v24; // edx
  float v25; // xmm3_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  unsigned int v28; // r8d
  float v29; // xmm1_4
  unsigned int v30; // r8d
  unsigned int v31; // r8d
  float v32; // xmm3_4
  float v33; // xmm1_4
  unsigned int v34; // r8d
  float v35; // xmm2_4
  unsigned int v36; // r8d
  float v37; // xmm1_4
  unsigned int v38; // r8d
  unsigned int v39; // r8d
  int v40; // edx
  int v41; // r8d
  int v42; // r9d
  FIX v43; // r11d
  int v44; // ecx
  int v45; // r10d
  int v46; // edx
  FIX v47; // r10d
  int v48; // r8d
  FIX v49; // r8d
  FIX v50; // eax
  int v51; // edx
  unsigned __int64 v52; // rcx
  FIX y; // eax
  __int64 v54; // rcx
  LONG v55; // ecx
  int v56; // eax
  int v57; // [rsp+20h] [rbp-20h] BYREF
  int v58; // [rsp+24h] [rbp-1Ch] BYREF
  int v59; // [rsp+28h] [rbp-18h] BYREF
  int v60; // [rsp+2Ch] [rbp-14h] BYREF
  int v61; // [rsp+30h] [rbp-10h] BYREF
  int v62[3]; // [rsp+34h] [rbp-Ch] BYREF
  int v63; // [rsp+80h] [rbp+40h] BYREF
  int v64; // [rsp+98h] [rbp+58h] BYREF

  if ( (*((_DWORD *)this + 1) & 2) != 0 )
  {
    v6 = (*((_DWORD *)this + 18) + 8) >> 4;
    a3->left = v6 + (*((int *)this + 24) >> 4);
    v7 = v6 + ((*((_DWORD *)this + 26) + 15) >> 4);
    a3->right = v7;
    v8 = *((_QWORD *)this + 7);
    if ( (*(_DWORD *)(*(_QWORD *)v8 + 12LL) & 0x2000) != 0 && (*(_DWORD *)(*(_QWORD *)v8 + 716LL) & 6) != 0 )
    {
      a3->right = v7 + 1;
      *((_DWORD *)this + 1) &= ~0x10u;
    }
    v9 = (*((_DWORD *)this + 19) + 8) >> 4;
    a3->top = v9 - ((*((_DWORD *)this + 25) + 15) >> 4);
    a3->bottom = v9 - (*((int *)this + 27) >> 4);
    return 0LL;
  }
  v11 = (_QWORD *)*((_QWORD *)this + 7);
  v12 = (EFLOAT *)(*v11 + 400LL);
  v13 = *v11 + 416LL;
  v15 = 0LL;
  if ( EFLOAT::bIsZero(v12) && EFLOAT::bIsZero((EFLOAT *)v13) )
  {
    v16 = (*((_DWORD *)this + 18) + 8) >> 4;
    if ( *(float *)v14 >= 0.0 )
    {
      a3->left = v16 + (*((int *)this + 24) >> 4);
      v17 = ((*((_DWORD *)this + 26) + 15) >> 4) + v16;
    }
    else
    {
      a3->left = v16 - ((*((_DWORD *)this + 26) + 15) >> 4);
      v17 = v16 - (*((int *)this + 24) >> 4);
    }
    a3->right = v17;
    v18 = (*((_DWORD *)this + 19) + 8) >> 4;
    if ( *(float *)(v13 + 4) >= 0.0 )
    {
      a3->top = v18 + (*((int *)this + 27) >> 4);
      v19 = ((*((_DWORD *)this + 25) + 15) >> 4) + v18;
    }
    else
    {
      a3->top = v18 - ((*((_DWORD *)this + 25) + 15) >> 4);
      v19 = v18 - (*((int *)this + 27) >> 4);
    }
    a3->bottom = v19;
    a3->right = v17 + 1;
    return 0LL;
  }
  if ( EFLOAT::bIsZero(v14) && EFLOAT::bIsZero((EFLOAT *)(v13 + 4)) )
  {
    v21 = (*((_DWORD *)this + 18) + 8) >> 4;
    if ( *(float *)v13 >= 0.0 )
    {
      a3->left = v21 + (*((int *)this + 27) >> 4);
      v22 = ((*((_DWORD *)this + 25) + 15) >> 4) + v21;
    }
    else
    {
      a3->left = v21 - ((*((_DWORD *)this + 25) + 15) >> 4);
      v22 = v21 - (*((int *)this + 27) >> 4);
    }
    a3->right = v22;
    v23 = (*((_DWORD *)this + 19) + 8) >> 4;
    if ( *(float *)v12 >= 0.0 )
    {
      a3->top = v23 + (*((int *)this + 24) >> 4);
      v24 = ((*((_DWORD *)this + 26) + 15) >> 4) + v23;
    }
    else
    {
      a3->top = v23 - ((*((_DWORD *)this + 26) + 15) >> 4);
      v24 = v23 - (*((int *)this + 24) >> 4);
    }
    a3->bottom = v24 + 1;
    return 0LL;
  }
  v25 = *v20;
  v26 = (float)*((int *)this + 24);
  v58 = 0;
  bFToL(v26 * v25, &v58, 0);
  v27 = *(float *)v12;
  v62[0] = 0;
  bFToL(v26 * v27, v62, v28);
  v29 = (float)*((int *)this + 26);
  v59 = 0;
  bFToL(v29 * v25, &v59, v30);
  v63 = 0;
  bFToL(v29 * v27, &v63, v31);
  v32 = *(float *)v13;
  v33 = (float)*((int *)this + 25);
  v57 = 0;
  bFToL(v33 * v32, &v57, v34);
  v35 = *(float *)(v13 + 4);
  v61 = 0;
  bFToL(v33 * v35, &v61, v36);
  v37 = (float)*((int *)this + 27);
  v60 = 0;
  bFToL(v37 * v32, &v60, v38);
  v64 = 0;
  bFToL(v37 * v35, &v64, v39);
  v40 = v57;
  v41 = v59;
  v42 = v58;
  v43 = v58 + v57 + *((_DWORD *)this + 18);
  v44 = v61;
  a2->x = v43;
  v45 = v40 + v41;
  v46 = v60;
  v47 = *((_DWORD *)this + 18) + v45;
  v48 = v60 + v41;
  a2[1].x = v47;
  v49 = *((_DWORD *)this + 18) + v48;
  a2[2].x = v49;
  v50 = *((_DWORD *)this + 18) + v46 + v42;
  v51 = v62[0];
  a2[3].x = v50;
  a2->y = *((_DWORD *)this + 19) + v44 + v51;
  a2[1].y = v63 + v44 + *((_DWORD *)this + 19);
  a2[2].y = v63 + v64 + *((_DWORD *)this + 19);
  a2[3].y = v51 + v64 + *((_DWORD *)this + 19);
  v52 = (v47 <= v43) ^ (unsigned __int64)(v47 > v49);
  a3->left = a2[v52].x;
  a3->right = a2[v52 + 2].x;
  y = a2[1].y;
  LOBYTE(v15) = y > a2->y;
  v54 = v15 ^ (y <= a2[2].y);
  a3->top = a2[v54].y;
  a3->bottom = a2[v54 + 2].y;
  ERECTL::vOrder((ERECTL *)a3);
  v55 = a3->left >> 4;
  a3->top = (a3->top >> 4) - 2;
  v56 = a3->right + 15;
  a3->left = v55 - 2;
  a3->right = (v56 >> 4) + 2;
  a3->bottom = ((a3->bottom + 15) >> 4) + 2;
  return 1LL;
}
