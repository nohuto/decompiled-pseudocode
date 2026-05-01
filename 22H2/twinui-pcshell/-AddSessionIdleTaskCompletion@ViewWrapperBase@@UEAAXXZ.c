/*
 * XREFs of ?AddSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ @ 0x18033D980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewWrapperBase::AddSessionIdleTaskCompletion(ViewWrapperBase *this)
{
  *((_DWORD *)this + 22) |= 1u;
  ViewWrapperBase::_ReconcileSessionIdleTaskCompletion((ViewWrapperBase *)((char *)this - 8));
}
