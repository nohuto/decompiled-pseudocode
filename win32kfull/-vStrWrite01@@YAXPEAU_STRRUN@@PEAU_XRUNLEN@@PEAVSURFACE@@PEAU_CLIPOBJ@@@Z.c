/*
 * XREFs of ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00B5A10
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00B5E70 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00B5F94 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

void __fastcall vStrWrite01(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _CLIPOBJ *v4; // r13
  struct SURFACE *v5; // r15
  struct _XRUNLEN *v7; // r14
  int v8; // r8d
  _DWORD *v9; // rdx
  int v10; // edi
  _DWORD *v11; // rax
  LONG bottom; // r10d
  LONG top; // r12d
  LONG left; // r11d
  LONG right; // ebx
  __int64 v16; // r9
  struct _XRUNLEN *v17; // rdx
  int v18; // eax
  int v19; // edi
  _DWORD *v20; // rcx
  unsigned int v21; // r9d
  int v22; // r14d
  char v23; // r8
  __int64 v24; // r8
  _DWORD *v25; // r10
  int v26; // ecx
  int *v27; // rsi
  __int64 v28; // r15
  __int64 v29; // r12
  LONG v30; // ecx
  LONG v31; // edx
  LONG v32; // ecx
  LONG v33; // esi
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  _DWORD *v36; // r12
  int *v37; // rsi
  int v38; // edx
  int v39; // ebx
  int *v40; // r13
  int *v41; // rsi
  char v42; // r8
  int v43; // r11d
  int *v44; // r10
  __int64 v45; // r9
  int v46; // eax
  int v47; // ecx
  int v48; // ecx
  __int64 v49; // rdx
  int v50; // esi
  __int64 v51; // r15
  int v52; // ecx
  int v53; // r8d
  int v54; // edx
  struct SURFACE *v55; // r11
  int v56; // r9d
  int v57; // r10d
  int v58; // r8d
  int v59; // r10d
  int v60; // edx
  int v61; // ecx
  char *v62; // r9
  int v63; // r12d
  int v64; // eax
  size_t v65; // r13
  char *v66; // rbx
  int v67; // r10d
  int v68; // r9d
  int v69; // r8d
  int *v70; // rcx
  int v71; // eax
  LONG v72; // eax
  char v73; // [rsp+38h] [rbp-29h]
  LONG v74; // [rsp+3Ch] [rbp-25h]
  LONG v75; // [rsp+40h] [rbp-21h]
  struct _RECTL si128; // [rsp+48h] [rbp-19h] BYREF
  _DWORD *v77; // [rsp+58h] [rbp-9h]
  int v78; // [rsp+60h] [rbp-1h]
  int *v79; // [rsp+68h] [rbp+7h]
  int v80; // [rsp+70h] [rbp+Fh]
  int v81; // [rsp+74h] [rbp+13h]
  struct _XRUNLEN *v82; // [rsp+78h] [rbp+17h]
  __int64 v83; // [rsp+80h] [rbp+1Fh]

  if ( !a2 )
    return;
  v4 = a4;
  v5 = a3;
  v7 = (struct _STRRUN *)((char *)a1 + 8);
  v79 = (int *)((char *)a1 + 8);
  if ( !a4 )
  {
    v36 = (_DWORD *)(*((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22));
    v77 = v36;
    if ( v7 == a2 )
      return;
    v37 = (int *)((char *)a1 + 8);
    while ( 1 )
    {
      v38 = *v37;
      v39 = *v37 + v37[1];
      v40 = &v36[(__int64)*v37 >> 5];
      v41 = v40;
      if ( v38 >= v39 )
        goto LABEL_68;
      v42 = v38 & 0x1F;
      v43 = *v40;
      if ( (unsigned __int64)v40 < *((_QWORD *)v5 + 9) + (unsigned __int64)*((unsigned int *)v5 + 16) )
      {
        v44 = v79 + 2;
        v45 = v38 & 0x1F;
        do
        {
          v46 = *v44++;
          v47 = dword_1C0319320[v45];
          if ( v46 )
            v43 |= v47;
          else
            v43 &= ~v47;
          ++v42;
          ++v45;
          if ( ++v38 >= v39 )
            break;
          if ( (v42 & 0x20) != 0 )
          {
            *v41 = v43;
            v42 = 0;
            v43 = v41[1];
            ++v41;
            v45 = 0LL;
          }
        }
        while ( (unsigned __int64)v41 < *((_QWORD *)v5 + 9) + (unsigned __int64)*((unsigned int *)v5 + 16) );
      }
      *v41 = v43;
      if ( *((int *)a1 + 1) <= 1 )
        goto LABEL_68;
      v48 = *v79 >> 5;
      v49 = *v79 & 0x1F;
      v50 = (*v79 + v79[1]) >> 5;
      v51 = (*v79 + v79[1]) & 0x1F;
      if ( v48 != v50 )
        break;
      v52 = *v40;
      v53 = dword_1C032AE00[v49] & ~dword_1C032AE00[v51];
      v54 = 1;
      v5 = a3;
      do
      {
        ++v54;
        v40 = (int *)((char *)v40 + *((int *)a3 + 22));
        v52 = ~v53 & *v40 | v53 & v52;
        *v40 = v52;
      }
      while ( v54 < *((_DWORD *)a1 + 1) );
LABEL_68:
      v37 = &v79[v79[1] + 2];
      v79 = v37;
      if ( v37 == (int *)a2 )
        return;
    }
    v55 = a3;
    if ( (_DWORD)v49 )
    {
      v56 = 1;
      v57 = dword_1C032AE00[v49];
      v58 = *v40 & v57;
      v59 = ~v57;
      do
      {
        ++v56;
        v40 = (int *)((char *)v40 + *((int *)a3 + 22));
        *v40 = v58 | v59 & *v40;
        v60 = *((_DWORD *)a1 + 1);
      }
      while ( v56 < v60 );
      v61 = v48 + 1;
      if ( v61 == v50 )
      {
LABEL_86:
        if ( (_DWORD)v51 )
        {
          v67 = dword_1C032AE00[v51];
          v68 = 1;
          v5 = a3;
          v69 = v36[v50] & ~v67;
          v70 = &v36[v50];
          if ( v60 > 1 )
          {
            do
            {
              ++v68;
              v70 = (int *)((char *)v70 + *((int *)a3 + 22));
              *v70 = v69 | v67 & *v70;
            }
            while ( v68 < *((_DWORD *)a1 + 1) );
          }
        }
        else
        {
          v5 = a3;
        }
        goto LABEL_68;
      }
      v62 = (char *)&v36[v61];
      v63 = 1;
      v64 = 4 * (v50 - v61);
      if ( v60 <= 1 )
      {
LABEL_85:
        v36 = v77;
        goto LABEL_86;
      }
    }
    else
    {
      v62 = (char *)&v36[v48];
      v63 = 1;
      v64 = 4 * (v50 - v48);
    }
    v65 = v64;
    do
    {
      v66 = &v62[*((int *)v55 + 22)];
      memmove(v66, v62, v65);
      v60 = *((_DWORD *)a1 + 1);
      ++v63;
      v55 = a3;
      v62 = v66;
    }
    while ( v63 < v60 );
    goto LABEL_85;
  }
  XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
  v8 = *(_DWORD *)a1;
  v9 = *(_DWORD **)&v4[3].rclBounds.top;
  v10 = *((_DWORD *)a1 + 1);
  si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  v78 = v8;
  if ( v8 < v9[1] )
  {
    do
    {
      v9 = (_DWORD *)((char *)v9 - (unsigned int)(4 * *(v9 - 1) + 16));
      *(_QWORD *)&v4[3].rclBounds.top = v9;
      v71 = v9[1];
    }
    while ( v8 < v71 );
    top = v4->rclBounds.top;
    left = 0x80000000;
    bottom = v4->rclBounds.bottom;
    si128.left = 0x80000000;
    if ( v71 > top )
      top = v71;
    v72 = v9[2];
    v75 = top;
    si128.top = top;
    if ( v72 < bottom )
      bottom = v72;
    v74 = bottom;
    si128.bottom = bottom;
    if ( top < bottom )
    {
      if ( top != 0x80000000 )
        goto LABEL_12;
    }
    else
    {
      top = 0x80000000;
      v75 = 0x80000000;
      si128.top = 0x80000000;
    }
    bottom = 0x80000000;
    v74 = 0x80000000;
    si128.bottom = 0x80000000;
  }
  else
  {
    if ( v8 < v9[2] )
    {
      bottom = si128.bottom;
      top = si128.top;
      left = si128.left;
      v74 = si128.bottom;
    }
    else
    {
      do
      {
        v11 = (_DWORD *)((char *)v9 + (unsigned int)(4 * *v9 + 16));
        *(_QWORD *)&v4[3].rclBounds.top = v11;
        v9 = v11;
        bottom = v11[2];
        v74 = bottom;
      }
      while ( v8 >= bottom );
      top = v11[1];
      v75 = top;
      if ( top > v4->rclBounds.top )
      {
        si128.top = v11[1];
      }
      else
      {
        top = v4->rclBounds.top;
        v75 = top;
        si128.top = top;
      }
      if ( bottom >= v4->rclBounds.bottom )
      {
        bottom = v4->rclBounds.bottom;
        v74 = bottom;
      }
      si128.bottom = bottom;
      left = 0x80000000;
      si128.left = 0x80000000;
      if ( top >= bottom )
      {
        bottom = 0x7FFFFFFF;
        v74 = 0x7FFFFFFF;
        si128.bottom = 0x7FFFFFFF;
      }
      else if ( bottom != 0x7FFFFFFF )
      {
        goto LABEL_12;
      }
      top = 0x7FFFFFFF;
      si128.top = 0x7FFFFFFF;
    }
    v75 = top;
  }
LABEL_12:
  if ( v10 )
  {
    right = si128.right;
    do
    {
      v81 = --v10;
      if ( v8 >= top && v8 < bottom )
      {
        v16 = *((_QWORD *)v5 + 10) + *((_DWORD *)v5 + 22) * v8;
        v83 = v16;
        if ( v7 != a2 )
        {
          v17 = v7;
          v82 = v7;
          do
          {
            v18 = *(_DWORD *)v17;
            v19 = *(_DWORD *)v17 + *((_DWORD *)v17 + 1);
            v20 = (_DWORD *)(v16 + 4 * ((__int64)*(int *)v17 >> 5));
            v21 = *(_DWORD *)v17 & 0x1F;
            v77 = v20;
            if ( v18 < 0 || v18 >= *((_DWORD *)v5 + 14) )
            {
              v23 = 0;
              v22 = 0;
            }
            else
            {
              v22 = *v20;
              v23 = 1;
            }
            v73 = v23;
            if ( v18 < v19 )
            {
              v24 = v21;
              v25 = (_DWORD *)((char *)v17 + 8);
              do
              {
                if ( v18 >= right || v18 < left )
                {
                  v27 = *(int **)&v4[3].rclBounds.top;
                  v28 = 0LL;
                  v80 = *v27;
                  if ( v80 )
                  {
                    while ( 1 )
                    {
                      if ( v18 >= v27[v28 + 3] )
                      {
                        v29 = 4LL * (unsigned int)(v28 + 1) + 12;
                        if ( v18 < *(int *)((char *)v27 + v29) )
                          break;
                      }
                      v28 = (unsigned int)(v28 + 2);
                      if ( (_DWORD)v28 == v80 )
                      {
                        v4 = a4;
                        goto LABEL_109;
                      }
                    }
                    v30 = v27[v28 + 3];
                    v4 = a4;
                    v5 = a3;
                    v31 = a4->rclBounds.left;
                    if ( v30 > v31 )
                      v31 = v30;
                    v32 = *(int *)((char *)v27 + v29);
                    v33 = a4->rclBounds.right;
                    if ( v32 < v33 )
                      v33 = v32;
                    if ( v31 < v33 )
                    {
                      left = v31;
                      si128.left = v31;
                      right = v33;
                    }
                  }
                  else
                  {
LABEL_109:
                    v5 = a3;
                  }
                }
                if ( v18 >= left && v18 < right )
                {
                  v26 = dword_1C0319320[v24];
                  if ( *v25 )
                    v22 |= v26;
                  else
                    v22 &= ~v26;
                }
                ++v21;
                ++v24;
                ++v18;
                ++v25;
                if ( (v21 & 0x20) != 0 )
                {
                  v34 = v77;
                  if ( v73 )
                    *v77 = v22;
                  v35 = v34 + 1;
                  v21 = 0;
                  v24 = 0LL;
                  v77 = v35;
                  if ( v18 < 0 || v18 >= *((_DWORD *)v5 + 14) )
                  {
                    v73 = 0;
                    v22 = 0;
                  }
                  else
                  {
                    v22 = *v35;
                    v73 = 1;
                  }
                }
              }
              while ( v18 < v19 );
              v17 = v82;
              v20 = v77;
              v23 = v73;
              si128.right = right;
            }
            if ( v23 )
              *v20 = v22;
            v16 = v83;
            v17 = (struct _XRUNLEN *)((char *)v17 + 4 * *((int *)v17 + 1) + 8);
            v82 = v17;
          }
          while ( v17 != a2 );
          v8 = v78;
          bottom = v74;
          top = v75;
          v10 = v81;
          v7 = (struct _XRUNLEN *)v79;
        }
      }
      v78 = ++v8;
      if ( v8 >= bottom || v8 < top )
      {
        XCLIPOBJ::vFindScan((XCLIPOBJ *)v4, &si128, v8);
        bottom = si128.bottom;
        top = si128.top;
        right = si128.right;
        left = si128.left;
        v74 = si128.bottom;
        v75 = si128.top;
      }
    }
    while ( v10 );
  }
}
