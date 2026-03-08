/*
 * XREFs of ??_GCPathGeometry@@MEAAPEAXI@Z @ 0x1800EA540
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CGeometry@@MEAA@XZ @ 0x1800EA664 (--1CGeometry@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CPathGeometry *__fastcall CPathGeometry::`scalar deleting destructor'(CPathGeometry *this, char a2)
{
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 18);
  CGeometry::~CGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x98uLL);
    else
      operator delete(this);
  }
  return this;
}
