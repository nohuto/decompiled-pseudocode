/*
 * XREFs of ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ @ 0x1800B85A0
 * Callers:
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18009DBA8 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800A0434 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTouchPressHoldVisual::IsOKToCleanup(CTouchPressHoldVisual *this)
{
  bool result; // al

  result = 0;
  if ( !*((_QWORD *)this + 42) && !*((_QWORD *)this + 43) && !*((_QWORD *)this + 44) )
    return *((_QWORD *)this + 45) == 0LL;
  return result;
}
