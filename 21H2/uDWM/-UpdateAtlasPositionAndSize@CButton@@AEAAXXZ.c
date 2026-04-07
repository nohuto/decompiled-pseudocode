/*
 * XREFs of ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18003D3C0
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180022648 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x18003D40C (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x18003D43C (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 */

void __fastcall CButton::UpdateAtlasPositionAndSize(CButton *this)
{
  CButton **v2; // rcx
  const struct tagPOINT *v3; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  CAtlasedImage::SetSize(*((CAtlasedImage **)this + 36), (const struct tagSIZE *)this + 15);
  v2 = (CButton **)*((_QWORD *)this + 36);
  if ( v2[10] == this )
  {
    v4 = 0LL;
    v3 = (const struct tagPOINT *)&v4;
  }
  else
  {
    v3 = (const struct tagPOINT *)((char *)this + 112);
  }
  CAtlasedImage::SetOffset((CAtlasedImage *)v2, v3);
}
