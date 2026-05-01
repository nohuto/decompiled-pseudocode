/*
 * XREFs of ?HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@PEAW4ShellRequestType@5Shell@68@@Z @ 0x1803D8170
 * Callers:
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x1800D2098 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 * Callees:
 *     ??$HandleInputModalityInfoChanged@AEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800D21FC (--$HandleInputModalityInfoChanged@AEAU-$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Wind.c)
 *     ??4?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@QEAA?AW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@W4234567@@Z @ 0x1800D2564 (--4-$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@QEAA-AW4CoreKeyboardModa.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInputModalityInfoChanged(
        __int64 a1,
        unsigned __int32 *a2,
        _DWORD *a3)
{
  int *v3; // rcx
  char *v4; // r8

  *a3 = 0;
  std::atomic<enum Windows::UI::Internal::Text::Core::CoreKeyboardModality>::operator=(
    (volatile __int32 *)(a1 + 516),
    *a2);
  TouchKeyboardExperienceTelemetryLogger::HandleInputModalityInfoChanged<std::atomic<enum Windows::UI::Internal::Text::Core::CoreKeyboardModality> &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    v3,
    v4);
  return 0LL;
}
