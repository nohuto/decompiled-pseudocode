/*
 * XREFs of ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C018A3B0
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C018A9F0 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     ?bIntersect@@YA_NPEAU_RECTFX@@0@Z @ 0x1C018A15C (-bIntersect@@YA_NPEAU_RECTFX@@0@Z.c)
 *     ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C018AC8C (-vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?vInit@HFDBASIS64@@QEAAXJJJJ@Z @ 0x1C018AEE8 (-vInit@HFDBASIS64@@QEAAXJJJJ@Z.c)
 *     ?vParentError@HFDBASIS64@@QEBAXPEA_J@Z @ 0x1C018AF60 (-vParentError@HFDBASIS64@@QEBAXPEA_J@Z.c)
 *     ?vUntransform@HFDBASIS64@@QEAAXPEAJ@Z @ 0x1C018B014 (-vUntransform@HFDBASIS64@@QEAAXPEAJ@Z.c)
 */

__int64 __fastcall BEZIER64::bNext(BEZIER64 *this, struct _POINTFIX *a2)
{
  bool v2; // zf
  HFDBASIS64 *v5; // rsi
  __int64 v6; // r11
  struct _RECTFX *v7; // r11
  signed __int64 v8; // r11
  int v9; // r15d
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // r12
  signed __int64 v14; // rcx
  signed __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // r11d
  __int64 v48; // r10
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 *v53; // rsi
  __int64 *v54; // r14
  __int64 v55; // r8
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // edi
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  _RECTFX v73; // [rsp+30h] [rbp-30h] BYREF
  struct _POINTFIX v74; // [rsp+40h] [rbp-20h] BYREF
  int v75; // [rsp+48h] [rbp-18h]
  int v76; // [rsp+4Ch] [rbp-14h]
  int v77; // [rsp+50h] [rbp-10h]
  int v78; // [rsp+54h] [rbp-Ch]
  int v79; // [rsp+58h] [rbp-8h]
  int v80; // [rsp+5Ch] [rbp-4h]
  __int64 v81; // [rsp+90h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 41) == 0;
  v73 = 0LL;
  if ( v2 )
  {
    v5 = (BEZIER64 *)((char *)this + 64);
    HFDBASIS64::vUntransform((BEZIER64 *)((char *)this + 64), (int *)&v74);
    HFDBASIS64::vUntransform((BEZIER64 *)((char *)this + 96), &v74.y);
    HFDBASIS64::vInit(this, v74.x, v75, v77, v79);
    HFDBASIS64::vInit((BEZIER64 *)((char *)this + 32), v74.y, v76, v78, v80);
    v6 = *((_QWORD *)this + 17);
    *((_DWORD *)this + 41) = 1;
    if ( !v6 || (vBoundBox(&v74, &v73), bIntersect(&v73, v7)) )
    {
      v8 = *((_QWORD *)this + 16);
      v9 = 1;
      v10 = *((_QWORD *)this + 6);
      v11 = *((_QWORD *)this + 7);
      while ( 1 )
      {
        v12 = *((_QWORD *)this + 3);
        v13 = *((_QWORD *)this + 2);
        v14 = -v12;
        v15 = abs64(v13);
        if ( v12 >= 0 )
          v14 = *((_QWORD *)this + 3);
        if ( v15 <= v14 )
        {
          v15 = *((_QWORD *)this + 3);
          if ( v12 < 0 )
            v15 = -*((_QWORD *)this + 3);
        }
        if ( v15 <= v8 )
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
          if ( v16 <= v8 )
            break;
        }
        v9 *= 2;
        *((_DWORD *)this + 41) = v9;
        v18 = (v12 + v13) >> 3;
        v10 = (v11 + v10) >> 3;
        *((_QWORD *)this + 1) = (*((_QWORD *)this + 1) - v18) >> 1;
        v19 = (*((_QWORD *)this + 5) - v10) >> 1;
        v11 >>= 2;
        *((_QWORD *)this + 7) = v11;
        *((_QWORD *)this + 2) = v18;
        *((_QWORD *)this + 3) = v12 >> 2;
        *((_QWORD *)this + 6) = v10;
        *((_QWORD *)this + 5) = v19;
      }
    }
    v2 = (*((_DWORD *)this + 40))-- == 1;
    if ( !v2 )
    {
      v20 = *((_QWORD *)v5 + 2);
      v21 = *((_QWORD *)this + 14);
      v22 = *((_QWORD *)v5 + 1);
      *(_QWORD *)v5 += v22;
      *((_QWORD *)v5 + 1) = v20 + v22;
      v23 = 2 * v20 - *((_QWORD *)v5 + 3);
      v24 = 2 * v21 - *((_QWORD *)this + 15);
      v25 = *((_QWORD *)this + 13);
      *((_QWORD *)this + 12) += v25;
      *((_QWORD *)this + 15) = v21;
      *((_QWORD *)this + 13) = v21 + v25;
      *((_QWORD *)v5 + 2) = v23;
      *((_QWORD *)v5 + 3) = v20;
      *((_QWORD *)this + 14) = v24;
      v26 = -*((_QWORD *)this + 10);
      if ( v23 >= 0 )
        v26 = *((_QWORD *)this + 10);
      v27 = -v20;
      if ( v20 >= 0 )
        v27 = v20;
      if ( v26 <= v27 )
      {
        if ( v20 < 0 )
          v20 = -v20;
      }
      else
      {
        v20 = abs64(v23);
      }
      v81 = v20;
      v28 = (__int64 *)((char *)this + 120);
      if ( v20 > 0x300000000000LL )
        goto LABEL_36;
      v29 = abs64(v24);
      v30 = -*v28;
      if ( *v28 >= 0 )
        v30 = *v28;
      if ( v29 <= v30 )
      {
        v29 = *v28;
        if ( *v28 < 0 )
          v29 = -*v28;
      }
      v81 = v29;
      if ( v29 > 0x300000000000LL )
      {
LABEL_36:
        *((_DWORD *)this + 40) *= 2;
        v31 = *((_QWORD *)this + 11);
        v32 = (v31 + *((_QWORD *)this + 10)) >> 3;
        v33 = (*((_QWORD *)this + 9) - v32) >> 1;
        *((_QWORD *)this + 10) = v32;
        v34 = *((_QWORD *)this + 14);
        *((_QWORD *)this + 9) = v33;
        v35 = *((_QWORD *)this + 13);
        *((_QWORD *)this + 11) = v31 >> 2;
        v36 = *v28;
        v37 = (*v28 + v34) >> 3;
        *((_QWORD *)this + 14) = v37;
        *v28 = v36 >> 2;
        *((_QWORD *)this + 13) = (v35 - v37) >> 1;
      }
      while ( (*((_DWORD *)this + 40) & 1) == 0 )
      {
        HFDBASIS64::vParentError(v5, &v81);
        if ( v81 > 0x300000000000LL )
          break;
        HFDBASIS64::vParentError((BEZIER64 *)((char *)this + 96), &v81);
        if ( v81 > 0x300000000000LL )
          break;
        v38 = *((_QWORD *)this + 10);
        v39 = *((_QWORD *)this + 14);
        v40 = *((_QWORD *)this + 13);
        *((_QWORD *)this + 9) *= 2LL;
        *((_QWORD *)this + 9) += v38;
        *((_QWORD *)this + 11) *= 4LL;
        *v28 *= 4LL;
        *((_QWORD *)this + 10) = 8 * v38 - *((_QWORD *)this + 11);
        *((_QWORD *)this + 13) = v39 + 2 * v40;
        *((_QWORD *)this + 14) = 8 * v39 - *v28;
        *((int *)this + 40) >>= 1;
      }
    }
  }
  v41 = *((_QWORD *)this + 2);
  v42 = *((_QWORD *)this + 1);
  *(_QWORD *)this += v42;
  v43 = *(_QWORD *)this;
  *((_QWORD *)this + 1) = v41 + v42;
  *((_QWORD *)this + 2) = 2 * v41 - *((_QWORD *)this + 3);
  v44 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 4) += v44;
  *((_QWORD *)this + 3) = v41;
  v45 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 5) = v45 + v44;
  *((_QWORD *)this + 6) = 2 * v45 - *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v45;
  a2->x = (v43 + 0x8000000) >> 28;
  a2->y = (*((_QWORD *)this + 4) + 0x8000000LL) >> 28;
  v46 = *((_DWORD *)this + 41) - 1;
  *((_DWORD *)this + 41) = v46;
  if ( !v46 && !*((_DWORD *)this + 40) )
    return 0LL;
  v48 = *((_QWORD *)this + 2);
  v49 = *((_QWORD *)this + 3);
  v50 = -v48;
  v51 = -v49;
  if ( v48 >= 0 )
    v50 = *((_QWORD *)this + 2);
  if ( v49 >= 0 )
    v51 = *((_QWORD *)this + 3);
  if ( v50 <= v51 )
  {
    v50 = *((_QWORD *)this + 3);
    if ( v49 < 0 )
      v50 = -*((_QWORD *)this + 3);
  }
  v52 = *((_QWORD *)this + 16);
  v53 = (__int64 *)((char *)this + 48);
  v81 = v50;
  v54 = (__int64 *)((char *)this + 56);
  if ( v50 > v52 )
    goto LABEL_60;
  v55 = *v54;
  v56 = -*v53;
  if ( *v53 >= 0 )
    v56 = *v53;
  v57 = -*v54;
  if ( v55 >= 0 )
    v57 = *v54;
  if ( v56 <= v57 )
  {
    v56 = *v54;
    if ( v55 < 0 )
      v56 = -*v54;
  }
  v81 = v56;
  if ( v56 > v52 )
  {
LABEL_60:
    v58 = (v49 + v48) >> 3;
    *((_DWORD *)this + 41) = 2 * v46;
    v59 = *((_QWORD *)this + 1) - v58;
    *((_QWORD *)this + 2) = v58;
    v60 = *v53;
    *((_QWORD *)this + 1) = v59 >> 1;
    v61 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 3) = v49 >> 2;
    v62 = *v54;
    v63 = (*v54 + v60) >> 3;
    *v53 = v63;
    *v54 = v62 >> 2;
    *((_QWORD *)this + 5) = (v61 - v63) >> 1;
  }
  v64 = *((_DWORD *)this + 41);
  while ( (v64 & 1) == 0 )
  {
    HFDBASIS64::vParentError(this, &v81);
    if ( v81 > v52 )
      break;
    HFDBASIS64::vParentError((BEZIER64 *)((char *)this + 32), &v81);
    if ( v81 > v52 )
      break;
    v65 = *((_QWORD *)this + 2);
    v66 = *((_QWORD *)this + 1);
    *((_QWORD *)this + 3) *= 4LL;
    *v54 *= 4LL;
    v67 = v65 + 2 * v66;
    v68 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 1) = v67;
    v69 = 8 * v65;
    v70 = *v53;
    *((_QWORD *)this + 2) = v69 - *((_QWORD *)this + 3);
    v71 = v70 + 2 * v68;
    v72 = 8 * v70 - *v54;
    v64 >>= 1;
    *((_DWORD *)this + 41) = v64;
    *((_QWORD *)this + 5) = v71;
    *v53 = v72;
  }
  return 1LL;
}
