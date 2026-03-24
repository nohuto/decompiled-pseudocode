/*
 * XREFs of ?IsContainer@CInputDest@@QEBA_NXZ @ 0x1C0182D08
 * Callers:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0044D10 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C0189634 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputDest::IsContainer(CInputDest *this)
{
  char result; // al

  result = 0;
  if ( *((_WORD *)this + 54) || *((_WORD *)this + 55) )
    return 1;
  return result;
}
