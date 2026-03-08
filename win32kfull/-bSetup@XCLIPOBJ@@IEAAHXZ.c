/*
 * XREFs of ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C02F5D98
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C02F5534 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 * Callees:
 *     ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1C02F57DC (-bFindFirstScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C02F58E0 (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1C02F5B90 (-bFindNextScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C02F5C24 (-bFindNextSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1C02F5CA8 (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z @ 0x1C02F5D10 (-bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z.c)
 *     ?vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z @ 0x1C02F61C8 (-vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bSetup(XCLIPOBJ *this)
{
  _DWORD *v1; // rdx
  int v3; // r9d
  _DWORD *v4; // rdx
  int v5; // ecx
  unsigned int v6; // ecx
  _DWORD *v7; // rcx
  _DWORD *v8; // r8
  int v9; // edx
  int v10; // r9d
  int *v11; // rcx
  int v12; // eax
  int v13; // edx
  __int64 v14; // rax
  int v15; // edx
  _DWORD *v16; // r8
  int v17; // edx
  int v18; // r9d
  int *v19; // rcx
  int v20; // eax
  int v21; // edx
  __int64 v22; // rax
  int v23; // edx
  int i; // eax
  int NextSegment; // eax
  struct _POINTL v27; // [rsp+40h] [rbp+10h] BYREF
  struct _POINTL v28; // [rsp+48h] [rbp+18h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 18);
  if ( (v1[6] & 0x20000) != 0 )
  {
    XCLIPOBJ::bRecordRun(this, v1 + 8);
    NextSegment = XCLIPOBJ::bFindNextSegment(this);
    goto LABEL_36;
  }
  v3 = -1;
  v1[40] = -1;
  v4 = (_DWORD *)*((_QWORD *)this + 18);
  v5 = v4[6];
  if ( v4[28] > v4[30] )
  {
    v6 = v5 & 0xFFBFFFFF;
  }
  else
  {
    v3 = 1;
    v6 = v5 | 0x400000;
  }
  v4[6] = v6;
  *((_DWORD *)this + 25) = v3;
  v7 = (_DWORD *)*((_QWORD *)this + 18);
  if ( v7[29] <= v7[31] )
    v7[6] |= 0x800000u;
  v8 = (_DWORD *)*((_QWORD *)this + 18);
  v9 = *((_DWORD *)this + 2);
  v10 = v8[29];
  v11 = v8 + 31;
  if ( v10 >= v9 || *v11 >= v9 )
  {
    v12 = *((_DWORD *)this + 4);
    if ( v10 < v12 || *v11 < v12 )
    {
      if ( (v8[6] & 0x800000) != 0 )
      {
        if ( v10 < v9 )
        {
          v27 = 0LL;
          XCLIPOBJ::vIntersectScan(this, v9, 0LL, &v27, v8 + 40);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v27;
        }
        v13 = *((_DWORD *)this + 4);
        if ( *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) >= v13 )
        {
          v28 = 0LL;
          XCLIPOBJ::vIntersectScan(this, v13, &v28, 0LL, (int *)&v27);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v28;
        }
      }
      else
      {
        if ( *v11 < v9 )
        {
          v28 = 0LL;
          XCLIPOBJ::vIntersectScan(this, v9, &v28, 0LL, (int *)&v27);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v28;
        }
        v14 = *((_QWORD *)this + 18);
        v15 = *((_DWORD *)this + 4);
        if ( *(_DWORD *)(v14 + 116) >= v15 )
        {
          v27 = 0LL;
          XCLIPOBJ::vIntersectScan(this, v15, 0LL, &v27, (int *)(v14 + 160));
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v27;
        }
      }
      v16 = (_DWORD *)*((_QWORD *)this + 18);
      v17 = *((_DWORD *)this + 1);
      v18 = v16[28];
      v19 = v16 + 30;
      if ( v18 >= v17 || *v19 >= v17 )
      {
        v20 = *((_DWORD *)this + 3);
        if ( v18 < v20 || *v19 < v20 )
        {
          if ( (v16[6] & 0x400000) != 0 )
          {
            if ( v18 < v17 )
            {
              v27 = 0LL;
              XCLIPOBJ::bIntersectWall(this, v17, 0LL, &v27, v16 + 40);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v27;
            }
            v21 = *((_DWORD *)this + 3);
            if ( *(_DWORD *)(*((_QWORD *)this + 18) + 120LL) >= v21 )
            {
              v28 = 0LL;
              XCLIPOBJ::bIntersectWall(this, v21, &v28, 0LL, (int *)&v27);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v28;
            }
          }
          else
          {
            if ( *v19 < v17 )
            {
              v28 = 0LL;
              XCLIPOBJ::bIntersectWall(this, v17, &v28, 0LL, (int *)&v27);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v28;
            }
            v22 = *((_QWORD *)this + 18);
            v23 = *((_DWORD *)this + 3);
            if ( *(_DWORD *)(v22 + 112) >= v23 )
            {
              v27 = 0LL;
              XCLIPOBJ::bIntersectWall(this, v23, 0LL, &v27, (int *)(v22 + 160));
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v27;
            }
          }
          *(_DWORD *)(*((_QWORD *)this + 18) + 152LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 112LL);
          *(_DWORD *)(*((_QWORD *)this + 18) + 156LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 116LL);
          *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) |= 0x20000u;
          for ( i = XCLIPOBJ::bFindFirstScan(this); i; i = XCLIPOBJ::bFindNextScan(this) )
          {
            NextSegment = XCLIPOBJ::bFindFirstSegment(this);
LABEL_36:
            if ( NextSegment )
              return 1LL;
          }
        }
      }
    }
  }
  return 0LL;
}
