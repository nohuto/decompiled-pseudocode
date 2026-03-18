/*
 * XREFs of ??_ECWindowBackgroundTreatment@@EEAAPEAXI@Z @ 0x1800A49A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??1CWindowBackgroundTreatment@@EEAA@XZ @ 0x1800A49E4 (--1CWindowBackgroundTreatment@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CWindowBackgroundTreatment *__fastcall CWindowBackgroundTreatment::`vector deleting destructor'(
        CWindowBackgroundTreatment *this,
        char a2)
{
  CWindowBackgroundTreatment::~CWindowBackgroundTreatment(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x160uLL);
    else
      operator delete(this);
  }
  return this;
}
