/*
 * XREFs of EngDeleteSurface @ 0x1C001CE50
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteSurface @ 0x1C001CE70 (bDeleteSurface.c)
 */

BOOL __stdcall EngDeleteSurface(HSURF hsurf)
{
  BOOL result; // eax

  result = 1;
  if ( hsurf )
    return bDeleteSurface();
  return result;
}
