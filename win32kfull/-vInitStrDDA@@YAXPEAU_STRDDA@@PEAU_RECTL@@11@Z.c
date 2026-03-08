/*
 * XREFs of ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C0082380
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C004DE20 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C0294170 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     STR_DIV @ 0x1C0082984 (STR_DIV.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall vInitStrDDA(struct _STRDDA *a1, struct _RECTL *a2, struct _RECTL *a3, struct _RECTL *a4)
{
  struct _RECTL *v4; // r15
  struct _RECTL *v5; // r11
  LONG left; // r8d
  LONG right; // edi
  LONG v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // r9
  int *v12; // r10
  __int64 v13; // r11
  int v14; // r8d
  int v15; // edx
  int v16; // r14d
  int v17; // esi
  int v18; // r15d
  _DWORD *v19; // r12
  int v20; // r9d
  int v21; // ecx
  int v22; // eax
  int v23; // edi
  LONG v24; // r12d
  __int64 v25; // r9
  __int64 v26; // r10
  int v27; // r14d
  int v28; // r13d
  int v29; // r8d
  int v30; // edx
  int v31; // r11d
  int v32; // esi
  int v33; // ecx
  int v34; // eax
  int v35; // ecx
  LONG top; // ecx
  LONG bottom; // eax
  __int64 v38; // r12
  int v39; // ecx
  int v40; // eax
  int v41; // edx
  __int64 v42; // r14
  int v43; // ecx
  int v44; // eax
  int v45; // edx
  _QWORD v46[2]; // [rsp+20h] [rbp-40h] BYREF
  struct _RECTL *v47; // [rsp+30h] [rbp-30h]
  __int128 v48; // [rsp+38h] [rbp-28h]
  __int128 v49; // [rsp+48h] [rbp-18h] BYREF

  v4 = a4;
  v47 = a4;
  v5 = a3;
  left = a3->left;
  v48 = 0LL;
  v49 = 0LL;
  if ( __PAIR64__(v5->top, left) )
  {
    top = v5->top;
    LODWORD(v48) = a2->left - left;
    DWORD1(v48) = a2->top - top;
    DWORD2(v48) = a2->right - left;
    HIDWORD(v48) = a2->bottom - top;
    DWORD2(v49) = v5->right - left;
    bottom = v5->bottom;
    v5 = (struct _RECTL *)&v49;
    HIDWORD(v49) = bottom - top;
  }
  *((_QWORD *)a1 + 3) = (char *)a1 + 4 * v5->right + 32;
  right = v5->right;
  v9 = a4->left;
  v10 = (unsigned int)(a4->right - a4->left);
  v46[0] = 0LL;
  STR_DIV(v46, v10, (unsigned int)right, 0LL);
  v14 = v46[0];
  v15 = HIDWORD(v46[0]) + ((right - 1) >> 1);
  if ( v15 >= right )
  {
    v14 = LODWORD(v46[0]) + 1;
    v15 -= right;
  }
  v16 = v11;
  v17 = v11;
  if ( *v12 > 0 )
  {
    v38 = (unsigned int)*v12;
    v17 = *v12;
    do
    {
      v16 = v14;
      v40 = v14 + LODWORD(v46[0]);
      v14 += LODWORD(v46[0]) + 1;
      v41 = v15 + HIDWORD(v46[0]);
      v39 = v41;
      if ( v41 < right )
        v14 = v40;
      v15 = v41 - right;
      if ( v39 < right )
        v15 = v39;
      --v38;
    }
    while ( v38 );
    v4 = v47;
    v11 = 0LL;
  }
  *(_DWORD *)a1 = v16 + v9;
  if ( v17 < v12[2] )
  {
    v18 = v46[0];
    v19 = (_DWORD *)((char *)a1 + 32);
    v20 = HIDWORD(v46[0]);
    do
    {
      v21 = v14 + v18;
      ++v17;
      *v19 = v14 - v16;
      v16 = v14;
      v22 = v15 + v20;
      v14 += v18 + 1;
      v15 = v15 + v20 - right;
      ++v19;
      if ( v22 < right )
      {
        v15 = v22;
        v14 = v21;
      }
    }
    while ( v17 < v12[2] );
    v4 = v47;
    v11 = 0LL;
  }
  *((_DWORD *)a1 + 2) = v16 + v4->left;
  v23 = *(_DWORD *)(v13 + 12);
  v24 = v4->top;
  STR_DIV(v46, (unsigned int)(v4->bottom - v24), (unsigned int)v23, v11);
  v27 = HIDWORD(v46[0]);
  v28 = v46[0];
  v29 = v46[0];
  v30 = HIDWORD(v46[0]) + ((v23 - 1) >> 1);
  if ( v30 >= v23 )
  {
    v29 = LODWORD(v46[0]) + 1;
    v30 -= v23;
  }
  v31 = v25;
  v32 = v25;
  if ( *(int *)(v26 + 4) > 0 )
  {
    v42 = *(unsigned int *)(v26 + 4);
    v32 = *(_DWORD *)(v26 + 4);
    do
    {
      v31 = v29;
      v44 = v29 + LODWORD(v46[0]);
      v29 += LODWORD(v46[0]) + 1;
      v45 = v30 + HIDWORD(v46[0]);
      v43 = v45;
      if ( v45 < v23 )
        v29 = v44;
      v30 = v45 - v23;
      if ( v43 < v23 )
        v30 = v43;
      --v42;
    }
    while ( v42 );
    v4 = v47;
    v27 = HIDWORD(v46[0]);
  }
  *((_DWORD *)a1 + 1) = v24 + v31;
  while ( v32 < *(_DWORD *)(v26 + 12) )
  {
    v33 = v29 - v31;
    ++v32;
    v31 = v29;
    *(_DWORD *)(v25 + *((_QWORD *)a1 + 3)) = v33;
    v34 = v30 + v27;
    v35 = v29 + v28;
    v30 = v30 + v27 - v23;
    v29 += v28 + 1;
    v25 += 4LL;
    if ( v34 < v23 )
    {
      v30 = v34;
      v29 = v35;
    }
  }
  *((_DWORD *)a1 + 3) = v31 + v4->top;
}
