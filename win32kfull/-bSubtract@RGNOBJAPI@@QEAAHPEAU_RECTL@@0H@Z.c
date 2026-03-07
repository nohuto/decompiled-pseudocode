__int64 __fastcall RGNOBJAPI::bSubtract(RGNOBJAPI *this, struct _RECTL *a2, struct _RECTL *a3, int a4)
{
  __int64 v6; // r8
  LONG left; // edx
  LONG right; // ecx
  LONG *p_bottom; // r9
  int v12; // eax
  LONG top; // r15d
  LONG v14; // r12d
  LONG v15; // r14d
  LONG bottom; // r10d
  LONG v17; // eax
  LONG v18; // r11d
  bool v19; // cc
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  unsigned int v29; // ebx
  int v30; // ecx
  int v31; // ecx
  _DWORD *v32; // rdx
  _DWORD *v33; // rdx
  _DWORD *v34; // rdx
  LONG v35; // eax
  char *v36; // rdx
  _DWORD *v37; // rdx
  _DWORD *v38; // rdx
  LONG v39; // eax
  _DWORD *v40; // rdx
  LONG v41; // eax
  LONG v42; // eax
  _DWORD *v43; // rdx
  int v44; // ecx
  const struct _RECTL *v45; // rdx
  int v46; // ecx
  _DWORD *v47; // rdx
  _DWORD *v48; // rdx
  LONG v49; // eax
  _DWORD *v50; // rdx
  _DWORD *v51; // rdx
  _DWORD *v52; // rdx
  _DWORD *v53; // rdx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  _DWORD *v57; // rdx
  _DWORD *v58; // rdx
  LONG v59; // eax
  _DWORD *v60; // rdx
  _DWORD *v61; // rdx
  _DWORD *v62; // rdx
  char *v63; // rdx
  __int64 v64; // [rsp+20h] [rbp-28h] BYREF
  struct _RECTL v65; // [rsp+28h] [rbp-20h] BYREF

  v6 = *(_QWORD *)this;
  left = a2->left;
  right = a2->right;
  p_bottom = &a2->bottom;
  if ( left == right || (v12 = 0, a2->top == *p_bottom) )
    v12 = 1;
  if ( v12 )
  {
    RGNOBJ::vSet(this);
    return 1LL;
  }
  else
  {
    if ( a4 == 1 )
    {
      top = a3->top;
      v14 = *p_bottom;
      if ( top >= *p_bottom
        || (v15 = a3->left, a3->left >= right)
        || (bottom = a3->bottom, v17 = a2->top, bottom <= v17)
        || (v18 = a3->right, v18 <= left) )
      {
        v45 = a2;
        goto LABEL_45;
      }
      v19 = v15 <= left;
      v65 = 0LL;
      v20 = v18 >= right;
      if ( !v19 )
        v20 += 2;
      if ( top > v17 )
      {
        v21 = 8;
        if ( bottom >= v14 )
          v21 = 12;
      }
      else
      {
        v21 = 0;
        if ( bottom >= v14 )
          v21 = 4;
      }
      v22 = v21 + v20;
      if ( (unsigned int)(v21 + v20) > 8 )
      {
        v30 = v22 - 9;
        if ( !v30 )
        {
          *(_DWORD *)(v6 + 48) = 96;
          *(_DWORD *)(v6 + 52) = 5;
          *(struct _RECTL *)(v6 + 56) = *a2;
          v62 = *(_DWORD **)(v6 + 32);
          *v62 = 0;
          v62[1] = 0x80000000;
          v62[2] = a2->top;
          v62[3] = 0;
          v62 += 4;
          *v62 = 2;
          v62[1] = a2->top;
          v62[2] = a3->top;
          v62[3] = a2->left;
          v62[4] = a2->right;
          v62[5] = 2;
          v63 = (char *)v62 + (unsigned int)(4 * *v62 + 16);
          *(_DWORD *)v63 = 0;
          *((_DWORD *)v63 + 1) = a3->top;
          *((_QWORD *)v63 + 1) = (unsigned int)a3->bottom;
          v34 = v63 + 16;
          goto LABEL_33;
        }
        v31 = v30 - 1;
        if ( !v31 )
        {
          *(_DWORD *)(v6 + 48) = 112;
          *(_DWORD *)(v6 + 52) = 5;
          *(struct _RECTL *)(v6 + 56) = *a2;
          v32 = *(_DWORD **)(v6 + 32);
          *v32 = 0;
          v32[1] = 0x80000000;
          v32[2] = a2->top;
          v32[3] = 0;
          v32 += 4;
          *v32 = 2;
          v32[1] = a2->top;
          v32[2] = a3->top;
          v32[3] = a2->left;
          v32[4] = a2->right;
          v32[5] = 2;
          v33 = (_DWORD *)((char *)v32 + (unsigned int)(4 * *v32 + 16));
          *v33 = 4;
          v33[1] = a3->top;
          v33[2] = a3->bottom;
          v33[3] = a2->left;
          v33[4] = a3->left;
          v33[5] = a3->right;
          v33[6] = a2->right;
          v33[7] = 4;
          v34 = v33 + 8;
LABEL_33:
          *v34 = 2;
          v34[1] = a3->bottom;
          v34[2] = *p_bottom;
          v34[3] = a2->left;
          v35 = a2->right;
          v34[5] = 2;
          v34[4] = v35;
          goto LABEL_34;
        }
        v46 = v31 - 1;
        if ( v46 )
        {
          v54 = v46 - 1;
          if ( v54 )
          {
            v55 = v54 - 1;
            if ( !v55 )
            {
              v65 = *a2;
              v65.bottom = top;
              goto LABEL_44;
            }
            v56 = v55 - 1;
            if ( !v56 )
            {
              *(_DWORD *)(v6 + 48) = 88;
              *(_DWORD *)(v6 + 52) = 4;
              *(struct _RECTL *)(v6 + 56) = *a2;
              v58 = *(_DWORD **)(v6 + 32);
              *v58 = 0;
              v58[1] = 0x80000000;
              v58[2] = a2->top;
              v58[3] = 0;
              v58 += 4;
              *v58 = 2;
              v58[1] = a2->top;
              v58[2] = a3->top;
              v58[3] = a2->left;
              v59 = a2->right;
              v58[5] = 2;
              v58[4] = v59;
              v60 = (_DWORD *)((char *)v58 + (unsigned int)(4 * *v58 + 16));
              *v60 = 4;
              v60[1] = a3->top;
              v60[2] = *p_bottom;
              v60[3] = a2->left;
              v60[4] = a3->left;
              v60[5] = a3->right;
              v60[6] = a2->right;
              v60[7] = 4;
              v43 = v60 + 8;
              goto LABEL_40;
            }
            if ( v56 != 1 )
              return 1LL;
            *(_DWORD *)(v6 + 48) = 80;
            *(_DWORD *)(v6 + 52) = 4;
            *(struct _RECTL *)(v6 + 56) = *a2;
            v57 = *(_DWORD **)(v6 + 32);
            *v57 = 0;
            v57[1] = 0x80000000;
            v57[2] = a2->top;
            v57[3] = 0;
            v57 += 4;
            *v57 = 2;
            v57[1] = a2->top;
            v57[2] = a3->top;
            v57[3] = a2->left;
            v57[4] = a2->right;
            v57[5] = 2;
            v40 = (_DWORD *)((char *)v57 + (unsigned int)(4 * *v57 + 16));
            *v40 = 2;
            v40[1] = a3->top;
            v40[2] = *p_bottom;
            v40[3] = a2->left;
            v42 = a3->left;
            goto LABEL_38;
          }
          *(_DWORD *)(v6 + 48) = 80;
          *(_DWORD *)(v6 + 52) = 4;
          *(struct _RECTL *)(v6 + 56) = *a2;
          v61 = *(_DWORD **)(v6 + 32);
          *v61 = 0;
          v61[1] = 0x80000000;
          v61[2] = a2->top;
          v61[3] = 0;
          v61 += 4;
          *v61 = 2;
          v61[1] = a2->top;
          v61[2] = a3->top;
          v61[3] = a2->left;
          v61[4] = a2->right;
          v61[5] = 2;
          v40 = (_DWORD *)((char *)v61 + (unsigned int)(4 * *v61 + 16));
          *v40 = 2;
          v40[1] = a3->top;
          v40[2] = *p_bottom;
          v41 = a3->right;
LABEL_37:
          v40[3] = v41;
          v42 = a2->right;
LABEL_38:
          v40[4] = v42;
          v40[5] = 2;
LABEL_39:
          v43 = v40 + 6;
LABEL_40:
          *v43 = 0;
          v43[1] = *p_bottom;
          *((_QWORD *)v43 + 1) = 0x7FFFFFFFLL;
          *(_QWORD *)(v6 + 40) = v43 + 4;
          return 1LL;
        }
        *(_DWORD *)(v6 + 48) = 104;
        *(_DWORD *)(v6 + 52) = 5;
        *(struct _RECTL *)(v6 + 56) = *a2;
        v47 = *(_DWORD **)(v6 + 32);
        *v47 = 0;
        v47[1] = 0x80000000;
        v47[2] = a2->top;
        v47[3] = 0;
        v47 += 4;
        *v47 = 2;
        v47[1] = a2->top;
        v47[2] = a3->top;
        v47[3] = a2->left;
        v47[4] = a2->right;
        v47[5] = 2;
        v48 = (_DWORD *)((char *)v47 + (unsigned int)(4 * *v47 + 16));
        *v48 = 2;
        v48[1] = a3->top;
        v48[2] = a3->bottom;
        v48[3] = a2->left;
        v49 = a3->left;
      }
      else
      {
        if ( v22 != 8 )
        {
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( !v23 )
            {
              v65 = *a2;
              v65.top = bottom;
              goto LABEL_44;
            }
            v24 = v23 - 1;
            if ( !v24 )
            {
              *(_DWORD *)(v6 + 48) = 88;
              *(_DWORD *)(v6 + 52) = 4;
              *(struct _RECTL *)(v6 + 56) = *a2;
              v50 = *(_DWORD **)(v6 + 32);
              *v50 = 0;
              v50[1] = 0x80000000;
              v50[2] = a2->top;
              v50[3] = 0;
              v50 += 4;
              *v50 = 4;
              v50[1] = a2->top;
              v50[2] = a3->bottom;
              v50[3] = a2->left;
              v50[4] = a3->left;
              v50[5] = a3->right;
              v50[6] = a2->right;
              v50[7] = 4;
              v40 = (_DWORD *)((char *)v50 + (unsigned int)(4 * *v50 + 16));
              *v40 = 2;
              v40[1] = a3->bottom;
              v40[2] = *p_bottom;
              v40[3] = a2->left;
              v40[4] = a2->right;
              v40[5] = 2;
              goto LABEL_39;
            }
            v25 = v24 - 1;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( !v27 )
                {
                  RGNOBJ::vSet(this);
                  return 1LL;
                }
                v44 = v27 - 1;
                if ( v44 )
                {
                  if ( v44 != 1 )
                    return 1LL;
                  v65 = *a2;
                  v65.right = v15;
                  goto LABEL_44;
                }
                *(_DWORD *)(v6 + 48) = 64;
                *(_DWORD *)(v6 + 52) = 3;
                *(struct _RECTL *)(v6 + 56) = *a2;
                v51 = *(_DWORD **)(v6 + 32);
                *v51 = 0;
                v51[1] = 0x80000000;
                v51[2] = a2->top;
                v51[3] = 0;
                v34 = v51 + 4;
                *v34 = 4;
                v34[1] = a2->top;
                v34[2] = *p_bottom;
                v34[3] = a2->left;
                v34[4] = a3->left;
                v34[5] = a3->right;
                v34[6] = a2->right;
                v34[7] = 4;
LABEL_34:
                v36 = (char *)v34 + (unsigned int)(4 * *v34 + 16);
                *(_DWORD *)v36 = 0;
                *((_DWORD *)v36 + 1) = *p_bottom;
                *((_QWORD *)v36 + 1) = 0x7FFFFFFFLL;
                *(_QWORD *)(v6 + 40) = v36 + 16;
                return 1LL;
              }
              v65 = *a2;
              v65.left = v18;
LABEL_44:
              v45 = &v65;
LABEL_45:
              RGNOBJ::vSet(this, v45);
              return 1LL;
            }
            *(_DWORD *)(v6 + 48) = 80;
            *(_DWORD *)(v6 + 52) = 4;
            *(struct _RECTL *)(v6 + 56) = *a2;
            v37 = *(_DWORD **)(v6 + 32);
            *v37 = 0;
            v37[1] = 0x80000000;
            v37[2] = a2->top;
            v37[3] = 0;
            v38 = v37 + 4;
            *v38 = 2;
            v38[1] = a2->top;
            v38[2] = a3->bottom;
            v38[3] = a2->left;
            v39 = a3->left;
          }
          else
          {
            *(_DWORD *)(v6 + 48) = 80;
            *(_DWORD *)(v6 + 52) = 4;
            *(struct _RECTL *)(v6 + 56) = *a2;
            v52 = *(_DWORD **)(v6 + 32);
            *v52 = 0;
            v52[1] = 0x80000000;
            v52[2] = a2->top;
            v52[3] = 0;
            v38 = v52 + 4;
            *v38 = 2;
            v38[1] = a2->top;
            v38[2] = a3->bottom;
            v38[3] = a3->right;
            v39 = a2->right;
          }
          v38[4] = v39;
          v38[5] = 2;
          v40 = (_DWORD *)((char *)v38 + (unsigned int)(4 * *v38 + 16));
          *v40 = 2;
          v40[1] = a3->bottom;
          v40[2] = *p_bottom;
          v41 = a2->left;
          goto LABEL_37;
        }
        *(_DWORD *)(v6 + 48) = 104;
        *(_DWORD *)(v6 + 52) = 5;
        *(struct _RECTL *)(v6 + 56) = *a2;
        v53 = *(_DWORD **)(v6 + 32);
        *v53 = 0;
        v53[1] = 0x80000000;
        v53[2] = a2->top;
        v53[3] = 0;
        v53 += 4;
        *v53 = 2;
        v53[1] = a2->top;
        v53[2] = a3->top;
        v53[3] = a2->left;
        v53[4] = a2->right;
        v53[5] = 2;
        v48 = (_DWORD *)((char *)v53 + (unsigned int)(4 * *v53 + 16));
        *v48 = 2;
        v48[1] = a3->top;
        v48[2] = a3->bottom;
        v48[3] = a3->right;
        v49 = a2->right;
      }
      v48[4] = v49;
      v48[5] = 2;
      v34 = v48 + 6;
      goto LABEL_33;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v64, *(_DWORD *)(v6 + 48));
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v64);
    if ( v64
      && (RGNOBJ::vCopy((RGNOBJ *)&v64, this), (unsigned int)RGNOBJ::bSubtractComplex((RGNOBJ *)&v64, a2, a3, a4)) )
    {
      v29 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)&v64);
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v64);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v64);
      return v29;
    }
    else
    {
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v64);
      return 0LL;
    }
  }
}
