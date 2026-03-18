/*
 * XREFs of ??_GCSceneWorld@@MEAAPEAXI@Z @ 0x180263A40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CSceneWorld@@MEAA@XZ @ 0x180263910 (--1CSceneWorld@@MEAA@XZ.c)
 */

CSceneWorld *__fastcall CSceneWorld::`scalar deleting destructor'(CSceneWorld *this, char a2)
{
  CSceneWorld::~CSceneWorld(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
