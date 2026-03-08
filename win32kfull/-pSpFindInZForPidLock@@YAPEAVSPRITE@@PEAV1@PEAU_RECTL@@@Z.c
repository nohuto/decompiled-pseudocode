/*
 * XREFs of ?pSpFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C0281E04
 * Callers:
 *     ?vSpPIDLockSpriteArea@@YA?AW4SurfaceMapStatus@SURFACE@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z @ 0x1C0283DCC (-vSpPIDLockSpriteArea@@YA-AW4SurfaceMapStatus@SURFACE@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z.c)
 * Callees:
 *     ?bIsCursorSprite@@YAHPEAVSPRITE@@@Z @ 0x1C027FF2C (-bIsCursorSprite@@YAHPEAVSPRITE@@@Z.c)
 */

struct SPRITE *__fastcall pSpFindInZForPidLock(struct SPRITE *a1, struct _RECTL *a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // r10d
  int v5; // r11d

  while ( 1 )
  {
    if ( !a1 )
      return a1;
    if ( (unsigned int)bIsCursorSprite(a1) )
      break;
    if ( *((_QWORD *)a1 + 16)
      && (*(_DWORD *)a1 & 0x400) == 0
      && *((_DWORD *)a1 + 20) <= v4
      && *((_DWORD *)a1 + 21) <= v5
      && *((_DWORD *)a1 + 22) >= v2
      && *((_DWORD *)a1 + 23) >= v3 )
    {
      return a1;
    }
    a1 = (struct SPRITE *)*((_QWORD *)a1 + 3);
  }
  return 0LL;
}
