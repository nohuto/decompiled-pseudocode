/*
 * XREFs of ??_ECProjectedShadowReceiver@@MEAAPEAXI@Z @ 0x1800041F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x180004234 (--1CProjectedShadowReceiver@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CProjectedShadowReceiver *__fastcall CProjectedShadowReceiver::`vector deleting destructor'(
        CProjectedShadowReceiver *this,
        char a2)
{
  CProjectedShadowReceiver::~CProjectedShadowReceiver(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x78uLL);
    else
      operator delete(this);
  }
  return this;
}
