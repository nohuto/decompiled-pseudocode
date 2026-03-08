/*
 * XREFs of ?IsWhitePixelInTopLeft@CAtlasBitmapResource@@UEBA_NXZ @ 0x1800FADF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAtlasBitmapResource::IsWhitePixelInTopLeft(CAtlasBitmapResource *this)
{
  return *((_QWORD *)this + 5) != 0LL;
}
