/*
 * XREFs of ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0019EB0
 * Callers:
 *     bPolyPolygon @ 0x1C0019160 (bPolyPolygon.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00CC290 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     PATHOBJ_bMoveTo @ 0x1C00CFCD0 (PATHOBJ_bMoveTo.c)
 *     ?bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z @ 0x1C016A0A0 (-bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C016D4E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C001B1F0 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 */

__int64 __fastcall EPATHOBJ::bMoveTo(EPATHOBJ *this, struct EXFORMOBJ *a2, struct _POINTL *a3)
{
  struct _POINTFIX *v5; // r8
  struct _POINTFIX *v6; // r8

  v5 = (struct _POINTFIX *)*((_QWORD *)this + 1);
  if ( !v5 )
    return 0LL;
  v6 = v5 + 8;
  if ( a2 )
    EXFORMOBJ::bXformRound(a2, a3, v6, 1uLL);
  else
    *v6 = (struct _POINTFIX)*a3;
  *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) |= 5u;
  return 1LL;
}
