/*
 * XREFs of ??_ECHolographicComposition@@MEAAPEAXI@Z @ 0x1802A4080
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x18009A0B0 (--1CResource@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CHolographicComposition *__fastcall CHolographicComposition::`vector deleting destructor'(
        CHolographicComposition *this,
        char a2)
{
  *((_QWORD *)this + 9) = &CHolographicComposition::`vftable'{for `IHolographicComposition'};
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
