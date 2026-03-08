/*
 * XREFs of ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C01810CC
 * Callers:
 *     PATHOBJ_bPolyLineTo @ 0x1C0181A40 (PATHOBJ_bPolyLineTo.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0183B20 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0189A30 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     bPolyPolygon @ 0x1C019A250 (bPolyPolygon.c)
 * Callees:
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1C0181060 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 */

__int64 __fastcall EPATHOBJ::bPolyLineTo(EPATHOBJ *this, struct EXFORMOBJ *a2, struct _POINTL *a3, unsigned int a4)
{
  __int64 v5[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+38h] [rbp-10h]

  v5[2] = 0LL;
  v5[0] = (__int64)a3;
  v5[1] = a4;
  v6 = 0;
  return EPATHOBJ::bPolyLineTo((__int64)this, a2, v5, a4);
}
