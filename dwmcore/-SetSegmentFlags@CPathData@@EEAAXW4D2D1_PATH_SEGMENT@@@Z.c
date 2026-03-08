/*
 * XREFs of ?SetSegmentFlags@CPathData@@EEAAXW4D2D1_PATH_SEGMENT@@@Z @ 0x1801072E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPathData::SetSegmentFlags(CPathData *this, enum D2D1_PATH_SEGMENT a2)
{
  *((_BYTE *)this + 49) = a2 | 0x80;
}
