/*
 * XREFs of ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C02F5534
 * Callers:
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C02DAFFC (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 * Callees:
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C02F58E0 (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1C02F5B90 (-bFindNextScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C02F5C24 (-bFindNextSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1C02F5CA8 (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z @ 0x1C02F5D10 (-bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z.c)
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C02F5D98 (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 */

__int64 __fastcall XCLIPOBJ::bEnumLine(XCLIPOBJ *this, unsigned int a2, struct _CLIPLINE *a3)
{
  POINTFIX v4; // rax
  _DWORD *v5; // rax
  __int64 v6; // rcx
  struct _POINTL *v8; // r8
  int v9; // edx
  int *v10; // rdx
  int i; // eax

  a3->ptfxA = *(POINTFIX *)(*((_QWORD *)this + 18) + 4LL);
  v4 = **(POINTFIX **)(*((_QWORD *)this + 18) + 16LL);
  a3->c = 0;
  a3->ptfxB = v4;
  v5 = (_DWORD *)*((_QWORD *)this + 18);
  if ( (int)v5[45] > 0 )
    a3->lStyleState = (unsigned __int16)(v5[43] % v5[50]) | ((unsigned __int16)(v5[43] / v5[50]) << 16);
  v6 = *((_QWORD *)this + 18);
  if ( (*(_DWORD *)(v6 + 24) & 0x10000) != 0 )
    return 0LL;
  *(_DWORD *)(v6 + 36) = ((unsigned __int64)a2 - 24) >> 3;
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
    v8 = (struct _POINTL *)*((_QWORD *)this + 18);
    v9 = *(_DWORD *)(*((_QWORD *)this + 10) + 4LL * *((int *)this + 24) + 12);
    if ( (((unsigned int)v8[3].x >> 22) & 1) == v9 > v8[18].x )
    {
      v10 = (int *)&v8[20];
    }
    else
    {
      XCLIPOBJ::bIntersectWall(this, v9, v8 + 17, 0LL, (int *)&v8[4]);
      v10 = (int *)(*((_QWORD *)this + 18) + 32LL);
    }
    if ( !(unsigned int)XCLIPOBJ::bRecordRun(this, v10) )
      return 1LL;
    for ( i = XCLIPOBJ::bFindNextSegment(this); !i; i = XCLIPOBJ::bFindFirstSegment(this) )
    {
      if ( !(unsigned int)XCLIPOBJ::bFindNextScan(this) )
        goto LABEL_6;
    }
  }
}
