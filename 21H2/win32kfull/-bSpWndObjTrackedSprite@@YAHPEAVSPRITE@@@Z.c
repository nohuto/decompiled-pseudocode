/*
 * XREFs of ?bSpWndObjTrackedSprite@@YAHPEAVSPRITE@@@Z @ 0x1C02817A0
 * Callers:
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C0284F34 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSpWndObjTrackedSprite(struct SPRITE *a1)
{
  __int64 v1; // r8
  TRACKOBJ *v2; // rdx
  __int64 i; // rcx

  v1 = *((_QWORD *)a1 + 9);
  if ( !v1 )
    return 0LL;
  v2 = gpto;
LABEL_9:
  if ( !v2 )
    return 0LL;
  for ( i = *((_QWORD *)v2 + 3); ; i = *(_QWORD *)(i + 160) )
  {
    if ( !i )
    {
      v2 = (TRACKOBJ *)*((_QWORD *)v2 + 1);
      goto LABEL_9;
    }
    if ( (*(_DWORD *)(i + 184) & 0x200) != 0 && *(_QWORD *)(i + 176) == v1 )
      break;
  }
  return 1LL;
}
