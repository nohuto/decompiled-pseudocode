/*
 * XREFs of ??_GCRectangleVolumeSpawner@EmitterShapes@@UEAAPEAXI@Z @ 0x180243FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

EmitterShapes::CRectangleVolumeSpawner *__fastcall EmitterShapes::CRectangleVolumeSpawner::`scalar deleting destructor'(
        EmitterShapes::CRectangleVolumeSpawner *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
