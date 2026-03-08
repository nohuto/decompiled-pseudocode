/*
 * XREFs of ??_ECComplexShape@@UEAAPEAXI@Z @ 0x1800FD730
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CComplexShape *__fastcall CComplexShape::`vector deleting destructor'(CComplexShape *this, char a2)
{
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 1);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x18uLL);
  return this;
}
