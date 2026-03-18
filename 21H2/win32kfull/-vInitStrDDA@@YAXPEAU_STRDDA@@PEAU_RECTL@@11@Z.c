/*
 * XREFs of ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00DF6A0
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C002FC4C (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C028C190 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     STR_DIV @ 0x1C00DF8FC (STR_DIV.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall vInitStrDDA(struct _STRDDA *a1, struct _RECTL *a2, struct _RECTL *a3, struct _RECTL *a4)
{
  struct _RECTL *v4; // r12
  LONG left; // edx
  struct _RECTL *v7; // r11
  LONG right; // edx
  LONG v10; // edi
  __int64 v11; // rdx
  int *v12; // r10
  __int64 v13; // r11
  int v14; // r13d
  int v15; // r9d
  int v16; // r15d
  int v17; // esi
  int v18; // ecx
  int v19; // r8d
  int v20; // edx
  int v21; // r12d
  _DWORD *v22; // r14
  int v23; // ecx
  int v24; // eax
  int v25; // edi
  LONG v26; // r13d
  __int64 v27; // r9
  __int64 v28; // r10
  int v29; // r15d
  int v30; // r14d
  int v31; // r11d
  int v32; // esi
  int v33; // ecx
  int v34; // r8d
  int v35; // edx
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  __int64 v39; // r14
  int v40; // ecx
  int v41; // eax
  int v42; // edx
  LONG top; // ecx
  __int64 v44; // r14
  int v45; // ecx
  int v46; // eax
  int v47; // edx
  _QWORD v48[2]; // [rsp+20h] [rbp-50h] BYREF
  LONG v49; // [rsp+30h] [rbp-40h]
  struct _RECTL *v50; // [rsp+38h] [rbp-38h]
  __int128 v51; // [rsp+40h] [rbp-30h]
  __int128 v52; // [rsp+50h] [rbp-20h] BYREF

  v4 = a4;
  v50 = a4;
  left = a3->left;
  v7 = a3;
  v51 = 0LL;
  v52 = 0LL;
  if ( __PAIR64__(a3->top, left) )
  {
    top = a3->top;
    v7 = (struct _RECTL *)&v52;
    LODWORD(v51) = a2->left - left;
    DWORD1(v51) = a2->top - top;
    DWORD2(v51) = a2->right - left;
    HIDWORD(v51) = a2->bottom - top;
    DWORD2(v52) = a3->right - left;
    HIDWORD(v52) = a3->bottom - top;
  }
  *((_QWORD *)a1 + 3) = (char *)a1 + 4 * v7->right + 32;
  right = a4->right;
  v10 = v7->right;
  v48[0] = 0LL;
  v11 = (unsigned int)(right - a4->left);
  v49 = a4->left;
  STR_DIV(v48, v11, (unsigned int)v10);
  v14 = v48[0];
  v16 = v15;
  v17 = v15;
  v18 = ((v10 - 1) >> 1) + HIDWORD(v48[0]);
  v19 = LODWORD(v48[0]) + 1;
  if ( v18 < v10 )
    v19 = v48[0];
  v20 = ((v10 - 1) >> 1) + HIDWORD(v48[0]) - v10;
  if ( v18 < v10 )
    v20 = ((v10 - 1) >> 1) + HIDWORD(v48[0]);
  if ( *v12 > 0 )
  {
    v39 = (unsigned int)*v12;
    v17 = *v12;
    do
    {
      v16 = v19;
      v41 = v19 + LODWORD(v48[0]);
      v19 += LODWORD(v48[0]) + 1;
      v42 = v20 + HIDWORD(v48[0]);
      v40 = v42;
      if ( v42 < v10 )
        v19 = v41;
      v20 = v42 - v10;
      if ( v40 < v10 )
        v20 = v40;
      --v39;
    }
    while ( v39 );
    v4 = v50;
  }
  *(_DWORD *)a1 = v16 + v49;
  if ( v17 < v12[2] )
  {
    v21 = HIDWORD(v48[0]);
    v22 = (_DWORD *)((char *)a1 + 32);
    do
    {
      v23 = v19 + v14;
      ++v17;
      *v22 = v19 - v16;
      v16 = v19;
      v24 = v20 + v21;
      v19 += v14 + 1;
      v20 = v20 + v21 - v10;
      ++v22;
      if ( v24 < v10 )
      {
        v20 = v24;
        v19 = v23;
      }
    }
    while ( v17 < v12[2] );
    v4 = v50;
  }
  *((_DWORD *)a1 + 2) = v16 + v4->left;
  v25 = *(_DWORD *)(v13 + 12);
  v26 = v4->top;
  STR_DIV(v48, (unsigned int)(v4->bottom - v26), (unsigned int)v25);
  v29 = v48[0];
  v30 = HIDWORD(v48[0]);
  v31 = v27;
  v32 = v27;
  v33 = HIDWORD(v48[0]) + ((v25 - 1) >> 1);
  v34 = LODWORD(v48[0]) + 1;
  if ( v33 < v25 )
    v34 = v48[0];
  v35 = HIDWORD(v48[0]) + ((v25 - 1) >> 1) - v25;
  if ( v33 < v25 )
    v35 = HIDWORD(v48[0]) + ((v25 - 1) >> 1);
  if ( *(int *)(v28 + 4) > 0 )
  {
    v44 = *(unsigned int *)(v28 + 4);
    v32 = *(_DWORD *)(v28 + 4);
    do
    {
      v31 = v34;
      v46 = v34 + LODWORD(v48[0]);
      v34 += LODWORD(v48[0]) + 1;
      v47 = v35 + HIDWORD(v48[0]);
      v45 = v47;
      if ( v47 < v25 )
        v34 = v46;
      v35 = v47 - v25;
      if ( v45 < v25 )
        v35 = v45;
      --v44;
    }
    while ( v44 );
    v4 = v50;
    v30 = HIDWORD(v48[0]);
  }
  *((_DWORD *)a1 + 1) = v31 + v26;
  while ( v32 < *(_DWORD *)(v28 + 12) )
  {
    v36 = v34 - v31;
    ++v32;
    v31 = v34;
    *(_DWORD *)(v27 + *((_QWORD *)a1 + 3)) = v36;
    v37 = v35 + v30;
    v38 = v34 + v29;
    v35 = v35 + v30 - v25;
    v34 += v29 + 1;
    v27 += 4LL;
    if ( v37 < v25 )
    {
      v35 = v37;
      v34 = v38;
    }
  }
  *((_DWORD *)a1 + 3) = v31 + v4->top;
}
