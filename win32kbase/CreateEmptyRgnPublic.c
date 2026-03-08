/*
 * XREFs of CreateEmptyRgnPublic @ 0x1C0041F30
 * Callers:
 *     InitUserScreen @ 0x1C00127A8 (InitUserScreen.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C0044E20 (UserSetDCVisRgn.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C0050B70 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x1C00522C0 (HmgSetOwner.c)
 */

__int64 CreateEmptyRgnPublic()
{
  __int64 RectRgnIndirect; // rbx
  __int64 v1; // r8

  RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
  if ( RectRgnIndirect )
  {
    PsGetCurrentProcessId();
    LOBYTE(v1) = 4;
    HmgSetOwner(RectRgnIndirect, 0LL, v1);
  }
  return RectRgnIndirect;
}
