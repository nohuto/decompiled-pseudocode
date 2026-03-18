/*
 * XREFs of CreateEmptyRgn @ 0x1C006EFB0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C0028800 (GreCreateRectRgnIndirect.c)
 */

struct HOBJ__ *CreateEmptyRgn()
{
  return GreCreateRectRgnIndirect((struct _SLIST_ENTRY *)&gZero);
}
