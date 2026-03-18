/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ @ 0x1800E63E4
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006E9F0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?HasProjectedShadowReceivers@CVisual@@QEBA_NXZ @ 0x1800E642C (-HasProjectedShadowReceivers@CVisual@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasSingleD2DBitmapOrPrimitiveGroup(CVisual *this)
{
  __int64 v1; // r11
  char v2; // bl

  v2 = 0;
  if ( !CVisual::HasProjectedShadowReceivers(this) )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 352LL))(v1) != 0;
  return v2;
}
