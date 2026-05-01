/*
 * XREFs of ?ShellRequestedStateChangeReasonToString@KeyboardHosting@@YAPEBGW4ShellRequestedStateChangeReason@1@@Z @ 0x1803D2794
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x1803CC168 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x1803D05B0 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall KeyboardHosting::ShellRequestedStateChangeReasonToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  if ( !a1 )
    return L"AccessibilityKeyboardRequestShow";
  v1 = a1 - 1;
  if ( !v1 )
    return L"HotKey";
  v2 = v1 - 1;
  if ( !v2 )
    return L"PendingRequestExecute_CoreKeyboardClientRegistered";
  v3 = v2 - 1;
  if ( !v3 )
    return L"PendingRequestExecute_InputAppActivated";
  v4 = v3 - 1;
  if ( !v4 )
    return L"PendingRequestExecute_InputAppResumed";
  v5 = v4 - 1;
  if ( !v5 )
    return L"InputPaneTryShow";
  v6 = v5 - 1;
  if ( !v6 )
    return L"HardwareKeyboardUIEnabled";
  v7 = v6 - 1;
  if ( !v7 )
    return L"DeferredRequestExecute_Timer";
  if ( v7 == 1 )
    return L"DeferredRequestExecute_EditControlSelectionChanged";
  return (const wchar_t *)L"Unknown";
}
