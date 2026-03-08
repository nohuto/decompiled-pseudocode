/*
 * XREFs of ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C0180EF0
 * Callers:
 *     PATHOBJ_bCloseFigure @ 0x1C01819B0 (PATHOBJ_bCloseFigure.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0183B20 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0189A30 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     bPolyPolygon @ 0x1C019A250 (bPolyPolygon.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EPATHOBJ::bCloseFigure(EPATHOBJ *this)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // r8d

  v1 = *((_QWORD *)this + 1);
  if ( !v1 )
    return 0LL;
  v3 = *(_QWORD *)(v1 + 40);
  result = 1LL;
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 16);
    if ( (v4 & 8) == 0 )
    {
      *(_DWORD *)(v3 + 16) = v4 | 8;
      ++*((_DWORD *)this + 1);
    }
  }
  *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) |= 1u;
  return result;
}
