/*
 * XREFs of ??_ECSceneMeshRendererComponent@@MEAAPEAXI@Z @ 0x18024F450
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CSceneMeshRendererComponent@@MEAA@XZ @ 0x18024F388 (--1CSceneMeshRendererComponent@@MEAA@XZ.c)
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
