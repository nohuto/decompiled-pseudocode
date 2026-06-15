/*
 * XREFs of _lambda_55ffd9a6dada497864f0060e7c2442fc_::operator() @ 0x140054D84
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Storage::Streams::IBuffer___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Storage::Streams::IBuffer______XWinRT::IntVersionTag_::Do__lambda_55ffd9a6dada497864f0060e7c2442fc___lambda_01f654561f6914b7d349bbf6578065e4___ @ 0x1400539D0 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1400539D0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012E5C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_55ffd9a6dada497864f0060e7c2442fc_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = *a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v2 + 40))(
         *(_QWORD *)(v2 + 40),
         &GUID_902972bf_a984_5443_b1c5_2f04a99e1fca,
         &v5);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, *(_QWORD *)a1[1]);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  return (unsigned int)v3;
}
