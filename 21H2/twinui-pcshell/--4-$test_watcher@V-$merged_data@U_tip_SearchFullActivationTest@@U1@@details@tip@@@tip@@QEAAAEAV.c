/*
 * XREFs of ??4?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A17AC
 * Callers:
 *     ?Uncloak@SearchAppExperienceManager@@UEAAJXZ @ 0x18008CB80 (-Uncloak@SearchAppExperienceManager@@UEAAJXZ.c)
 *     ?_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ @ 0x180266624 (-_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?SetWatching@ThreadFailureCallbackHolder@details@wil@@QEAAX_N@Z @ 0x18001415C (-SetWatching@ThreadFailureCallbackHolder@details@wil@@QEAAX_N@Z.c)
 *     ?Release@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@AEAAKXZ @ 0x1800A8664 (-Release@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@AEAAKXZ.c)
 */

__int64 __fastcall tip::test_watcher<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::operator=(
        __int64 a1,
        __int64 a2)
{
  void *v4; // rcx
  __int64 v5; // rax

  v4 = *(void **)(a1 + 48);
  v5 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 48) = v5;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 328));
  if ( v4 )
    tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::Release(v4);
  wil::details::ThreadFailureCallbackHolder::SetWatching(
    (wil::details::ThreadFailureCallbackHolder *)(a1 + 8),
    *(_DWORD *)(a2 + 32) != 0);
  return a1;
}
