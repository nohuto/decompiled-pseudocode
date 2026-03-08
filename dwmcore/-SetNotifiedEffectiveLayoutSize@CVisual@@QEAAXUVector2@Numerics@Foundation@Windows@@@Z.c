/*
 * XREFs of ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x1800DFC8C
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1800DF63C (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800389DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetNotifiedEffectiveLayoutSize(__int64 a1, __int64 a2)
{
  CSparseStorage *v2; // rcx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (CSparseStorage *)(a1 + 224);
  v3[0] = a2;
  if ( a2 == `CVisual::SetRelativeLayoutSizeInternal'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x800000u;
  else
    CSparseStorage::SetData(v2, 9u, 8u, v3);
}
