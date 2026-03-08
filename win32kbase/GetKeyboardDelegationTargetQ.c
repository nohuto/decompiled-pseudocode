/*
 * XREFs of GetKeyboardDelegationTargetQ @ 0x1C00E1100
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C008097C (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     PtiFromThreadId @ 0x1C00A6C40 (PtiFromThreadId.c)
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
