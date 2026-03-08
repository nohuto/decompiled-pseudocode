/*
 * XREFs of DisableDelegation @ 0x1C00C8990
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     SetInputDelegationModeImpl @ 0x1C021882C (SetInputDelegationModeImpl.c)
 * Callees:
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C020AF94 (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 */

__int64 __fastcall DisableDelegation(CCursorClip *a1)
{
  __int64 result; // rax

  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 2) != 0 )
    CCursorClip::OverrideClip(a1, 0);
  result = 0LL;
  InputDelegation::CInputDelegationInfo::gInstance = 0LL;
  dword_1C02D1848 = 0;
  return result;
}
