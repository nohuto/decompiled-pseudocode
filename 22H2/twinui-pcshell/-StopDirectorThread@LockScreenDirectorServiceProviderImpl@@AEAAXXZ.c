/*
 * XREFs of ?StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x180288DF8
 * Callers:
 *     ?UnsubscribeFromServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z @ 0x180288F30 (-UnsubscribeFromServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Revoke@AgileGitPtr@@QEAAJXZ @ 0x180287D54 (-Revoke@AgileGitPtr@@QEAAJXZ.c)
 *     ?get@?$static_lazy@VLockScreenServiceLogging@@@details@wil@@QEAAPEAVLockScreenServiceLogging@@P6AXXZ@Z @ 0x180288F4C (-get@-$static_lazy@VLockScreenServiceLogging@@@details@wil@@QEAAPEAVLockScreenServiceLogging@@P6.c)
 */

void __fastcall LockScreenDirectorServiceProviderImpl::StopDirectorThread(RTL_SRWLOCK *this)
{
  _DWORD *v2; // rcx
  char *Ptr; // rcx
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_DWORD **)(wil::details::static_lazy<LockScreenServiceLogging>::get(
                      this,
                      _lambda_63f7170bce12b7e543c3c21ebfae390d_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_1805807C4, 0LL, 0LL, 2u, &v4);
  AcquireSRWLockExclusive(this + 18);
  if ( this[19].Ptr )
    AgileGitPtr::Revoke((AgileGitPtr *)&this[19]);
  if ( this != (RTL_SRWLOCK *)-144LL )
    ReleaseSRWLockExclusive(this + 18);
  Ptr = (char *)this[16].Ptr;
  if ( (unsigned __int64)(Ptr - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    SetEvent(Ptr);
}
