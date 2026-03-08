/*
 * XREFs of ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x1800C2CC0
 * Callers:
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ @ 0x1800C2C40 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ.c)
 *     ?HasNonEmptyContent@CCursorVisual@@UEBA_NXZ @ 0x180225560 (-HasNonEmptyContent@CCursorVisual@@UEBA_NXZ.c)
 * Callees:
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180004DC0 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CVisual::HasNonEmptyContent(CVisual *this)
{
  __int64 v2; // rcx
  bool result; // al
  _QWORD *ProjectedShadowReceivers; // rax

  v2 = *((_QWORD *)this + 32);
  result = 1;
  if ( !v2 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2) )
  {
    if ( (**((_DWORD **)this + 29) & 0x20000) == 0 )
      return 0;
    ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers((__int64)this);
    if ( *ProjectedShadowReceivers == ProjectedShadowReceivers[1] )
      return 0;
  }
  return result;
}
