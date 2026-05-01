/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f543fd6fceabf862de4f8657bd04c58___::Run @ 0x1800C9500
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _lambda_b9b8919c976c9175b4f59b30cd5e8c9c_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x1800C7750 (_lambda_b9b8919c976c9175b4f59b30cd5e8c9c_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 *     ??$try_query@UIInspectable@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIInspectable@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1802BB094 (--$try_query@UIInspectable@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA-A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f543fd6fceabf862de4f8657bd04c58___::Run(
        __int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IInspectable>(*(_QWORD *)(a1 + 16), &v3);
  if ( v3 )
    lambda_b9b8919c976c9175b4f59b30cd5e8c9c_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_(
      (struct wil::details::IFailureCallback *)(*(_QWORD *)(a1 + 16) + 16LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL));
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v3);
}
