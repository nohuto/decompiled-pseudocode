/*
 * XREFs of ??_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z @ 0x1801F6AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x1801F6A60 (--1MagnifierCaptureBitsResponse@@UEAA@XZ.c)
 */

MagnifierCaptureBitsResponse *__fastcall MagnifierCaptureBitsResponse::`vector deleting destructor'(
        MagnifierCaptureBitsResponse *this,
        char a2)
{
  MagnifierCaptureBitsResponse::~MagnifierCaptureBitsResponse(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
