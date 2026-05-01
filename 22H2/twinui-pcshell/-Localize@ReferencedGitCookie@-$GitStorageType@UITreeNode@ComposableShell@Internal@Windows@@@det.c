/*
 * XREFs of ?Localize@ReferencedGitCookie@?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x1802BF5AC
 * Callers:
 *     ?GetAt@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITreeNode@ComposableShell@25@@Z @ 0x1802BDFB0 (-GetAt@-$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U-$DefaultEqualityPredicate@PEAU.c)
 *     ?GetMany@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUITreeNode@ComposableShell@25@PEAI@Z @ 0x1802BE490 (-GetMany@-$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U-$DefaultEqualityPredicate@PE.c)
 *     ?IndexOfInternal@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@IPEAUITreeNode@ComposableShell@25@PEAIPEAE@Z @ 0x1802BEC1C (-IndexOfInternal@-$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U-$DefaultEqualityPred.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::ReferencedGitCookie::Localize(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = 0LL;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_1806515F8 + 40LL))(
           qword_1806515F8,
           *(unsigned int *)(a1 + 4),
           &GUID_2d10b4a2_7c09_4621_b36f_9a62ecbac6cb,
           a2);
}
