/*
 * XREFs of ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A8DD8
 * Callers:
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C004DD9C (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0051480 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00E2260 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A8F5C (-bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1C02A8FFC (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
 */

__int64 __fastcall bUnHookRedir(struct XDCOBJ *a1)
{
  Gre::Base *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rbx
  struct SURFACE *v5; // rsi
  __int64 v6; // rbp
  signed __int32 v7; // ett
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int64 result; // rax
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 23376LL) )
    return 0LL;
  v3 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 || (*(_DWORD *)(v3 + 36) & 0x4000) == 0 )
    return 0LL;
  v5 = *(struct SURFACE **)(v3 + 496);
  v15 = *(_QWORD *)(v3 + 48);
  v4 = v15;
  Gre::Base::Globals(v2);
  v6 = *(_QWORD *)(v4 + 3496);
  _m_prefetchw((const void *)(v4 + 40));
  do
    v7 = *(_DWORD *)(v4 + 40);
  while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 40), v7 & 0xFF7FFFFF, v7) );
  v8 = v15;
  *(_QWORD *)(v15 + 3496) = 0LL;
  bUndoMakeOpaque(v5);
  *(_QWORD *)(*(_QWORD *)a1 + 48LL) = v6;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v16 = v9;
  vFindAndReplaceRFONT((struct PDEVOBJ *)&v16, (struct PDEVOBJ *)&v15, (struct PDEVOBJ *)&v16);
  memmove((void *)(v9 + 80), (const void *)(v8 + 80), 0x598uLL);
  v10 = 8LL;
  v11 = (_OWORD *)(v9 + 1536);
  v12 = (_OWORD *)(v8 + 1536);
  do
  {
    *v11 = *v12;
    v11[1] = v12[1];
    v11[2] = v12[2];
    v11[3] = v12[3];
    v11[4] = v12[4];
    v11[5] = v12[5];
    v11[6] = v12[6];
    v11 += 8;
    v13 = v12[7];
    v12 += 8;
    *(v11 - 1) = v13;
    --v10;
  }
  while ( v10 );
  *v11 = *v12;
  v11[1] = v12[1];
  v11[2] = v12[2];
  v11[3] = v12[3];
  v11[4] = v12[4];
  v11[5] = v12[5];
  *((_QWORD *)v11 + 12) = *((_QWORD *)v12 + 12);
  result = 1LL;
  *(_QWORD *)(v9 + 80) = v9;
  return result;
}
