/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@V_lambda_0c35f08fa008bd0bd75f4471027a7740_@@X$$V@std@@EEAAX_N@Z @ 0x180397130
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc<_lambda_0c35f08fa008bd0bd75f4471027a7740_,void,>::_Delete_this(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx

  v4 = a1[1];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
}
