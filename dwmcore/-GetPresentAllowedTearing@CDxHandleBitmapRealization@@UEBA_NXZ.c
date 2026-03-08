/*
 * XREFs of ?GetPresentAllowedTearing@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x1802ADA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::GetPresentAllowedTearing(CDxHandleBitmapRealization *this)
{
  return (*((_DWORD *)this - 32) & 0x1000) != 0;
}
