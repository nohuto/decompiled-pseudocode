/*
 * XREFs of ?GetButtonFlags@CWheelEvent@CMouseProcessor@@UEBAGXZ @ 0x1C00D6090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall CMouseProcessor::CWheelEvent::GetButtonFlags(CMouseProcessor::CWheelEvent *this)
{
  return *(_WORD *)(*((_QWORD *)this + 1) + 28LL) & 0xC00;
}
