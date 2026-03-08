/*
 * XREFs of ?GetBoundsForOcclusion@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E3CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CShape::GetBoundsForOcclusion(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, a2, 0LL);
}
