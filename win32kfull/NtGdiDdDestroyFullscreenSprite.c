/*
 * XREFs of NtGdiDdDestroyFullscreenSprite @ 0x1C0272BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C0268B34 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 */

__int64 __fastcall NtGdiDdDestroyFullscreenSprite(HDC a1, void *a2)
{
  return SpDdDestroyFullscreenSprite(a1, a2);
}
