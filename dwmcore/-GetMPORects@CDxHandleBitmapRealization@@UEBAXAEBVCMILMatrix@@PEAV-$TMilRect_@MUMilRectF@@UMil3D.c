/*
 * XREFs of ?GetMPORects@CDxHandleBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x1801318A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleBitmapRealization::GetMPORects(
        __int64 a1,
        CMILMatrix *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  return CBitmapRealization::GetMPORects((CBitmapRealization *)(a1 - 360), a2, a5);
}
