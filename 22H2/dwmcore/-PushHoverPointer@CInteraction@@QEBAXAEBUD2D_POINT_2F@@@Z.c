/*
 * XREFs of ?PushHoverPointer@CInteraction@@QEBAXAEBUD2D_POINT_2F@@@Z @ 0x1800F2408
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B9C0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CInteraction::PushHoverPointer(CInteraction *this, const struct D2D_POINT_2F *a2)
{
  void (__fastcall ***v2)(_QWORD, const struct D2D_POINT_2F *); // rcx

  v2 = (void (__fastcall ***)(_QWORD, const struct D2D_POINT_2F *))*((_QWORD *)this + 35);
  if ( v2 )
    (**v2)(v2, a2);
}
