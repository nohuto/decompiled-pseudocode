/*
 * XREFs of ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C014BAF4
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C014B210 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C014B35C (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     ?vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z @ 0x1C014B114 (-vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?vUnflip@DDA_CLIPLINE@@QEBAXPEAJ0@Z @ 0x1C014B88C (-vUnflip@DDA_CLIPLINE@@QEBAXPEAJ0@Z.c)
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1C014C404 (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 */

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
  int v20; // r10d
  LONG v21; // edx
  int v22; // r11d
  int v23; // eax
  int v24; // ecx
  LONG v25; // edx
  int v27; // ecx
  int v28; // edx
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
  v20 = v19 - 1;
  *((_DWORD *)this + 26) = v19 - 1;
  v21 = v18[16].x;
  if ( v21 >= v17[v19 + 2] )
  {
    *((_DWORD *)this + 24) = v20;
    if ( (v18[3].x & 0x400000) != 0 )
      return 0LL;
  }
  else if ( v21 < v17[3] )
  {
    if ( (v18[3].x & 0x400000) == 0 )
      return 0LL;
    v19 = -1;
  }
  else
  {
    v22 = 0;
    do
    {
      while ( 1 )
      {
        v23 = (v20 + v22) / 2;
        v24 = v23;
        *((_DWORD *)this + 24) = v23;
        v25 = v18[16].x;
        if ( v25 >= v17[v23 + 3] )
          break;
        if ( v25 >= v17[v23 + 2] )
          goto LABEL_17;
        v20 = v23 - 1;
      }
      v22 = v23 + 1;
    }
    while ( v25 >= v17[v23 + 4] );
    v24 = v23 + 1;
    *((_DWORD *)this + 24) = v23 + 1;
LABEL_17:
    v19 = v24 - (((unsigned int)v18[3].x >> 22) & 1);
  }
  *((_DWORD *)this + 24) = v19;
  if ( (((unsigned __int8)v19 ^ (unsigned __int8)((unsigned int)v18[3].x >> 22)) & 1) != 0 )
    return 1LL;
  v27 = *((_DWORD *)this + 25) + v19;
  *((_DWORD *)this + 24) = v27;
  v28 = v17[v27 + 3];
  LOBYTE(v5) = v28 > v18[18].x;
  if ( (((unsigned int)v18[3].x >> 22) & 1) != v5 )
  {
    XCLIPOBJ::bIntersectWall(this, v28, 0LL, v18 + 16, &v18[3].y);
    return 1LL;
  }
  return 0LL;
}
