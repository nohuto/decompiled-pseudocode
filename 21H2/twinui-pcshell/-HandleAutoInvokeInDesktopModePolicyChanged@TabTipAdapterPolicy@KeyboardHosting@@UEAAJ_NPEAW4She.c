/*
 * XREFs of ?HandleAutoInvokeInDesktopModePolicyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_NPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18008E120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleAutoInvokeInDesktopModePolicyChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  __int64 result; // rax

  *(_DWORD *)a3 = 0;
  result = 0LL;
  *((_BYTE *)this + 495) = a2;
  return result;
}
