/*
 * XREFs of ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C008BEE0
 * Callers:
 *     GreSubtractRgnRectList @ 0x1C008BE50 (GreSubtractRgnRectList.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C008E130 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall RGNOBJAPI::bSubtract(RGNOBJAPI *this, struct _RECTL *a2, struct _RECTL *a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r9d
  unsigned int v11; // edi
  LONG top; // r10d
  LONG v14; // r11d
  LONG left; // r15d
  LONG v16; // ecx
  LONG bottom; // edx
  LONG v18; // r12d
  LONG right; // r9d
  bool v20; // cc
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  _DWORD *v31; // rdx
  char *v32; // rdx
  char *v33; // rax
  struct _RECTL *v34; // rdx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  _DWORD *v39; // rdx
  char *v40; // rdx
  LONG v41; // eax
  _DWORD *v42; // rdx
  char *v43; // rdx
  _DWORD *v44; // rdx
  _DWORD *v45; // rdx
  LONG v46; // eax
  LONG v47; // eax
  unsigned int v48; // ecx
  _DWORD *v49; // rdx
  char *v50; // rdx
  LONG v51; // eax
  _DWORD *v52; // rdx
  char *v53; // rdx
  _DWORD *v54; // rdx
  _DWORD *v55; // rdx
  char *v56; // rdx
  _DWORD *v57; // rdx
  _DWORD *v58; // rdx
  _DWORD *v59; // rdx
  _QWORD v60[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v61; // [rsp+30h] [rbp-28h] BYREF

  v11 = 0;
  if ( ERECTL::bEmpty((ERECTL *)a2) )
    goto LABEL_24;
  if ( v10 == 1 )
  {
    top = a3->top;
    v14 = *(_DWORD *)(v8 + 12);
    if ( top >= v14
      || (left = a3->left, v16 = *(_DWORD *)(v8 + 8), a3->left >= v16)
      || (bottom = a3->bottom, v18 = a2->top, bottom <= v18)
      || (right = a3->right, right <= a2->left) )
    {
      v34 = a2;
      goto LABEL_35;
    }
    v20 = left <= a2->left;
    v61 = 0LL;
    v21 = right >= v16;
    if ( !v20 )
      v21 += 2;
    if ( top > v18 )
    {
      v22 = 8;
      if ( bottom >= v14 )
        v22 = 12;
    }
    else
    {
      v22 = 0;
      if ( bottom >= v14 )
        v22 = 4;
    }
    v23 = v21 + v22;
    if ( v23 > 8 )
    {
      v29 = v23 - 9;
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
        v43 = (char *)v42 + (unsigned int)(4 * *v42 + 16);
        *(_DWORD *)v43 = 0;
        *((_DWORD *)v43 + 1) = a3->top;
        *((_DWORD *)v43 + 2) = a3->bottom;
        *((_DWORD *)v43 + 3) = 0;
        *((_DWORD *)v43 + 4) = 2;
        *((_DWORD *)v43 + 5) = a3->bottom;
        *((_DWORD *)v43 + 6) = a2->bottom;
        *((_DWORD *)v43 + 7) = a2->left;
        *((_DWORD *)v43 + 8) = a2->right;
        *(_QWORD *)(v43 + 36) = 2LL;
        *((_DWORD *)v43 + 11) = a2->bottom;
        v33 = v43 + 56;
        *((_QWORD *)v43 + 6) = 0x7FFFFFFFLL;
        goto LABEL_32;
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
        v32 = (char *)v31 + (unsigned int)(4 * *v31 + 16);
        *(_DWORD *)v32 = 4;
        *((_DWORD *)v32 + 1) = a3->top;
        *((_DWORD *)v32 + 2) = a3->bottom;
        *((_DWORD *)v32 + 3) = a2->left;
        *((_DWORD *)v32 + 4) = a3->left;
        *((_DWORD *)v32 + 5) = a3->right;
        *((_DWORD *)v32 + 6) = a2->right;
        *((_DWORD *)v32 + 7) = 4;
        *((_DWORD *)v32 + 8) = 2;
        *((_DWORD *)v32 + 9) = a3->bottom;
        *((_DWORD *)v32 + 10) = a2->bottom;
        *((_DWORD *)v32 + 11) = a2->left;
        *((_DWORD *)v32 + 12) = a2->right;
        *(_QWORD *)(v32 + 52) = 2LL;
        *((_DWORD *)v32 + 15) = a2->bottom;
        v33 = v32 + 72;
        *((_QWORD *)v32 + 8) = 0x7FFFFFFFLL;
        goto LABEL_32;
      }
      v35 = v30 - 1;
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( !v37 )
          {
            v61 = (__int128)*a2;
            HIDWORD(v61) = top;
            goto LABEL_34;
          }
          v38 = v37 - 1;
          if ( !v38 )
          {
            v52 = *(_DWORD **)(v9 + 88);
            *(_DWORD *)(v9 + 80) = 88;
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
            v53 = (char *)v52 + (unsigned int)(4 * *v52 + 16);
            *(_DWORD *)v53 = 4;
            *((_DWORD *)v53 + 1) = a3->top;
            *((_DWORD *)v53 + 2) = a2->bottom;
            *((_DWORD *)v53 + 3) = a2->left;
            *((_DWORD *)v53 + 4) = a3->left;
            *((_DWORD *)v53 + 5) = a3->right;
            *((_DWORD *)v53 + 6) = a2->right;
            *(_QWORD *)(v53 + 28) = 4LL;
            *((_DWORD *)v53 + 9) = a2->bottom;
            v33 = v53 + 48;
            *((_QWORD *)v53 + 5) = 0x7FFFFFFFLL;
            goto LABEL_32;
          }
          if ( v38 != 1 )
            return 1LL;
          v39 = *(_DWORD **)(v9 + 88);
          *(_DWORD *)(v9 + 80) = 80;
          *(_DWORD *)(v9 + 84) = 4;
          *(struct _RECTL *)(v9 + 96) = *a2;
          *v39 = 0;
          v39[1] = 0x80000000;
          v39[2] = a2->top;
          v39[3] = 0;
          v39 += 4;
          *v39 = 2;
          v39[1] = a2->top;
          v39[2] = a3->top;
          v39[3] = a2->left;
          v39[4] = a2->right;
          v39[5] = 2;
          v40 = (char *)v39 + (unsigned int)(4 * *v39 + 16);
          *(_DWORD *)v40 = 2;
          *((_DWORD *)v40 + 1) = a3->top;
          *((_DWORD *)v40 + 2) = a2->bottom;
          *((_DWORD *)v40 + 3) = a2->left;
          v41 = a3->left;
LABEL_48:
          *((_DWORD *)v40 + 4) = v41;
          *(_QWORD *)(v40 + 20) = 2LL;
          *((_DWORD *)v40 + 7) = a2->bottom;
          v33 = v40 + 40;
          *((_QWORD *)v40 + 4) = 0x7FFFFFFFLL;
          goto LABEL_32;
        }
        v54 = *(_DWORD **)(v9 + 88);
        *(_DWORD *)(v9 + 80) = 80;
        *(_DWORD *)(v9 + 84) = 4;
        *(struct _RECTL *)(v9 + 96) = *a2;
        *v54 = 0;
        v54[1] = 0x80000000;
        v54[2] = a2->top;
        v54[3] = 0;
        v54 += 4;
        *v54 = 2;
        v54[1] = a2->top;
        v54[2] = a3->top;
        v54[3] = a2->left;
        v54[4] = a2->right;
        v54[5] = 2;
        v40 = (char *)v54 + (unsigned int)(4 * *v54 + 16);
        *(_DWORD *)v40 = 2;
        *((_DWORD *)v40 + 1) = a3->top;
        *((_DWORD *)v40 + 2) = a2->bottom;
        v47 = a3->right;
LABEL_47:
        *((_DWORD *)v40 + 3) = v47;
        v41 = a2->right;
        goto LABEL_48;
      }
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
      v50 = (char *)v49 + (unsigned int)(4 * *v49 + 16);
      *(_DWORD *)v50 = 2;
      *((_DWORD *)v50 + 1) = a3->top;
      *((_DWORD *)v50 + 2) = a3->bottom;
      *((_DWORD *)v50 + 3) = a2->left;
      v51 = a3->left;
    }
    else
    {
      if ( v23 != 8 )
      {
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( !v24 )
          {
            v61 = (__int128)*a2;
            DWORD1(v61) = bottom;
            goto LABEL_34;
          }
          v25 = v24 - 1;
          if ( !v25 )
          {
            v59 = *(_DWORD **)(v9 + 88);
            *(_DWORD *)(v9 + 80) = 88;
            *(_DWORD *)(v9 + 84) = 4;
            *(struct _RECTL *)(v9 + 96) = *a2;
            *v59 = 0;
            v59[1] = 0x80000000;
            v59[2] = a2->top;
            v59[3] = 0;
            v45 = v59 + 4;
            *v45 = 4;
            v45[1] = a2->top;
            v45[2] = a3->bottom;
            v45[3] = a2->left;
            v45[4] = a3->left;
            v45[5] = a3->right;
            v45[6] = a2->right;
            v45[7] = 4;
            goto LABEL_46;
          }
          v26 = v25 - 1;
          if ( v26 )
          {
            v27 = v26 - 1;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( !v28 )
              {
LABEL_24:
                RGNOBJ::vSet(this);
                return 1LL;
              }
              v48 = v28 - 1;
              if ( v48 )
              {
                if ( v48 != 1 )
                  return 1LL;
                v61 = (__int128)*a2;
                DWORD2(v61) = left;
                goto LABEL_34;
              }
              v55 = *(_DWORD **)(v9 + 88);
              *(_DWORD *)(v9 + 80) = 64;
              *(_DWORD *)(v9 + 84) = 3;
              *(struct _RECTL *)(v9 + 96) = *a2;
              *v55 = 0;
              v55[1] = 0x80000000;
              v55[2] = a2->top;
              v55[3] = 0;
              v55 += 4;
              *v55 = 4;
              v55[1] = a2->top;
              v55[2] = a2->bottom;
              v55[3] = a2->left;
              v55[4] = a3->left;
              v55[5] = a3->right;
              v55[6] = a2->right;
              v55[7] = 4;
              v56 = (char *)v55 + (unsigned int)(4 * *v55 + 16);
              *(_DWORD *)v56 = 0;
              *((_DWORD *)v56 + 1) = a2->bottom;
              v33 = v56 + 16;
              *((_QWORD *)v56 + 1) = 0x7FFFFFFFLL;
LABEL_32:
              *(_QWORD *)(v9 + 40) = v33;
              return 1LL;
            }
            v61 = (__int128)*a2;
            LODWORD(v61) = right;
LABEL_34:
            v34 = (struct _RECTL *)&v61;
LABEL_35:
            RGNOBJ::vSet(this, v34);
            return 1LL;
          }
          v57 = *(_DWORD **)(v9 + 88);
          *(_DWORD *)(v9 + 80) = 80;
          *(_DWORD *)(v9 + 84) = 4;
          *(struct _RECTL *)(v9 + 96) = *a2;
          *v57 = 0;
          v57[1] = 0x80000000;
          v57[2] = a2->top;
          v57[3] = 0;
          v45 = v57 + 4;
          *v45 = 2;
          v45[1] = a2->top;
          v45[2] = a3->bottom;
          v45[3] = a2->left;
          v46 = a3->left;
        }
        else
        {
          v44 = *(_DWORD **)(v9 + 88);
          *(_DWORD *)(v9 + 80) = 80;
          *(_DWORD *)(v9 + 84) = 4;
          *(struct _RECTL *)(v9 + 96) = *a2;
          *v44 = 0;
          v44[1] = 0x80000000;
          v44[2] = a2->top;
          v44[3] = 0;
          v45 = v44 + 4;
          *v45 = 2;
          v45[1] = a2->top;
          v45[2] = a3->bottom;
          v45[3] = a3->right;
          v46 = a2->right;
        }
        v45[4] = v46;
        v45[5] = 2;
LABEL_46:
        v40 = (char *)v45 + (unsigned int)(4 * *v45 + 16);
        *(_DWORD *)v40 = 2;
        *((_DWORD *)v40 + 1) = a3->bottom;
        *((_DWORD *)v40 + 2) = a2->bottom;
        v47 = a2->left;
        goto LABEL_47;
      }
      v58 = *(_DWORD **)(v9 + 88);
      *(_DWORD *)(v9 + 80) = 104;
      *(_DWORD *)(v9 + 84) = 5;
      *(struct _RECTL *)(v9 + 96) = *a2;
      *v58 = 0;
      v58[1] = 0x80000000;
      v58[2] = a2->top;
      v58[3] = 0;
      v58 += 4;
      *v58 = 2;
      v58[1] = a2->top;
      v58[2] = a3->top;
      v58[3] = a2->left;
      v58[4] = a2->right;
      v58[5] = 2;
      v50 = (char *)v58 + (unsigned int)(4 * *v58 + 16);
      *(_DWORD *)v50 = 2;
      *((_DWORD *)v50 + 1) = a3->top;
      *((_DWORD *)v50 + 2) = a3->bottom;
      *((_DWORD *)v50 + 3) = a3->right;
      v51 = a2->right;
    }
    *((_DWORD *)v50 + 4) = v51;
    *((_DWORD *)v50 + 5) = 2;
    *((_DWORD *)v50 + 6) = 2;
    *((_DWORD *)v50 + 7) = a3->bottom;
    *((_DWORD *)v50 + 8) = a2->bottom;
    *((_DWORD *)v50 + 9) = a2->left;
    *((_DWORD *)v50 + 10) = a2->right;
    *(_QWORD *)(v50 + 44) = 2LL;
    *((_DWORD *)v50 + 13) = a2->bottom;
    v33 = v50 + 64;
    *((_QWORD *)v50 + 7) = 0x7FFFFFFFLL;
    goto LABEL_32;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v60, *(_DWORD *)(v9 + 80));
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v60);
  if ( v60[0] )
  {
    RGNOBJ::vCopy((RGNOBJ *)v60, this);
    if ( (unsigned int)RGNOBJ::bSubtractComplex((RGNOBJ *)v60, a2, a3, a4) )
      v11 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)v60);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v60);
  return v11;
}
