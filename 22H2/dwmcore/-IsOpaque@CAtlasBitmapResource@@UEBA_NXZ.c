/*
 * XREFs of ?IsOpaque@CAtlasBitmapResource@@UEBA_NXZ @ 0x180107C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAtlasBitmapResource::IsOpaque(CAtlasBitmapResource *this)
{
  return *((_BYTE *)this + 64);
}
