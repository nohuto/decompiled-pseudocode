/*
 * XREFs of GreHintSpriteShapeDelayDelete @ 0x1C026A76C
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00589A0 (-vClearRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C002C80C (GreHintSpriteShape.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C027CB7C (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 */

int __fastcall GreHintSpriteShapeDelayDelete(Gre::Base *a1, HWND a2, HBITMAP a3, __int64 a4, int a5, int a6)
{
  if ( a6 && IsDwmActive(a1) )
    return GreHintSpriteShape(a1, a2, a3, a4, a5, a6, 0);
  else
    return GdiHintSpriteShapeDelayDelete((HDEV)a1, a2, a3, a4);
}
