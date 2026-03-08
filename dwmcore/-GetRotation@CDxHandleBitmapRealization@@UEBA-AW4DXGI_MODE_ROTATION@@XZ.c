/*
 * XREFs of ?GetRotation@CDxHandleBitmapRealization@@UEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180014B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleBitmapRealization::GetRotation(CDxHandleBitmapRealization *this)
{
  return D3DDDIRotationToDXGIRotation(*((unsigned int *)this + 41));
}
