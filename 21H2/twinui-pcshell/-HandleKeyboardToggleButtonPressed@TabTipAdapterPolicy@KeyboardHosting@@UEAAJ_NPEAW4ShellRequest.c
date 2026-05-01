/*
 * XREFs of ?HandleKeyboardToggleButtonPressed@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_NPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18008E190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleKeyboardToggleButtonPressed(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  __int64 result; // rax

  *(_DWORD *)a3 = 0;
  result = 0LL;
  *((_BYTE *)this + 496) = a2;
  return result;
}
