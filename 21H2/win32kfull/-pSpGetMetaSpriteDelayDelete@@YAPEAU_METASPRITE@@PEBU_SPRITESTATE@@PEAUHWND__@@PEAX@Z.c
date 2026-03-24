/*
 * XREFs of ?pSpGetMetaSpriteDelayDelete@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0281DAC
 * Callers:
 *     ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C027E4EC (-GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C027E738 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 * Callees:
 *     <none>
 */

HWND *__fastcall pSpGetMetaSpriteDelayDelete(const struct _SPRITESTATE *a1, HWND a2, HWND *i)
{
  if ( !i && a2 )
  {
    for ( i = (HWND *)*((_QWORD *)a1 + 9); i && (*i != a2 || ((_DWORD)i[2] & 0x400) == 0); i = (HWND *)i[1] )
      ;
  }
  return i;
}
