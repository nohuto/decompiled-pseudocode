/*
 * XREFs of ??_EObserver@CProcessAttributionManager@@UEAAPEAXI@Z @ 0x1801CEEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1Observer@CProcessAttributionManager@@UEAA@XZ @ 0x1801CEE18 (--1Observer@CProcessAttributionManager@@UEAA@XZ.c)
 */

CProcessAttributionManager **__fastcall CProcessAttributionManager::Observer::`vector deleting destructor'(
        CProcessAttributionManager **this,
        char a2)
{
  CProcessAttributionManager::Observer::~Observer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
