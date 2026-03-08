/*
 * XREFs of ?AddRef@CInputQueue@@UEBAJXZ @ 0x1C00D64F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputQueue::AddRef(CInputQueue *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
