/*
 * XREFs of ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C014AC60
 * Callers:
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C014ABB4 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 * Callees:
 *     ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1C014AA68 (-bFindNextScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C014AAFC (-bFindNextSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C014ADAC (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C014B544 (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z @ 0x1C014B8D0 (-bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z.c)
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1C014BE54 (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bEnumLine(XCLIPOBJ *this, unsigned int a2, struct _CLIPLINE *a3)
{
  POINTFIX v4; // rax
  _DWORD *v5; // rcx
  struct _POINTL *v7; // r8
  int v8; // edx
  int *v9; // rdx
  int i; // eax

  a3->ptfxA = *(POINTFIX *)(*((_QWORD *)this + 18) + 4LL);
  v4 = **(POINTFIX **)(*((_QWORD *)this + 18) + 16LL);
  a3->c = 0;
  a3->ptfxB = v4;
  v5 = (_DWORD *)*((_QWORD *)this + 18);
  if ( (int)v5[45] > 0 )
  {
    a3->lStyleState = (unsigned __int16)(v5[43] % v5[50]) | ((unsigned __int16)(v5[43] / v5[50]) << 16);
    v5 = (_DWORD *)*((_QWORD *)this + 18);
  }
  if ( (v5[6] & 0x10000) != 0 )
    return 0LL;
  v5[9] = ((unsigned __int64)a2 - 24) >> 3;
  *(_QWORD *)(*((_QWORD *)this + 18) + 48LL) = a3->arun;
  *(_QWORD *)(*((_QWORD *)this + 18) + 40LL) = &a3->c;
  *(_DWORD *)(*((_QWORD *)this + 18) + 56LL) = 0x7FFFFFFF;
  if ( !*(_DWORD *)(*((_QWORD *)this + 18) + 36LL) )
    return 0LL;
  if ( !(unsigned int)XCLIPOBJ::bSetup(this) )
  {
LABEL_6:
    *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) |= 0x10000u;
    return 0LL;
  }
  while ( 1 )
  {
    *((_DWORD *)this + 24) += *((_DWORD *)this + 25);
    v7 = (struct _POINTL *)*((_QWORD *)this + 18);
    v8 = *(_DWORD *)(*((_QWORD *)this + 10) + 4LL * *((int *)this + 24) + 12);
    if ( (((unsigned int)v7[3].x >> 22) & 1) == v8 > v7[18].x )
    {
      v9 = (int *)&v7[20];
    }
    else
    {
      XCLIPOBJ::bIntersectWall(this, v8, v7 + 17, 0LL, (int *)&v7[4]);
      v9 = (int *)(*((_QWORD *)this + 18) + 32LL);
    }
    if ( !(unsigned int)XCLIPOBJ::bRecordRun(this, v9) )
      return 1LL;
    for ( i = XCLIPOBJ::bFindNextSegment(this); !i; i = XCLIPOBJ::bFindFirstSegment(this) )
    {
      if ( !(unsigned int)XCLIPOBJ::bFindNextScan(this) )
        goto LABEL_6;
    }
  }
}
