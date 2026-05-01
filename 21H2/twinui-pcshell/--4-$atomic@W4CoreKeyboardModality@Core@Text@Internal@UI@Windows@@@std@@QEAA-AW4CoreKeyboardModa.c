/*
 * XREFs of ??4?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@QEAA?AW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@W4234567@@Z @ 0x1800D2564
 * Callers:
 *     ?HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@PEAW4ShellRequestType@5Shell@68@@Z @ 0x1803D8170 (-HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::atomic<enum Windows::UI::Internal::Text::Core::CoreKeyboardModality>::operator=(
        volatile __int32 *a1,
        unsigned __int32 a2)
{
  _InterlockedExchange(a1, a2);
  return a2;
}
