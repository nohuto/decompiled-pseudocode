/*
 * XREFs of ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C0143A2C
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C01438E0 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 * Callees:
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1C0143264 (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1C014338C (-bFindFirstScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z @ 0x1C0143658 (-bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z.c)
 *     ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1C01436E0 (-bFindNextScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C0143774 (-bFindNextSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z @ 0x1C01437DC (-vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C01441C0 (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 */

__int64 __fastcall XCLIPOBJ::bSetup(XCLIPOBJ *this)
{
  _DWORD *v1; // rdx
  int v3; // r8d
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  int v6; // r8d
  int v7; // r10d
  int v8; // edx
  _DWORD *v9; // rcx
  int v10; // r10d
  int v11; // r8d
  int v12; // edx
  int i; // eax
  int NextSegment; // eax
  struct _POINTL v16; // [rsp+40h] [rbp+10h] BYREF
  struct _POINTL v17; // [rsp+48h] [rbp+18h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 18);
  if ( (v1[6] & 0x20000) != 0 )
  {
    XCLIPOBJ::bRecordRun(this, v1 + 8);
    NextSegment = XCLIPOBJ::bFindNextSegment(this);
    goto LABEL_23;
  }
  v3 = -1;
  v1[40] = -1;
  v4 = (_DWORD *)*((_QWORD *)this + 18);
  if ( v4[28] > v4[30] )
  {
    v4[6] &= ~0x400000u;
  }
  else
  {
    v4[6] |= 0x400000u;
    v3 = 1;
  }
  *((_DWORD *)this + 25) = v3;
  v5 = (_DWORD *)*((_QWORD *)this + 18);
  if ( v5[29] <= v5[31] )
  {
    v5[6] |= 0x800000u;
    v5 = (_DWORD *)*((_QWORD *)this + 18);
  }
  v6 = v5[29];
  v7 = *((_DWORD *)this + 2);
  if ( v6 >= v7 || v5[31] >= v7 )
  {
    v8 = *((_DWORD *)this + 4);
    if ( v6 < v8 || v5[31] < v8 )
    {
      if ( (v5[6] & 0x800000) != 0 )
      {
        if ( v6 < v7 )
        {
          v16 = 0LL;
          XCLIPOBJ::vIntersectScan(this, v7, 0LL, &v16, v5 + 40);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v16;
          v5 = (_DWORD *)*((_QWORD *)this + 18);
          v8 = *((_DWORD *)this + 4);
        }
        if ( v5[31] >= v8 )
        {
          v17 = 0LL;
          XCLIPOBJ::vIntersectScan(this, v8, &v17, 0LL, (int *)&v16);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v17;
        }
      }
      else
      {
        if ( v5[31] < v7 )
        {
          v17 = 0LL;
          XCLIPOBJ::vIntersectScan(this, v7, &v17, 0LL, (int *)&v16);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v17;
          v5 = (_DWORD *)*((_QWORD *)this + 18);
          v8 = *((_DWORD *)this + 4);
        }
        if ( v5[29] >= v8 )
        {
          v16 = 0LL;
          XCLIPOBJ::vIntersectScan(this, v8, 0LL, &v16, v5 + 40);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v16;
        }
      }
      v9 = (_DWORD *)*((_QWORD *)this + 18);
      v10 = *((_DWORD *)this + 1);
      v11 = v9[28];
      if ( v11 >= v10 || v9[30] >= v10 )
      {
        v12 = *((_DWORD *)this + 3);
        if ( v11 < v12 || v9[30] < v12 )
        {
          if ( (v9[6] & 0x400000) != 0 )
          {
            if ( v11 < v10 )
            {
              v16 = 0LL;
              XCLIPOBJ::bIntersectWall(this, v10, 0LL, &v16, v9 + 40);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v16;
              v9 = (_DWORD *)*((_QWORD *)this + 18);
              v12 = *((_DWORD *)this + 3);
            }
            if ( v9[30] >= v12 )
            {
              v17 = 0LL;
              XCLIPOBJ::bIntersectWall(this, v12, &v17, 0LL, (int *)&v16);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v17;
            }
          }
          else
          {
            if ( v9[30] < v10 )
            {
              v17 = 0LL;
              XCLIPOBJ::bIntersectWall(this, v10, &v17, 0LL, (int *)&v16);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v17;
              v9 = (_DWORD *)*((_QWORD *)this + 18);
              v12 = *((_DWORD *)this + 3);
            }
            if ( v9[28] >= v12 )
            {
              v16 = 0LL;
              XCLIPOBJ::bIntersectWall(this, v12, 0LL, &v16, v9 + 40);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v16;
            }
          }
          *(_DWORD *)(*((_QWORD *)this + 18) + 152LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 112LL);
          *(_DWORD *)(*((_QWORD *)this + 18) + 156LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 116LL);
          *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) |= 0x20000u;
          for ( i = XCLIPOBJ::bFindFirstScan(this); i; i = XCLIPOBJ::bFindNextScan(this) )
          {
            NextSegment = XCLIPOBJ::bFindFirstSegment(this);
LABEL_23:
            if ( NextSegment )
              return 1LL;
          }
        }
      }
    }
  }
  return 0LL;
}
