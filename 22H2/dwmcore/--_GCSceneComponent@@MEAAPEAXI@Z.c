/*
 * XREFs of ??_GCSceneComponent@@MEAAPEAXI@Z @ 0x18026B540
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CSceneComponent@@MEAA@XZ @ 0x18026B4E8 (--1CSceneComponent@@MEAA@XZ.c)
 */

CSceneComponent *__fastcall CSceneComponent::`scalar deleting destructor'(CSceneComponent *this, char a2)
{
  CSceneComponent::~CSceneComponent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
