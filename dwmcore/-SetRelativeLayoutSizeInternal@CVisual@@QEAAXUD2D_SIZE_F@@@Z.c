/*
 * XREFs of ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x180039E44
 * Callers:
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180039D40 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800389DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetRelativeLayoutSizeInternal(CVisual *this, struct D2D_SIZE_F a2)
{
  CSparseStorage *v2; // rcx
  struct D2D_SIZE_F v3; // [rsp+20h] [rbp-18h] BYREF

  v2 = (CVisual *)((char *)this + 224);
  v3 = a2;
  if ( a2 == `CVisual::SetRelativeLayoutSizeInternal'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x20000000u;
  else
    CSparseStorage::SetData(v2, 3u, 8u, &v3);
}
