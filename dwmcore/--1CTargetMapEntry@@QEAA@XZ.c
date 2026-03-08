/*
 * XREFs of ??1CTargetMapEntry@@QEAA@XZ @ 0x1800995B8
 * Callers:
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTargetMapEntry@@@Z @ 0x180097258 (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTarget.c)
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x180099564 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 *     ?RegisterIndirectTarget@CExpressionManager@@QEAAJPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@@Z @ 0x180213A54 (-RegisterIndirectTarget@CExpressionManager@@QEAAJPEAVCBaseExpression@@PEAV-$CWeakReference@VCRes.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CTargetMapEntry::~CTargetMapEntry(CTargetMapEntry *this)
{
  _QWORD *v1; // rbx
  void *v2; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 2);
  while ( v1 )
  {
    v2 = v1;
    v1 = (_QWORD *)v1[2];
    operator delete(v2, 0x18uLL);
  }
}
