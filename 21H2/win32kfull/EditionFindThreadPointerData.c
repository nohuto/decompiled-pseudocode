/*
 * XREFs of EditionFindThreadPointerData @ 0x1C01ECA50
 * Callers:
 *     <none>
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C01EBAA4 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

struct _LIST_ENTRY *__fastcall EditionFindThreadPointerData(struct _LIST_ENTRY *a1, __int16 a2)
{
  return FindThreadPointerData(a1, a2);
}
