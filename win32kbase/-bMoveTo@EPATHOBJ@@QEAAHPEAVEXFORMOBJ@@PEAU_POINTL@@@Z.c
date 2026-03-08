/*
 * XREFs of ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0180FA8
 * Callers:
 *     ?bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z @ 0x1C0180C10 (-bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z.c)
 *     PATHOBJ_bMoveTo @ 0x1C01819D0 (PATHOBJ_bMoveTo.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0183B20 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0189A30 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     bPolyPolygon @ 0x1C019A250 (bPolyPolygon.c)
 * Callees:
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x1C0180F30 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@AEAV-$umptr_r@U_POINTL@@@@@Z.c)
 */

__int64 __fastcall EPATHOBJ::bMoveTo(EPATHOBJ *this, struct EXFORMOBJ *a2, struct _POINTL *a3)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v5; // [rsp+38h] [rbp-10h]

  v4[0] = a3;
  v4[2] = 0LL;
  v4[1] = 1LL;
  v5 = 0;
  return EPATHOBJ::bMoveTo((__int64)this, (__int64 *)a2, (__int64)v4);
}
