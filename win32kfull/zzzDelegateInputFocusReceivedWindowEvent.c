void __fastcall zzzDelegateInputFocusReceivedWindowEvent(unsigned int a1)
{
  __int64 KeyboardDelegationTargetQ; // rax
  struct tagWND *v3; // rcx

  KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
  if ( KeyboardDelegationTargetQ )
  {
    v3 = *(struct tagWND **)(KeyboardDelegationTargetQ + 120);
    if ( v3 )
      zzzInputFocusReceivedWindowEventImpl(v3, a1);
  }
}
