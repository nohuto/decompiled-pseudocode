/*
 * XREFs of _lambda_ef46628475072de7df7d75dcf6ba9668_::operator() @ 0x1804C2F9C
 * Callers:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_54b93aa900597da253b48333495a28e6___lambda_86af9a40b48fabf7cf6d00c0576551d4___ @ 0x1804C1A10 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_54b93aa900597da253b48333495a28e6___lambda_86.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_HSTRING_____Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::VectorOptions_HSTRING_____0_1_0____XWinRT::IntVersionTag_::Do__lambda_389caf00aeb4e2361aaf11c0ff4364ed___lambda_ef46628475072de7df7d75dcf6ba9668___ @ 0x1804C1D5C (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1804C1D5C.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_HSTRING_____Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::VectorOptions_HSTRING_____0_1_0____XWinRT::IntVersionTag_::Do__lambda_8663c0cd64b41de8bba77ca429328de7___lambda_86af9a40b48fabf7cf6d00c0576551d4___ @ 0x1804C1E30 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1804C1E30.c)
 * Callees:
 *     <none>
 */

_DWORD **__fastcall lambda_ef46628475072de7df7d75dcf6ba9668_::operator()(__int64 a1)
{
  _DWORD **result; // rax
  __int64 v2; // rbp
  _DWORD *v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rbx

  result = *(_DWORD ***)a1;
  v2 = 0LL;
  v4 = **(_DWORD ***)a1;
  if ( *v4 )
  {
    do
    {
      v5 = *(__int64 **)(a1 + 8);
      v6 = *v5;
      WindowsDeleteString(*(HSTRING *)(*v5 + 8 * v2));
      *(_QWORD *)(v6 + 8 * v2) = 0LL;
      *(_QWORD *)(**(_QWORD **)(a1 + 8) + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      result = *(_DWORD ***)a1;
      v4 = **(_DWORD ***)a1;
    }
    while ( (unsigned int)v2 < *v4 );
  }
  *v4 = 0;
  return result;
}
