/*
 * XREFs of ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C00ACBE4
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C00AB7D0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0016964 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0088198 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
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
  __int64 v20; // rcx
  int v21; // edx
  LONG v22; // edx
  int v23; // edx
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // edx
  int v40; // r8d
  int v41; // r9d
  FIX v42; // r11d
  int v43; // ecx
  int v44; // r10d
  int v45; // edx
  FIX v46; // r10d
  int v47; // r8d
  FIX v48; // r8d
  FIX v49; // eax
  int v50; // edx
  unsigned __int64 v51; // rcx
  FIX y; // eax
  __int64 v53; // rcx
  LONG v54; // ecx
  int v55; // eax
  int v56; // [rsp+20h] [rbp-20h] BYREF
  int v57; // [rsp+24h] [rbp-1Ch] BYREF
  int v58; // [rsp+28h] [rbp-18h] BYREF
  int v59; // [rsp+2Ch] [rbp-14h] BYREF
  int v60; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v61[3]; // [rsp+34h] [rbp-Ch] BYREF
  int v62; // [rsp+80h] [rbp+40h] BYREF
  int v63; // [rsp+98h] [rbp+58h] BYREF

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
  v57 = 0;
  bFToL(v20, &v57, 0LL);
  v61[0] = 0;
  bFToL(v25, v61, v26);
  v58 = 0;
  bFToL(v27, &v58, v28);
  v62 = 0;
  bFToL(v29, &v62, v30);
  v56 = 0;
  bFToL(v31, &v56, v32);
  v60 = 0;
  bFToL(v33, &v60, v34);
  v59 = 0;
  bFToL(v35, &v59, v36);
  v63 = 0;
  bFToL(v37, &v63, v38);
  v39 = v56;
  v40 = v58;
  v41 = v57;
  v42 = v57 + v56 + *((_DWORD *)this + 18);
  v43 = v60;
  a2->x = v42;
  v44 = v39 + v40;
  v45 = v59;
  v46 = *((_DWORD *)this + 18) + v44;
  v47 = v59 + v40;
  a2[1].x = v46;
  v48 = *((_DWORD *)this + 18) + v47;
  a2[2].x = v48;
  v49 = *((_DWORD *)this + 18) + v45 + v41;
  v50 = v61[0];
  a2[3].x = v49;
  a2->y = *((_DWORD *)this + 19) + v43 + v50;
  a2[1].y = v62 + v43 + *((_DWORD *)this + 19);
  a2[2].y = v62 + v63 + *((_DWORD *)this + 19);
  a2[3].y = v50 + v63 + *((_DWORD *)this + 19);
  v51 = (v46 <= v42) ^ (unsigned __int64)(v46 > v48);
  a3->left = a2[v51].x;
  a3->right = a2[v51 + 2].x;
  y = a2[1].y;
  LOBYTE(v15) = y > a2->y;
  v53 = v15 ^ (y <= a2[2].y);
  a3->top = a2[v53].y;
  a3->bottom = a2[v53 + 2].y;
  ERECTL::vOrder((ERECTL *)a3);
  v54 = a3->left >> 4;
  a3->top = (a3->top >> 4) - 2;
  v55 = a3->right + 15;
  a3->left = v54 - 2;
  a3->right = (v55 >> 4) + 2;
  a3->bottom = ((a3->bottom + 15) >> 4) + 2;
  return 1LL;
}
