__int64 __fastcall XCLIPOBJ::bFindFirstSegment(XCLIPOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // eax
  int v5; // edi
  struct _POINTL *v6; // r8
  int y; // edx
  struct _POINTL *v8; // r8
  int v9; // r9d
  int x; // edx
  int *v11; // r10
  _DWORD *v12; // r10
  _DWORD *v13; // rcx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int *v17; // r9
  struct _POINTL *v18; // r8
  int v19; // ecx
  struct _POINTL *v20; // rsi
  int v21; // r10d
  LONG v22; // edx
  int i; // r11d
  int v24; // ecx
  LONG v25; // edx
  int v26; // ecx
  int v27; // edx
  int v29; // [rsp+40h] [rbp+8h] BYREF
  int v30; // [rsp+44h] [rbp+Ch] BYREF

  *(_QWORD *)(*((_QWORD *)this + 18) + 128LL) = *(_QWORD *)(*((_QWORD *)this + 18) + 152LL);
  v2 = *((_QWORD *)this + 18);
  v3 = *((_QWORD *)this + 10);
  if ( (*(_DWORD *)(v2 + 24) & 0x800000) != 0 )
  {
    *(_DWORD *)(v2 + 164) = *(_DWORD *)(v3 + 4);
    v4 = *(_DWORD *)(*((_QWORD *)this + 10) + 8LL);
  }
  else
  {
    *(_DWORD *)(v2 + 164) = *(_DWORD *)(v3 + 8);
    v4 = *(_DWORD *)(*((_QWORD *)this + 10) + 4LL);
  }
  v5 = 0;
  *(_DWORD *)(*((_QWORD *)this + 18) + 168LL) = v4;
  v6 = (struct _POINTL *)*((_QWORD *)this + 18);
  y = v6[20].y;
  if ( (((unsigned int)v6[3].x >> 23) & 1) == v6[16].y < y )
  {
    XCLIPOBJ::vIntersectScan(this, y, 0LL, v6 + 16, &v6[3].y);
  }
  else
  {
    v6[3].y = v6[20].x;
    *(_DWORD *)(*((_QWORD *)this + 18) + 164LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 132LL);
  }
  v8 = (struct _POINTL *)*((_QWORD *)this + 18);
  v9 = v8[15].y;
  x = v8[21].x;
  if ( (((unsigned int)v8[3].x >> 23) & 1) == v9 >= x )
  {
    XCLIPOBJ::vIntersectScan(this, x, v8 + 18, v8 + 19, (int *)&v8[20]);
  }
  else
  {
    v8[18].y = v9;
    *(_DWORD *)(*((_QWORD *)this + 18) + 144LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 120LL);
    *(_DWORD *)(*((_QWORD *)this + 18) + 168LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) + 1;
    v11 = (int *)*((_QWORD *)this + 18);
    v29 = v11[24];
    v30 = v11[25];
    DDA_CLIPLINE::vUnflip((DDA_CLIPLINE *)(v11 + 16), &v29, &v30);
    if ( (*v13 & 5) != 0 )
    {
      v14 = v12[31];
      v15 = v30;
    }
    else
    {
      v14 = v12[30];
      v15 = v29;
    }
    if ( v14 - v15 >= 0 )
      v16 = v14 - v15;
    else
      v16 = v15 - v14;
    v12[40] = v16;
  }
  v17 = (int *)*((_QWORD *)this + 10);
  v18 = (struct _POINTL *)*((_QWORD *)this + 18);
  v19 = *v17;
  *((_DWORD *)this + 24) = 0;
  v20 = v18 + 16;
  v21 = v19 - 1;
  *((_DWORD *)this + 26) = v19 - 1;
  v22 = v18[16].x;
  if ( v22 >= v17[v19 + 2] )
  {
    *((_DWORD *)this + 24) = v21;
    if ( (v18[3].x & 0x400000) == 0 )
      goto LABEL_30;
    return 0LL;
  }
  if ( v22 < v17[3] )
  {
    if ( (v18[3].x & 0x400000) != 0 )
    {
      v19 = -1;
      goto LABEL_30;
    }
    return 0LL;
  }
  for ( i = 0; ; i = v24 )
  {
    while ( 1 )
    {
      v24 = (v21 + i) / 2;
      *((_DWORD *)this + 24) = v24;
      v25 = v20->x;
      if ( v20->x >= v17[v24 + 3] )
        break;
      v21 = v24 - 1;
      if ( v25 >= v17[v24 + 2] )
        goto LABEL_29;
    }
    if ( v25 < v17[++v24 + 3] )
      break;
  }
  *((_DWORD *)this + 24) = v24;
LABEL_29:
  v19 = v24 - (((unsigned int)v18[3].x >> 22) & 1);
LABEL_30:
  *((_DWORD *)this + 24) = v19;
  if ( (((unsigned __int8)v19 ^ (unsigned __int8)((unsigned int)v18[3].x >> 22)) & 1) == 0 )
  {
    v26 = *((_DWORD *)this + 25) + v19;
    *((_DWORD *)this + 24) = v26;
    v27 = v17[v26 + 3];
    LOBYTE(v5) = v27 > v18[18].x;
    if ( (((unsigned int)v18[3].x >> 22) & 1) == v5 )
      return 0LL;
    XCLIPOBJ::bIntersectWall(this, v27, 0LL, v18 + 16, &v18[3].y);
  }
  return 1LL;
}
