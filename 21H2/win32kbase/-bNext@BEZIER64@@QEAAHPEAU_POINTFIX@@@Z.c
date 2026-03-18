/*
 * XREFs of ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C016DA00
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C00921C0 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0092930 (-vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bIntersect@@YA_NPEAU_RECTFX@@0@Z @ 0x1C016D9C8 (-bIntersect@@YA_NPEAU_RECTFX@@0@Z.c)
 *     ?vInit@HFDBASIS64@@QEAAXJJJJ@Z @ 0x1C016E0D4 (-vInit@HFDBASIS64@@QEAAXJJJJ@Z.c)
 *     ?vParentError@HFDBASIS64@@QEBAXPEA_J@Z @ 0x1C016E14C (-vParentError@HFDBASIS64@@QEBAXPEA_J@Z.c)
 *     ?vUntransform@HFDBASIS64@@QEAAXPEAJ@Z @ 0x1C016E1B4 (-vUntransform@HFDBASIS64@@QEAAXPEAJ@Z.c)
 */

__int64 __fastcall BEZIER64::bNext(BEZIER64 *this, struct _POINTFIX *a2)
{
  bool v2; // zf
  HFDBASIS64 *v5; // r14
  __int64 v6; // r11
  struct _RECTFX *v7; // r11
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r8
  __int128 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r11
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // r14d
  __int64 v53; // r8
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r11
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // r9d
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  _RECTFX v76; // [rsp+30h] [rbp-30h] BYREF
  struct _POINTFIX v77; // [rsp+40h] [rbp-20h] BYREF
  int v78; // [rsp+48h] [rbp-18h]
  int v79; // [rsp+4Ch] [rbp-14h]
  int v80; // [rsp+50h] [rbp-10h]
  int v81; // [rsp+54h] [rbp-Ch]
  int v82; // [rsp+58h] [rbp-8h]
  int v83; // [rsp+5Ch] [rbp-4h]
  __int64 v84; // [rsp+90h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 41) == 0;
  v76 = 0LL;
  if ( v2 )
  {
    v5 = (BEZIER64 *)((char *)this + 64);
    HFDBASIS64::vUntransform((BEZIER64 *)((char *)this + 64), (int *)&v77);
    HFDBASIS64::vUntransform((BEZIER64 *)((char *)this + 96), &v77.y);
    HFDBASIS64::vInit(this, v77.x, v78, v80, v82);
    HFDBASIS64::vInit((BEZIER64 *)((char *)this + 32), v77.y, v79, v81, v83);
    v6 = *((_QWORD *)this + 17);
    *((_DWORD *)this + 41) = 1;
    if ( !v6 || (vBoundBox(&v77, &v76), bIntersect(&v76, v7)) )
    {
      v8 = *((_QWORD *)this + 2);
      v9 = *((_QWORD *)this + 3);
      v10 = *((_QWORD *)this + 6);
      v11 = *((_QWORD *)this + 7);
      while ( 1 )
      {
        v12 = v8;
        v13 = -v9;
        v14 = (*((_QWORD *)&v12 + 1) ^ v12) - *((_QWORD *)&v12 + 1);
        if ( v9 >= 0 )
          v13 = v9;
        if ( v14 <= v13 )
        {
          v14 = v9;
          if ( v9 < 0 )
            v14 = -v9;
        }
        v15 = *((_QWORD *)this + 16);
        if ( v14 <= v15 )
        {
          v16 = -v10;
          v17 = -v11;
          if ( v10 >= 0 )
            v16 = v10;
          if ( v11 >= 0 )
            v17 = v11;
          if ( v16 <= v17 )
          {
            v16 = v11;
            if ( v11 < 0 )
              v16 = -v11;
          }
          if ( v16 <= v15 )
            break;
        }
        *((_DWORD *)this + 41) *= 2;
        v8 = (v9 + *((_QWORD *)this + 2)) >> 3;
        v10 = (v11 + v10) >> 3;
        *((_QWORD *)this + 1) = (*((_QWORD *)this + 1) - v8) >> 1;
        v9 >>= 2;
        v18 = (*((_QWORD *)this + 5) - v10) >> 1;
        v11 >>= 2;
        *((_QWORD *)this + 7) = v11;
        *((_QWORD *)this + 2) = v8;
        *((_QWORD *)this + 3) = v9;
        *((_QWORD *)this + 6) = v10;
        *((_QWORD *)this + 5) = v18;
      }
    }
    v2 = (*((_DWORD *)this + 40))-- == 1;
    if ( !v2 )
    {
      v19 = *((_QWORD *)v5 + 2);
      v20 = *((_QWORD *)this + 14);
      v21 = *((_QWORD *)v5 + 1);
      *(_QWORD *)v5 += v21;
      *((_QWORD *)v5 + 1) = v19 + v21;
      v22 = 2 * v19 - *((_QWORD *)v5 + 3);
      v23 = 2 * v20 - *((_QWORD *)this + 15);
      v24 = *((_QWORD *)this + 13);
      *((_QWORD *)this + 12) += v24;
      *((_QWORD *)this + 13) = v20 + v24;
      *((_QWORD *)this + 15) = v20;
      v25 = -v19;
      *((_QWORD *)v5 + 2) = v22;
      *((_QWORD *)v5 + 3) = v19;
      *((_QWORD *)this + 14) = v23;
      v26 = *((_QWORD *)this + 10);
      v27 = -v26;
      v28 = -v26;
      if ( v19 >= 0 )
        v25 = v19;
      if ( v22 >= 0 )
        v28 = *((_QWORD *)this + 10);
      if ( v28 <= v25 )
      {
        v27 = v19;
        if ( v19 < 0 )
          v27 = -v19;
      }
      else if ( v26 >= 0 )
      {
        v27 = *((_QWORD *)this + 10);
      }
      v29 = (__int64 *)((char *)this + 120);
      v84 = v27;
      if ( v27 > geqErrorHigh )
        goto LABEL_38;
      v30 = abs64(v23);
      v31 = -*v29;
      if ( *v29 >= 0 )
        v31 = *v29;
      if ( v30 <= v31 )
      {
        v30 = *v29;
        if ( *v29 < 0 )
          v30 = -*v29;
      }
      v84 = v30;
      if ( v30 > geqErrorHigh )
      {
LABEL_38:
        *((_DWORD *)this + 40) *= 2;
        v32 = *((_QWORD *)this + 11);
        v33 = (v32 + v26) >> 3;
        v34 = *((_QWORD *)this + 9) - v33;
        *((_QWORD *)this + 10) = v33;
        v35 = *((_QWORD *)this + 14);
        *((_QWORD *)this + 9) = v34 >> 1;
        v36 = *((_QWORD *)this + 13);
        *((_QWORD *)this + 11) = v32 >> 2;
        v37 = *v29;
        v38 = (*v29 + v35) >> 3;
        *((_QWORD *)this + 14) = v38;
        *v29 = v37 >> 2;
        *((_QWORD *)this + 13) = (v36 - v38) >> 1;
      }
      while ( (*((_DWORD *)this + 40) & 1) == 0 )
      {
        HFDBASIS64::vParentError(v5, &v84);
        v39 = geqErrorHigh;
        if ( v84 > geqErrorHigh )
          break;
        HFDBASIS64::vParentError((BEZIER64 *)((char *)this + 96), &v84);
        if ( v84 > v39 )
          break;
        v40 = *((_QWORD *)this + 10);
        v41 = *((_QWORD *)this + 9);
        *((_QWORD *)this + 11) *= 4LL;
        *v29 *= 4LL;
        v42 = v40 + 2 * v41;
        v43 = *((_QWORD *)this + 13);
        *((_QWORD *)this + 9) = v42;
        v44 = 8 * v40 - *((_QWORD *)this + 11);
        v45 = *((_QWORD *)this + 14);
        *((_QWORD *)this + 10) = v44;
        *((_QWORD *)this + 13) = v45 + 2 * v43;
        *((_QWORD *)this + 14) = 8 * v45 - *v29;
        *((int *)this + 40) >>= 1;
      }
    }
  }
  v46 = *((_QWORD *)this + 2);
  v47 = *((_QWORD *)this + 1);
  *(_QWORD *)this += v47;
  v48 = *(_QWORD *)this;
  *((_QWORD *)this + 1) = v46 + v47;
  *((_QWORD *)this + 2) = 2 * v46 - *((_QWORD *)this + 3);
  v49 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 4) += v49;
  *((_QWORD *)this + 3) = v46;
  v50 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 5) = v50 + v49;
  *((_QWORD *)this + 6) = 2 * v50 - *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v50;
  a2->x = (v48 + 0x8000000) >> 28;
  a2->y = (*((_QWORD *)this + 4) + 0x8000000LL) >> 28;
  v2 = (*((_DWORD *)this + 41))-- == 1;
  v51 = *((_DWORD *)this + 41);
  if ( v2 && !*((_DWORD *)this + 40) )
    return 0LL;
  v53 = *((_QWORD *)this + 3);
  v54 = *((_QWORD *)this + 2);
  v55 = -v53;
  v56 = abs64(v54);
  if ( v53 >= 0 )
    v55 = *((_QWORD *)this + 3);
  if ( v56 <= v55 )
  {
    v56 = *((_QWORD *)this + 3);
    if ( v53 < 0 )
      v56 = -*((_QWORD *)this + 3);
  }
  v57 = *((_QWORD *)this + 16);
  v84 = v56;
  if ( v56 > v57 )
    goto LABEL_59;
  v58 = *((_QWORD *)this + 7);
  v59 = -v58;
  v60 = abs64(*((_QWORD *)this + 6));
  if ( v58 >= 0 )
    v59 = *((_QWORD *)this + 7);
  if ( v60 <= v59 )
  {
    v60 = *((_QWORD *)this + 7);
    if ( v58 < 0 )
      v60 = -*((_QWORD *)this + 7);
  }
  v84 = v60;
  if ( v60 > v57 )
  {
LABEL_59:
    v62 = (v54 + v53) >> 3;
    LOBYTE(v61) = 2 * v51;
    *((_DWORD *)this + 41) = 2 * v51;
    v63 = *((_QWORD *)this + 7);
    v64 = *((_QWORD *)this + 1) - v62;
    *((_QWORD *)this + 2) = v62;
    v65 = v63 + *((_QWORD *)this + 6);
    *((_QWORD *)this + 1) = v64 >> 1;
    v65 >>= 3;
    v66 = *((_QWORD *)this + 5) - v65;
    *((_QWORD *)this + 3) = v53 >> 2;
    *((_QWORD *)this + 7) = v63 >> 2;
    *((_QWORD *)this + 6) = v65;
    *((_QWORD *)this + 5) = v66 >> 1;
  }
  else
  {
    v61 = *((_DWORD *)this + 41);
  }
  if ( (v61 & 1) == 0 )
  {
    do
    {
      HFDBASIS64::vParentError(this, &v84);
      v67 = *((_QWORD *)this + 16);
      if ( v84 > v67 )
        break;
      HFDBASIS64::vParentError((BEZIER64 *)((char *)this + 32), &v84);
      if ( v84 > v67 )
        break;
      v68 = *((_QWORD *)this + 2);
      v69 = *((_QWORD *)this + 1);
      *((_QWORD *)this + 3) *= 4LL;
      *((_QWORD *)this + 7) *= 4LL;
      *((int *)this + 41) >>= 1;
      v70 = v68 + 2 * v69;
      v71 = *((_QWORD *)this + 5);
      *((_QWORD *)this + 1) = v70;
      v72 = 8 * v68 - *((_QWORD *)this + 3);
      v73 = *((_QWORD *)this + 6);
      *((_QWORD *)this + 2) = v72;
      v74 = v73 + 2 * v71;
      v75 = 8 * v73 - *((_QWORD *)this + 7);
      *((_QWORD *)this + 5) = v74;
      LODWORD(v74) = *((_DWORD *)this + 41);
      *((_QWORD *)this + 6) = v75;
    }
    while ( (v74 & 1) == 0 );
  }
  return 1LL;
}
