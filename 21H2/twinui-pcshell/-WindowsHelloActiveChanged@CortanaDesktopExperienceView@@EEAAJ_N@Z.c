/*
 * XREFs of ?WindowsHelloActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x180281690
 * Callers:
 *     <none>
 * Callees:
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18027FF2C (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::WindowsHelloActiveChanged(
        CortanaDesktopExperienceView *this,
        unsigned __int8 a2)
{
  if ( a2 )
    CortanaDesktopExperienceView::PostTargetedMessage((__int64)this - 72, 5u, a2);
  return 0LL;
}
