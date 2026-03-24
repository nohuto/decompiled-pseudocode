/*
 * XREFs of NtGdiDdNotifyFullscreenSpriteUpdate @ 0x1C0277BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026DC34 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 */

__int64 __fastcall NtGdiDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  return SpDdNotifyFullscreenSpriteUpdate(a1, a2);
}
