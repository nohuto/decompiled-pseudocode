__int64 __fastcall GreSetBoundsRect(HDC a1, struct _POINTL *a2, __int16 a3)
{
  unsigned int v5; // ebx
  int v6; // r12d
  struct tagRECT *v7; // rsi
  int v8; // edi
  int v9; // eax
  __int64 v10; // rdx
  int v11; // r9d
  int v12; // r8d
  int v13; // ebx
  __int128 v15; // xmm0
  LONG v16; // ecx
  LONG v17; // eax
  LONG v18; // edx
  LONG v19; // r8d
  LONG v20; // eax
  LONG v21; // r9d
  LONG v22; // eax
  LONG v23; // eax
  LONG v24; // eax
  LONG v25; // eax
  LONG v26; // eax
  LONG v27; // edx
  LONG v28; // r8d
  LONG v29; // ecx
  LONG v30; // eax
  LONG v31; // eax
  LONG v32; // r9d
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  _QWORD v38[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v39[2]; // [rsp+30h] [rbp-40h] BYREF
  struct _POINTL v40[2]; // [rsp+40h] [rbp-30h] BYREF
  LONG x; // [rsp+50h] [rbp-20h]
  LONG y; // [rsp+54h] [rbp-1Ch]
  LONG v43; // [rsp+58h] [rbp-18h]
  LONG v44; // [rsp+5Ch] [rbp-14h]

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v38, a1);
  if ( !v38[0] )
    return v5;
  v6 = 0;
  if ( a3 < 0 )
  {
    v7 = (struct tagRECT *)(v38[0] + 1064LL);
    v8 = 32;
  }
  else if ( (a3 & 0x4000) != 0 )
  {
    v7 = (struct tagRECT *)(v38[0] + 1080LL);
    v8 = 64;
  }
  else
  {
    v7 = (struct tagRECT *)(v38[0] + 1096LL);
    v8 = 128;
  }
  v9 = IsRectEmptyInl(v7);
  if ( v12 )
    v13 = v9 != 0 ? 5 : 7;
  else
    v13 = v9 != 0 ? 9 : 11;
  v5 = v11 | v13;
  if ( (a3 & 1) != 0 )
  {
    v7->top = 0x7FFFFFFF;
    v7->left = 0x7FFFFFFF;
    v7->bottom = 0x80000000;
    v7->right = 0x80000000;
    v10 = v38[0];
  }
  if ( (a3 & 2) == 0 )
    goto LABEL_10;
  if ( v11 )
    goto LABEL_18;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v39, (struct XDCOBJ *)v38, 0x204u);
  if ( (*(_DWORD *)(v39[0] + 32LL) & 1) != 0 )
  {
    if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v39, a2, 2uLL) )
      goto LABEL_18;
    goto LABEL_25;
  }
  v15 = *(_OWORD *)&a2->x;
  x = a2->x;
  y = a2[1].y;
  v43 = a2[1].x;
  v44 = a2->y;
  *(_OWORD *)&v40[0].x = v15;
  if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v39, v40, 4uLL) )
  {
LABEL_25:
    v6 = 1;
    goto LABEL_18;
  }
  v16 = v40[1].x;
  v17 = v40[1].x;
  v18 = v40[0].x;
  v19 = x;
  if ( v40[0].x < v40[1].x )
    v17 = v40[0].x;
  if ( v17 >= x )
  {
    v20 = x;
  }
  else
  {
    v20 = v40[1].x;
    if ( v40[0].x < v40[1].x )
      v20 = v40[0].x;
  }
  v21 = v43;
  if ( v20 >= v43 )
  {
    v23 = v43;
  }
  else
  {
    v22 = v40[1].x;
    if ( v40[0].x < v40[1].x )
      v22 = v40[0].x;
    if ( v22 >= x )
    {
      v23 = x;
    }
    else
    {
      v23 = v40[1].x;
      if ( v40[0].x < v40[1].x )
        v23 = v40[0].x;
    }
  }
  a2->x = v23;
  v24 = v16;
  if ( v18 > v16 )
    v24 = v18;
  if ( v24 <= v19 )
  {
    v25 = v19;
  }
  else
  {
    v25 = v16;
    if ( v18 > v16 )
      v25 = v18;
  }
  if ( v25 <= v21 )
  {
    v16 = v21;
  }
  else
  {
    v26 = v16;
    if ( v18 > v16 )
      v26 = v18;
    if ( v26 <= v19 )
    {
      v16 = v19;
    }
    else if ( v18 > v16 )
    {
      v16 = v18;
    }
  }
  v27 = v40[0].y;
  v28 = y;
  a2[1].x = v16;
  v29 = v40[1].y;
  v30 = v40[1].y;
  if ( v27 < v40[1].y )
    v30 = v27;
  if ( v30 >= v28 )
  {
    v31 = v28;
  }
  else
  {
    v31 = v40[1].y;
    if ( v27 < v40[1].y )
      v31 = v27;
  }
  v32 = v44;
  if ( v31 >= v44 )
  {
    v34 = v44;
  }
  else
  {
    v33 = v40[1].y;
    if ( v27 < v40[1].y )
      v33 = v27;
    if ( v33 >= v28 )
    {
      v34 = v28;
    }
    else
    {
      v34 = v40[1].y;
      if ( v27 < v40[1].y )
        v34 = v27;
    }
  }
  a2->y = v34;
  v35 = v29;
  if ( v27 > v29 )
    v35 = v27;
  if ( v35 <= v28 )
  {
    v36 = v28;
  }
  else
  {
    v36 = v29;
    if ( v27 > v29 )
      v36 = v27;
  }
  if ( v36 <= v32 )
  {
    v29 = v32;
  }
  else
  {
    v37 = v29;
    if ( v27 > v29 )
      v37 = v27;
    if ( v37 <= v28 )
    {
      v29 = v28;
    }
    else if ( v27 > v29 )
    {
      v29 = v27;
    }
  }
  a2[1].y = v29;
LABEL_18:
  ERECTL::operator|=(v7, a2);
  v10 = v38[0];
  if ( !v6 )
  {
LABEL_10:
    if ( (a3 & 4) != 0 )
    {
      *(_DWORD *)(v10 + 36) |= v8;
      v10 = v38[0];
    }
    if ( (a3 & 8) != 0 )
    {
      *(_DWORD *)(v10 + 36) &= ~v8;
      v10 = v38[0];
    }
    goto LABEL_14;
  }
  v5 = 0;
LABEL_14:
  if ( v10 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v38);
  return v5;
}
