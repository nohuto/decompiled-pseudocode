/*
 * XREFs of _lambda_493d9d8d4dfbfda8d8c3e09534007ea4_::operator() @ 0x18034AF20
 * Callers:
 *     wil::details::ScopeExitFn__lambda_493d9d8d4dfbfda8d8c3e09534007ea4___::_ScopeExitFn__lambda_493d9d8d4dfbfda8d8c3e09534007ea4___ @ 0x18034AB04 (wil--details--ScopeExitFn__lambda_493d9d8d4dfbfda8d8c3e09534007ea4___--_ScopeExitFn__lambda_493d.c)
 *     _lambda_1c848fc40f8d66460ef5049a4e343f17_::operator() @ 0x18034AB24 (_lambda_1c848fc40f8d66460ef5049a4e343f17_--operator().c)
 * Callees:
 *     ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180079B54 (-NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_493d9d8d4dfbfda8d8c3e09534007ea4_::operator()(__int64 a1)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)a1 + 296LL) + 200LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 296LL),
    &SRWLock);
  WindowWrapperBase::NavigateInternal(*(_QWORD *)a1 + 8LL, 0);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
