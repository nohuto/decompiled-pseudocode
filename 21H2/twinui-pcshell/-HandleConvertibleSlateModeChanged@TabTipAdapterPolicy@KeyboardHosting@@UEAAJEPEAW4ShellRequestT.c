/*
 * XREFs of ?HandleConvertibleSlateModeChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1803D7C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleConvertibleSlateModeChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  __int64 result; // rax

  *((_BYTE *)this + 508) = a2 != 0;
  result = 0LL;
  *(_DWORD *)a3 = 0;
  return result;
}
