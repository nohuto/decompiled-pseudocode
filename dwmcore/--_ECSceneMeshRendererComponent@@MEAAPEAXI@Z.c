/*
 * XREFs of ??_ECSceneMeshRendererComponent@@MEAAPEAXI@Z @ 0x18024BD70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CSceneMeshRendererComponent@@MEAA@XZ @ 0x18024BCA8 (--1CSceneMeshRendererComponent@@MEAA@XZ.c)
 */

CSceneMeshRendererComponent *__fastcall CSceneMeshRendererComponent::`vector deleting destructor'(
        CSceneMeshRendererComponent *this,
        char a2)
{
  CSceneMeshRendererComponent::~CSceneMeshRendererComponent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
