/*
 * XREFs of ?GetActiveLightCount@CDrawingContext@@QEBAIXZ @ 0x1801D5CC8
 * Callers:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180079010 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetActiveLightCount(CDrawingContext *this)
{
  const struct CVisualTree *v1; // rdi
  struct CVisual *v3; // rax
  __int64 v4; // r9

  v1 = (const struct CVisualTree *)*((_QWORD *)this + 1007);
  v3 = (struct CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
  LOBYTE(v4) = 1;
  return CLightStack::GetActiveLightCount((CDrawingContext *)((char *)this + 560), v3, v1, v4);
}
