__int64 __fastcall GreGetBoundsRect(HDC a1, struct _POINTL *a2, __int16 a3)
{
  __int64 v5; // rdx
  unsigned int v6; // edi
  struct tagRECT *v7; // rbx
  __m128i v8; // xmm1
  __int64 v9; // rcx
  int v10; // eax
  LONG left; // r8d
  LONG right; // r9d
  int v13; // eax
  LONG top; // ecx
  LONG bottom; // r10d
  __int128 v17; // xmm0
  LONG v18; // ecx
  LONG v19; // eax
  LONG v20; // edx
  LONG v21; // r8d
  LONG v22; // eax
  LONG v23; // r9d
  LONG v24; // eax
  LONG v25; // eax
  LONG v26; // eax
  LONG v27; // eax
  LONG v28; // eax
  LONG v29; // edx
  LONG v30; // r8d
  LONG v31; // ecx
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // r9d
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  LONG v38; // eax
  LONG v39; // eax
  _QWORD v40[2]; // [rsp+20h] [rbp-59h] BYREF
  _QWORD v41[2]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v42[32]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v43; // [rsp+60h] [rbp-19h] BYREF
  int v44; // [rsp+68h] [rbp-11h]
  int v45; // [rsp+6Ch] [rbp-Dh]
  __int16 v46; // [rsp+70h] [rbp-9h]
  struct _POINTL v47[2]; // [rsp+90h] [rbp+17h] BYREF
  LONG x; // [rsp+A0h] [rbp+27h]
  LONG y; // [rsp+A4h] [rbp+2Bh]
  LONG v50; // [rsp+A8h] [rbp+2Fh]
  LONG v51; // [rsp+ACh] [rbp+33h]

  DCOBJ::DCOBJ((DCOBJ *)v40, a1);
  v5 = v40[0];
  v6 = 3;
  if ( !v40[0] )
  {
    v6 = 0;
    goto LABEL_22;
  }
  v7 = 0LL;
  if ( a3 < 0 )
  {
    v7 = (struct tagRECT *)(v40[0] + 1064LL);
    goto LABEL_30;
  }
  if ( (a3 & 0x4000) != 0 )
  {
    v7 = (struct tagRECT *)(v40[0] + 1080LL);
LABEL_30:
    if ( !(unsigned int)IsRectEmptyInl(v7) )
    {
      *(struct tagRECT *)&a2->x = *v7;
LABEL_20:
      if ( (a3 & 1) != 0 )
      {
        v7->top = 0x7FFFFFFF;
        v7->left = 0x7FFFFFFF;
        v7->bottom = 0x80000000;
        v7->right = 0x80000000;
        v5 = v40[0];
      }
      goto LABEL_22;
    }
LABEL_25:
    v6 = 1;
    goto LABEL_22;
  }
  if ( (unsigned int)IsRectEmptyInl((const struct tagRECT *)(v40[0] + 1096LL)) )
    goto LABEL_25;
  v43 = 0LL;
  v44 = 0;
  v45 = 0;
  v46 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v42, (struct XDCOBJ *)v40, 0);
  if ( (v42[24] & 1) != 0 )
  {
    v8 = *(__m128i *)((char *)XDCOBJ::prgnEffRao((XDCOBJ *)v40) + 56);
    v7 = (struct tagRECT *)(v40[0] + 1096LL);
    v9 = *(_DWORD *)(v40[0] + 40LL) & 1;
    v10 = *(_DWORD *)(v40[0] + 8 * v9 + 1016);
    left = _mm_cvtsi128_si32(v8) - v10;
    right = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) - v10;
    v13 = *(_DWORD *)(v40[0] + 8 * v9 + 1020);
    top = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4)) - v13;
    bottom = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - v13;
    if ( *(_DWORD *)(v40[0] + 1096LL) > left )
      left = v7->left;
    a2->x = left;
    if ( v7->right < right )
      right = v7->right;
    a2[1].x = right;
    if ( v7->top > top )
      top = v7->top;
    a2->y = top;
    if ( v7->bottom < bottom )
      bottom = v7->bottom;
    a2[1].y = bottom;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v41, (struct XDCOBJ *)v40, 0x402u);
    if ( !v41[0] )
      goto LABEL_27;
    if ( (*(_DWORD *)(v41[0] + 32LL) & 1) != 0 )
    {
      if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v41, a2, 2uLL) )
        goto LABEL_17;
      goto LABEL_27;
    }
    v17 = *(_OWORD *)&a2->x;
    x = a2->x;
    y = a2[1].y;
    v50 = a2[1].x;
    v51 = a2->y;
    *(_OWORD *)&v47[0].x = v17;
    if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v41, v47, 4uLL) )
    {
LABEL_27:
      v6 = 0;
      goto LABEL_17;
    }
    v18 = v47[1].x;
    v19 = v47[1].x;
    v20 = v47[0].x;
    v21 = x;
    if ( v47[0].x < v47[1].x )
      v19 = v47[0].x;
    if ( v19 >= x )
    {
      v22 = x;
    }
    else
    {
      v22 = v47[1].x;
      if ( v47[0].x < v47[1].x )
        v22 = v47[0].x;
    }
    v23 = v50;
    if ( v22 >= v50 )
    {
      v25 = v50;
    }
    else
    {
      v24 = v47[1].x;
      if ( v47[0].x < v47[1].x )
        v24 = v47[0].x;
      if ( v24 >= x )
      {
        v25 = x;
      }
      else
      {
        v25 = v47[1].x;
        if ( v47[0].x < v47[1].x )
          v25 = v47[0].x;
      }
    }
    a2->x = v25;
    v26 = v18;
    if ( v20 > v18 )
      v26 = v20;
    if ( v26 <= v21 )
    {
      v27 = v21;
    }
    else
    {
      v27 = v18;
      if ( v20 > v18 )
        v27 = v20;
    }
    if ( v27 <= v23 )
    {
      v18 = v23;
    }
    else
    {
      v28 = v18;
      if ( v20 > v18 )
        v28 = v20;
      if ( v28 <= v21 )
      {
        v18 = v21;
      }
      else if ( v20 > v18 )
      {
        v18 = v20;
      }
    }
    v29 = v47[0].y;
    v30 = y;
    a2[1].x = v18;
    v31 = v47[1].y;
    v32 = v47[1].y;
    if ( v29 < v47[1].y )
      v32 = v29;
    if ( v32 >= v30 )
    {
      v33 = v30;
    }
    else
    {
      v33 = v47[1].y;
      if ( v29 < v47[1].y )
        v33 = v29;
    }
    v34 = v51;
    if ( v33 >= v51 )
    {
      v36 = v51;
    }
    else
    {
      v35 = v47[1].y;
      if ( v29 < v47[1].y )
        v35 = v29;
      if ( v35 >= v30 )
      {
        v36 = v30;
      }
      else
      {
        v36 = v47[1].y;
        if ( v29 < v47[1].y )
          v36 = v29;
      }
    }
    a2->y = v36;
    v37 = v31;
    if ( v29 > v31 )
      v37 = v29;
    if ( v37 <= v30 )
    {
      v38 = v30;
    }
    else
    {
      v38 = v31;
      if ( v29 > v31 )
        v38 = v29;
    }
    if ( v38 <= v34 )
    {
      v31 = v34;
    }
    else
    {
      v39 = v31;
      if ( v29 > v31 )
        v39 = v29;
      if ( v39 <= v30 )
      {
        v31 = v30;
      }
      else if ( v29 > v31 )
      {
        v31 = v29;
      }
    }
    a2[1].y = v31;
  }
  else
  {
    v6 = XDCOBJ::bFullScreen((XDCOBJ *)v40) != 0;
  }
LABEL_17:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v42);
  if ( v43 )
    DLODCOBJ::vUnlock((DLODCOBJ *)&v43);
  v5 = v40[0];
  if ( v6 == 3 )
    goto LABEL_20;
LABEL_22:
  if ( v5 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v40);
  return v6;
}
