/*
 * XREFs of ?GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParentVisualMarshaler@2@VResourceHandle@@@Z @ 0x1C0002CDC
 * Callers:
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C0002720 (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 *     ?CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHandle@@@Z @ 0x1C0002BF4 (-CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(__int64 a1, unsigned int a2)
{
  _QWORD *i; // rdi

  for ( i = *(_QWORD **)(a1 + 184); i; i = (_QWORD *)i[24] )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*i + 256LL))(i, a2) )
      return i;
  }
  return 0LL;
}
