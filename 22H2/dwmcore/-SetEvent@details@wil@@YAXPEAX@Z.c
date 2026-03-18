/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800C8F04
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x180066690 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?ResetMmcss@CGlobalMit@@UEAAJXZ @ 0x1800C8D80 (-ResetMmcss@CGlobalMit@@UEAAJXZ.c)
 *     ?TriggerMmcss@CKst@@QEAAJXZ @ 0x1800C8E54 (-TriggerMmcss@CKst@@QEAAJXZ.c)
 *     ?RequestCursorUpdate@CGlobalMit@@UEAAXXZ @ 0x1800C8EE0 (-RequestCursorUpdate@CGlobalMit@@UEAAXXZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801B4C44 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x180285C20 (-Stop@CKstBase@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802AC48C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019ACBC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x92D,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
}
