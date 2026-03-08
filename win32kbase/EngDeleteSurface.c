/*
 * XREFs of EngDeleteSurface @ 0x1C0029620
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteSurface @ 0x1C0029640 (bDeleteSurface.c)
 */

BOOL __stdcall EngDeleteSurface(HSURF hsurf)
{
  BOOL result; // eax

  result = 1;
  if ( hsurf )
    return bDeleteSurface(hsurf);
  return result;
}
