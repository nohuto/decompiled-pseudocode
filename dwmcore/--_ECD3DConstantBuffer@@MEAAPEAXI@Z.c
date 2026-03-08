/*
 * XREFs of ??_ECD3DConstantBuffer@@MEAAPEAXI@Z @ 0x1800D0180
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DResource@@MEAA@XZ @ 0x1800D03E4 (--1CD3DResource@@MEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CD3DConstantBuffer *__fastcall CD3DConstantBuffer::`vector deleting destructor'(CD3DConstantBuffer *this, char a2)
{
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 96);
  CD3DResource::~CD3DResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x80uLL);
  return this;
}
