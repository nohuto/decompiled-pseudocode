/*
 * XREFs of UserValidateCopyRgn @ 0x1C006EE60
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     GreCreateRectRgnIndirect @ 0x1C0028800 (GreCreateRectRgnIndirect.c)
 *     HmgValidHandle @ 0x1C006EEE0 (HmgValidHandle.c)
 *     GreCombineRgn @ 0x1C006EFF0 (GreCombineRgn.c)
 */

struct HOBJ__ *__fastcall UserValidateCopyRgn(HRGN a1, __int64 a2)
{
  struct HOBJ__ *RectRgnIndirect; // rbx

  RectRgnIndirect = 0LL;
  if ( a1 )
  {
    LOBYTE(a2) = 4;
    if ( (unsigned int)HmgValidHandle(a1, a2) )
    {
      RectRgnIndirect = GreCreateRectRgnIndirect((struct _SLIST_ENTRY *)&gZero);
      if ( !(unsigned int)GreCombineRgn((HRGN)RectRgnIndirect, a1, 0LL, 5) )
      {
        GreDeleteObject((HRGN)RectRgnIndirect);
        return 0LL;
      }
    }
  }
  return RectRgnIndirect;
}
