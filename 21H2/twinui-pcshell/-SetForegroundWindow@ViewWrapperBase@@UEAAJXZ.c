/*
 * XREFs of ?SetForegroundWindow@ViewWrapperBase@@UEAAJXZ @ 0x180340EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewWrapperBase::SetForegroundWindow(ViewWrapperBase *this)
{
  RTL_SRWLOCK *v2; // rdi
  HWND v3; // rbx

  v2 = (RTL_SRWLOCK *)(*((_QWORD *)this + 21) + 280LL);
  AcquireSRWLockShared(v2);
  v3 = (HWND)*((_QWORD *)this + 34);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return !SetForegroundWindow(v3) ? 0x80004005 : 0;
}
