/*
 * XREFs of EditionKeyboardInputDelegationChanged @ 0x1C01399E0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C004BBD8 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C004C1E8 (zzzInputFocusReceivedWindowEvent.c)
 *     zzzDelegateInputFocusLostWindowEvent @ 0x1C013A9F0 (zzzDelegateInputFocusLostWindowEvent.c)
 *     zzzDelegateInputFocusReceivedWindowEvent @ 0x1C013AA2C (zzzDelegateInputFocusReceivedWindowEvent.c)
 */

__int64 __fastcall EditionKeyboardInputDelegationChanged(__int64 a1, int a2)
{
  __int64 KeyboardDelegationTargetQ; // rax
  char DelegationFlags; // al
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( a2 )
  {
    KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
    if ( KeyboardDelegationTargetQ
      && *(_QWORD *)(KeyboardDelegationTargetQ + 120)
      && (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
    {
      xxxApplyGlobalInputSettings();
    }
    DelegationFlags = GetDelegationFlags();
    return zzzDelegateInputFocusReceivedWindowEvent((DelegationFlags & 4 | 0x30u) >> 2);
  }
  else
  {
    v5 = PtiFromThreadId(a1);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 432);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 120);
        if ( v7 )
          zzzDelegateInputFocusLostWindowEvent(v7, 14LL);
      }
    }
    result = gpqForeground;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
    {
      if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
        xxxApplyGlobalInputSettings();
      return zzzInputFocusReceivedWindowEvent(0xEu);
    }
  }
  return result;
}
