/*
 * XREFs of ??$?0$0DD@@StringReference@Internal@Windows@@QEAA@AEAY0DD@$$CBG@Z @ 0x1803C6984
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x1803D1FC4 (-RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(
        HSTRING *string,
        const unsigned __int16 (*a2)[51])
{
  if ( WindowsCreateStringReference(
         L"Windows.UI.Internal.Text.Core.CoreInputViewManager",
         0x32u,
         (HSTRING_HEADER *)(string + 1),
         string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
