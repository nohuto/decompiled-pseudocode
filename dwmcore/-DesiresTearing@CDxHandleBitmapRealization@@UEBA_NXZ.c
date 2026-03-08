/*
 * XREFs of ?DesiresTearing@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x1802ADA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::DesiresTearing(CDxHandleBitmapRealization *this)
{
  return (*((_DWORD *)this - 32) & 0x800) != 0;
}
