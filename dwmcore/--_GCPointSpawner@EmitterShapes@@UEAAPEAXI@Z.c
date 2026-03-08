/*
 * XREFs of ??_GCPointSpawner@EmitterShapes@@UEAAPEAXI@Z @ 0x180240890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

EmitterShapes::CPointSpawner *__fastcall EmitterShapes::CPointSpawner::`scalar deleting destructor'(
        EmitterShapes::CPointSpawner *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
