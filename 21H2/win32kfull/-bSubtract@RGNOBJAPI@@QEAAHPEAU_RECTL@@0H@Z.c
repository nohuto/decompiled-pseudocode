/*
 * XREFs of ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C00B9174
 * Callers:
 *     GreSubtractRgnRectList @ 0x1C00B90E4 (GreSubtractRgnRectList.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B9858 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C00B9894 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall RGNOBJAPI::bSubtract(RGNOBJAPI *this, struct _RECTL *a2, struct _RECTL *a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r9d
  unsigned int v11; // edi
  LONG top; // r10d
  LONG v13; // r11d
  LONG left; // r15d
  LONG v15; // ecx
  LONG bottom; // edx
  LONG v17; // r12d
  LONG right; // r9d
  bool v19; // cc
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  _DWORD *v31; // rdx
  _DWORD *v32; // rdx
  LONG v33; // eax
  _DWORD *v34; // rdx
  LONG v35; // eax
  LONG v36; // eax
  char *v37; // rdx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  struct _RECTL *v41; // rdx
  _DWORD *v42; // rdx
  unsigned int v43; // ecx
  _DWORD *v44; // rdx
  unsigned int v45; // ecx
  _DWORD *v46; // rdx
  LONG v47; // eax
  _DWORD *v48; // rdx
  _DWORD *v49; // rdx
  LONG v50; // eax
  LONG v51; // eax
  _DWORD *v52; // rdx
  _DWORD *v53; // rdx
  LONG v54; // eax
  _DWORD *v55; // rdx
  _DWORD *v56; // rdx
  _DWORD *v57; // rdx
  _QWORD v58[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v59; // [rsp+30h] [rbp-28h] BYREF

  v11 = 0;
  if ( ERECTL::bEmpty((ERECTL *)a2) )
    goto LABEL_20;
  if ( v10 == 1 )
  {
    top = a3->top;
    v13 = *(_DWORD *)(v8 + 12);
    if ( top >= v13
      || (left = a3->left, v15 = *(_DWORD *)(v8 + 8), a3->left >= v15)
      || (bottom = a3->bottom, v17 = a2->top, bottom <= v17)
      || (right = a3->right, right <= a2->left) )
    {
      v41 = a2;
      goto LABEL_43;
    }
    v19 = left <= a2->left;
    v59 = 0LL;
    v20 = right >= v15;
    if ( !v19 )
      v20 += 2;
    if ( top > v17 )
    {
      v21 = 8;
      if ( bottom >= v13 )
        v21 = 12;
    }
    else
    {
      v21 = 0;
      if ( bottom >= v13 )
        v21 = 4;
    }
    v22 = v20 + v21;
    if ( v22 <= 8 )
    {
      if ( v22 == 8 )
      {
        v56 = *(_DWORD **)(v9 + 88);
        *(_DWORD *)(v9 + 80) = 104;
        *(_DWORD *)(v9 + 84) = 5;
        *(struct _RECTL *)(v9 + 96) = *a2;
        *v56 = 0;
        v56[1] = 0x80000000;
        v56[2] = a2->top;
        v56[3] = 0;
        v56 += 4;
        *v56 = 2;
        v56[1] = a2->top;
        v56[2] = a3->top;
        v56[3] = a2->left;
        v56[4] = a2->right;
        v56[5] = 2;
        v32 = (_DWORD *)((char *)v56 + (unsigned int)(4 * *v56 + 16));
        *v32 = 2;
        v54 = a3->top;
      }
      else
      {
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                v26 = v25 - 1;
                if ( v26 )
                {
                  v27 = v26 - 1;
                  if ( !v27 )
                  {
LABEL_20:
                    RGNOBJ::vSet(this);
                    return 1LL;
                  }
                  v45 = v27 - 1;
                  if ( !v45 )
                  {
                    v46 = *(_DWORD **)(v9 + 88);
                    *(_DWORD *)(v9 + 80) = 64;
                    *(_DWORD *)(v9 + 84) = 3;
                    *(struct _RECTL *)(v9 + 96) = *a2;
                    *v46 = 0;
                    v46[1] = 0x80000000;
                    v46[2] = a2->top;
                    v46[3] = 0;
                    v34 = v46 + 4;
                    *v34 = 4;
                    v47 = a2->top;
LABEL_52:
                    v34[1] = v47;
                    v34[2] = a2->bottom;
                    v34[3] = a2->left;
                    v34[4] = a3->left;
                    v34[5] = a3->right;
                    v34[6] = a2->right;
                    v34[7] = 4;
                    goto LABEL_36;
                  }
                  if ( v45 != 1 )
                    return 1LL;
                  v59 = (__int128)*a2;
                  DWORD2(v59) = left;
                }
                else
                {
                  v59 = (__int128)*a2;
                  LODWORD(v59) = right;
                }
                goto LABEL_42;
              }
              v55 = *(_DWORD **)(v9 + 88);
              *(_DWORD *)(v9 + 80) = 80;
              *(_DWORD *)(v9 + 84) = 4;
              *(struct _RECTL *)(v9 + 96) = *a2;
              *v55 = 0;
              v55[1] = 0x80000000;
              v55[2] = a2->top;
              v55[3] = 0;
              v32 = v55 + 4;
              *v32 = 2;
              v50 = a2->top;
              goto LABEL_54;
            }
            v57 = *(_DWORD **)(v9 + 88);
            *(_DWORD *)(v9 + 80) = 88;
            *(_DWORD *)(v9 + 84) = 4;
            *(struct _RECTL *)(v9 + 96) = *a2;
            *v57 = 0;
            v57[1] = 0x80000000;
            v57[2] = a2->top;
            v57[3] = 0;
            v32 = v57 + 4;
            *v32 = 4;
            v33 = a2->top;
            goto LABEL_32;
          }
          v59 = (__int128)*a2;
          DWORD1(v59) = bottom;
          goto LABEL_42;
        }
        v53 = *(_DWORD **)(v9 + 88);
        *(_DWORD *)(v9 + 80) = 80;
        *(_DWORD *)(v9 + 84) = 4;
        *(struct _RECTL *)(v9 + 96) = *a2;
        *v53 = 0;
        v53[1] = 0x80000000;
        v53[2] = a2->top;
        v53[3] = 0;
        v32 = v53 + 4;
        *v32 = 2;
        v54 = a2->top;
      }
      v32[1] = v54;
      v32[2] = a3->bottom;
      v32[3] = a3->right;
      v51 = a2->right;
      goto LABEL_55;
    }
    v29 = v22 - 9;
    if ( !v29 )
    {
      v42 = *(_DWORD **)(v9 + 88);
      *(_DWORD *)(v9 + 80) = 96;
      *(_DWORD *)(v9 + 84) = 5;
      *(struct _RECTL *)(v9 + 96) = *a2;
      *v42 = 0;
      v42[1] = 0x80000000;
      v42[2] = a2->top;
      v42[3] = 0;
      v42 += 4;
      *v42 = 2;
      v42[1] = a2->top;
      v42[2] = a3->top;
      v42[3] = a2->left;
      v42[4] = a2->right;
      v42[5] = 2;
      v32 = (_DWORD *)((char *)v42 + (unsigned int)(4 * *v42 + 16));
      *v32 = 0;
      v32[1] = a3->top;
      *((_QWORD *)v32 + 1) = (unsigned int)a3->bottom;
      goto LABEL_33;
    }
    v30 = v29 - 1;
    if ( !v30 )
    {
      v31 = *(_DWORD **)(v9 + 88);
      *(_DWORD *)(v9 + 80) = 112;
      *(_DWORD *)(v9 + 84) = 5;
      *(struct _RECTL *)(v9 + 96) = *a2;
      *v31 = 0;
      v31[1] = 0x80000000;
      v31[2] = a2->top;
      v31[3] = 0;
      v31 += 4;
      *v31 = 2;
      v31[1] = a2->top;
      v31[2] = a3->top;
      v31[3] = a2->left;
      v31[4] = a2->right;
      v31[5] = 2;
      v32 = (_DWORD *)((char *)v31 + (unsigned int)(4 * *v31 + 16));
      *v32 = 4;
      v33 = a3->top;
LABEL_32:
      v32[1] = v33;
      v32[2] = a3->bottom;
      v32[3] = a2->left;
      v32[4] = a3->left;
      v32[5] = a3->right;
      v32[6] = a2->right;
      v32[7] = 4;
LABEL_33:
      v34 = (_DWORD *)((char *)v32 + (unsigned int)(4 * *v32 + 16));
      *v34 = 2;
      v34[1] = a3->bottom;
      v34[2] = a2->bottom;
      v35 = a2->left;
LABEL_34:
      v34[3] = v35;
      v36 = a2->right;
      goto LABEL_35;
    }
    v38 = v30 - 1;
    if ( !v38 )
    {
      v49 = *(_DWORD **)(v9 + 88);
      *(_DWORD *)(v9 + 80) = 104;
      *(_DWORD *)(v9 + 84) = 5;
      *(struct _RECTL *)(v9 + 96) = *a2;
      *v49 = 0;
      v49[1] = 0x80000000;
      v49[2] = a2->top;
      v49[3] = 0;
      v49 += 4;
      *v49 = 2;
      v49[1] = a2->top;
      v49[2] = a3->top;
      v49[3] = a2->left;
      v49[4] = a2->right;
      v49[5] = 2;
      v32 = (_DWORD *)((char *)v49 + (unsigned int)(4 * *v49 + 16));
      *v32 = 2;
      v50 = a3->top;
LABEL_54:
      v32[1] = v50;
      v32[2] = a3->bottom;
      v32[3] = a2->left;
      v51 = a3->left;
LABEL_55:
      v32[4] = v51;
      v32[5] = 2;
      goto LABEL_33;
    }
    v39 = v38 - 1;
    if ( !v39 )
    {
      v52 = *(_DWORD **)(v9 + 88);
      *(_DWORD *)(v9 + 80) = 80;
      *(_DWORD *)(v9 + 84) = 4;
      *(struct _RECTL *)(v9 + 96) = *a2;
      *v52 = 0;
      v52[1] = 0x80000000;
      v52[2] = a2->top;
      v52[3] = 0;
      v52 += 4;
      *v52 = 2;
      v52[1] = a2->top;
      v52[2] = a3->top;
      v52[3] = a2->left;
      v52[4] = a2->right;
      v52[5] = 2;
      v34 = (_DWORD *)((char *)v52 + (unsigned int)(4 * *v52 + 16));
      *v34 = 2;
      v34[1] = a3->top;
      v34[2] = a2->bottom;
      v35 = a3->right;
      goto LABEL_34;
    }
    v40 = v39 - 1;
    if ( v40 )
    {
      v43 = v40 - 1;
      if ( !v43 )
      {
        v48 = *(_DWORD **)(v9 + 88);
        *(_DWORD *)(v9 + 80) = 88;
        *(_DWORD *)(v9 + 84) = 4;
        *(struct _RECTL *)(v9 + 96) = *a2;
        *v48 = 0;
        v48[1] = 0x80000000;
        v48[2] = a2->top;
        v48[3] = 0;
        v48 += 4;
        *v48 = 2;
        v48[1] = a2->top;
        v48[2] = a3->top;
        v48[3] = a2->left;
        v48[4] = a2->right;
        v48[5] = 2;
        v34 = (_DWORD *)((char *)v48 + (unsigned int)(4 * *v48 + 16));
        *v34 = 4;
        v47 = a3->top;
        goto LABEL_52;
      }
      if ( v43 != 1 )
        return 1LL;
      v44 = *(_DWORD **)(v9 + 88);
      *(_DWORD *)(v9 + 80) = 80;
      *(_DWORD *)(v9 + 84) = 4;
      *(struct _RECTL *)(v9 + 96) = *a2;
      *v44 = 0;
      v44[1] = 0x80000000;
      v44[2] = a2->top;
      v44[3] = 0;
      v44 += 4;
      *v44 = 2;
      v44[1] = a2->top;
      v44[2] = a3->top;
      v44[3] = a2->left;
      v44[4] = a2->right;
      v44[5] = 2;
      v34 = (_DWORD *)((char *)v44 + (unsigned int)(4 * *v44 + 16));
      *v34 = 2;
      v34[1] = a3->top;
      v34[2] = a2->bottom;
      v34[3] = a2->left;
      v36 = a3->left;
LABEL_35:
      v34[5] = 2;
      v34[4] = v36;
LABEL_36:
      v37 = (char *)v34 + (unsigned int)(4 * *v34 + 16);
      *(_DWORD *)v37 = 0;
      *((_DWORD *)v37 + 1) = a2->bottom;
      *((_QWORD *)v37 + 1) = 0x7FFFFFFFLL;
      *(_QWORD *)(v9 + 40) = v37 + 16;
      return 1LL;
    }
    v59 = (__int128)*a2;
    HIDWORD(v59) = top;
LABEL_42:
    v41 = (struct _RECTL *)&v59;
LABEL_43:
    RGNOBJ::vSet(this, v41);
    return 1LL;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v58, *(_DWORD *)(v9 + 80));
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v58);
  if ( v58[0] )
  {
    RGNOBJ::vCopy((RGNOBJ *)v58, this);
    if ( (unsigned int)RGNOBJ::bSubtractComplex((RGNOBJ *)v58, a2, a3, a4) )
      v11 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)v58);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v58);
  return v11;
}
