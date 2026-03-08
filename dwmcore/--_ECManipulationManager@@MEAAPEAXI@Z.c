/*
 * XREFs of ??_ECManipulationManager@@MEAAPEAXI@Z @ 0x180280040
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1CManipulationManager@@MEAA@XZ @ 0x18027FDEC (--1CManipulationManager@@MEAA@XZ.c)
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
