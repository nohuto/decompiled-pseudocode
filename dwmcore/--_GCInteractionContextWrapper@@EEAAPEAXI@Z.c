/*
 * XREFs of ??_GCInteractionContextWrapper@@EEAAPEAXI@Z @ 0x180039FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInteractionContextWrapper@@EEAA@XZ @ 0x180039F6C (--1CInteractionContextWrapper@@EEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CInteractionContextWrapper *__fastcall CInteractionContextWrapper::`scalar deleting destructor'(
        CInteractionContextWrapper *this,
        char a2)
{
  CInteractionContextWrapper::~CInteractionContextWrapper(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x278uLL);
    else
      operator delete(this);
  }
  return this;
}
