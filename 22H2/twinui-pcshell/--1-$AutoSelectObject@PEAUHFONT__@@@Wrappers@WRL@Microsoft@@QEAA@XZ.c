/*
 * XREFs of ??1?$AutoSelectObject@PEAUHFONT__@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1804902B0
 * Callers:
 *     _GDIHelpers::RenderTransparentCenteredGlyph_::_1_::dtor$0 @ 0x1800F6FEB (_GDIHelpers--RenderTransparentCenteredGlyph_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

HGDIOBJ __fastcall Microsoft::WRL::Wrappers::AutoSelectObject<HFONT__ *>::~AutoSelectObject<HFONT__ *>(__int64 a1)
{
  return SelectObject(*(HDC *)a1, *(HGDIOBJ *)(a1 + 8));
}
