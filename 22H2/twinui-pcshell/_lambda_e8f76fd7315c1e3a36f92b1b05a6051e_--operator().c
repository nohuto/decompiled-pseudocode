/*
 * XREFs of _lambda_e8f76fd7315c1e3a36f92b1b05a6051e_::operator() @ 0x18029FE34
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___0_1_0____XWinRT::IntVersionTag_::Do__lambda_e8f76fd7315c1e3a36f92b1b05a6051e___lambda_984adf696d896f4ec7bf4041a34bd0fe___ @ 0x18029D10C (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_18029D10C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_e8f76fd7315c1e3a36f92b1b05a6051e_::operator()(_QWORD **a1)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*a1)[9];
  v3 = **v2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  v4 = v3(v2, &GUID_610a8a97_ea8d_5542_b878_8d9175083fa0, &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, *a1[1]);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return (unsigned int)v4;
}
