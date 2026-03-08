/*
 * XREFs of ?GetSurfaceLuid@CDxHandleBitmapRealization@@UEBA?AU_LUID@@XZ @ 0x1801081C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDxHandleBitmapRealization::GetSurfaceLuid(CDxHandleBitmapRealization *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this - 276);
  return (struct _LUID)a2;
}
