void __fastcall vInitStrDDAClip(
        struct _RECTL *a1,
        struct _RECTL *a2,
        struct _RECTL *a3,
        struct _RECTL *a4,
        struct _RECTL *a5)
{
  LONG top; // r8d
  LONG left; // r9d
  struct _RECTL *v9; // rdi
  LONG v10; // edx
  LONG v12; // ecx
  LONG right; // esi
  __int64 v14; // rdx
  __int64 v15; // r9
  LONG v16; // r11d
  int v17; // r12d
  int v18; // r13d
  LONG v19; // ecx
  LONG v20; // edx
  struct _RECTL *v21; // r9
  LONG v22; // edi
  int v23; // eax
  LONG x; // r10d
  LONG v25; // ebx
  int v26; // r8d
  LONG v27; // edx
  int v28; // r9d
  LONG v29; // r8d
  LONG v30; // r11d
  int v31; // eax
  LONG v32; // r10d
  LONG v33; // eax
  LONG v34; // eax
  struct _RECTL *v35; // rcx
  LONG v36; // esi
  struct _RECTL *v37; // r9
  int v38; // r12d
  int v39; // r13d
  LONG v40; // ecx
  LONG v41; // edx
  LONG v42; // r11d
  int v43; // ebx
  LONG v44; // edx
  LONG v45; // r10d
  LONG v46; // r8d
  int v47; // r9d
  LONG v48; // ebx
  LONG v49; // edx
  LONG v50; // edi
  int v51; // edx
  LONG v52; // eax
  LONG v53; // eax
  LONG v54; // eax
  LONG v55; // eax
  LONG v56; // ecx
  LONG bottom; // eax
  LONG v58; // eax
  __int128 v59; // xmm0
  struct _POINTL v60; // [rsp+20h] [rbp-71h] BYREF
  struct _RECTL *v61; // [rsp+28h] [rbp-69h]
  _QWORD v62[2]; // [rsp+30h] [rbp-61h] BYREF
  LONG v63; // [rsp+40h] [rbp-51h]
  LONG v64; // [rsp+44h] [rbp-4Dh]
  struct _POINTL v65; // [rsp+48h] [rbp-49h]
  struct _RECTL *v66; // [rsp+50h] [rbp-41h]
  struct _RECTL *v67; // [rsp+58h] [rbp-39h]
  __int128 v68; // [rsp+60h] [rbp-31h] BYREF
  __int128 v69; // [rsp+70h] [rbp-21h] BYREF
  struct _RECTL v70; // [rsp+80h] [rbp-11h] BYREF
  __int128 v71; // [rsp+90h] [rbp-1h] BYREF

