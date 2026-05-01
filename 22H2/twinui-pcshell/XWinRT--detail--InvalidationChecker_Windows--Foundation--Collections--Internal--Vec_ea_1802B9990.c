/*
 * XREFs of XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::ITreeNode___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::ITreeNode____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::ITreeNode____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ComposableShell::ITreeNode___0_1_0____XWinRT::IntVersionTag_::Do__lambda_3e3742df1c3452d6653db7220cff04fa___lambda_020a6fa9cc712d9db542d7a6decbe7b5___ @ 0x1802B9990
 * Callers:
 *     ?First@?$SimpleVectorView@PEAUITreeNode@ComposableShell@Internal@Windows@@V?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAUITreeNode@ComposableShell@Internal@Windows@@@345@@Z @ 0x1802BDE50 (-First@-$SimpleVectorView@PEAUITreeNode@ComposableShell@Internal@Windows@@V-$Vector@PEAUITreeNod.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     _lambda_3e3742df1c3452d6653db7220cff04fa_::operator() @ 0x1802BCC84 (_lambda_3e3742df1c3452d6653db7220cff04fa_--operator().c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::ITreeNode___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::ITreeNode____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::ITreeNode____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ComposableShell::ITreeNode___0_1_0____XWinRT::IntVersionTag_::Do__lambda_3e3742df1c3452d6653db7220cff04fa___lambda_020a6fa9cc712d9db542d7a6decbe7b5___(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 ***a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  __int64 *v9; // rdx
  __int64 v10; // rcx

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = lambda_3e3742df1c3452d6653db7220cff04fa_::operator()(a3);
    v4 = v8;
    if ( a1[1] != *(_DWORD *)(a2 + 120) )
    {
      *a1 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v9 = **a4;
        v10 = *v9;
        *v9 = 0LL;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
