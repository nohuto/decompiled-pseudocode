/*
 * XREFs of ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C00EF824
 * Callers:
 *     ?vSpDisableSprites@@YAXPEAUHDEV__@@@Z @ 0x1C00EF6B8 (-vSpDisableSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C010C4F0 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     GreEnableMirrorRendering @ 0x1C02861C4 (GreEnableMirrorRendering.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpDeleteExMirror(_QWORD *a1)
{
  SURFOBJ *v2; // rcx

  if ( a1 )
  {
    v2 = (SURFOBJ *)a1[176];
    if ( v2 )
    {
      EngUnlockSurface(v2);
      if ( !(unsigned int)HmgQueryAltLock(*(_QWORD *)(a1[176] + 8LL)) )
      {
        *(_DWORD *)(a1[176] + 92LL) = 0;
        EngDeleteSurface(*(HSURF *)(a1[176] + 8LL));
        a1[176] = 0LL;
      }
    }
  }
}
