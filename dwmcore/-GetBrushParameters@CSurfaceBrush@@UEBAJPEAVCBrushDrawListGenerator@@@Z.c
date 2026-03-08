/*
 * XREFs of ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800EACA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSurfaceBrush::GetBrushParameters(CSurfaceBrush *this, struct CBrushDrawListGenerator *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, CSurfaceBrush *, struct CBrushDrawListGenerator *))(**((_QWORD **)this + 14)
                                                                                              + 80LL))(
           *((_QWORD *)this + 14),
           this,
           a2);
}
