/*
 * XREFs of EngDeleteSurface @ 0x1C001B9E0
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteSurface @ 0x1C001BA00 (bDeleteSurface.c)
 */

BOOL __stdcall EngDeleteSurface(HSURF hsurf)
{
  BOOL result; // eax

  result = 1;
  if ( hsurf )
    return bDeleteSurface();
  return result;
}
