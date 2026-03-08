/*
 * XREFs of EditionKeyboardInputDelegationChanged @ 0x1C012D0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C009AD2C (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C009B35C (zzzInputFocusReceivedWindowEvent.c)
 *     zzzDelegateInputFocusLostWindowEvent @ 0x1C012E030 (zzzDelegateInputFocusLostWindowEvent.c)
 *     zzzDelegateInputFocusReceivedWindowEvent @ 0x1C012E06C (zzzDelegateInputFocusReceivedWindowEvent.c)
 */

void __fastcall EditionKeyboardInputDelegationChanged(__int64 a1, int a2)
{
  __int64 KeyboardDelegationTargetQ; // rax
  char DelegationFlags; // al
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx

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
    zzzDelegateInputFocusReceivedWindowEvent((DelegationFlags & 4 | 0x30u) >> 2);
  }
  else
  {
    v4 = PtiFromThreadId(a1);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 432);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 120);
        if ( v6 )
          zzzDelegateInputFocusLostWindowEvent(v6, 14LL);
      }
    }
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
    {
      if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
        xxxApplyGlobalInputSettings();
      zzzInputFocusReceivedWindowEvent(0xEu);
    }
  }
}
