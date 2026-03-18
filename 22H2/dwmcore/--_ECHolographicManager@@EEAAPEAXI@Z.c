/*
 * XREFs of ??_ECHolographicManager@@EEAAPEAXI@Z @ 0x1802A4770
 * Callers:
 *     ??_ECHolographicManager@@G7EAAPEAXI@Z @ 0x1801216E0 (--_ECHolographicManager@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x1802A4664 (--1CHolographicManager@@EEAA@XZ.c)
 */

CHolographicManager *__fastcall CHolographicManager::`vector deleting destructor'(CHolographicManager *this, char a2)
{
  CHolographicManager::~CHolographicManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
