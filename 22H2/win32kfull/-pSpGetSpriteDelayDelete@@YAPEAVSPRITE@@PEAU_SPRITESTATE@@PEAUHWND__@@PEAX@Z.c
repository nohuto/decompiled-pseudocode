/*
 * XREFs of ?pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C027F5B8
 * Callers:
 *     ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0279FEC (-GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C027A23C (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 * Callees:
 *     <none>
 */

struct SPRITE *__fastcall pSpGetSpriteDelayDelete(struct _SPRITESTATE *a1, HWND a2, _QWORD *i)
{
  if ( !i && a2 )
  {
    for ( i = (_QWORD *)*((_QWORD *)a1 + 1); i && ((HWND)i[9] != a2 || (*(_DWORD *)i & 0x400) == 0); i = (_QWORD *)i[3] )
      ;
  }
  return (struct SPRITE *)i;
}
