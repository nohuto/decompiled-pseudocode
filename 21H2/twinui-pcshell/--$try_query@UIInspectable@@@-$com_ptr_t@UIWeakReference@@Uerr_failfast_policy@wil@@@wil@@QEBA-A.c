/*
 * XREFs of ??$try_query@UIInspectable@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIInspectable@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1802BB304
 * Callers:
 *     _lambda_1128af2452d8a6a7c7b4181d3e17205c_::operator() @ 0x1800C87C8 (_lambda_1128af2452d8a6a7c7b4181d3e17205c_--operator().c)
 *     _lambda_bee24c763654c77e4e62b67852f19273_::operator() @ 0x1800C889C (_lambda_bee24c763654c77e4e62b67852f19273_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f543fd6fceabf862de4f8657bd04c58___::Run @ 0x1800C9520 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1f543fd6fceabf862de4f8657bd04c58___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IInspectable>(
        _QWORD *a1,
        __int64 a2)
{
  (*(void (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*a1 + 24LL))(
    *a1,
    &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
    a2);
  return a2;
}
