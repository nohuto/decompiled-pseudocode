/*
 * XREFs of ??_GCAnimationLoggingManager@@UEAAPEAXI@Z @ 0x1800F7290
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1CAnimationLoggingManager@@UEAA@XZ @ 0x1800F72D4 (--1CAnimationLoggingManager@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CAnimationLoggingManager *__fastcall CAnimationLoggingManager::`scalar deleting destructor'(
        CAnimationLoggingManager *this,
        char a2)
{
  CAnimationLoggingManager::~CAnimationLoggingManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xC8uLL);
    else
      operator delete(this);
  }
  return this;
}
