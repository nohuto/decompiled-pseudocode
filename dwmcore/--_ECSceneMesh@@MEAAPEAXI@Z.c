/*
 * XREFs of ??_ECSceneMesh@@MEAAPEAXI@Z @ 0x18024B5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CSceneMesh@@MEAA@XZ @ 0x18024B470 (--1CSceneMesh@@MEAA@XZ.c)
 */

CSceneMesh *__fastcall CSceneMesh::`vector deleting destructor'(CSceneMesh *this, char a2)
{
  CSceneMesh::~CSceneMesh(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
