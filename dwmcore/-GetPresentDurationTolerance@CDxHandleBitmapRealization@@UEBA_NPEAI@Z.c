/*
 * XREFs of ?GetPresentDurationTolerance@CDxHandleBitmapRealization@@UEBA_NPEAI@Z @ 0x1801318C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::GetPresentDurationTolerance(
        CDxHandleBitmapRealization *this,
        unsigned int *a2)
{
  unsigned int v2; // eax

  if ( (*((_DWORD *)this - 32) & 0x2000) != 0 )
    v2 = *((_DWORD *)this - 56);
  else
    v2 = 0;
  *a2 = v2;
  return (*((_DWORD *)this - 32) & 0x2000) != 0;
}
