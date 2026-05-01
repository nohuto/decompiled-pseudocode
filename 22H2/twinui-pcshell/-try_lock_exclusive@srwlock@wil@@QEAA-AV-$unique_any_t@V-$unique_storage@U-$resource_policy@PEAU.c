/*
 * XREFs of ?try_lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18028239C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800FC880 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall wil::srwlock::try_lock_exclusive(RTL_SRWLOCK *a1, unsigned __int64 *a2)
{
  bool v4; // cf
  unsigned __int64 *result; // rax

  v4 = TryAcquireSRWLockExclusive(a1) != 0;
  result = a2;
  *a2 = (unsigned __int64)a1 & -(__int64)v4;
  return result;
}
