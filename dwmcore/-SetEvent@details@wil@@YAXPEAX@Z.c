/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800C84A4
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800664C0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?ResetMmcss@CGlobalMit@@UEAAJXZ @ 0x1800C8320 (-ResetMmcss@CGlobalMit@@UEAAJXZ.c)
 *     ?TriggerMmcss@CKst@@QEAAJXZ @ 0x1800C83F4 (-TriggerMmcss@CKst@@QEAAJXZ.c)
 *     ?RequestCursorUpdate@CGlobalMit@@UEAAXXZ @ 0x1800C8480 (-RequestCursorUpdate@CGlobalMit@@UEAAXXZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801B1A44 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x1802824E0 (-Stop@CKstBase@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802A8D0C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019762C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
