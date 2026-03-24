/*
 * XREFs of CreateEmptyRgnPublic @ 0x1C006B840
 * Callers:
 *     _GetDCEx @ 0x1C0038070 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C0039D90 (UserSetDCVisRgn.c)
 *     InitUserScreen @ 0x1C006B23C (InitUserScreen.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C00357D0 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x1C00368E0 (HmgSetOwner.c)
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