  top = a2->top;
  v66 = a2;
  v67 = a3;
  left = a2->left;
  v9 = a2;
  v10 = a3->top;
  v12 = a3->left;
  v60.x = a3->left;
  v60.y = v10;
  v61 = a5;
  v63 = left;
  v64 = top;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  if ( __PAIR64__(top, left) )
  {
    LODWORD(v68) = a1->left - left;
    DWORD1(v68) = a1->top - top;
    DWORD2(v68) = a1->right - left;
    bottom = a1->bottom;
    a1 = (struct _RECTL *)&v68;
    HIDWORD(v68) = bottom - top;
    DWORD2(v69) = v9->right - left;
    v58 = v9->bottom;
    v9 = (struct _RECTL *)&v69;
    v66 = (struct _RECTL *)&v69;
    HIDWORD(v69) = v58 - top;
  }
  if ( v12 || v10 )
  {
    v70 = *a3;
    ERECTL::bOffsetSubtract((ERECTL *)&v70, &v60, 0);
    v59 = (__int128)*a4;
    a3 = &v70;
    v67 = &v70;
    v71 = v59;
    ERECTL::bOffsetSubtract((ERECTL *)&v71, &v60, 0);
    a4 = (struct _RECTL *)&v71;
  }
  ERECTL::operator*=(a4, a3);
  right = v9->right;
  v14 = (unsigned int)(a3->right - a3->left);
  v62[0] = 0LL;
  v60 = 0LL;
  STR_DIV(v62, v14, (unsigned int)right, v15);
  v17 = HIDWORD(v62[0]);
  v18 = v62[0];
  v19 = v62[0];
  v20 = HIDWORD(v62[0]) + ((right - 1) >> 1);
  v60.x = v62[0];
  v60.y = v20;
  if ( v20 >= right )
  {
    v19 = LODWORD(v62[0]) + 1;
    v60.x = LODWORD(v62[0]) + 1;
    v60.y = v20 - right;
  }
  v21 = v61;
  v22 = v20 - right;
  v23 = -1;
  x = v16;
  v25 = v16;
  v26 = -1;
  if ( v20 < right )
    v22 = HIDWORD(v62[0]) + ((right - 1) >> 1);
  v61->left = -1;
  v21->right = -1;
  v27 = v16;
  if ( a1->right > v16 )
  {
    v28 = -1;
    v60.y = v22;
    while ( 1 )
    {
      v22 += v17;
      v29 = v19 + v18;
      v30 = v25;
      v31 = v19 - x;
      v32 = v22;
      v25 += v31;
      v65 = v60;
      v60.x = v19 + v18;
      v60.y = v22;
      if ( v22 >= right )
      {
        v22 -= right;
        v60.x = v29 + 1;
        v60.y = v22;
      }
      v19 = v29 + 1;
      if ( v32 < right )
        v19 = v29;
      v26 = v28;
      if ( v28 == -1 )
      {
        v26 = -1;
        if ( a4->left >= v30 && a4->left <= v25 )
        {
          v26 = v27;
          v61->left = v27;
        }
      }
      v33 = a4->right;
      if ( v33 <= v25 && v33 >= v30 )
        v61->right = v27;
      ++v27;
      v60.x = v19;
      v28 = v26;
      if ( v27 >= a1->right )
        break;
      x = v65.x;
    }
    v21 = v61;
    v16 = 0;
    v23 = v61->right;
  }
  if ( v26 != -1 )
  {
    if ( v23 == -1 )
      v23 = v27;
    goto LABEL_25;
  }
  v21->left = v16;
  if ( v23 != -1 )
  {
LABEL_25:
    v34 = v23 + 1;
    goto LABEL_26;
  }
  v34 = v16;
LABEL_26:
  v35 = v67;
  v21->right = v34;
  v36 = v66->bottom;
  STR_DIV(v62, (unsigned int)(v35->bottom - v35->top), (unsigned int)v36, v21);
  v38 = HIDWORD(v62[0]);
  v39 = v62[0];
  v40 = v62[0];
  v41 = HIDWORD(v62[0]) + ((v36 - 1) >> 1);
  v60.x = v62[0];
  v60.y = v41;
  if ( v41 >= v36 )
  {
    v40 = LODWORD(v62[0]) + 1;
    v60.x = LODWORD(v62[0]) + 1;
    v60.y = v41 - v36;
  }
  v37->top = -1;
  v42 = v41 - v36;
  v37->bottom = -1;
  if ( v41 < v36 )
    v42 = v41;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  if ( a1->bottom <= 0 )
    goto LABEL_59;
  v47 = -1;
  v60.y = v42;
  while ( 1 )
  {
    v42 += v38;
    v48 = v45;
    v45 += v40 - v44;
    v49 = v40 + v39;
    v50 = v42;
    v65 = v60;
    v60.x = v40 + v39;
    v60.y = v42;
    if ( v42 >= v36 )
    {
      v42 -= v36;
      v60.x = v49 + 1;
      v60.y = v42;
    }
    v40 = v49 + 1;
    if ( v50 < v36 )
      v40 = v49;
    v51 = v47;
    if ( v47 == -1 )
    {
      v53 = a4->top;
      v51 = -1;
      if ( v53 >= v48 && v53 <= v45 )
      {
        v51 = v46;
        v61->top = v46;
      }
    }
    v52 = a4->bottom;
    if ( v52 <= v45 && v52 >= v48 )
      v61->bottom = v46;
    ++v46;
    v60.x = v40;
    v47 = v51;
    if ( v46 >= a1->bottom )
      break;
    v44 = v65.x;
  }
  v37 = v61;
  v54 = v61->bottom;
  if ( v51 != -1 )
    goto LABEL_49;
  if ( v54 == -1 )
  {
    v43 = 0;
LABEL_59:
    v51 = 0;
    goto LABEL_52;
  }
  v51 = 0;
LABEL_49:
  if ( v54 == -1 )
    v54 = v46;
  v43 = v54 + 1;
LABEL_52:
  v55 = v63;
  v37->left += v63;
  v56 = v64;
  v37->right += v55;
  v37->top = v56 + v51;
  v37->bottom = v56 + v43;
}
