/*
 * XREFs of ?IsWorldTransformCurrent@CTreeData@@IEBA_N_K@Z @ 0x1801B6380
 * Callers:
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1802140D8 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTreeData::IsWorldTransformCurrent(CTreeData *this, unsigned __int64 a2)
{
  return *((_QWORD *)this + 31) >= a2;
}
