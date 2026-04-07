/*
 * XREFs of ?SetOpacity@CImage@@UEAAXN@Z @ 0x18008A990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CImage::SetOpacity(CImage *this, double a2)
{
  CVisual::SendSetOpacity(this, a2);
}
