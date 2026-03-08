/*
 * XREFs of ??_GVisualCaptureBitsResponse@@UEAAPEAXI@Z @ 0x180020660
 * Callers:
 *     <none>
 * Callees:
 *     ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x180020610 (--1VisualCaptureBitsResponse@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

VisualCaptureBitsResponse *__fastcall VisualCaptureBitsResponse::`scalar deleting destructor'(
        VisualCaptureBitsResponse *this,
        void *a2)
{
  char v2; // di

  v2 = (char)a2;
  VisualCaptureBitsResponse::~VisualCaptureBitsResponse(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      __global_delete(this, 0x6B0uLL);
    else
      operator delete(this);
  }
  return this;
}
