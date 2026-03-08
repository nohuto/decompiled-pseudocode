/*
 * XREFs of ??_GCaptureBitsResponse@@UEAAPEAXI@Z @ 0x1801DCBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x180020294 (--1CaptureBitsResponse@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CaptureBitsResponse *__fastcall CaptureBitsResponse::`scalar deleting destructor'(CaptureBitsResponse *this, char a2)
{
  CaptureBitsResponse::~CaptureBitsResponse(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
