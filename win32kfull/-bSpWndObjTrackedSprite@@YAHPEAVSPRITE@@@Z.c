/*
 * XREFs of ?bSpWndObjTrackedSprite@@YAHPEAVSPRITE@@@Z @ 0x1C02817F8
 * Callers:
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C02857B8 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSpWndObjTrackedSprite(struct SPRITE *a1)
{
  __int64 v2; // r8
  __int64 i; // rcx

  if ( !*((_QWORD *)a1 + 9) )
    return 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 23664LL);
LABEL_9:
  if ( !v2 )
    return 0LL;
  for ( i = *(_QWORD *)(v2 + 24); ; i = *(_QWORD *)(i + 160) )
  {
    if ( !i )
    {
      v2 = *(_QWORD *)(v2 + 8);
      goto LABEL_9;
    }
    if ( (*(_DWORD *)(i + 184) & 0x200) != 0 && *(_QWORD *)(i + 176) == *((_QWORD *)a1 + 9) )
      break;
  }
  return 1LL;
}
