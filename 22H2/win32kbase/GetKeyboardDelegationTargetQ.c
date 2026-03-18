/*
 * XREFs of GetKeyboardDelegationTargetQ @ 0x1C00D5540
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C006B3FC (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     PtiFromThreadId @ 0x1C0098730 (PtiFromThreadId.c)
 */

__int64 GetKeyboardDelegationTargetQ()
{
  __int64 v0; // rbx
  __int64 v1; // rax

  v0 = 0LL;
  if ( *(&InputDelegation::CInputDelegationInfo::gInstance + 1) )
  {
    v1 = PtiFromThreadId(*(&InputDelegation::CInputDelegationInfo::gInstance + 1));
    if ( v1 )
      return *(_QWORD *)(v1 + 432);
  }
  return v0;
}
