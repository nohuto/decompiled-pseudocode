/*
 * XREFs of ??_ECManipulationManager@@MEAAPEAXI@Z @ 0x180221500
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ??1CManipulationManager@@MEAA@XZ @ 0x180221274 (--1CManipulationManager@@MEAA@XZ.c)
 */

CManipulationManager *__fastcall CManipulationManager::`vector deleting destructor'(
        CManipulationManager *this,
        char a2)
{
  CManipulationManager::~CManipulationManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
