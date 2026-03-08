/*
 * XREFs of ?GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParentVisualMarshaler@2@VResourceHandle@@@Z @ 0x1C0007E5C
 * Callers:
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C0007920 (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 *     ?CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHandle@@@Z @ 0x1C0007D78 (-CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(__int64 a1, unsigned int a2)
{
  _QWORD *i; // rdi

  for ( i = *(_QWORD **)(a1 + 176); i; i = (_QWORD *)i[23] )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*i + 320LL))(i, a2) )
      return (*(__int64 (__fastcall **)(_QWORD *))(*i + 112LL))(i);
  }
  return 0LL;
}
