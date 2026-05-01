/*
 * XREFs of ?HandleAccessibilityKeyboardVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_NPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18008E0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleAccessibilityKeyboardVisibilityChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  __int64 result; // rax

  *(_DWORD *)a3 = 0;
  result = 0LL;
  *((_BYTE *)this + 497) = a2;
  return result;
}
