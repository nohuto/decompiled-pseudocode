/*
 * XREFs of ?SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x18001B390
 * Callers:
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18001B290 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800389DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetRelativeOffsetInternal(CVisual *this, struct D2D_VECTOR_3F *a2)
{
  CSparseStorage *v2; // r10
  __int64 z_low; // rcx

  v2 = (CVisual *)((char *)this + 224);
  z_low = *(_QWORD *)&a2->x - `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue;
  if ( *(_QWORD *)&a2->x == `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue )
    z_low = LODWORD(a2->z);
  if ( z_low )
    CSparseStorage::SetData(v2, 4u, 0xCu, a2);
  else
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x10000000u;
}
