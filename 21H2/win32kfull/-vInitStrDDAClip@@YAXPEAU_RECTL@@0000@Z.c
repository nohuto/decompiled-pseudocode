/*
 * XREFs of ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C00DF30C
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C002FC4C (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     STR_DIV @ 0x1C00DF8FC (STR_DIV.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall vInitStrDDAClip(
        struct _RECTL *a1,
        struct _RECTL *a2,
        struct _RECTL *a3,
        struct _RECTL *a4,
        struct _RECTL *a5)
{
  LONG top; // r12d
  struct _RECTL *v6; // rsi
  int v7; // edi
  struct _RECTL *v8; // r15
  LONG v9; // edx
  LONG v11; // ecx
  struct _RECTL *v12; // r13
  __int64 right; // r8
  __int64 v14; // rdx
  int v15; // r10d
  int v16; // r9d
  int v17; // ecx
  LONG v18; // r11d
  int v19; // r8d
  LONG v20; // edx
  int v21; // ecx
  int v22; // r12d
  int v23; // edi
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  LONG v27; // ecx
  LONG v28; // eax
  LONG v29; // eax
  LONG v30; // eax
  int v31; // r9d
  int v32; // r15d
  int v33; // r10d
  int v34; // ecx
  LONG v35; // r11d
  int v36; // r8d
  LONG v37; // edx
  int v38; // ecx
  int v39; // edi
  int v40; // r12d
  LONG v41; // esi
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // eax
  LONG v46; // ecx
  LONG v47; // ecx
  LONG v48; // ecx
  bool v49; // zf
  LONG v50; // ecx
  __m128i v51; // xmm0
  int v52; // eax
  __m128i v53; // xmm0
  LONG bottom; // eax
  LONG v55; // eax
  unsigned __int64 v56; // [rsp+20h] [rbp-61h]
  unsigned __int64 v57; // [rsp+20h] [rbp-61h]
  _QWORD v58[2]; // [rsp+28h] [rbp-59h] BYREF
  LONG v59; // [rsp+38h] [rbp-49h]
  LONG v60; // [rsp+3Ch] [rbp-45h]
  LONG left; // [rsp+40h] [rbp-41h]
  unsigned __int64 v62; // [rsp+48h] [rbp-39h]
  __int128 v63; // [rsp+50h] [rbp-31h] BYREF
  __m128i v64; // [rsp+60h] [rbp-21h] BYREF
  __int128 v65; // [rsp+70h] [rbp-11h] BYREF
  __int128 v66; // [rsp+80h] [rbp-1h] BYREF

  top = a2->top;
  v6 = a3;
  v7 = 0;
  left = a2->left;
  v60 = top;
  v8 = a2;
  v9 = a3->top;
  v11 = a3->left;
  v12 = a4;
  v65 = 0LL;
  v66 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  if ( __PAIR64__(top, left) )
  {
    LODWORD(v65) = a1->left - left;
    DWORD1(v65) = a1->top - top;
    DWORD2(v65) = a1->right - left;
    bottom = a1->bottom;
    a1 = (struct _RECTL *)&v65;
    HIDWORD(v65) = bottom - top;
    DWORD2(v66) = v8->right - left;
    v55 = v8->bottom;
    v8 = (struct _RECTL *)&v66;
    HIDWORD(v66) = v55 - top;
  }
  if ( v11 || v9 )
  {
    v51 = *(__m128i *)a3;
    v6 = (struct _RECTL *)&v63;
    v12 = (struct _RECTL *)&v64;
    LODWORD(v63) = *a3;
    DWORD2(v63) = v51.m128i_i32[2] - v11;
    DWORD1(v63) = v51.m128i_i32[1] - v9;
    HIDWORD(v63) = v51.m128i_i32[3] - v9;
    v52 = _mm_cvtsi128_si32(v51);
    v64 = *(__m128i *)a4;
    v53 = v64;
    v64.m128i_i32[2] -= v11;
    v64.m128i_i32[1] -= v9;
    LODWORD(v63) = v52 - v11;
    v64.m128i_i32[3] -= v9;
    v64.m128i_i32[0] = _mm_cvtsi128_si32(v53) - v11;
  }
  ERECTL::operator*=(&v12->left, &v6->left);
  right = (unsigned int)v8->right;
  v14 = (unsigned int)(v6->right - v6->left);
  v58[0] = 0LL;
  STR_DIV(v58, v14, right);
  v16 = v58[0];
  v17 = ((v15 - 1) >> 1) + HIDWORD(v58[0]);
  LODWORD(v56) = v58[0];
  if ( v17 >= v15 )
  {
    v16 = LODWORD(v58[0]) + 1;
    LODWORD(v56) = LODWORD(v58[0]) + 1;
  }
  v18 = 0;
  v19 = v17 - v15;
  v20 = 0;
  if ( v17 < v15 )
    v19 = ((v15 - 1) >> 1) + HIDWORD(v58[0]);
  a5->left = -1;
  v21 = 0;
  a5->right = -1;
  if ( a1->right > 0 )
  {
    v22 = v58[0];
    v23 = HIDWORD(v58[0]);
    HIDWORD(v56) = v19;
    while ( 1 )
    {
      v59 = v18;
      v24 = v16 - v21;
      v25 = v19 + v23;
      v18 += v24;
      v62 = v56;
      v26 = v16 + v22;
      v16 += v22 + 1;
      if ( v19 + v23 < v15 )
        v16 = v26;
      v19 = v25 - v15;
      if ( v25 < v15 )
        v19 = v25;
      v27 = a5->left;
      if ( a5->left == -1 )
      {
        v27 = -1;
        if ( v12->left >= v59 )
        {
          v27 = -1;
          if ( v12->left <= v18 )
          {
            a5->left = v20;
            v27 = v20;
          }
        }
      }
      v28 = v12->right;
      if ( v28 <= v18 && v28 >= v59 )
        a5->right = v20;
      ++v20;
      v56 = __PAIR64__(v19, v16);
      if ( v20 >= a1->right )
        break;
      v21 = v62;
    }
    v29 = a5->right;
    v7 = 0;
    top = v60;
    if ( v27 != -1 )
      goto LABEL_25;
    if ( v29 != -1 )
    {
      a5->left = 0;
LABEL_25:
      if ( v29 == -1 )
        v29 = v20;
      v30 = v29 + 1;
      goto LABEL_28;
    }
  }
  a5->left = 0;
  v30 = 0;
LABEL_28:
  a5->right = v30;
  STR_DIV(v58, (unsigned int)(v6->bottom - v6->top), (unsigned int)v8->bottom);
  v32 = v58[0];
  v33 = v58[0];
  v34 = ((v31 - 1) >> 1) + HIDWORD(v58[0]);
  LODWORD(v57) = v58[0];
  if ( v34 >= v31 )
  {
    v33 = LODWORD(v58[0]) + 1;
    LODWORD(v57) = LODWORD(v58[0]) + 1;
  }
  v35 = 0;
  v36 = v34 - v31;
  v37 = 0;
  if ( v34 < v31 )
    v36 = ((v31 - 1) >> 1) + HIDWORD(v58[0]);
  a5->top = -1;
  a5->bottom = -1;
  v38 = 0;
  if ( a1->bottom <= 0 )
    goto LABEL_60;
  v39 = HIDWORD(v58[0]);
  v40 = -1;
  HIDWORD(v57) = v36;
  while ( 1 )
  {
    v41 = v35;
    v42 = v33 - v38;
    v43 = v36 + v39;
    v35 += v42;
    v62 = v57;
    v44 = v33 + v32;
    v33 += v32 + 1;
    if ( v36 + v39 < v31 )
      v33 = v44;
    v36 = v43 - v31;
    v45 = v40;
    if ( v43 < v31 )
      v36 = v43;
    if ( v40 == -1 )
    {
      v47 = v12->top;
      v45 = -1;
      if ( v47 >= v41 )
      {
        v45 = -1;
        if ( v47 <= v35 )
        {
          v40 = v37;
          a5->top = v37;
          v45 = v37;
        }
      }
    }
    v46 = v12->bottom;
    if ( v46 <= v35 && v46 >= v41 )
      a5->bottom = v37;
    ++v37;
    v57 = __PAIR64__(v36, v33);
    if ( v37 >= a1->bottom )
      break;
    v38 = v62;
  }
  v48 = a5->bottom;
  v7 = 0;
  top = v60;
  v49 = v45 == -1;
  if ( v45 != -1 )
    goto LABEL_48;
  if ( v48 == -1 )
  {
LABEL_60:
    v45 = 0;
    goto LABEL_53;
  }
  v49 = 1;
LABEL_48:
  if ( v49 )
    v45 = 0;
  if ( v48 == -1 )
    v48 = v37;
  v7 = v48 + 1;
LABEL_53:
  v50 = left;
  a5->left += left;
  a5->right += v50;
  a5->top = top + v45;
  a5->bottom = v7 + top;
}
