/*
 * XREFs of ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00F6C30
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00B13EC (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C028DEC0 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     STR_DIV @ 0x1C00F6EC8 (STR_DIV.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

void __fastcall vInitStrDDA(struct _STRDDA *a1, struct _RECTL *a2, struct _RECTL *a3, struct _RECTL *a4)
{
  struct _RECTL *v4; // r14
  LONG left; // edx
  struct _RECTL *v7; // r11
  LONG right; // edi
  LONG v10; // r13d
  __int64 v11; // rdx
  int v12; // r9d
  int *v13; // r10
  __int64 v14; // r11
  int v15; // r8d
  int v16; // edx
  int v17; // r15d
  int v18; // esi
  int v19; // r14d
  _DWORD *v20; // r12
  int v21; // r9d
  int v22; // ecx
  int v23; // eax
  int v24; // edi
  LONG v25; // r12d
  __int64 v26; // r9
  __int64 v27; // r10
  int v28; // r15d
  int v29; // r13d
  int v30; // r8d
  int v31; // edx
  int v32; // r11d
  int v33; // esi
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  LONG top; // ecx
  __int64 v38; // r12
  int v39; // ecx
  int v40; // eax
  int v41; // edx
  __int64 v42; // r15
  int v43; // ecx
  int v44; // eax
  int v45; // edx
  _QWORD v46[2]; // [rsp+20h] [rbp-40h] BYREF
  struct _RECTL *v47; // [rsp+30h] [rbp-30h]
  __int128 v48; // [rsp+38h] [rbp-28h]
  __int128 v49; // [rsp+48h] [rbp-18h] BYREF

  v4 = a4;
  v47 = a4;
  left = a3->left;
  v7 = a3;
  v48 = 0LL;
  v49 = 0LL;
  if ( __PAIR64__(a3->top, left) )
  {
    top = a3->top;
    v7 = (struct _RECTL *)&v49;
    LODWORD(v48) = a2->left - left;
    DWORD1(v48) = a2->top - top;
    DWORD2(v48) = a2->right - left;
    HIDWORD(v48) = a2->bottom - top;
    DWORD2(v49) = a3->right - left;
    HIDWORD(v49) = a3->bottom - top;
  }
  *((_QWORD *)a1 + 3) = (char *)a1 + 4 * v7->right + 32;
  right = v7->right;
  v10 = a4->left;
  v11 = (unsigned int)(a4->right - a4->left);
  v46[0] = 0LL;
  STR_DIV(v46, v11, (unsigned int)right);
  v15 = v46[0];
  v16 = HIDWORD(v46[0]) + ((right - 1) >> 1);
  if ( v16 >= right )
  {
    v15 = LODWORD(v46[0]) + 1;
    v16 -= right;
  }
  v17 = v12;
  v18 = v12;
  if ( *v13 > 0 )
  {
    v38 = (unsigned int)*v13;
    v18 = *v13;
    do
    {
      v17 = v15;
      v40 = v15 + LODWORD(v46[0]);
      v15 += LODWORD(v46[0]) + 1;
      v41 = v16 + HIDWORD(v46[0]);
      v39 = v41;
      if ( v41 < right )
        v15 = v40;
      v16 = v41 - right;
      if ( v39 < right )
        v16 = v39;
      --v38;
    }
    while ( v38 );
    v4 = v47;
  }
  *(_DWORD *)a1 = v17 + v10;
  if ( v18 < v13[2] )
  {
    v19 = v46[0];
    v20 = (_DWORD *)((char *)a1 + 32);
    v21 = HIDWORD(v46[0]);
    do
    {
      v22 = v15 + v19;
      ++v18;
      *v20 = v15 - v17;
      v17 = v15;
      v23 = v16 + v21;
      v15 += v19 + 1;
      v16 = v16 + v21 - right;
      ++v20;
      if ( v23 < right )
      {
        v16 = v23;
        v15 = v22;
      }
    }
    while ( v18 < v13[2] );
    v4 = v47;
  }
  *((_DWORD *)a1 + 2) = v17 + v4->left;
  v24 = *(_DWORD *)(v14 + 12);
  v25 = v4->top;
  STR_DIV(v46, (unsigned int)(v4->bottom - v25), (unsigned int)v24);
  v28 = HIDWORD(v46[0]);
  v29 = v46[0];
  v30 = v46[0];
  v31 = HIDWORD(v46[0]) + ((v24 - 1) >> 1);
  if ( v31 >= v24 )
  {
    v30 = LODWORD(v46[0]) + 1;
    v31 -= v24;
  }
  v32 = v26;
  v33 = v26;
  if ( *(int *)(v27 + 4) > 0 )
  {
    v42 = *(unsigned int *)(v27 + 4);
    v33 = *(_DWORD *)(v27 + 4);
    do
    {
      v32 = v30;
      v44 = v30 + LODWORD(v46[0]);
      v30 += LODWORD(v46[0]) + 1;
      v45 = v31 + HIDWORD(v46[0]);
      v43 = v45;
      if ( v45 < v24 )
        v30 = v44;
      v31 = v45 - v24;
      if ( v43 < v24 )
        v31 = v43;
      --v42;
    }
    while ( v42 );
    v4 = v47;
    v28 = HIDWORD(v46[0]);
  }
  *((_DWORD *)a1 + 1) = v25 + v32;
  while ( v33 < *(_DWORD *)(v27 + 12) )
  {
    v34 = v30 - v32;
    ++v33;
    v32 = v30;
    *(_DWORD *)(v26 + *((_QWORD *)a1 + 3)) = v34;
    v35 = v31 + v28;
    v36 = v30 + v29;
    v31 = v31 + v28 - v24;
    v30 += v29 + 1;
    v26 += 4LL;
    if ( v35 < v24 )
    {
      v31 = v35;
      v30 = v36;
    }
  }
  *((_DWORD *)a1 + 3) = v32 + v4->top;
}
