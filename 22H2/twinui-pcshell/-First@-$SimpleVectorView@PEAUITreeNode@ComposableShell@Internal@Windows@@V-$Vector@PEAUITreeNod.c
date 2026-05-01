/*
 * XREFs of ?First@?$SimpleVectorView@PEAUITreeNode@ComposableShell@Internal@Windows@@V?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAUITreeNode@ComposableShell@Internal@Windows@@@345@@Z @ 0x1802BDE50
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::ITreeNode___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::ITreeNode____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::ITreeNode____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ComposableShell::ITreeNode___0_1_0____XWinRT::IntVersionTag_::Do__lambda_3e3742df1c3452d6653db7220cff04fa___lambda_020a6fa9cc712d9db542d7a6decbe7b5___ @ 0x1802B9990 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1802B9990.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Internal::ComposableShell::ITreeNode *,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::ITreeNode *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::ITreeNode *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>,XWinRT::IntVersionTag,1>::First(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 **v4; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0LL;
  v4 = &v5;
  v3[0] = a1 - 16;
  v3[1] = &v5;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::ITreeNode___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::ITreeNode____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::ITreeNode____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ComposableShell::ITreeNode___0_1_0____XWinRT::IntVersionTag_::Do__lambda_3e3742df1c3452d6653db7220cff04fa___lambda_020a6fa9cc712d9db542d7a6decbe7b5___(
           (unsigned int *)(a1 + 64),
           *(_QWORD *)(a1 + 56),
           (__int64)v3,
           &v4);
}
