/*
 * XREFs of DisableDelegation @ 0x1C00AA5D0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 *     SetInputDelegationModeImpl @ 0x1C0096EEC (SetInputDelegationModeImpl.c)
 * Callees:
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C01A2B6C (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 */

void __fastcall DisableDelegation(CCursorClip *a1)
{
  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0 )
    CCursorClip::OverrideClip(a1, 0);
  InputDelegation::CInputDelegationInfo::gInstance = 0LL;
}
