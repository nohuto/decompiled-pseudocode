/*
 * XREFs of ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x180038994
 * Callers:
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x1800388A0 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800389DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetOpacityInternal(CVisual *this, float a2)
{
  CSparseStorage *v2; // rcx
  float v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (CVisual *)((char *)this + 224);
  if ( LODWORD(a2) == `CVisual::SetOpacityInternal'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x8000000u;
  else
    CSparseStorage::SetData(v2, 5u, 4u, &v3);
}
