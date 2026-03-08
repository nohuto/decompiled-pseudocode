/*
 * XREFs of ??_ECVisualTree@@UEAAPEAXI@Z @ 0x18003D800
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualTree@@UEAA@XZ @ 0x18003B404 (--1CVisualTree@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CVisualTree *__fastcall CVisualTree::`vector deleting destructor'(CVisualTree *this, char a2)
{
  CVisualTree::~CVisualTree(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x1270uLL);
    else
      operator delete(this);
  }
  return this;
}
