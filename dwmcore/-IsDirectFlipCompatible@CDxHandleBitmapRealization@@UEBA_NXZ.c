/*
 * XREFs of ?IsDirectFlipCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18001AE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::IsDirectFlipCompatible(CDxHandleBitmapRealization *this)
{
  return (*((_DWORD *)this - 32) & 0x10) != 0;
}
