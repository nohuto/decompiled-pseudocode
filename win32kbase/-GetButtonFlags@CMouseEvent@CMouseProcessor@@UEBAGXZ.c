/*
 * XREFs of ?GetButtonFlags@CMouseEvent@CMouseProcessor@@UEBAGXZ @ 0x1C00D6080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::CMouseEvent::GetButtonFlags(CMouseProcessor::CMouseEvent *this)
{
  return *(unsigned __int16 *)(*((_QWORD *)this + 1) + 28LL);
}
