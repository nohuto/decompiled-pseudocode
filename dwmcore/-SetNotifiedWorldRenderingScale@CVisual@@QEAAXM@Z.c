/*
 * XREFs of ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z @ 0x1800DFD18
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1800DF63C (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800389DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetNotifiedWorldRenderingScale(CVisual *this, float a2)
{
  CSparseStorage *v2; // rcx
  float v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (CVisual *)((char *)this + 224);
  if ( LODWORD(a2) == `CVisual::SetWorldRenderingScaleOverride'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x1000000u;
  else
    CSparseStorage::SetData(v2, 8u, 4u, &v3);
}
