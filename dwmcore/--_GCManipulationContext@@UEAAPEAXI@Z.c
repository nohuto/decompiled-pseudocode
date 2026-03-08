/*
 * XREFs of ??_GCManipulationContext@@UEAAPEAXI@Z @ 0x1801A03C8
 * Callers:
 *     ??_ECManipulationContext@@W7EAAPEAXI@Z @ 0x180117850 (--_ECManipulationContext@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CManipulationContext@@UEAA@XZ @ 0x1801A01B8 (--1CManipulationContext@@UEAA@XZ.c)
 */

CManipulationContext *__fastcall CManipulationContext::`scalar deleting destructor'(
        CManipulationContext *this,
        char a2)
{
  CManipulationContext::~CManipulationContext(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
