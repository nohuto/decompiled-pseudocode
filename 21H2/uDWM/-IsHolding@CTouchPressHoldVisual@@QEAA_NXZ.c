/*
 * XREFs of ?IsHolding@CTouchPressHoldVisual@@QEAA_NXZ @ 0x1800B8570
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800A0434 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTouchPressHoldVisual::IsHolding(CTouchPressHoldVisual *this)
{
  bool result; // al

  result = 0;
  if ( !*((_QWORD *)this + 42) && !*((_QWORD *)this + 43) )
    return *((_QWORD *)this + 44) == 0LL;
  return result;
}
