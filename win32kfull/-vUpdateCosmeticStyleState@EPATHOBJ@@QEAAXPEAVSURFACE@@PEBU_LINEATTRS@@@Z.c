void __fastcall EPATHOBJ::vUpdateCosmeticStyleState(EPATHOBJ *this, struct SURFACE *a2, const struct _LINEATTRS *a3)
{
  int v4; // esi
  FLONG fl; // eax
  int v7; // r12d
  _DWORD *v8; // rax
  int v9; // esi
  PFLOAT_LONG pstyle; // rdx
  union _FLOAT_LONG *i; // rcx
  struct _POINTFIX *j; // rbx
  FIX x; // eax
  unsigned __int64 v14; // rdi
  struct _POINTFIX *v15; // rbp
  struct _POINTFIX *v16; // r14
  unsigned __int64 v17; // r13
  FIX y; // edx
  int v19; // r8d
  FIX v20; // eax
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // [rsp+20h] [rbp-88h]
  unsigned int v27; // [rsp+24h] [rbp-84h]
  unsigned int v28; // [rsp+28h] [rbp-80h]
  _OWORD v30[2]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v31; // [rsp+58h] [rbp-50h]

  v4 = 2;
  memset(v30, 0, sizeof(v30));
  fl = a3->fl;
  v31 = 0LL;
  if ( (fl & 2) != 0 )
  {
    v26 = 1;
    v7 = 1;
    v27 = 1;
    v28 = 1;
  }
  else
  {
    v8 = (_DWORD *)*((_QWORD *)a2 + 6);
    v9 = 0;
    pstyle = a3->pstyle;
    v7 = v8[547];
    v26 = v8[545];
    v27 = v8[546];
    v28 = v7;
    for ( i = &pstyle[a3->cstyle]; i > pstyle; v9 += i->l )
      --i;
    v4 = 2 * v7 * v9;
  }
  for ( j = *(struct _POINTFIX **)(*((_QWORD *)this + 1) + 40LL); ; j = (struct _POINTFIX *)j[1] )
  {
    x = j[2].x;
    if ( (x & 1) != 0 )
      break;
  }
  LODWORD(v14) = 0;
  if ( (x & 4) == 0 )
    LODWORD(v14) = LOWORD(a3->elStyleState.e) + v7 * HIWORD(a3->elStyleState.l);
  v15 = j + 3;
  v16 = j + 4;
  while ( 2 )
  {
    v17 = (unsigned __int64)&j[(unsigned int)j[2].y + 3];
    while ( (unsigned __int64)v16 < v17 )
    {
      if ( !(unsigned int)DDA_CLIPLINE::bInit((DDA_CLIPLINE *)v30, v15, v16) )
        goto LABEL_30;
      y = v15->y;
      v19 = v15->x - v16->x;
      v20 = v16->y;
      if ( v16->x - v15->x >= 0 )
        v19 = v16->x - v15->x;
      v21 = v20 - y;
      v22 = (unsigned int)(y - v20);
      if ( v21 >= 0 )
        v22 = (unsigned int)v21;
      if ( v26 == v27 )
      {
        if ( v19 < (int)v22 )
          goto LABEL_21;
      }
      else if ( v26 * (unsigned __int64)(unsigned int)v19 < (unsigned __int64)v27 * v22 )
      {
LABEL_21:
        if ( (v30[0] & 5) == 0 )
          goto LABEL_22;
        goto LABEL_25;
      }
      if ( (v30[0] & 5) != 0 )
      {
LABEL_22:
        v23 = v27;
        v24 = HIDWORD(v31) - DWORD1(v31);
        goto LABEL_26;
      }
LABEL_25:
      v23 = v26;
      v24 = DWORD2(v31) - v31;
LABEL_26:
      v25 = (unsigned int)(v24 + 1);
      if ( (v25 & 0xFFFF0000) != 0 )
      {
        v14 = ((int)v14 + v23 * v25) % (unsigned __int64)(unsigned int)v4;
      }
      else
      {
        LODWORD(v14) = v23 * v25 + v14;
        if ( (int)v14 >= v4 )
          LODWORD(v14) = (int)v14 % v4;
      }
LABEL_30:
      v15 = v16++;
    }
    j = (struct _POINTFIX *)*j;
    if ( j )
    {
      v16 = j + 3;
      continue;
    }
    break;
  }
  a3->elStyleState.l = (unsigned __int16)((unsigned int)v14 % v28) | ((unsigned __int16)((unsigned int)v14 / v28) << 16);
}
