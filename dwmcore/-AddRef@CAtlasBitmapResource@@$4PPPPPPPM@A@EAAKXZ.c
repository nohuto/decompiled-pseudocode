/*
 * XREFs of ?AddRef@CAtlasBitmapResource@@$4PPPPPPPM@A@EAAKXZ @ 0x18011A510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasBitmapResource::AddRef(__int64 a1)
{
  return CAtlasBitmapResource::AddRef((CAtlasBitmapResource *)(a1 - *(int *)(a1 - 4)));
}
