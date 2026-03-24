/*
 * XREFs of CreateEmptyRgnPublic @ 0x1C006AD90
 * Callers:
 *     _GetDCEx @ 0x1C0036C00 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C0038920 (UserSetDCVisRgn.c)
 *     InitUserScreen @ 0x1C006A78C (InitUserScreen.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C0034360 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x1C0035470 (HmgSetOwner.c)
 */

struct HOBJ__ *CreateEmptyRgnPublic()
{
  struct HOBJ__ *RectRgnIndirect; // rbx

  RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
  if ( RectRgnIndirect )
  {
    PsGetCurrentProcessId();
    HmgSetOwner((__int64)RectRgnIndirect, 0, 4);
  }
  return RectRgnIndirect;
}
