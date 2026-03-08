/*
 * XREFs of NtGdiDdNotifyFullscreenSpriteUpdate @ 0x1C0272C10
 * Callers:
 *     <none>
 * Callees:
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C0268C70 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 */

__int64 __fastcall NtGdiDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  return SpDdNotifyFullscreenSpriteUpdate(a1, a2);
}
